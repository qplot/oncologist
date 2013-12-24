<?php
/**
 * @file
 * intstrux_solr_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function intstrux_solr_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'intstrux_native_mobile_theme',
        'weight' => -59,
      ),
      'lcm_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcm_theme',
        'weight' => 6,
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
    'title' => 'Search',
    'visibility' => 1,
  );

  return $export;
}
