<?php
/**
 * @file
 * intstrux_services_endpoint_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function intstrux_services_endpoint_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htmlsource|node|page_html|default';
  $field_group->group_name = 'group_htmlsource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_html';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'HTML Source',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $export['group_htmlsource|node|page_html|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htmlsource|node|page_html|form';
  $field_group->group_name = 'group_htmlsource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_html';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'HTML Source',
    'weight' => '6',
    'children' => array(
      0 => 'field_embeddedfiles',
      1 => 'field_embeddedimage',
      2 => 'field_htmlfile',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_htmlsource|node|page_html|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htmlsource|node|page_html|teaser';
  $field_group->group_name = 'group_htmlsource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_html';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'HTML Source',
    'weight' => '35',
    'children' => array(
      0 => 'field_bannerhtmlfile',
      1 => 'field_htmlfile',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(),
    ),
  );
  $export['group_htmlsource|node|page_html|teaser'] = $field_group;

  return $export;
}
