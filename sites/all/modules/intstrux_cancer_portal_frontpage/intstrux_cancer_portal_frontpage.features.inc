<?php
/**
 * @file
 * intstrux_cancer_portal_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function intstrux_cancer_portal_frontpage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function intstrux_cancer_portal_frontpage_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function intstrux_cancer_portal_frontpage_image_default_styles() {
  $styles = array();

  // Exported image style: cancerportal_promoimage.
  $styles['cancerportal_promoimage'] = array(
    'name' => 'cancerportal_promoimage',
    'effects' => array(
      36 => array(
        'label' => 'Change file format',
        'help' => 'Choose to save the image as a different filetype.',
        'effect callback' => 'coloractions_convert_image',
        'dimensions passthrough' => TRUE,
        'form callback' => 'coloractions_convert_form',
        'summary theme' => 'coloractions_convert_summary',
        'module' => 'imagecache_coloractions',
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 75,
        ),
        'weight' => 1,
      ),
      37 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 909,
          'height' => 458,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function intstrux_cancer_portal_frontpage_node_info() {
  $items = array(
    'article_express' => array(
      'name' => t('Article Express'),
      'base' => 'node_content',
      'description' => t('Auto generates express entries from Highwire in the US and EU editions'),
      'has_title' => '1',
      'title_label' => t('Title [SOLR search indexed]'),
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
  );
  return $items;
}
