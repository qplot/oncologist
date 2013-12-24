<?php
/**
 * @file
 * intstrux_interactive_ad_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function intstrux_interactive_ad_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function intstrux_interactive_ad_feature_node_info() {
  $items = array(
    'page_interactive_ad_alt' => array(
      'name' => t('Interactive Ad Alt'),
      'base' => 'node_content',
      'description' => t('This content type is an alternative to interactive ad content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
