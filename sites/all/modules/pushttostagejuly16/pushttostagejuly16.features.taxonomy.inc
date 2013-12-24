<?php
/**
 * @file
 * pushttostagejuly16.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pushttostagejuly16_taxonomy_default_vocabularies() {
  return array(
    'sections' => array(
      'name' => 'Sections',
      'machine_name' => 'sections',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_2' => array(
      'name' => 'video asset tags',
      'machine_name' => 'vocabulary_2',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_3' => array(
      'name' => 'Audio',
      'machine_name' => 'vocabulary_3',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_4' => array(
      'name' => 'Categories',
      'machine_name' => 'vocabulary_4',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_5' => array(
      'name' => 'Meetings',
      'machine_name' => 'vocabulary_5',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_6' => array(
      'name' => 'Perspectives',
      'machine_name' => 'vocabulary_6',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'features_perspectives',
      'weight' => 0,
    ),
  );
}
