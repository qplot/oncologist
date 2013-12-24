<?php
/**
 * @file
 * intstrux_cancer_portal_frontpage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function intstrux_cancer_portal_frontpage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_article_express';
  $strongarm->value = 0;
  $export['comment_anonymous_article_express'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_article_express';
  $strongarm->value = '2';
  $export['comment_article_express'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_article_express';
  $strongarm->value = 1;
  $export['comment_default_mode_article_express'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_article_express';
  $strongarm->value = '50';
  $export['comment_default_per_page_article_express'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_article_express';
  $strongarm->value = 1;
  $export['comment_form_location_article_express'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_article_express';
  $strongarm->value = '1';
  $export['comment_preview_article_express'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_article_express';
  $strongarm->value = 1;
  $export['comment_subject_field_article_express'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__article_express';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'domain' => array(
          'weight' => '1',
        ),
        'domain_path' => array(
          'weight' => '25',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '24',
        ),
        'redirect' => array(
          'weight' => '23',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'domain' => array(
          'web_cancer_portal_video_library' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__article_express'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_article_express';
  $strongarm->value = '1';
  $export['node_preview_article_express'] = $strongarm;

  return $export;
}
