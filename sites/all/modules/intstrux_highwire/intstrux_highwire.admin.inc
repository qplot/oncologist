<?php

/**
 * @file
 * Admin page callbacks for the intstrux highwire module.
 */

/**
 * Form builder.
 * @see system_settings_form()
 */
function intstrux_highwire_admin_settings($form, &$form_state) {
  $form = array();
  
  $form['account'] = array(
    '#type' => 'fieldset',
    '#title' => t('Account settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  
  $form['account']['intstrux_highwire_api_url'] = array(
    '#type' => 'textfield',
    '#title' => t('HighWire API URL'),
    '#maxlength' => 255,
    '#required' => TRUE,
    '#default_value' => variable_get('intstrux_highwire_api_url', ''),
    '#description' => t('Example: http://api.domain.com.'),
  );

  $form['account']['intstrux_highwire_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('HighWire API key'),
    '#maxlength' => 255,
    '#required' => TRUE,
    '#default_value' => variable_get('intstrux_highwire_api_key', ''),
    '#description' => t('A HighWire API key from your account at HighWire Press.'),
  );
  
  $form['cache'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cache settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  
  $form['cache']['intstrux_highwire_cache_type'] = array(
    '#type' => 'select',
    '#title' => t('Cache type'),
    '#options' => array(
      '0' => t('<none>'),
      'filecache' => t('Filecache'),
      'memcache' => t('Memcache'),
    ),
    '#default_value' => variable_get('intstrux_highwire_cache_type', 0),
  );
  
  $form['cache']['intstrux_highwire_cache_lifetime'] = array(
    '#type' => 'select',
    '#title' => t('Cache lifetime'),
    '#options' => array(
      '-1' => t('<none>'),
      '60' => t('1 min'),
      '180' => t('3 min'),
      '300' => t('5 min'),
      '600' => t('10 min'),
      '900' => t('15 min'),
      '1800' => t('30 min'),
      '2700' => t('45 min'),
      '3600' => t('1 hour'),
      '10800' => t('3 hours'),
      '21600' => t('6 hours'),
      '32400' => t('9 hours'),
      '43200' => t('12 hours'),
      '86400' => t('1 day'),

    ),
    '#default_value' => variable_get('intstrux_highwire_cache_lifetime', -1),
  );
  
  $form = system_settings_form($form);
  $form['#validate'][] = 'intstrux_highwire_admin_settings_validate';
  
  return $form;
}

function intstrux_highwire_admin_settings_validate($form, &$form_state) {
  $url = $form_state['values']['intstrux_highwire_api_url'];
  $key = $form_state['values']['intstrux_highwire_api_key'];
  
  if(!intstrux_highwire_verify_key($url, $key)) {
    form_set_error('intstrux_highwire_api_key', t('Invalid API key'));
  }
}