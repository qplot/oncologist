<?php
/**
 * @file
 * intstrux_solr_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function intstrux_solr_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_admin_title'
  $field_bases['field_admin_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_admin_title',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 512,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
