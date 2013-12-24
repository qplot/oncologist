<?php
/**
 * @file
 * intstrux_interactive_ad_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function intstrux_interactive_ad_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page_interactive_ad_alt';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'workbench_access' => array(
          'weight' => '3',
        ),
        'additional_settings' => array(
          'weight' => '11',
        ),
        'active_ad_download_js_container' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__page_interactive_ad_alt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page_interactive_ad_alt';
  $strongarm->value = '0';
  $export['language_content_type_page_interactive_ad_alt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page_interactive_ad_alt';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_page_interactive_ad_alt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page_interactive_ad_alt';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page_interactive_ad_alt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page_interactive_ad_alt';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page_interactive_ad_alt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page_interactive_ad_alt';
  $strongarm->value = '1';
  $export['node_preview_page_interactive_ad_alt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page_interactive_ad_alt';
  $strongarm->value = 1;
  $export['node_submitted_page_interactive_ad_alt'] = $strongarm;

  return $export;
}
