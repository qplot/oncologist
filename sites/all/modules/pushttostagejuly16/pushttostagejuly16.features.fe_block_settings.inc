<?php
/**
 * @file
 * pushttostagejuly16.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pushttostagejuly16_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-topsociallinks'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'topsociallinks',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bcm_theme',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'intstrux_native_mobile_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'intstrux_native_mobile_theme',
        'weight' => 0,
      ),
      'lcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcm_theme',
        'weight' => 0,
      ),
      'news_center' => array(
        'region' => 'top_area',
        'status' => 1,
        'theme' => 'news_center',
        'weight' => -55,
      ),
      'oncologist_portal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oncologist_portal',
        'weight' => 0,
      ),
      'pcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pcm_theme',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['poll-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'poll',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bcm_theme',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'intstrux_native_mobile_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'intstrux_native_mobile_theme',
        'weight' => 0,
      ),
      'lcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcm_theme',
        'weight' => 0,
      ),
      'news_center' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'news_center',
        'weight' => -17,
      ),
      'oncologist_portal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oncologist_portal',
        'weight' => 0,
      ),
      'pcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pcm_theme',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['profile-author-information'] = array(
    'cache' => 5,
    'custom' => 0,
    'delta' => 'author-information',
    'module' => 'profile',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bcm_theme',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'intstrux_native_mobile_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'intstrux_native_mobile_theme',
        'weight' => 0,
      ),
      'lcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcm_theme',
        'weight' => 0,
      ),
      'news_center' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'news_center',
        'weight' => -49,
      ),
      'oncologist_portal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oncologist_portal',
        'weight' => 0,
      ),
      'pcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pcm_theme',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['statistics-popular'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popular',
    'module' => 'statistics',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bcm_theme',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'intstrux_native_mobile_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'intstrux_native_mobile_theme',
        'weight' => 0,
      ),
      'lcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcm_theme',
        'weight' => 0,
      ),
      'news_center' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'news_center',
        'weight' => -9,
      ),
      'oncologist_portal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oncologist_portal',
        'weight' => 0,
      ),
      'pcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pcm_theme',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bcm_theme',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'intstrux_native_mobile_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'intstrux_native_mobile_theme',
        'weight' => 0,
      ),
      'lcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcm_theme',
        'weight' => 0,
      ),
      'news_center' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'news_center',
        'weight' => 0,
      ),
      'oncologist_portal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oncologist_portal',
        'weight' => 0,
      ),
      'pcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pcm_theme',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bcm_theme',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'intstrux_native_mobile_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'intstrux_native_mobile_theme',
        'weight' => 0,
      ),
      'lcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcm_theme',
        'weight' => 0,
      ),
      'news_center' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'news_center',
        'weight' => 0,
      ),
      'oncologist_portal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oncologist_portal',
        'weight' => 0,
      ),
      'pcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pcm_theme',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['superfish-3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 3,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bcm_theme',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'intstrux_native_mobile_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'intstrux_native_mobile_theme',
        'weight' => 0,
      ),
      'lcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcm_theme',
        'weight' => 0,
      ),
      'news_center' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'news_center',
        'weight' => 1,
      ),
      'oncologist_portal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oncologist_portal',
        'weight' => 0,
      ),
      'pcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pcm_theme',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 4,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bcm_theme',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'intstrux_native_mobile_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'intstrux_native_mobile_theme',
        'weight' => 0,
      ),
      'lcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcm_theme',
        'weight' => 0,
      ),
      'news_center' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'news_center',
        'weight' => 2,
      ),
      'oncologist_portal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'oncologist_portal',
        'weight' => 0,
      ),
      'pcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pcm_theme',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
