<?php
/**
 * @file
 * intstrux_migration_highwire_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function intstrux_migration_highwire_feature_taxonomy_default_vocabularies() {
  return array(
    'authors' => array(
      'name' => 'Authors',
      'machine_name' => 'authors',
      'description' => 'Article Author',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'issues' => array(
      'name' => 'Issues',
      'machine_name' => 'issues',
      'description' => 'Magazine Issue',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'volumes' => array(
      'name' => 'Volumes',
      'machine_name' => 'volumes',
      'description' => 'Magazine Volume',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'years' => array(
      'name' => 'Years',
      'machine_name' => 'years',
      'description' => 'Magazine year',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
