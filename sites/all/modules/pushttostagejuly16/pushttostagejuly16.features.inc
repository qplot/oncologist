<?php
/**
 * @file
 * pushttostagejuly16.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushttostagejuly16_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pushttostagejuly16_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pushttostagejuly16_node_info() {
  $items = array(
    'apns_client' => array(
      'name' => t('APNS Client'),
      'base' => 'node_content',
      'description' => t('Apple Push Notification Service (APNS) Client describes a device with one of our IOS apps installed to it and the user agreed to receive push notifications.'),
      'has_title' => '1',
      'title_label' => t('Info'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article (HighWire - Automatic)'),
      'base' => 'node_content',
      'description' => t('Auto generate articles from Highwire for Journals in the US and EU editions'),
      'has_title' => '1',
      'title_label' => t('Title [SOLR search indexed]'),
      'help' => '',
    ),
    'article_express' => array(
      'name' => t('Article Express'),
      'base' => 'node_content',
      'description' => t('Auto generates express entries from Highwire in the US and EU editions'),
      'has_title' => '1',
      'title_label' => t('Title [SOLR search indexed]'),
      'help' => '',
    ),
    'asset_audio' => array(
      'name' => t('Asset Audio'),
      'base' => 'node_content',
      'description' => t('This is the individual audio asset'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'asset_image' => array(
      'name' => t('Image [Non HTML Article]'),
      'base' => 'node_content',
      'description' => t('Images can be used in conjunction with Taxonomy: Article Containers, e.g. Issues, Supplements, like Article (CADMUS - MANUAL) content. 
This is very helpful when the actual content is not available as HTML.'),
      'has_title' => '1',
      'title_label' => t('Title [SOLR search indexed]'),
      'help' => t('Please use this content type only if you have no HTML version of the actual content on hand. Images can not be zoomed in and text size can not be adjusted for better reading.'),
    ),
    'asset_video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('A Brightcove video wrapper'),
      'has_title' => '1',
      'title_label' => t('Title [SOLR search indexed]'),
      'help' => t('This content type wraps around a Brightcove video reference. Make sure to create a video on Brightcove with an unique and easy to reference title before creating this wrapper'),
    ),
    'challenging_case' => array(
      'name' => t('Challenging Case'),
      'base' => 'node_content',
      'description' => t('Describes a Challenging Case'),
      'has_title' => '1',
      'title_label' => t('Title [SOLR Search indexed]'),
      'help' => '',
    ),
    'edition' => array(
      'name' => t('Edition - Sub-Application'),
      'base' => 'node_content',
      'description' => t('A country, region and/or language specific version of the application '),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'meeting' => array(
      'name' => t('Meeting'),
      'base' => 'node_content',
      'description' => t('A meeting entry'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A blank Page type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page_interactive_ad' => array(
      'name' => t('Interactive Ad (Depreciated)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'perspective' => array(
      'name' => t('Perspective'),
      'base' => 'node_content',
      'description' => t('The perspective content type is used for sections like the european perspective.
It contains a video/ audio part which is connected to an author with some kind of abstract.'),
      'has_title' => '1',
      'title_label' => t('Title [SOLR Search indexed]'),
      'help' => t('Please fill in all required fields below to create a perspective. 
The title is user exposed and searchable.'),
    ),
    'portal' => array(
      'name' => t('Portal'),
      'base' => 'node_content',
      'description' => t('An external portal in connection with The Oncologist'),
      'has_title' => '1',
      'title_label' => t('Title [SOLR Search indexed]'),
      'help' => '',
    ),
    'sidebar_banner_ad' => array(
      'name' => t('Sidebar Banner Ad'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sto_featured_item' => array(
      'name' => t('STO Featured Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'web_cancer_portal_promo_carousel' => array(
      'name' => t('Web: Cancer Portal - Promo Carousel'),
      'base' => 'node_content',
      'description' => t('Add image, title, and description for Promo Carousel on Cancer Portal website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
