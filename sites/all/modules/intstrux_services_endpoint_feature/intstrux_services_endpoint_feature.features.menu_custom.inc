<?php
/**
 * @file
 * intstrux_services_endpoint_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function intstrux_services_endpoint_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-app-com-intstrux-onchd-eu.
  $menus['menu-app-com-intstrux-onchd-eu'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'title' => 'APP: oncHD - EU',
    'description' => '',
  );
  // Exported menu: menu-app-com-intstrux-onchd-us.
  $menus['menu-app-com-intstrux-onchd-us'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'title' => 'APP: oncHD - US',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('APP: oncHD - EU');
  t('APP: oncHD - US');


  return $menus;
}
