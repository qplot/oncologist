<?php

/**
 * @file
 * Services callbacks.
 */

/**
 * Service callback to store a device token.
 *
 * @param $data
 *   Array with the following keys:
 *   - token
 *   - type
 *
 * @return
 *   Service data
 */

function _intstrux_apns_service_create_device_token($data) {
  if (!isset($data['token']) || !isset($data['type'])) {
    return services_error(t('At least one parameter is missing.'), 400);
  }

  // Default language to English and validate language setting.
  if (isset($data['language'])) {
    // Make sure this is a valid language code.
    include_once DRUPAL_ROOT . '/includes/iso.inc';
    $languages = _locale_get_predefined_list();
    if (!array_key_exists($data['language'], $languages)) {
      return services_error(t('This is not a valid ISO 639 language code'), 404);
    }

    /*
    // Optionally, only allow enabled languages.
    if (variable_get('intstrux_apns_require_enabled_language')) {
      $available_languages = language_list();
      if (!array_key_exists($data['language'], $available_languages)) {
        return services_error(t('This language is not enabled'), 404);
      }
    }
    */
    $language = $data['language'];
  }
  else {
    $default_language = language_default();
    $language = $default_language->language;
  }

  


  // Decode data.
  $token = $data['token'];
  // Remove empty spaces from the token.
  $token = str_replace(' ', '', $token);

  $type = $data['type'];
  // Convert type to integer value.
  if ($type != 'ios' && $type != 'android') {
    return services_error(t('Type not supported.'), 400);
  }
  else {
    $type_id = ($type == 'ios') ? intstrux_apns_TYPE_ID_IOS : intstrux_apns_TYPE_ID_ANDROID;
  }

  $iosVersion = !empty($data['iosVersion'])? $data['iosVersion']:"";
  
  $app = !empty($data['app'])? $data['app']:"";
  
  $appVersion = !empty($data['appVersion'])? $data['appVersion']:"";
  
  // Get the current user id.
  $uid = !empty($data['uid']) ? $data['uid'] : $GLOBALS['user']->uid;
  
  $edition = !empty($data['edition'])? $data['edition']:"";
  
  $country = !empty($data['country'])? $data['country']:"";
  
  $speciality = !empty($data['speciality'])? $data['speciality']:"";
  
  $preferences = !empty($data['preferences'])? json_encode($data['preferences']):"";
  

  // Store this token in the database.
  $result = intstrux_apns_store_token($token, $type_id, $iosVersion, $app, $appVersion, $uid, $edition, $country, $speciality, $preferences, $language);

  if ($result === FALSE) {
    return services_error(t('This token could not be stored.'), 400);
  }
  else {
    return array(
      'success' => 1,
      'message' => 'This token was successfully stored in the database.'
    );
  }
}

/**
 * Deletes an already registered token.
 *
 * @param $data
 *
 * @return array|mixed
 */
function _intstrux_apns_service_delete_device_token($token) {
  if (empty($token)) {
    return services_error(t('Token parameter is missing.'), 400);
  }
  push_notifications_purge_token($token);
  return array(
    'success' => 1,
    'message' => 'The token was successfully removed from the database.'
  );
}

function _intstrux_apns_service_retrieve_shortened_url($shortened_url){
  if (empty($shortened_url)) {
    return services_error(t('shortened_url parameter is missing.'), 400);
  }
  
  $query = db_select('intstrux_apns_urlhashes', 'hash');
  $query->fields('hash', array('url'));
  $query->condition('hash.hash', $shortened_url);
  $result = $query->execute();

  if($url = $result->fetchField()){

    return array(
      'success' => 1,
      'url' => $url
    );
  }
  else{
    return array(
      'success' => 1,
      'url' => ""
    );
  }
}
