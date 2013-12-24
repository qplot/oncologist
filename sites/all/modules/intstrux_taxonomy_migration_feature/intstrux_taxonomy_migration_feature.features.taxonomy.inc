<?php
/**
 * @file
 * intstrux_taxonomy_migration_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function intstrux_taxonomy_migration_feature_taxonomy_default_vocabularies() {
  return array(
    'article_types' => array(
      'name' => 'Article Types',
      'machine_name' => 'article_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'articles' => array(
      'name' => 'Articles',
      'machine_name' => 'articles',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'editions' => array(
      'name' => 'Editions',
      'machine_name' => 'editions',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'publications' => array(
      'name' => 'Publications',
      'machine_name' => 'publications',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
