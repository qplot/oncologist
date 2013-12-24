<?php

/**
 * @file
 * Admin page callbacks for the intstrux highwire module.
 */

/**
 * Form builder.
 * @see system_settings_form()
 */
function intstrux_services_app_application_settings($form, &$form_state) {
  $form = array();
  
  $form['onchd'] = array(
    '#type' => 'fieldset',
    '#title' => t('OncologistHD - Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  
  $form['onchd']['current_version'] = array(
    '#type' => 'textfield',
    '#title' => t('Current store version'),
    '#maxlength' => 10,
    '#required' => TRUE,
    '#default_value' => variable_get('intstrux_services_app_application_onchd_version', 'x.x.x'),
    '#description' => t('The current store version of the app in the format x.x.x, e.g. 1.2.0'),
  );

  $form['onchd']['upgrade_version_info'] = array(
    '#type' => 'item',
    '#title' => t('Older versions upgrade enforcement'),
    '#markup' => t('In order to keep user using the latest version of the app we define a soft and a hard upgrade version. <ul><li>Soft upgrade: A soft upgrade is defined as the option to upgrade or to continue using the app if desired. The menu basically defaults to an update page wihin the menu, but allows you to navigate elsewhere within the app without upgrading. </li><li>Hard Upgrade: A hard upgrade is defined as that the user has to update the app in order to keep using it. In difference to the soft upgrade you cannot navigate the app and are locked into the upgrade screen.</li></ul>Conditions are eecuted as lower than, that means every app with a lower version number as specified will he handled in one or another way. <br>E.g. the current version is 5.0.2 and the softlimit is set to 5.0.0 and the hard limit to 4.0.0. Every app with a vesion 1-3.x will be forced to upgrade any version 4.x will have the option to upgrade and 5.x will not be bothered. <br>A more typical setup would be the soft limit to be 5.0.2, therfore the current version number and the hard limit would be 5.0.0. this would force upgrade everyone to the new major release  but keeps updates for subrelases optional. <br>To foce everyone into the current version set all three version to the same version number as the current version.'),
  );

  $form['onchd']['soft_upgrade_version'] = array(
    '#type' => 'textfield',
    '#title' => t('Soft upgrade version'),
    '#maxlength' => 10,
    '#required' => TRUE,
    '#default_value' => variable_get('intstrux_services_app_application_onchd_soft_upgrade_version', 'x.x.x'),
    '#description' => t('The soft upgrade version in the format x.x.x, e.g. 1.2.0.<br>The page loaded for the soft update screen is defined in each menu to allow flexibility with naming and position.'),
  );
  
	$form['onchd']['hard_upgrade_version'] = array(
    '#type' => 'textfield',
    '#title' => t('Hard upgrade version'),
    '#maxlength' => 10,
    '#required' => TRUE,
    '#default_value' => variable_get('intstrux_services_app_application_onchd_hard_upgrade_version', 'x.x.x'),
    '#description' => t('The hard upgrade version in the format x.x.x, e.g. 1.2.0.'),
  );

 $form['onchd']['hard_upgrade_nid'] = array(
    '#type' => 'textfield',
    '#title' => t('Hard upgrade Node ID'),
    '#maxlength' => 10,
    '#required' => TRUE,
    '#default_value' => variable_get('intstrux_services_app_application_onchd_hard_upgrade_nid', ''),
    '#description' => t('A valid node id from this system used for the forced update screen'),
  );

 $form['onchd']['menu_banner_ad'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Banner Ad'),
    '#maxlength' => 255,
    '#required' => TRUE,
    '#default_value' => variable_get('intstrux_services_app_application_onchd_menu_banner_ad', "/21688575/TONC_HD_App_300x250"),
    '#description' => t('The add campaign displayed next to the 2nd level menu'),
  );



  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  $form['#validate'][] = 'intstrux_services_app_application_settings_validate';
  
  return $form;
}

function intstrux_services_app_application_settings_validate($form, &$form_state) {
  $current_version = $form_state['values']['current_version'];
  $soft_version = $form_state['values']['soft_upgrade_version'];
  $hard_version = $form_state['values']['hard_upgrade_version'];
  $hard_nid = $form_state['values']['hard_upgrade_nid'];
  $menu_banner_ad = $form_state['values']['menu_banner_ad'];
  
  

  if(!intstrux_services_app_validate_version($current_version)) {
    form_set_error('current_version', t('Invalid version format'));
  }

  if(!intstrux_services_app_validate_version($soft_version)) {
    form_set_error('soft_upgrade_version', t('Invalid version format'));
  }

  if(!intstrux_services_app_validate_version($hard_version)) {
    form_set_error('hard_upgrade_version', t('Invalid version format'));
  }

  if(!is_numeric($hard_nid) && $hard_nid>0){
  	 form_set_error('hard_upgrade_nid', t('Invalid nid'));
  }

  if(intstrux_services_app_versioncompare_version($soft_version, $hard_version) == -1){
  	form_set_error('soft_upgrade_version', t('soft verion cannot be smaller than hard version'));
  }

  if(empty($menu_banner_ad)){
  	 form_set_error('menu_banner_ad', t('Invalid banner campaign'));
  }


}

function intstrux_services_app_application_settings_submit($form, &$form_state) {
	$current_version = $form_state['values']['current_version'];
  	$soft_version = $form_state['values']['soft_upgrade_version'];
  	$hard_version = $form_state['values']['hard_upgrade_version'];
  	$hard_nid = $form_state['values']['hard_upgrade_nid'];
  	$menu_banner_ad = $form_state['values']['menu_banner_ad'];

  	variable_set('intstrux_services_app_application_onchd_version', $current_version);
  	variable_set('intstrux_services_app_application_onchd_soft_upgrade_version', $soft_version);
  	variable_set('intstrux_services_app_application_onchd_hard_upgrade_version', $hard_version);

  	variable_set('intstrux_services_app_application_onchd_hard_upgrade_nid', $hard_nid);

  	variable_set('intstrux_services_app_application_onchd_menu_banner_ad', $menu_banner_ad);
}



