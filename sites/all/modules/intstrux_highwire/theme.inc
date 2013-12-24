<?php
/**
 * @file
 * Theme funciton for the module.
 */


function theme_intstrux_highwire_authors_items($variables) {
  $authors = $variables['items'];
  
  $items = array();
  
  foreach($authors as $author) {
    $items[] = array(
      'data' => ((isset($author['name']))? $author['name'] : $author) . ((isset($author['sup']))? '<sup>' . $author['sup'] . '</sup>' : ''),
    );
  }
  
  $output = theme('item_list', array('items' => $items, 'attributes' => array('class' => 'contributor-list')));
  
  return $output;
}


function theme_intstrux_highwire_affiliations_items($variables) {
  $affiliations = $variables['items'];
  
  $items = array();
  
  foreach($affiliations as $sup => $affiliations) {
    $items[] = array(
      'data' =>  '<sup>' . $sup . '</sup>' . $affiliations,
    );
  }

  $output = theme('item_list', array('items' => $items, 'attributes' => array('class' => 'affiliation-list')));
  
  return $output;
}