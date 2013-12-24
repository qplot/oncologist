<?php
/**
 * @file
 * pushttostagejuly16.domains.inc
 */

/**
 * Implements hook_domain_theme_default_themes().
 */
function pushttostagejuly16_domain_theme_default_themes() {
  $domain_themes = array();
  $domain_themes['wipe-domain-tables'] = 'wipe-domain-tables';
  $domain_themes['_stage_breastcancer_alpha_intstrux_com'] = array(
    'bcm_theme' => array(
      'theme' => 'bcm_theme',
      'settings' => NULL,
      'status' => 1,
      'filepath' => '',
    ),
  );
  $domain_themes['admin_alpha_intstrux_com'] = array(
    'garland' => array(
      'theme' => 'garland',
      'settings' => NULL,
      'status' => 1,
      'filepath' => '',
    ),
  );
  $domain_themes['lcm'] = array(
    'lcm_theme' => array(
      'theme' => 'lcm_theme',
      'settings' => NULL,
      'status' => 1,
      'filepath' => '',
    ),
  );
  $domain_themes['onchd_ampserver_intstrux_com'] = array(
    'intstrux_native_mobile_theme' => array(
      'theme' => 'intstrux_native_mobile_theme',
      'settings' => NULL,
      'status' => 1,
      'filepath' => '',
    ),
  );
  $domain_themes['oncologistportal_com'] = array(
    'news_center' => array(
      'theme' => 'news_center',
      'settings' => NULL,
      'status' => 1,
      'filepath' => '',
    ),
    'oncologist_portal' => array(
      'theme' => 'oncologist_portal',
      'settings' => NULL,
      'status' => 0,
      'filepath' => '',
    ),
  );
  $domain_themes['prostatecancer_alpha_intstrux_com'] = array(
    'pcm_theme' => array(
      'theme' => 'pcm_theme',
      'settings' => NULL,
      'status' => 1,
      'filepath' => '',
    ),
  );
  $domain_themes['sto_online_alpha_intstrux_com'] = array();

  return $domain_themes;
}
