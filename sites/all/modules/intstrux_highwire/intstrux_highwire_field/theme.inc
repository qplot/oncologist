<?php
/**
 * @file
 * Theme funciton for the module.
 */
 
/**
 * Theme callback for HighWire browse table item.
 *
 * @param item
 *   Video item.
 *
 * @return
 *   Themed item form.
 */
function theme_intstrux_highwire_field_browse_item($variables) {
  $form = drupal_get_form('intstrux_highwire_field_browser_form' . $variables['item']['article_id'], $variables['item']);
  return drupal_render($form);
}

/**
 * Theme callback for HighWire browse table.
 *
 * @param $variables
 *   Array of video items.
 *
 * @return
 *   Themed browse table.
 */
function theme_intstrux_highwire_field_browse_items($variables) {
  $rowcount = 0;
  $activerow = 0;
  $rows = array();
  foreach ($variables['items'] as $item) {
    // TODO test these after field port is stable
    $themed = theme('intstrux_highwire_field_browse_item', array('item' => $item));
    $rowcount++;
    if ($rowcount == 4) {
      $activerow++;
      $rowcount = 1;
    }
    $rows[$activerow][] = $themed;
  }
  // TODO test these after field port is stable
  return theme('table', array('header' => array(), 'rows' => $rows));
}