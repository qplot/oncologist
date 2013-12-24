<?php
/**
 * @file
 * intstrux_interactive_ad_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function intstrux_interactive_ad_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_active_ad_html_upload|node|page_interactive_ad_alt|form';
  $field_group->group_name = 'group_active_ad_html_upload';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_interactive_ad_alt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'HTML Package Upload',
    'weight' => '3',
    'children' => array(
      0 => 'field_active_ad_html_package',
      1 => 'field_active_ad_embedded_files',
      2 => 'field_active_ad_files_size',
      3 => 'additional_settings',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
    ),
  );
  $export['group_active_ad_html_upload|node|page_interactive_ad_alt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_active_ad_preparation|node|page_interactive_ad_alt|form';
  $field_group->group_name = 'group_active_ad_preparation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_interactive_ad_alt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preparation',
    'weight' => '0',
    'children' => array(
      0 => 'field_active_ad_specialty',
      1 => 'field_active_ad_instructions',
      2 => 'title',
      3 => 'workbench_access',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
    ),
  );
  $export['group_active_ad_preparation|node|page_interactive_ad_alt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_active_ad_video_select|node|page_interactive_ad_alt|form';
  $field_group->group_name = 'group_active_ad_video_select';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_interactive_ad_alt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video Customization and Generation',
    'weight' => '2',
    'children' => array(
      0 => 'field_active_ad_video_customize',
      1 => 'field_active_ad_js_url',
      2 => 'active_ad_download_js_container',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
    ),
  );
  $export['group_active_ad_video_select|node|page_interactive_ad_alt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_active_ad_video_upload|node|page_interactive_ad_alt|form';
  $field_group->group_name = 'group_active_ad_video_upload';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_interactive_ad_alt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video Upload',
    'weight' => '1',
    'children' => array(
      0 => 'field_active_ad_have_video',
      1 => 'field_active_ad_video_ads',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
    ),
  );
  $export['group_active_ad_video_upload|node|page_interactive_ad_alt|form'] = $field_group;

  return $export;
}
