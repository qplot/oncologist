<?php


/**
 * Callback for retrieving user resources.
 *
 *
 * @return object
 *   ServicesMenu object
 */
function _intstrux_services_app_user_password_reset($mail) {

	global $user;

	if ($user->uid) {
	    // user is already logged in
	    return services_error(t('Already logged in as @user.', array('@user' => $user->name)), 406);
	}

	if(valid_email_address($mail)){
		
		$account = user_load_by_mail($mail);
		
		if($account->uid){
			
			 // Check if account is active.
			 if (user_is_blocked($account->name)) {
			   return services_error(t('The username %name has not been activated or is blocked.', array('%name' => $account->name)), 403);
			 }
			
			 $timestamp = REQUEST_TIME;
  			 $hash = $account->uid."/".$timestamp."/". user_pass_rehash($account->pass, $timestamp, $account->login);
  			 $token = substr($hash, -8);
  			 
  			 $params['account'] = $account;
			 $params['hash'] = $hash;
			 $params['token'] = $token;
			 
			 //New shorter tokens
			 db_insert('password_recovery_tokens')
				->fields(array(
			  		'hash' => $hash,
			  		'mail' => $account->mail,
			  		'token' => $token,
			  		'timestamp' => $timestamp,
				))->execute();
			 
			 
			 
  			 drupal_mail('intstrux_services_app', 'passwordResetApp', $account->mail, user_preferred_language($account), $params);
			
			 return array("status"=>1, "message"=>t("EMail send to %mail ", array('%mail' => $account->mail)));
			
		}
		else{
			
			return services_error(t('EMail address could not be found.'), 403);
		}
		
		
	}
	else{
		return services_error(t('Invalid Email address.'), 401);
	}

  	return $result;
}


function _intstrux_services_app_user_password_onetimelogin($hash, $mail = ''){
  
  // Time out, in seconds, until login URL expires. Defaults to 24 hours =
  // 86400 seconds.
  $timeout = variable_get('user_password_reset_timeout', 86400);
  $current = REQUEST_TIME;
  
  //Short token functionality
  if(strlen($hash)==8){
  	
	if(!valid_email_address($mail)){
		return services_error(t('The shortened one-time login requires the correct email address.'), 401);
	}
	
	db_delete('password_recovery_tokens')
		->condition('timestamp',$current-$timeout, "<")
		->execute();
	
	$results = db_select('password_recovery_tokens', 'p')
		->fields('p')
		->condition('p.mail',$mail)
		->condition('p.token',$hash)
		->execute();
	
	if ($result = $results->fetchAssoc()) {
		
		$hash = $result['hash'];
		
		db_delete('password_recovery_tokens')
		->condition('hash',$hash)
		->execute();
	
  	}
	else{
		return services_error(t('The shortened one-time login link you clicked is invalid.'), 401);
	}
  }
  
  
  $parts = explode("/", $hash);
  	
  $uid = $parts[0];
  $timestamp = $parts[1];
  $hashed_pass = $parts[2];


  global $user;

  // When processing the one-time login link, we have to make sure that a user
  // isn't already logged in.
  if ($user->uid) {
    // The existing user is already logged in.
    if ($user->uid == $uid) {
      return services_error(t('Already logged in as @user.', array('@user' => $user->name)), 406);
    }
    // A different user is already logged in on the computer.
    else {
      $reset_link_account = user_load($uid);
      if (!empty($reset_link_account)) {
        drupal_set_message(t('Another user (%other_user) is already logged into the site on this computer, but you tried to use a one-time link for user %resetting_user. Please <a href="!logout">logout</a> and try using the link again.', array('%other_user' => $user->name, '%resetting_user' => $reset_link_account->name, '!logout' => url('user/logout'))));
      
	  	return services_error(t('Another user (%other_user) is already logged into the site on this computer', array('%other_user' => $user->name)), 403);
	  }
      else {
        // Invalid one-time link specifies an unknown user.
        return services_error(t('The one-time login link you clicked is invalid.'), 401);
      }
    }
  }
  else {
    
    // Some redundant checks for extra security ?
    $users = user_load_multiple(array($uid), array('status' => '1'));
    if ($timestamp <= $current && $account = reset($users)) {
      // No time out for first time login.
      if ($account->login && $current - $timestamp > $timeout) {
        return services_error(t('You have tried to use a one-time login link that has expired. Please request a new one using the form below.'), 403);
      }
      elseif ($account->uid && $timestamp >= $account->login && $timestamp <= $current && $hashed_pass == user_pass_rehash($account->pass, $timestamp, $account->login)) {
        $user = $account;
        // user_login_finalize() also updates the login timestamp of the
        // user, which invalidates further use of the one-time login link.
        user_login_finalize();
        watchdog('user', 'User %name used one-time login link at time %timestamp.', array('%name' => $account->name, '%timestamp' => $timestamp));
        
		//TODO: DO we need this here?
        // Let the user's password be changed without the current password check.
        $token = drupal_hash_base64(drupal_random_bytes(55));
        $_SESSION['pass_reset_' . $user->uid] = $token;
		
		return array("status"=>1, "message"=>t('You have just used your one-time login link. It is no longer necessary to use this link to log in. Please change your password.'), "user"=>$user);
       }
     }
   }
}

