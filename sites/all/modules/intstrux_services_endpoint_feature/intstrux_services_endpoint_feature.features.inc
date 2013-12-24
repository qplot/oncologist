<?php
/**
 * @file
 * intstrux_services_endpoint_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function intstrux_services_endpoint_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "oauth_common" && $api == "oauth") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function intstrux_services_endpoint_feature_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function intstrux_services_endpoint_feature_node_info() {
  $items = array(
    'page_html' => array(
      'name' => t('Article (CADMUS - MANUAL)'),
      'base' => 'node_content',
      'description' => t('A Page which includes a full html representation. 
Please note that all referenced files need to be uploaded as well.'),
      'has_title' => '1',
      'title_label' => t('Title [SOLR search indexed]'),
      'help' => '',
    ),
  );
  return $items;
}
