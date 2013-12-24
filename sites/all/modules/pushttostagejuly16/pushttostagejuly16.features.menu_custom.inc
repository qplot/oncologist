<?php
/**
 * @file
 * pushttostagejuly16.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function pushttostagejuly16_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-ad-creator-menu.
  $menus['menu-ad-creator-menu'] = array(
    'menu_name' => 'menu-ad-creator-menu',
    'title' => 'Ad Creator Menu',
    'description' => '',
  );
  // Exported menu: menu-ampmenu.
  $menus['menu-ampmenu'] = array(
    'menu_name' => 'menu-ampmenu',
    'title' => 'AMP Menu',
    'description' => '',
  );
  // Exported menu: menu-app-onchd---zh.
  $menus['menu-app-onchd---zh'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'title' => 'APP: oncHD - ZH',
    'description' => '',
  );
  // Exported menu: menu-bcm-main-menu.
  $menus['menu-bcm-main-menu'] = array(
    'menu_name' => 'menu-bcm-main-menu',
    'title' => 'Web: BCM Main Menu',
    'description' => 'The main menu for the BCM site',
  );
  // Exported menu: menu-com-intstrux-onchd.
  $menus['menu-com-intstrux-onchd'] = array(
    'menu_name' => 'menu-com-intstrux-onchd',
    'title' => 'Oncologist HD - North America - com.intstrux.onchd',
    'description' => '',
  );
  // Exported menu: menu-com-intstrux-oncsd.
  $menus['menu-com-intstrux-oncsd'] = array(
    'menu_name' => 'menu-com-intstrux-oncsd',
    'title' => 'Onc SD Menu',
    'description' => '',
  );
  // Exported menu: menu-content-editor-menu.
  $menus['menu-content-editor-menu'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'title' => 'Content Editor Menu',
    'description' => '',
  );
  // Exported menu: menu-eu-intstrux-onchd.
  $menus['menu-eu-intstrux-onchd'] = array(
    'menu_name' => 'menu-eu-intstrux-onchd',
    'title' => 'Oncologist HD - Europe - eu.intstrux.onchd',
    'description' => '',
  );
  // Exported menu: menu-new-onchd-menu.
  $menus['menu-new-onchd-menu'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'title' => 'New OncHD menu',
    'description' => '',
  );
  // Exported menu: menu-pcm-main-menu.
  $menus['menu-pcm-main-menu'] = array(
    'menu_name' => 'menu-pcm-main-menu',
    'title' => 'Web: PCM Main Menu',
    'description' => 'The main menu for the PCM site',
  );
  // Exported menu: menu-social-links.
  $menus['menu-social-links'] = array(
    'menu_name' => 'menu-social-links',
    'title' => 'Social Links',
    'description' => '',
  );
  // Exported menu: menu-sto-footer-menu.
  $menus['menu-sto-footer-menu'] = array(
    'menu_name' => 'menu-sto-footer-menu',
    'title' => 'STO Footer Menu',
    'description' => 'The footer of the STO site',
  );
  // Exported menu: menu-sto-menu.
  $menus['menu-sto-menu'] = array(
    'menu_name' => 'menu-sto-menu',
    'title' => 'STO Menu',
    'description' => '',
  );
  // Exported menu: menu-web-lcm-main-menu.
  $menus['menu-web-lcm-main-menu'] = array(
    'menu_name' => 'menu-web-lcm-main-menu',
    'title' => 'Web: LCM Main Menu',
    'description' => '',
  );
  // Exported menu: menu-zh-intstrux-onchd.
  $menus['menu-zh-intstrux-onchd'] = array(
    'menu_name' => 'menu-zh-intstrux-onchd',
    'title' => 'Oncologist HD - China - zh.intstrux.onchd',
    'description' => '',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User Menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('AMP Menu');
  t('APP: oncHD - ZH');
  t('Ad Creator Menu');
  t('Content Editor Menu');
  t('Main menu');
  t('Management');
  t('New OncHD menu');
  t('Onc SD Menu');
  t('Oncologist HD - China - zh.intstrux.onchd');
  t('Oncologist HD - Europe - eu.intstrux.onchd');
  t('Oncologist HD - North America - com.intstrux.onchd');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');
  t('STO Footer Menu');
  t('STO Menu');
  t('Social Links');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('The footer of the STO site');
  t('The main menu for the BCM site');
  t('The main menu for the PCM site');
  t('User Menu');
  t('Web: BCM Main Menu');
  t('Web: LCM Main Menu');
  t('Web: PCM Main Menu');


  return $menus;
}
