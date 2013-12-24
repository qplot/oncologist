<?php
/**
 * @file
 * amp_latest_ctype.features.inc
 */

/**
 * Implements hook_node_info().
 */
function amp_latest_ctype_node_info() {
  $items = array(
    'latest' => array(
      'name' => t('Latest'),
      'base' => 'node_content',
      'description' => t('Use <em>Latest</em> to store latest RSS feeds article and links.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
