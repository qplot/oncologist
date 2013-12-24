<?php
/**
 * @file
 * intstrux_interactive_ad_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function intstrux_interactive_ad_feature_taxonomy_default_vocabularies() {
  return array(
    'companies' => array(
      'name' => 'Companies',
      'machine_name' => 'companies',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'flavors' => array(
      'name' => 'Flavors',
      'machine_name' => 'flavors',
      'description' => 'Video Flavors',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'specialties' => array(
      'name' => 'Specialties',
      'machine_name' => 'specialties',
      'description' => 'Targeted Specialty',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
