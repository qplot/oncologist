<?php
/**
 * @file
 * intstrux_cancer_portal_frontpage.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function intstrux_cancer_portal_frontpage_taxonomy_default_vocabularies() {
  return array(
    'sections' => array(
      'name' => 'Sections',
      'machine_name' => 'sections',
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
  );
}
