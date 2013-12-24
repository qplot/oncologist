<?php
/**
 * @file
 * intstrux_migration_highwire_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function intstrux_migration_highwire_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'intstrux_highwire_api_key';
  $strongarm->value = 'a1e00014-7395-42c1-b621-31ce760e0f03';
  $export['intstrux_highwire_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'intstrux_highwire_api_url';
  $strongarm->value = 'http://api.highwire.org';
  $export['intstrux_highwire_api_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'intstrux_highwire_cache_lifetime';
  $strongarm->value = '-1';
  $export['intstrux_highwire_cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'intstrux_highwire_cache_type';
  $strongarm->value = '0';
  $export['intstrux_highwire_cache_type'] = $strongarm;

  return $export;
}
