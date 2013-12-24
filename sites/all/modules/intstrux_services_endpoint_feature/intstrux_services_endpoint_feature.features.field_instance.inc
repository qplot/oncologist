<?php
/**
 * @file
 * intstrux_services_endpoint_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function intstrux_services_endpoint_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page_html-field_abstract'
  $field_instances['node-page_html-field_abstract'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The abstract represents the full article in views and other aggregations.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abstract',
    'label' => 'Abstract',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 43,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
    'widget_type' => 'text_textarea',
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_author'
  $field_instances['node-page_html-field_article_author'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 12,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_author',
    'label' => 'Article Author',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_body'
  $field_instances['node-page_html-field_article_body'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_body',
    'label' => 'Article Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_edited_date'
  $field_instances['node-page_html-field_article_edited_date'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_edited_date',
    'label' => 'Article Edited Date',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-page_html-field_article_id'
  $field_instances['node-page_html-field_article_id'] = array(
    'bundle' => 'page_html',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intstrux_highwire_field',
        'settings' => array(),
        'type' => 'intstrux_highwire_full',
        'weight' => 10,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'intstrux_highwire_field',
        'settings' => array(),
        'type' => 'intstrux_highwire_full',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'intstrux_highwire_field',
        'settings' => array(),
        'type' => 'intstrux_highwire_full',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'module' => 'intstrux_highwire_field',
        'settings' => array(),
        'type' => 'intstrux_highwire_full',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_id',
    'label' => 'Article Id',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'intstrux_highwire_field',
      'settings' => array(),
      'type' => 'intstrux_highwire_field_browser',
      'weight' => 42,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_issue'
  $field_instances['node-page_html-field_article_issue'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 17,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_issue',
    'label' => 'Article Issue',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_month'
  $field_instances['node-page_html-field_article_month'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 11,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_month',
    'label' => 'Article Month',
    'required' => 0,
    'settings' => array(
      'max' => 12,
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_page'
  $field_instances['node-page_html-field_article_page'] = array(
    'bundle' => 'page_html',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Determines the order of the articles within the article container. 1 is the front/first article, higher numbers follow after/below.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_page',
    'label' => 'Article Page',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_published_date'
  $field_instances['node-page_html-field_article_published_date'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_published_date',
    'label' => 'Article Published Date',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_title'
  $field_instances['node-page_html-field_article_title'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please use the same as main title. NOTE: this field will be removed in the near future',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 41,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
    'widget_type' => 'text_textfield',
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_type'
  $field_instances['node-page_html-field_article_type'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 41,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 41,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_type',
    'label' => 'Article Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_updated_date'
  $field_instances['node-page_html-field_article_updated_date'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_updated_date',
    'label' => 'Article Updated Date',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_volume'
  $field_instances['node-page_html-field_article_volume'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 13,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_volume',
    'label' => 'Article Volume',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_article_year'
  $field_instances['node-page_html-field_article_year'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 16,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_year',
    'label' => 'Article Year',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_authors'
  $field_instances['node-page_html-field_authors'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The authors of this article if any',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_authors',
    'label' => 'Authors',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 42,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 255,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
    'widget_type' => 'text_textfield',
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_bannerhtmlfile'
  $field_instances['node-page_html-field_bannerhtmlfile'] = array(
    'bundle' => 'page_html',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'The banner ad version of this HTML page. used by the HD apps.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 37,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 37,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 37,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 37,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bannerhtmlfile',
    'label' => 'Banner HTML File',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'htm html',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 37,
    'widget' => array(
      'active' => 0,
      'module' => 'file',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          'attach' => 0,
          'imce' => 0,
          'reference' => 0,
          'remote' => 0,
        ),
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 16,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-page_html-field_collection_multisite'
  $field_instances['node-page_html-field_collection_multisite'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_collection_multisite',
    'label' => 'Multisite recognition',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-page_html-field_embeddedfiles'
  $field_instances['node-page_html-field_embeddedfiles'] = array(
    'bundle' => 'page_html',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Specify JS, CSS or files other than images which need to be included with this HTML content for offline viewing',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 40,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 40,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 40,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_embeddedfiles',
    'label' => 'Embedded Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'js css pdf mp4 mov m4v',
      'filefield_paths' => array(
        'active_updating' => 1,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => 'article_manual/[node:nid]',
        ),
        'retroactive_update' => 0,
      ),
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 40,
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
          ),
          'source_attach' => array(
            'absolute' => NULL,
            'attach_mode' => 'move',
            'path' => '',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 38,
    ),
    'widget_type' => 'filefield_widget',
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_embeddedimage'
  $field_instances['node-page_html-field_embeddedimage'] = array(
    'bundle' => 'page_html',
    'deleted' => 0,
    'description' => 'Specify an image referenced within the HTML which needs to be offline available in the App',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 145,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 145,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 145,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_embeddedimage',
    'label' => 'Embedded Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => 'article_manual/[node:nid]',
        ),
        'retroactive_update' => 0,
      ),
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '1x1',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
          ),
          'source_attach' => array(
            'absolute' => NULL,
            'attach_mode' => 'move',
            'path' => '',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
      ),
      'type' => 'image_image',
      'weight' => 37,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_htmlfile'
  $field_instances['node-page_html-field_htmlfile'] = array(
    'bundle' => 'page_html',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'The actual full HTML article.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 36,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 36,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 36,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_htmlfile',
    'label' => 'HTML File',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'htm html',
      'filefield_paths' => array(
        'active_updating' => 1,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => 'article_manual/[node:nid]',
        ),
        'retroactive_update' => 0,
      ),
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 36,
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
          ),
          'source_attach' => array(
            'absolute' => NULL,
            'attach_mode' => 'move',
            'path' => '',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 36,
    ),
    'widget_type' => 'filefield_widget',
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_htmlpage_downloadsize'
  $field_instances['node-page_html-field_htmlpage_downloadsize'] = array(
    'bundle' => 'page_html',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'The Size of this item when downloaded for offline storage',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 44,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 44,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 44,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_htmlpage_downloadsize',
    'label' => 'Download Size',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 44,
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 41,
    ),
    'widget_type' => 'computed',
  );

  // Exported field_instance: 'node-page_html-field_inject_category'
  $field_instances['node-page_html-field_inject_category'] = array(
    'bundle' => 'page_html',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check if you don\'t want the category injected into html ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 38,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 38,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 38,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_inject_category',
    'label' => 'Inject category into page',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 38,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 14,
    ),
    'widget_type' => 'optionwidgets_onoff',
  );

  // Exported field_instance: 'node-page_html-field_release_date'
  $field_instances['node-page_html-field_release_date'] = array(
    'bundle' => 'page_html',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 146,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_release_date',
    'label' => 'Release Date',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 40,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_tax_article'
  $field_instances['node-page_html-field_tax_article'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The container of this article. Even so this field is optional the article will not be listed in the menu until this field has been selected. <br>
To create an Article Container navigate to Taxonomy > Article Container > Add Term',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 14,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_article',
    'label' => 'Article Container [Issue, Supplement...]',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_tax_edition'
  $field_instances['node-page_html-field_tax_edition'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The edition the content belongs to. Multiple selections are allowed. [REQUIRED]',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 46,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 46,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_edition',
    'label' => 'Edition',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_tax_section'
  $field_instances['node-page_html-field_tax_section'] = array(
    'bundle' => 'page_html',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The sections/ categories this content belongs to. Multiple selections are allowed. This field allows content to be marked for STO and CME under the Others parent item. [OPTIONAL]',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 40,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 40,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_section',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_html-field_unified_sorting_date'
  $field_instances['node-page_html-field_unified_sorting_date'] = array(
    'bundle' => 'page_html',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 147,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_unified_sorting_date',
    'label' => 'Unified Sorting Date',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 44,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'taxonomy_term-magazines-field_tax_magazine_type'
  $field_instances['taxonomy_term-magazines-field_tax_magazine_type'] = array(
    'bundle' => 'magazines',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_tax_magazine_type',
    'label' => 'Magazine Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abstract');
  t('Article Author');
  t('Article Body');
  t('Article Container [Issue, Supplement...]');
  t('Article Edited Date');
  t('Article Id');
  t('Article Issue');
  t('Article Month');
  t('Article Page');
  t('Article Published Date');
  t('Article Type');
  t('Article Updated Date');
  t('Article Volume');
  t('Article Year');
  t('Authors');
  t('Banner HTML File');
  t('Check if you don\'t want the category injected into html ');
  t('Determines the order of the articles within the article container. 1 is the front/first article, higher numbers follow after/below.');
  t('Download Size');
  t('Edition');
  t('Embedded Files');
  t('Embedded Image');
  t('HTML File');
  t('Inject category into page');
  t('Magazine Type');
  t('Multisite recognition');
  t('Please use the same as main title. NOTE: this field will be removed in the near future');
  t('Release Date');
  t('Sections');
  t('Specify JS, CSS or files other than images which need to be included with this HTML content for offline viewing');
  t('Specify an image referenced within the HTML which needs to be offline available in the App');
  t('The Size of this item when downloaded for offline storage');
  t('The abstract represents the full article in views and other aggregations.');
  t('The actual full HTML article.
');
  t('The authors of this article if any');
  t('The banner ad version of this HTML page. used by the HD apps.');
  t('The container of this article. Even so this field is optional the article will not be listed in the menu until this field has been selected. <br>
To create an Article Container navigate to Taxonomy > Article Container > Add Term');
  t('The edition the content belongs to. Multiple selections are allowed. [REQUIRED]');
  t('The sections/ categories this content belongs to. Multiple selections are allowed. This field allows content to be marked for STO and CME under the Others parent item. [OPTIONAL]');
  t('Title');
  t('Unified Sorting Date');

  return $field_instances;
}
