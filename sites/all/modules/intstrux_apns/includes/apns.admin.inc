<?php

/**
 * @file
 * Admin files for Push Notifications module.
 */

/**
 * Overview form for Push Notification Settings.
 */
function intstrux_apns_admin_overview_form($form_state) {
  // Load all tokens stored in the database.
  $query = db_select('intstrux_apns_tokens', 'pnt');
  $query->fields('pnt', array('uid', 'type', 'language'));
  $result = $query->execute();
  $counts = array(
    'total' => 0,
    'ios' => 0,
    'android' => 0,
    'anonymous' => 0,
    'registered' => 0,
  );

  foreach ($result as $data) {
    $counts['total']++;
    switch ($data->type) {
      case intstrux_apns_TYPE_ID_IOS: $counts['ios']++; break;
      case intstrux_apns_TYPE_ID_ANDROID: $counts['android']++; break;
    }
    if ($data->uid == 0) {
      $counts['anonymous']++;
    }
    else {
      $counts['registered']++;
    }
  }

  $form = array();

  $statistics_description = (!$counts['total']) ? t('No tokens stored yet.') : null;
  $form['statistics'] = array(
    '#type' => 'fieldset',
    '#title' => 'Push Notification Statistics',
    '#description' => $statistics_description,
  );

  $form['statistics']['total'] = array(
    '#type' => 'item',
    '#title' => t('Total Tokens Stored'),
    '#markup' => $counts['total'],
  );

  $form['statistics']['ios'] = array(
    '#type' => 'item',
    '#title' => t('iOS Tokens Stored'),
    '#markup' => $counts['ios'],
  );

  $form['statistics']['android'] = array(
    '#type' => 'item',
    '#title' => t('Android Tokens Stored'),
    '#markup' => $counts['android'],
  );

  $form['statistics']['anonymous'] = array(
    '#type' => 'item',
    '#title' => t('Anonymous Tokens Stored'),
    '#markup' => $counts['anonymous'],
  );

  $form['statistics']['registered'] = array(
    '#type' => 'item',
    '#title' => t('Registered Tokens Stored'),
    '#markup' => $counts['registered'],
  );

  $form['languages'] = array(
    '#type' => 'fieldset',
    '#title' => 'Push Notification Languages',
    '#description' => t('Languages used across all push notification recipients'),
  );

  // Determine which languages are used.
  $languages_used = intstrux_apns_used_languages();
  if (!empty($languages_used)) {
    unset($languages_used[0]);
    $languages_markup = theme('item_list', array('items' => $languages_used));
  }
  else {
    $languages_markup = t('No tokens stored or no tokens with a language association stored');
  }

  $form['languages']['used'] = array(
    '#type' => 'item',
    '#markup' => $languages_markup,
  );

  return $form;
}

/**
 * Form callback for Push Notifications Settings.
 */
function intstrux_apns_admin_form($form_state) {
  $form = array();

  // Add JavaScript for Google push notification selector.
  drupal_add_js(drupal_get_path('module', 'intstrux_apns') . '/scripts/intstrux_apns_admin.js');

 


  $form['configuration_general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General Push Notifications Settings'),
  );

  $form['configuration_general']['intstrux_apns_require_enabled_language'] = array(
    '#type' => 'checkbox',
    '#title' => t('Only allow enabled languages'),
    '#description' => t('When setting a device token, only allow languages that are enabled on this site (instead of all valid langauges)'),
    '#default_value' => variable_get('intstrux_apns_require_enabled_language', 0),
  );

  $replacements_privatemsg = array(
    '!privatemsg' => l('PrivateMSG', 'http://drupal.org/project/privatemsg/', array('html' => true, 'attributes' => array('target' => '_blank'))),
    '!privatemsg_status' => (module_exists('privatemsg')) ? 'successfully installed' : 'not installed',
  );
  $form['configuration_general']['intstrux_apns_privatemsg_integration'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable integration with PrivateMSG module'),
    '#description' => t('Check this to deliver messages sent through the !privatemsg module to all recipients with at least one valid device token. Requires !privatemsg module 7.x-1.x (status: !privatemsg_status)', $replacements_privatemsg),
    '#default_value' => variable_get('intstrux_apns_privatemsg_integration', 0),
  );

  $configuration_apns_replacements = array(
    '!link' => l(t('this tutorial'), 'http://blog.boxedice.com/2009/07/10/how-to-build-an-apple-push-notification-provider-server-tutorial/', array('attributes' => array('target' => '_blank'))),
  );
  $form['configuration_apns'] = array(
    '#type' => 'fieldset',
    '#title' => t('Apple Push Notifications'),
    '#description' => t('Configure Push Notifications for Apple\'s Push Notification Server. Select your environment. Both environments require the proper certificates in the \'certificates\' folder of this module. The filename for the development certificate should be \'apns-development.pem\', the production certificate should be \'apns-production.pem\'. See !link for instructions on creating certificates.', $configuration_apns_replacements),
  );

  $form['configuration_apns']['intstrux_apns_apns_environment'] = array(
    '#type' => 'select',
    '#title' => t('APNS Environment'),
    '#description' => t('Select the active APNS Environment. Please note that development certificates do not work with apps released in the Apple app store; production certificates only work with apps released in the app store.'),
    '#options' => array(
      0 => 'Development',
      1 => 'Production',
    ),
    '#default_value' => variable_get('intstrux_apns_apns_environment', 0),
  );

  $form['configuration_apns']['stream_context_limit'] = array(
    '#type' => 'select',
    '#title' => t('Stream Context Limit'),
    '#description' => t('Defines the amount of messages sent per stream limit, i.e. how many notifications are sent per connection created with Apple\'s servers. The higher the limit, the faster the message delivery. If the limit is too high, messages might not get delivered at all. Unclear (to me) what Apple\'s <em>actual</em> limit is.'),
    '#options' => drupal_map_assoc(array(1, 5, 10, 25, 50)),
    '#default_value' => variable_get('intstrux_apns_apns_stream_context_limit', 1),
  );

  $form['configuration_apns']['passphrase'] = array(
    '#type' => 'textfield',
    '#title' => t('Passphrase'),
    '#description' => t('If your APNS certificate has a passphrase, enter it here. Otherwise, leave this field blank.'),
    '#default_value' => variable_get('intstrux_apns_apns_passphrase', ''),
  );

  $form['configuration_apns']['intstrux_apns_apns_certificate_folder'] = array(
    '#type' => 'textfield',
    '#title' => t('APNS Certificate Folder Path'),
    '#description' => t('If you want to store your certificates in a different directory than the modules default (the \'certificates\' folder inside this module\'s folder), specify the path here. If you use your own path, use the full path, e.g. \'/users/danny/drupal_install/certificates/\', not the relative path. Otherwise, leave this field blank.'),
    '#default_value' => variable_get('intstrux_apns_apns_certificate_folder', ''),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Save Configuration',
  );

  return $form;
}



/**
 * Submit callback for push notification configuration page.
 */
function intstrux_apns_admin_form_submit($form, &$form_state) {
  // Module settings.
  variable_set('intstrux_apns_require_enabled_language', $form_state['values']['intstrux_apns_require_enabled_language']);
  variable_set('intstrux_apns_privatemsg_integration', $form_state['values']['intstrux_apns_privatemsg_integration']);

  $apns_environment = $form_state['values']['intstrux_apns_apns_environment'];
  switch ($apns_environment) {
    // Development Environment.
    case 0:
      // Set the variables for the apns development environment.
      variable_set('intstrux_apns_apns_environment', $apns_environment);
      // Set the individual variables.
      variable_set('intstrux_apns_apns_host', 'gateway.sandbox.push.apple.com');
      variable_set('intstrux_apns_apns_certificate', 'apns-development.pem');
      break;
    case 1:
      // Set the variables for the apns production environment.
      variable_set('intstrux_apns_apns_environment', $apns_environment);
      // Set the individual variables.
      variable_set('intstrux_apns_apns_host', 'gateway.push.apple.com');
      variable_set('intstrux_apns_apns_certificate', 'apns-production.pem');
      break;
  }

  // Set the APNS certificate location.
  $apns_cert_folder = $form_state['values']['intstrux_apns_apns_certificate_folder'];
  if (!empty($apns_cert_folder)) {

    // Add a trailing slash if not present.
    if ($apns_cert_folder[strlen($apns_cert_folder) - 1] != DIRECTORY_SEPARATOR) {
      $apns_cert_folder .= DIRECTORY_SEPARATOR;
    }

    variable_set('intstrux_apns_apns_certificate_folder', $apns_cert_folder);
    $apns_cert = _intstrux_apns_get_apns_certificate();
    if (!file_exists($apns_cert)) {
      drupal_set_message(t('Could not find any APNS certificates at @path. Please ensure your certificates are located in the correct folder to send push notifications.', array('@path' => $apns_cert)), 'warning');
    }
  }
  // Remove the variable if the location field is blank
  // but a variable had been set previously.
  else if (variable_get('intstrux_apns_apns_certificate_folder', NULL)) {
    variable_del('intstrux_apns_apns_certificate_folder');
  }

  // Set the APNS pem file passphrase.
  variable_set('intstrux_apns_apns_passphrase', $form_state['values']['passphrase']);

  // Set the APNS stream limit.
  variable_set('intstrux_apns_apns_stream_context_limit', $form_state['values']['stream_context_limit']);

  $replacements = array(
    '@environment' => ($apns_environment) ? "Production" : "Development",
  );
  drupal_set_message(t('The APNS environment was successfully set to "@environment".', $replacements));
}



/**
 * Form callback for sending a mass-push notification.
 */
function intstrux_apns_mass_push_form($form_state) {
  
   // Add JavaScript for Google push notification selector.
  drupal_add_js(drupal_get_path('module', 'intstrux_apns') . '/scripts/intstrux_apns_admin.js');

  $form = array();

  $form['step1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Step 1: Mode'),
    '#description' => t(''),
    '#tree' => TRUE,
  );
  $form['step1']['mode'] = array(
    '#type' => 'radios',
    '#title' => t('Please choose what kind of notification you would like to send'),
    '#description' => t('Security check to avoid notification to reach the public audience without proper testing or approval.'),
    '#default_value' => (isset($form_state['values']['step1']['mode'])) ? $form_state['values']['step1']['mode'] : '',
    '#required' => TRUE,
    '#options' => array('test'=>t('Test notification. No device or user by default'),'full'=>t('Live notification. By default every device/user of the application')),
    '#weight' => 9,
    '#ajax' => array(
      'callback' => 'intstrux_apns_filter_update_callback',
      'wrapper' => 'replace_textfield_div',
     ),
  );

  $form['message'] = array(
    '#type' => 'fieldset',
    '#title' => t('Step 2: Push Notification Message'),
    '#description' => t('Compose the elements of your push notification message.  (Combined 256 characters max., Note: the URL is always shortened to 8 characters if used)'),
    '#tree' => TRUE,
  );

  $form['message']['alert'] = array(
    '#type' => 'textfield',
    '#title' => t('Push Message'),
    '#description' => t('Compose the message to send out'),
    '#default_value' => (isset($form_state['values']['message']['alert'])) ? $form_state['values']['message']['alert'] : '',
    '#required' => TRUE,
    '#size' => 128,
    '#maxlength' => 256,
    '#weight' => 10,
    '#ajax' => array(
      'callback' => 'intstrux_apns_filter_update_callback',
      'wrapper' => 'replace_textfield_div',
     ),
  );

  $form['message']['fullurl'] = array(
    '#type' => 'textfield',
    '#title' => t('The target URL'),
    '#description' => t('The target URL to forward to'),
    '#default_value' => (isset($form_state['values']['message']['fullurl'])) ? $form_state['values']['message']['fullurl'] : '',
    '#required' => FALSE,
    '#size' => 128,
    '#maxlength' => 512,
    '#weight' => 11,
    '#ajax' => array(
      'callback' => 'intstrux_apns_filter_update_callback',
      'wrapper' => 'replace_textfield_div',
     ),
  );

  $form['message']['url'] = array(
    '#type' => 'hidden',
    '#title' => t('Shortened URL'),
    '#description' => t('The shortened URL to forward to'),
    '#default_value' => (isset($form_state['values']['message']['url'])) ? $form_state['values']['message']['url'] : '',
    '#required' => FALSE,
    '#size' => 20,
    '#maxlength' => 20,
    '#weight' => 11,
  );

  $form['filter'] = array(
    '#type' => 'fieldset',
    '#title' => t('Step 3: Filter'),
    '#description' => t('Filters to modify the group of recipients.'),
    '#tree' => TRUE,
  );


   $form['filter']['byedition'] = array(
    '#type' => 'checkbox',
    '#title' => t('Filter by edition'),
    '#description' => t('Select this box if you wish to restrict the message to be delivered to users of one ore more edtions'),
    '#default_value' => (isset($form_state['values']['filter']['byedition'])) ? $form_state['values']['filter']['byedition'] : 0,
    '#required' => FALSE,
    '#weight' => 20,

    '#ajax' => array(
      'callback' => 'intstrux_apns_filter_update_callback',
      'wrapper' => 'replace_textfield_div',
     ),
  );


  $form['filter']['edition'] = array(
    '#type' => 'select',
    '#options' => array(
      'US' => 'US - US Edition',
      'EU' => 'EU - European Edition',
      'ZH' => 'ZH - Chinese Editon',
    ),
    '#default_value' => (isset($form_state['values']['filter']['edition'])) ? $form_state['values']['filter']['edition'] : array(),
    '#required' => FALSE,
    '#weight' => 21,
    '#multiple' => 1,

    '#ajax' => array(
      'callback' => 'intstrux_apns_filter_update_callback',
      'wrapper' => 'replace_textfield_div',
     ),
  );


  $form['filter']['bysection'] = array(
    '#type' => 'checkbox',
    '#title' => t('Filter by section/category'),
    '#description' => t('Select this box if you wish to restrict the message to be delivered to user with one more sections/cateogory preferences'),
    '#default_value' => (isset($form_state['values']['filter']['bysection'])) ? $form_state['values']['filter']['bysection'] : 0,
    '#required' => FALSE,
    '#weight' => 22,

    '#ajax' => array(
      'callback' => 'intstrux_apns_filter_update_callback',
      'wrapper' => 'replace_textfield_div',
     ),
  );

  $vocabulary_name = "sections";

  // find the vid
  $vid = taxonomy_vocabulary_machine_name_load($vocabulary_name)->vid;

  $terms = taxonomy_get_tree($vid);

  $options = array();

  foreach ($terms as $data) {
    $options[$data->tid] = (!isset($data->parent) || $data->parent ==0) ? $data->name : "-- ".$data->name;
  }


  $form['filter']['section'] = array(
    '#type' => 'select',
    '#options' => $options,
    '#default_value' => (isset($form_state['values']['filter']['section'])) ? $form_state['values']['filter']['section'] : array(),
    '#required' => FALSE,
    '#weight' => 23,
    '#multiple' => 1,

    '#ajax' => array(
      'callback' => 'intstrux_apns_filter_update_callback',
      'wrapper' => 'replace_textfield_div',
     ),
  );


  $form['filter']['dev'] = array(
    '#type' => 'fieldset',
    '#title' => t('Test Audience'),
    '#description' => t('You need to to specifiy at least one device.'),
    '#tree' => TRUE,
  );
  
  /*
  $form['filter']['dev']['bydevelopment']  = array(
    '#type' => 'checkbox',
    '#title' => t('enable developer mode'),
    '#description' => t(''),
    '#default_value' => (isset($form_state['values']['filter']['dev']['bydevelopment'])) ? $form_state['values']['filter']['dev']['bydevelopment'] : 0,
    '#required' => FALSE,
    '#weight' => 25,

    '#ajax' => array(
      'callback' => 'intstrux_apns_filter_update_callback',
      'wrapper' => 'replace_textfield_div',
     ),
  );
  */
  
  $options = array();
  $query = 'SELECT DISTINCT(ur.uid) 
    FROM {users_roles} AS ur
    WHERE ur.rid IN (:rids)';
  $result = db_query($query, array(':rids' => "3,4"))->fetchAll();

 
  foreach ($result as $row) {
    $auser = user_load($row->uid);
    $options[$auser->uid] = $auser->name ." (".$auser->mail.")";
  }

  $form['filter']['dev']['developer']  = array(
    '#type' => 'select',
    '#options' => $options,
    '#default_value' => (isset($form_state['values']['filter']['dev']['developer'])) ? $form_state['values']['filter']['dev']['developer'] : array(),
    '#required' => FALSE,
    '#weight' => 27,
    '#multiple' => 1,

    '#ajax' => array(
      'callback' => 'intstrux_apns_filter_update_callback',
      'wrapper' => 'replace_textfield_div',
     ),
  );

   $form['filter']['dev']['directtoken']  = array(
    '#type' => 'textfield',
    '#title' => t('Enter a token directly'),
    '#description' => t('Here you can enter a specific token directly. Spaces will be automtatically filtered.'),
    '#default_value' => (isset($form_state['values']['filter']['dev']['directtoken'])) ? $form_state['values']['filter']['dev']['directtoken'] : array(),
    '#required' => FALSE,
    '#weight' => 28,
    '#multiple' => 1,
    '#size' => 255,

    '#ajax' => array(
      'callback' => 'intstrux_apns_filter_update_callback',
      'wrapper' => 'replace_textfield_div',
     ),
  );

 $form['replace_textfield'] = array(
    '#type' => 'fieldset',
    '#title' => t('Summary'),
    '#description' => t('Please select mode.'),
    '#tree' => TRUE,
    '#prefix' => '<div id="replace_textfield_div">',
    '#suffix' => '</div>',
  );

/*
  $form['filter']['dev']['cert']  = array(
    '#type' => 'select',
    '#options' => array(
     
      //DEFINE CERTS HERE

    ),
    '#default_value' => (isset($form_state['values']['filter']['dev']['cert'])) ? $form_state['values']['filter']['dev']['cert'] : array(),
    '#required' => FALSE,
    '#weight' => 27,
    '#multiple' => 1,

    '#ajax' => array(
      'callback' => 'intstrux_apns_filter_update_callback',
      'wrapper' => 'replace_textfield_div',
     ),
  );
*/

/*

  if (module_exists('locale')) {
    $form['language'] = array(
      '#type' => 'select',
      '#title' => t('Language'),
      '#options' => intstrux_apns_used_languages(),
      '#description' => t('Optionally, only select the push notifications to recipients with this language.'),
      '#default_value' => (isset($form_state['values']['language'])) ? $form_state['values']['language'] : '',
      '#weight' => 30,
    );
  }
*/
  // Only show Android option if C2DM credentials are available.
  //$recipients_options = array('ios' => t('iOS (iPhone/iPad)'));
  //if ((intstrux_apns_C2DM_USERNAME && intstrux_apns_C2DM_PASSWORD) || intstrux_apns_GCM_API_KEY) {
  //  $recipients_options['android'] = t('Android');
  //}
  
  /*$form['recipients'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Recipients'),
    '#description' => t('Select the recipients for this push message'),
    '#options' => $recipients_options,
    '#weight' => 20,
  );*/

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Send Push Notification',
    '#weight' => 50,
  );

  return $form;
}


function intstrux_apns_filter_update_callback($form, $form_state) {
  
  $filter_dev = !empty($form_state['values']['step1']['mode']) && $form_state['values']['step1']['mode'] == "test" ? 1  : 0;
  
  if($filter_dev)
    $developer_array = array();
  
  $edition_array = array(); 
  $sections_array = array();
  

  $form['replace_textfield'] = array(
    '#type' => 'fieldset',
    '#title' => t('Summary'),
    '#description' => t(''),
    '#tree' => TRUE,
    '#prefix' => '<div id="replace_textfield_div">',
    '#suffix' => '</div>',
  );

  $options = array("header"=>array("Token", "iOS Version", "App Version", "Last update"), "rows"=>array());

  

  if(!empty($form_state['values']['filter']['dev']['developer'])){
    $query = 'SELECT * 
      FROM {intstrux_apns_tokens} AS at
      WHERE at.uid IN (:uids)';
    $result = db_query($query, array(':uids' => $form_state['values']['filter']['dev']['developer']))->fetchAll();

    foreach ($result as $row) {
      $options["rows"][] = array($row->token, $row->iosVersion, $row->appVersion, date("m-d-Y", $row->timestamp));
      $developer_array[] = $row->token;
    }

    $form['replace_textfield']['developerdevices']  = array(
      '#type' => 'item',
      '#markup' => '<h2>Developer tokens</h2>'.theme('table',$options),
    );
  }


  



//check for a manual token 
if(!empty($form_state['values']['filter']['dev']['directtoken'])){
  
  $token = $form_state['values']['filter']['dev']['directtoken'];
  $token = str_replace(" ", "", $token);

   $query = 'SELECT * 
      FROM {intstrux_apns_tokens} AS at
      WHERE at.token IN (:tokens)';
    $result = db_query($query, array(':tokens' => $token))->fetchAll();

    $found = FALSE;
    $options = array("header"=>array("Token", "iOS Version", "App Version", "Last update", "User"), "rows"=>array());

    foreach ($result as $row) {
      $username = "anon";
      if($row->uid){
        $auser = user_load($row->uid);
        $username = $auser->name. " (".$auser->mail.") [".$auser->uid."]";
      }

      $options["rows"][] = array($row->token, $row->iosVersion, $row->appVersion, date("m-d-Y", $row->timestamp), $username);
      $found = TRUE;
      $developer_array[] = $row->token;
    }


  $form['replace_textfield']['directdevices']  = array(
    '#type' => 'item',
    '#markup' => $found ? '<h2>Manual tokens</h2>'.theme('table',$options) : 'The manual token could not be found in the system',
  );



}


$filter_section = !empty($form_state['values']['filter']['bysection'] ) ? $form_state['values']['filter']['bysection']  : 0;
$filter_edition = !empty($form_state['values']['filter']['byedition'] ) ? $form_state['values']['filter']['byedition']  : 0;
  
if($filter_section){
 
  $sections_array = $form_state['values']['filter']['section'];

}

if($filter_edition){
  $edition_array = $form_state['values']['filter']['edition'];
}
 

$form['replace_textfield']['info']  = array(
    '#type' => 'item',
    '#markup' => "Total APNS to be send: ".intstrux_apns_get_tokens(intstrux_apns_TYPE_ID_IOS, $edition_array, $sections_array, $developer_array, "count"),
    
);
 

  return $form['replace_textfield'];
}



/**
 * Submit handler for sending out a mass-push notification.
 */
function intstrux_apns_mass_push_form_validate($form, &$form_state) {
  
  // Create shortened URL
  if (!empty($form_state['values']['message']['fullurl'])) {
   

    
    //Some cleanup here if the url cotnains our domain
    if(strpos($form_state['values']['message']['fullurl'],".alpha.intstrux.com/")!==FALSE){
      
      $url_parsed = parse_url($form_state['values']['message']['fullurl']);

      $form_state['values']['message']['fullurl'] = str_replace($url_parsed["scheme"]."://".$url_parsed["host"], "", $form_state['values']['message']['fullurl']);

    }

    //We can only store 8 byte for the hash and 512 byte for the URL
    if(strlen($form_state['values']['message']['fullurl']) > 512){
      form_set_error('message', t('Your url exceeds the allowed size of 512 bytes. Please shorten your url.'));
    }
    else{

      //Try to find an existing shortened URL
      $query = db_select('intstrux_apns_urlhashes', 'hash');
      $query->fields('hash', array('hash'));
      $query->condition('hash.url', $form_state['values']['message']['fullurl']);
      $result = $query->execute();

      $hash = $result->fetchField();
      
      //We need to create our own hash of 8 bytes --> http://www.php.net/manual/en/function.hash.php#89574
      if(!$hash){
        $hash = hash('crc32b', $form_state['values']['message']['fullurl']);

        //Find new unique hash
        while(intstrux_apns_hash_exits($hash)){
            $hash = hash('crc32b', $form_state['values']['message']['fullurl'].time());

        }

        // Write record.
        $table = 'intstrux_apns_urlhashes';
        $record = new stdClass();
    
        $record->hash = $hash;
        $record->url = $form_state['values']['message']['fullurl'];
    
        $record->timestamp = time();
    
        drupal_write_record($table, $record);
        
      }

      $form_state['values']['message']['url'] = $hash;
      drupal_set_message("Hash was generated for URL: ".$form_state['values']['message']['fullurl']." HASH: ".$hash);

    }
  }

  // Define an empty array for the payload.
  $payload = array();

  // Add all "message" elements to the payload.
  // Other modules can alter the contents of the payload
  // array by adding additional elements to 'message'
  // when it implements hook_form_alter.
  $message_elements = $form_state['values']['message'];
  foreach ($message_elements as $key => $value) {
    //DO NOT add the full url to the payload
    if($key != "fullurl")
      $payload[$key] = $value;
  }

  // Store payload in the form_state.
  $form_state['values']['payload'] = $payload;

  // Make sure at least one recipient (group) is selected.
  //if (empty($recipients['ios']) && empty($recipients['android'])) {
  //  form_set_error('recipients', t('No message was sent. Please select at least one recipient group.'));
  //}

  // Validate that the message size is ok.
  if (!intstrux_apns_check_payload_size($form_state['values']['payload'])) {
    form_set_error('message', t('Your message exceeds the allowed size of 256 bytes. Please shorten your message.'));
  }



  $filter_dev = !empty($form_state['values']['step1']['mode']) && $form_state['values']['step1']['mode'] == "test" ? 1  : 0;
  $filter_section = !empty($form_state['values']['filter']['bysection'] ) ? $form_state['values']['filter']['bysection']  : 0;
  $filter_edition = !empty($form_state['values']['filter']['byedition'] ) ? $form_state['values']['filter']['byedition']  : 0;
  
  if($filter_dev){

    $dev_tokens = array();

    if(!empty($form_state['values']['filter']['dev']['developer'])){
      $query = 'SELECT * 
        FROM {intstrux_apns_tokens} AS at
        WHERE at.uid IN (:uids)';
      $result = db_query($query, array(':uids' => $form_state['values']['filter']['dev']['developer']))->fetchAll();

      foreach ($result as $row) {
        $dev_tokens[] = $row->token;
      }
    }
    if(!empty($form_state['values']['filter']['dev']['directtoken'])){
  
      $token = $form_state['values']['filter']['dev']['directtoken'];
      $token = str_replace(" ", "", $token);

      $query = 'SELECT * 
        FROM {intstrux_apns_tokens} AS at
        WHERE at.token IN (:tokens)';
      $result = db_query($query, array(':tokens' => $token))->fetchAll();
      foreach ($result as $row) {
        $dev_tokens[] = $row->token;
      }
    }

    if(count($dev_tokens) <=0){
      form_set_error("filter][dev][bydevelopment", t('Developer mode enabled but no developer device specified.'));
    }

    $form_state['values']['dev_tokens'] = $dev_tokens;

  }

  if($filter_section){
    if(empty($form_state['values']['filter']['section'])){
        form_set_error('filter][section', t('At least one section needs to be selected when filtering by section.'));
    }
  }

  if($filter_edition){
     if(empty($form_state['values']['filter']['edition'])){
      form_set_error('filter][edition', t('At least one edtion needs to be specified when filtering by edition'));
    }
  }



}

function intstrux_apns_hash_exits($hash){
    $query = db_select('intstrux_apns_urlhashes', 'hash');
    $query->fields('hash', array('hash'));
    $query->condition('hash.hash', $hash);
    $result = $query->execute();

    return $result->fetchField() ? true : false;

}



/**
 * Submit handler for sending out a mass-push notification.
 */
function intstrux_apns_mass_push_form_submit($form, &$form_state) {
  
  $payload = $form_state['values']['payload'];

  $language = (isset($form_state['values']['language'])) ? $form_state['values']['language'] : false;

  $filter_dev = !empty($form_state['values']['step1']['mode']) && $form_state['values']['step1']['mode'] == "test" ? 1  : 0;
  $filter_section = !empty($form_state['values']['filter']['bysection'] ) ? $form_state['values']['filter']['bysection']  : 0;
  $filter_edition = !empty($form_state['values']['filter']['byedition'] ) ? $form_state['values']['filter']['byedition']  : 0;
  


  
  if($filter_dev){
    //drupal_set_message("dev filter");
    $dev_tokens = array();
    $dev_tokens = $form_state['values']['dev_tokens'];
 }

  $sections_array = array();
  if($filter_section){
    //drupal_set_message("section filter".print_r($form_state['values']['filter']['section'], true));

    $sections_array = $form_state['values']['filter']['section'];

  }

  $edition_array = array();
  if($filter_edition){
    //drupal_set_message("edition filter");

    $edition_array = $form_state['values']['filter']['edition'];
  }


  $tokens_ios = intstrux_apns_get_tokens(intstrux_apns_TYPE_ID_IOS, $edition_array, $sections_array, $dev_tokens);
  
  if (!empty($tokens_ios)) {



    $payload_apns = array('aps' => $payload);

    //drupal_set_message(t('Sending to '.print_r($tokens_ios,true)." With payload: ".print_r($payload_apns ,true)));


    $batch = array(
      'title' => t('Sending Apple Push Notifcations'),
      'operations' => array(
        array('intstrux_apns_apns_send', array($tokens_ios, $payload_apns)),
      ),
      'finished' => 'intstrux_apns_apns_send_complete',
      //'file' => '',
    );
    batch_set($batch);
       
  }
  else {
    drupal_set_message(t('No iOS recipients found, potentially for this language.'));
  }
  
  /*
  // Send message to all Android recipients.
  if (!empty($recipients['android'])) {
    // Get all Android recipients.
    $tokens_android = intstrux_apns_get_tokens(intstrux_apns_TYPE_ID_ANDROID, $language);
    if (!empty($tokens_android)) {
      // Determine which method to use for Google push notifications.
      switch (intstrux_apns_GOOGLE_TYPE) {
        case intstrux_apns_GOOGLE_TYPE_C2DM:
        $result = intstrux_apns_c2dm_send_message($tokens_android, $payload);
        break;

        case intstrux_apns_GOOGLE_TYPE_GCM:
        $result = intstrux_apns_gcm_send_message($tokens_android, $payload);
        break;
      }
      $dsm_type = ($result['success']) ? 'status' : 'error';
      drupal_set_message($result['message'], $dsm_type);
    }
    else {
      drupal_set_message(t('No Android recipients found, potentially for this language.'));
    }
  }
  */
}




