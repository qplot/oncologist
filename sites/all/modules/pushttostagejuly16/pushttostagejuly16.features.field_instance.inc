<?php
/**
 * @file
 * pushttostagejuly16.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pushttostagejuly16_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-apns_client-field_apns_edition'
  $field_instances['node-apns_client-field_apns_edition'] = array(
    'bundle' => 'apns_client',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_apns_edition][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 41,
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
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
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
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_apns_edition',
    'label' => 'Edition',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 41,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-apns_client-field_apns_status'
  $field_instances['node-apns_client-field_apns_status'] = array(
    'bundle' => 'apns_client',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
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
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 42,
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
        'weight' => 42,
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
        'weight' => 42,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 42,
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
        'weight' => 42,
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
        'weight' => 42,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_apns_status',
    'label' => 'Status',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 42,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'options_select',
      'weight' => 42,
    ),
    'widget_type' => 'optionwidgets_select',
  );

  // Exported field_instance: 'node-apns_client-field_apns_token'
  $field_instances['node-apns_client-field_apns_token'] = array(
    'bundle' => 'apns_client',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_apns_token][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_apns_token',
    'label' => 'APNS Token',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 36,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 64,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-apns_client-field_apns_udid'
  $field_instances['node-apns_client-field_apns_udid'] = array(
    'bundle' => 'apns_client',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_apns_udid][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_apns_udid',
    'label' => 'Device UDID',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 37,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-apns_client-field_apns_userid'
  $field_instances['node-apns_client-field_apns_userid'] = array(
    'bundle' => 'apns_client',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_apns_userid][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 38,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 38,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 38,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 38,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_apns_userid',
    'label' => 'User ID',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 38,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 38,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-apns_client-field_app_bundleid'
  $field_instances['node-apns_client-field_app_bundleid'] = array(
    'bundle' => 'apns_client',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_app_bundleid][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => 'The Bundle identifier of the application. Usually in the following format: com.intstrux.[app name]',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_app_bundleid',
    'label' => 'Bundle Identifier',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 39,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 39,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-apns_client-field_app_ios_version'
  $field_instances['node-apns_client-field_app_ios_version'] = array(
    'bundle' => 'apns_client',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_app_ios_version][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => 'The version number of this application. Format X.X.X -> 1.0.0 This needs to match the store version number.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_app_ios_version',
    'label' => 'Version',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 40,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-article-field_abstract'
  $field_instances['node-article-field_abstract'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
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
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
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
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 400,
        ),
        'type' => 'text_trimmed',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abstract',
    'label' => 'Abstract',
    'required' => 0,
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
      'weight' => 13,
    ),
    'widget_type' => 'text_textarea',
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_admin_title'
  $field_instances['node-article-field_admin_title'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_title',
    'label' => 'admin_title',
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
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_author'
  $field_instances['node-article-field_article_author'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_body'
  $field_instances['node-article-field_article_body'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_edited_date'
  $field_instances['node-article-field_article_edited_date'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
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
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-article-field_article_id'
  $field_instances['node-article-field_article_id'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'intstrux_highwire_field',
        'settings' => array(),
        'type' => 'intstrux_highwire_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'intstrux_highwire_field',
        'settings' => array(),
        'type' => 'intstrux_highwire_default',
        'weight' => 1,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'hidden',
        'module' => 'intstrux_highwire_field',
        'settings' => array(),
        'type' => 'intstrux_highwire_default',
        'weight' => 1,
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
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_issue'
  $field_instances['node-article-field_article_issue'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_month'
  $field_instances['node-article-field_article_month'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
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
      'weight' => 18,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_page'
  $field_instances['node-article-field_article_page'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_page',
    'label' => 'Article Page',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 19,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_published_date'
  $field_instances['node-article-field_article_published_date'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'select_or_other',
        'settings' => array(),
        'type' => 'select_or_other_formatter',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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
      'weight' => 22,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_title'
  $field_instances['node-article-field_article_title'] = array(
    'bundle' => 'article',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_article_title][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
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
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_title',
    'label' => 'Article Title',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 41,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-article-field_article_type'
  $field_instances['node-article-field_article_type'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_updated_date'
  $field_instances['node-article-field_article_updated_date'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
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
      'weight' => 23,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_volume'
  $field_instances['node-article-field_article_volume'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_year'
  $field_instances['node-article-field_article_year'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_article_year_int'
  $field_instances['node-article-field_article_year_int'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_year_int',
    'label' => 'Article Year Int',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 15,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_authors'
  $field_instances['node-article-field_authors'] = array(
    'bundle' => 'article',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_authors][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 4,
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
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
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
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_authors',
    'label' => 'Authors',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 42,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-article-field_collection_multisite'
  $field_instances['node-article-field_collection_multisite'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-article-field_embeddedfiles'
  $field_instances['node-article-field_embeddedfiles'] = array(
    'bundle' => 'article',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Specify JS, CSS or files other than images which need to be included with this HTML content for offline viewing',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
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
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_embeddedfiles',
    'label' => 'Embedded Files',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'js css pdf mp4 mov m4v',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 40,
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
          'imce' => 'imce',
          'reference' => 0,
          'remote' => 0,
        ),
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 21,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-article-field_embeddedimage'
  $field_instances['node-article-field_embeddedimage'] = array(
    'bundle' => 'article',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Specify an image referenced within the HTML which needs to be offline available in the App',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 39,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 39,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 39,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_embeddedimage',
    'label' => 'Embedded Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => '1x1',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 39,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          'attach' => 0,
          'imce' => 'imce',
          'reference' => 0,
          'remote' => 0,
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 20,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-article-field_issue_label'
  $field_instances['node-article-field_issue_label'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_label',
    'label' => 'Issue Label',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_issue_label_overwrite'
  $field_instances['node-article-field_issue_label_overwrite'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_label_overwrite',
    'label' => 'Issue Label Overwrite',
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
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_release_date'
  $field_instances['node-article-field_release_date'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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
      'weight' => 30,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article-field_tax_edition'
  $field_instances['node-article-field_tax_edition'] = array(
    'bundle' => 'article',
    'default_value' => array(
      0 => array(
        'tid' => 3272,
      ),
      1 => array(
        'tid' => 3257,
      ),
    ),
    'deleted' => 0,
    'description' => 'Specify the edition this content belongs to',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_edition',
    'label' => 'Edition visibility',
    'required' => 0,
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

  // Exported field_instance: 'node-article-field_tax_section'
  $field_instances['node-article-field_tax_section'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please select one or more Section/ Categories',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_section',
    'label' => 'Sections/ Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_abstract'
  $field_instances['node-article_express-field_abstract'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
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
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
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
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abstract',
    'label' => 'Abstract',
    'required' => 0,
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
      'weight' => 13,
    ),
    'widget_type' => 'text_textarea',
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_admin_title'
  $field_instances['node-article_express-field_admin_title'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_title',
    'label' => 'admin_title',
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
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_author'
  $field_instances['node-article_express-field_article_author'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_body'
  $field_instances['node-article_express-field_article_body'] = array(
    'bundle' => 'article_express',
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
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_edited_date'
  $field_instances['node-article_express-field_article_edited_date'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-article_express-field_article_id'
  $field_instances['node-article_express-field_article_id'] = array(
    'bundle' => 'article_express',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
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
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_issue'
  $field_instances['node-article_express-field_article_issue'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_month'
  $field_instances['node-article_express-field_article_month'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
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
      'weight' => 18,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_page'
  $field_instances['node-article_express-field_article_page'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_page',
    'label' => 'Article Page',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 19,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_published_date'
  $field_instances['node-article_express-field_article_published_date'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'module' => 'select_or_other',
        'settings' => array(),
        'type' => 'select_or_other_formatter',
        'weight' => 1,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'hidden',
        'module' => 'select_or_other',
        'settings' => array(),
        'type' => 'select_or_other_formatter',
        'weight' => 1,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'module' => 'select_or_other',
        'settings' => array(),
        'type' => 'select_or_other_formatter',
        'weight' => 1,
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
      'weight' => 22,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_title'
  $field_instances['node-article_express-field_article_title'] = array(
    'bundle' => 'article_express',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_article_title][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
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
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
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
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_title',
    'label' => 'Article Title',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 41,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-article_express-field_article_type'
  $field_instances['node-article_express-field_article_type'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_updated_date'
  $field_instances['node-article_express-field_article_updated_date'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
      'weight' => 23,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_volume'
  $field_instances['node-article_express-field_article_volume'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_year'
  $field_instances['node-article_express-field_article_year'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_article_year_int'
  $field_instances['node-article_express-field_article_year_int'] = array(
    'bundle' => 'article_express',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_year_int',
    'label' => 'Article Year Int',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 15,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_authors'
  $field_instances['node-article_express-field_authors'] = array(
    'bundle' => 'article_express',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_authors][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'select_or_other',
        'settings' => array(),
        'type' => 'select_or_other_formatter',
        'weight' => 0,
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
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_authors',
    'label' => 'Authors',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 42,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-article_express-field_issue_label'
  $field_instances['node-article_express-field_issue_label'] = array(
    'bundle' => 'article_express',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_label',
    'label' => 'Issue Label',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_issue_label_overwrite'
  $field_instances['node-article_express-field_issue_label_overwrite'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_label_overwrite',
    'label' => 'Issue Label Overwrite',
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
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-article_express-field_tax_section'
  $field_instances['node-article_express-field_tax_section'] = array(
    'bundle' => 'article_express',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please select one or more Section/ Categories',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_section',
    'label' => 'Sections/ Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-asset_audio-body'
  $field_instances['node-asset_audio-body'] = array(
    'bundle' => 'asset_audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the individual audio asset',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 600,
        'type' => 'text_summary_or_trimmed',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-asset_audio-field_asset_search'
  $field_instances['node-asset_audio-field_asset_search'] = array(
    'bundle' => 'asset_audio',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 54,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 54,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 54,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 54,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 54,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 54,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_asset_search',
    'label' => 'Search Field',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 54,
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
      ),
      'type' => 'computed',
      'weight' => 54,
    ),
    'widget_type' => 'computed',
  );

  // Exported field_instance: 'node-asset_audio-field_audio_description'
  $field_instances['node-asset_audio-field_audio_description'] = array(
    'bundle' => 'asset_audio',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_audio_description][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio_description',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 2,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_audio-field_audio_featured'
  $field_instances['node-asset_audio-field_audio_featured'] = array(
    'bundle' => 'asset_audio',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_audio_featured][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio_featured',
    'label' => 'Featured Section',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 3,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_audio-field_audio_isremote'
  $field_instances['node-asset_audio-field_audio_isremote'] = array(
    'bundle' => 'asset_audio',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose between streaming audio to the device or downloading and storing audio on the device for offline playback.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => -4,
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
        'weight' => -4,
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
        'weight' => -4,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => -4,
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
        'weight' => -4,
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
        'weight' => -4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio_isremote',
    'label' => 'Audio will be made available:',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => -4,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'options_buttons',
      'weight' => -4,
    ),
    'widget_type' => 'optionwidgets_buttons',
  );

  // Exported field_instance: 'node-asset_audio-field_audio_localaudio'
  $field_instances['node-asset_audio-field_audio_localaudio'] = array(
    'bundle' => 'asset_audio',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => -3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => -3,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => -3,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => -3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => -3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => -3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio_localaudio',
    'label' => 'Download and Store Audio Source',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp3',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => -3,
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
          'imce' => 'imce',
          'reference' => 0,
          'remote' => 0,
        ),
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => -3,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-asset_audio-field_audio_remoteaudio'
  $field_instances['node-asset_audio-field_audio_remoteaudio'] = array(
    'bundle' => 'asset_audio',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_audio_remoteaudio][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -2,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio_remoteaudio',
    'label' => 'Streaming Audio URL',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_audio-field_audio_speaker'
  $field_instances['node-asset_audio-field_audio_speaker'] = array(
    'bundle' => 'asset_audio',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_audio_speaker][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio_speaker',
    'label' => 'Speaker',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => -1,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_audio-field_audio_thumbimage'
  $field_instances['node-asset_audio-field_audio_thumbimage'] = array(
    'bundle' => 'asset_audio',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio_thumbimage',
    'label' => 'Thumbnail Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png jpg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 1,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          'attach' => 0,
          'imce' => 'imce',
          'reference' => 0,
          'remote' => 0,
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-asset_audio-field_audio_title'
  $field_instances['node-asset_audio-field_audio_title'] = array(
    'bundle' => 'asset_audio',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_audio_title][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio_title',
    'label' => 'Title',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 0,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_audio-field_featured'
  $field_instances['node-asset_audio-field_featured'] = array(
    'bundle' => 'asset_audio',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Specify if this item can be featured or not. Other criteria like post date will come into effect for the actual featured list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 34,
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
        'weight' => 34,
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
        'weight' => 34,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 34,
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
        'weight' => 34,
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
        'weight' => 34,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured',
    'label' => 'Featured',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 34,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 34,
    ),
    'widget_type' => 'optionwidgets_onoff',
  );

  // Exported field_instance: 'node-asset_audio-taxonomy_vocabulary_2'
  $field_instances['node-asset_audio-taxonomy_vocabulary_2'] = array(
    'bundle' => 'asset_audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_2',
    'label' => 'video asset tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-asset_audio-taxonomy_vocabulary_3'
  $field_instances['node-asset_audio-taxonomy_vocabulary_3'] = array(
    'bundle' => 'asset_audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_3',
    'label' => 'Audio',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-asset_audio-taxonomy_vocabulary_4'
  $field_instances['node-asset_audio-taxonomy_vocabulary_4'] = array(
    'bundle' => 'asset_audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_4',
    'label' => 'Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-asset_audio-taxonomy_vocabulary_5'
  $field_instances['node-asset_audio-taxonomy_vocabulary_5'] = array(
    'bundle' => 'asset_audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_5',
    'label' => 'Meetings',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-asset_image-field_abstract'
  $field_instances['node-asset_image-field_abstract'] = array(
    'bundle' => 'asset_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The abstract represents the full article in views and other aggregations.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abstract',
    'label' => 'Abstract',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-asset_image-field_admin_title'
  $field_instances['node-asset_image-field_admin_title'] = array(
    'bundle' => 'asset_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_title',
    'label' => 'Administrative Title [Internal use only]',
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
      'weight' => 5,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-asset_image-field_article_page'
  $field_instances['node-asset_image-field_article_page'] = array(
    'bundle' => 'asset_image',
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
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_page',
    'label' => 'Article Page',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
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

  // Exported field_instance: 'node-asset_image-field_article_title'
  $field_instances['node-asset_image-field_article_title'] = array(
    'bundle' => 'asset_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_title',
    'label' => 'Article Title',
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
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-asset_image-field_authors'
  $field_instances['node-asset_image-field_authors'] = array(
    'bundle' => 'asset_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The authors of this article if any',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-asset_image-field_image_image'
  $field_instances['node-asset_image-field_image_image'] = array(
    'bundle' => 'asset_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image_image',
    'label' => 'Image',
    'required' => 1,
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
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
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
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
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
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-asset_image-field_tax_article'
  $field_instances['node-asset_image-field_tax_article'] = array(
    'bundle' => 'asset_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_article',
    'label' => 'Taxonomy: Issue (currently named Article by mistake)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-asset_image-field_tax_edition'
  $field_instances['node-asset_image-field_tax_edition'] = array(
    'bundle' => 'asset_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_edition',
    'label' => 'tax_edition',
    'required' => 0,
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

  // Exported field_instance: 'node-asset_image-field_tax_section'
  $field_instances['node-asset_image-field_tax_section'] = array(
    'bundle' => 'asset_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_section',
    'label' => 'Taxonomy: Section (Preferences)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-asset_video-body'
  $field_instances['node-asset_video-body'] = array(
    'bundle' => 'asset_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the individual video node',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-asset_video-field_asset_disclaimer_required'
  $field_instances['node-asset_video-field_asset_disclaimer_required'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => NULL,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
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
        'weight' => 18,
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
        'weight' => 18,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 18,
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
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 18,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_asset_disclaimer_required',
    'label' => 'Disclaimer Required',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 18,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 18,
    ),
    'widget_type' => 'optionwidgets_onoff',
  );

  // Exported field_instance: 'node-asset_video-field_asset_disclaimer_text'
  $field_instances['node-asset_video-field_asset_disclaimer_text'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_asset_disclaimer_text][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_asset_disclaimer_text',
    'label' => 'Disclaimer Text',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 19,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textarea',
      'weight' => 19,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-asset_video-field_asset_rating'
  $field_instances['node-asset_video-field_asset_rating'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 64,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 64,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 64,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 64,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 64,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_asset_rating',
    'label' => 'Rating',
    'required' => FALSE,
    'settings' => array(
      'stars' => 5,
      'user_register_form' => FALSE,
    ),
    'weight' => 64,
    'widget' => array(
      'active' => 0,
      'module' => 'fivestar',
      'settings' => array(
        'allow_clear' => 1,
        'default_value' => NULL,
        'default_value_php' => NULL,
        'widget' => array(
          'fivestar_widget' => 'default',
        ),
      ),
      'type' => 'stars',
      'weight' => 32,
    ),
    'widget_type' => 'stars',
  );

  // Exported field_instance: 'node-asset_video-field_asset_search'
  $field_instances['node-asset_video-field_asset_search'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 63,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 63,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 63,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 63,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 63,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_asset_search',
    'label' => 'Search Field',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 63,
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
      ),
      'type' => 'computed',
      'weight' => 31,
    ),
    'widget_type' => 'computed',
  );

  // Exported field_instance: 'node-asset_video-field_asset_swf_file'
  $field_instances['node-asset_video-field_asset_swf_file'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 62,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 62,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 62,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 62,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 62,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_asset_swf_file',
    'label' => 'SWF File',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 62,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
      ),
      'type' => 'options_buttons',
      'weight' => 30,
    ),
    'widget_type' => 'optionwidgets_buttons',
  );

  // Exported field_instance: 'node-asset_video-field_asset_xml_file'
  $field_instances['node-asset_video-field_asset_xml_file'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
        'weight' => 61,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 61,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 61,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 61,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 61,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_asset_xml_file',
    'label' => 'XML File Location',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 61,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_video-field_bc_filesize'
  $field_instances['node-asset_video-field_bc_filesize'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
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
        'weight' => 37,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bc_filesize',
    'label' => 'Brightcove Filesize',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 37,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_video-field_bc_thumbnail'
  $field_instances['node-asset_video-field_bc_thumbnail'] = array(
    'bundle' => 'asset_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bc_thumbnail',
    'label' => 'Brightcove Thumbnail',
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
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-asset_video-field_bcexport'
  $field_instances['node-asset_video-field_bcexport'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'video_id' => '',
        '_error_element' => 'default_value_widget][field_bcexport][0][video_id][video_id',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'brightcove_field',
        'settings' => array(),
        'type' => 'entity_link_thumbnailURL',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 36,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 36,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'hidden',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 360,
          'width' => 640,
        ),
        'type' => 'default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bcexport',
    'label' => 'Brightcove Id',
    'required' => FALSE,
    'settings' => array(
      'allow_upload' => 0,
      'brightcove_player' => '',
      'per_content_player' => FALSE,
      'user_register_form' => FALSE,
    ),
    'weight' => 36,
    'widget' => array(
      'active' => 1,
      'module' => 'brightcove_field',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'brightcove_field_browser',
      'weight' => 12,
    ),
    'widget_type' => 'brightcove_cck_browser',
  );

  // Exported field_instance: 'node-asset_video-field_bcm_archive_status'
  $field_instances['node-asset_video-field_bcm_archive_status'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
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
        'weight' => 35,
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
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 35,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bcm_archive_status',
    'label' => 'BCM Archive Status',
    'required' => FALSE,
    'settings' => array(
      'max' => 4,
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 35,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
    'widget_type' => 'optionwidgets_select',
  );

  // Exported field_instance: 'node-asset_video-field_bcm_status'
  $field_instances['node-asset_video-field_bcm_status'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
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
        'weight' => 34,
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
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 34,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bcm_status',
    'label' => 'BCM Status',
    'required' => FALSE,
    'settings' => array(
      'max' => 4,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 34,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
    'widget_type' => 'optionwidgets_select',
  );

  // Exported field_instance: 'node-asset_video-field_bcm_update'
  $field_instances['node-asset_video-field_bcm_update'] = array(
    'bundle' => 'asset_video',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'height' => 350,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
          'width' => 425,
        ),
        'type' => 'date_default',
        'weight' => 33,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'height' => 350,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
          'width' => 425,
        ),
        'type' => 'date_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'height' => 350,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
          'width' => 425,
        ),
        'type' => 'date_default',
        'weight' => 33,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bcm_update',
    'label' => 'BCM Update',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'now',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 33,
    'widget' => array(
      'active' => 0,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 1,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => 'U',
        'label_position' => 'above',
        'repeat_collapsed' => '',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 9,
    ),
    'widget_type' => 'date_text',
  );

  // Exported field_instance: 'node-asset_video-field_cme_abstract'
  $field_instances['node-asset_video-field_cme_abstract'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_cme_abstract][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
        'weight' => 7,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cme_abstract',
    'label' => 'CME Abstract',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 7,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-asset_video-field_cme_id'
  $field_instances['node-asset_video-field_cme_id'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_cme_id][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => 'If this video is connected to a CME test, the CME test id needs to be entered here. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
        'weight' => 6,
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
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 6,
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
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cme_id',
    'label' => 'CME ID',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 6,
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'number',
      'weight' => 6,
    ),
    'widget_type' => 'number',
  );

  // Exported field_instance: 'node-asset_video-field_collection_multisite'
  $field_instances['node-asset_video-field_collection_multisite'] = array(
    'bundle' => 'asset_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-asset_video-field_featured'
  $field_instances['node-asset_video-field_featured'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Specify if this item can be featured or not. Other criteria like post date will come into effect for the actual featured list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
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
        'weight' => 53,
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
        'weight' => 53,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 53,
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
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured',
    'label' => 'Featured',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 53,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 21,
    ),
    'widget_type' => 'optionwidgets_onoff',
  );

  // Exported field_instance: 'node-asset_video-field_featured_weight'
  $field_instances['node-asset_video-field_featured_weight'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
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
        'weight' => 54,
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
        'weight' => 54,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 54,
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
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_weight',
    'label' => 'Featured Weight',
    'required' => FALSE,
    'settings' => array(
      'max' => 10,
      'min' => -10,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 54,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'options_select',
      'weight' => 22,
    ),
    'widget_type' => 'optionwidgets_select',
  );

  // Exported field_instance: 'node-asset_video-field_release_date'
  $field_instances['node-asset_video-field_release_date'] = array(
    'bundle' => 'asset_video',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
      'weight' => 34,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-asset_video-field_sections'
  $field_instances['node-asset_video-field_sections'] = array(
    'bundle' => 'asset_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-asset_video-field_sto_featured_image'
  $field_instances['node-asset_video-field_sto_featured_image'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 60,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 60,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 60,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 60,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 60,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sto_featured_image',
    'label' => 'STO Featured Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 60,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          0 => 1,
          'attach' => FALSE,
          'imce' => FALSE,
          'reference' => FALSE,
          'remote' => FALSE,
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 28,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-asset_video-field_tax_edition'
  $field_instances['node-asset_video-field_tax_edition'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'tid' => 3257,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_edition',
    'label' => 'Edition',
    'required' => 0,
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

  // Exported field_instance: 'node-asset_video-field_video_featured'
  $field_instances['node-asset_video-field_video_featured'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_video_featured][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter Taxonomy term to add to featured video page',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_featured',
    'label' => 'Featured Section',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 39,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_video-field_video_isremote'
  $field_instances['node-asset_video-field_video_isremote'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => 'Please specify if this video asset is supposed to be downloaded and stored on the device for playback (video can be watched offline) or if the video is streamed to the device (internet connection required to watch video).
Note that large videos (>10min) should be streamed to the device and not be made available for download. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
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
        'weight' => 4,
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
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
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
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_isremote',
    'label' => 'Video Source Selection',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 4,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
    'widget_type' => 'optionwidgets_buttons',
  );

  // Exported field_instance: 'node-asset_video-field_video_localvideo'
  $field_instances['node-asset_video-field_video_localvideo'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_localvideo',
    'label' => 'Downloadable Video for Offline Storage ',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'videos',
      'file_extensions' => 'mp4 mov m4v',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 10,
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
          'imce' => 'imce',
          'reference' => 0,
          'remote' => 0,
        ),
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 10,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-asset_video-field_video_mp4video'
  $field_instances['node-asset_video-field_video_mp4video'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_mp4video',
    'label' => 'Brightcove MP4 Video',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 7,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 200,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_video-field_video_popup_size'
  $field_instances['node-asset_video-field_video_popup_size'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 57,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 57,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 57,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_popup_size',
    'label' => 'Popup size',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 57,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 25,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_video-field_video_remotevideo'
  $field_instances['node-asset_video-field_video_remotevideo'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_video_remotevideo][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => 'This read only field shows the currently used video for streaming source URL. You cannot enter a value here, just must specify a source video file above. This field will be updated as soon as the video will become available',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_remotevideo',
    'label' => 'Streaming Video URL',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 6,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_video-field_video_rvideoupload'
  $field_instances['node-asset_video-field_video_rvideoupload'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_rvideoupload',
    'label' => 'Streaming Video',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp4 mov m4v',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 5,
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
          'imce' => 'imce',
          'reference' => 0,
          'remote' => 0,
        ),
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-asset_video-field_video_slideshow_link'
  $field_instances['node-asset_video-field_video_slideshow_link'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_video_slideshow_link][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_slideshow_link',
    'label' => 'Slideshow Link',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 44,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_video-field_video_speaker'
  $field_instances['node-asset_video-field_video_speaker'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_video_speaker][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
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
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
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
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_speaker',
    'label' => 'Speaker',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 42,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_video-field_video_stillframe'
  $field_instances['node-asset_video-field_video_stillframe'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '[Optional] If a picture is provided it will be used as a still frame for the video track of the audio only stream',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_stillframe',
    'label' => 'Audio Stream Still Frame',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => '320x240',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 8,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          'attach' => 0,
          'imce' => 'imce',
          'reference' => 0,
          'remote' => 0,
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-asset_video-field_video_thumbimage'
  $field_instances['node-asset_video-field_video_thumbimage'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 43,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 43,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 43,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_thumbimage',
    'label' => 'Thumbnail Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'video_thumbs',
      'file_extensions' => 'png',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => '10x10',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 43,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          'attach' => 0,
          'imce' => 'imce',
          'reference' => 0,
          'remote' => 0,
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 19,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-asset_video-field_video_title'
  $field_instances['node-asset_video-field_video_title'] = array(
    'bundle' => 'asset_video',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_video_title][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
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
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_title',
    'label' => 'Title',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 41,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 160,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-asset_video-field_videoasset_downloadsize'
  $field_instances['node-asset_video-field_videoasset_downloadsize'] = array(
    'bundle' => 'asset_video',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'The Size of this item when downloaded for offline storage',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_unsanitized',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 58,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 58,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 58,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_videoasset_downloadsize',
    'label' => 'Download Size',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 58,
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
      ),
      'type' => 'computed',
      'weight' => 26,
    ),
    'widget_type' => 'computed',
  );

  // Exported field_instance: 'node-asset_video-taxonomy_vocabulary_3'
  $field_instances['node-asset_video-taxonomy_vocabulary_3'] = array(
    'bundle' => 'asset_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_3',
    'label' => 'Audio',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-asset_video-taxonomy_vocabulary_4'
  $field_instances['node-asset_video-taxonomy_vocabulary_4'] = array(
    'bundle' => 'asset_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_4',
    'label' => 'Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-asset_video-taxonomy_vocabulary_5'
  $field_instances['node-asset_video-taxonomy_vocabulary_5'] = array(
    'bundle' => 'asset_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_5',
    'label' => 'Meetings',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-challenging_case-body'
  $field_instances['node-challenging_case-body'] = array(
    'bundle' => 'challenging_case',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describes a Challenging Case',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-challenging_case-field_cc_abstract'
  $field_instances['node-challenging_case-field_cc_abstract'] = array(
    'bundle' => 'challenging_case',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
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
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cc_abstract',
    'label' => 'Abstract',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 41,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-challenging_case-field_cc_con_html'
  $field_instances['node-challenging_case-field_cc_con_html'] = array(
    'bundle' => 'challenging_case',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cc_con_html',
    'label' => 'Con KOL HTML',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 18,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 10,
        'size' => 60,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-challenging_case-field_cc_con_kol_affiliation'
  $field_instances['node-challenging_case-field_cc_con_kol_affiliation'] = array(
    'bundle' => 'challenging_case',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cc_con_kol_affiliation',
    'label' => 'Con KOL Affiliation',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 17,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-challenging_case-field_cc_con_kol_image'
  $field_instances['node-challenging_case-field_cc_con_kol_image'] = array(
    'bundle' => 'challenging_case',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 15,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 15,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 15,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cc_con_kol_image',
    'label' => 'Con KOL Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 15,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
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
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 15,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-challenging_case-field_cc_con_kol_name'
  $field_instances['node-challenging_case-field_cc_con_kol_name'] = array(
    'bundle' => 'challenging_case',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cc_con_kol_name',
    'label' => 'Con KOL Name',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 16,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-challenging_case-field_cc_html'
  $field_instances['node-challenging_case-field_cc_html'] = array(
    'bundle' => 'challenging_case',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cc_html',
    'label' => 'General HTML',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 22,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 10,
        'size' => 60,
      ),
      'type' => 'text_textarea',
      'weight' => 22,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-challenging_case-field_cc_pro_html'
  $field_instances['node-challenging_case-field_cc_pro_html'] = array(
    'bundle' => 'challenging_case',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cc_pro_html',
    'label' => 'Pro KOL HTML',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'weight' => 10,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 10,
        'size' => 60,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-challenging_case-field_cc_pro_kol_affiliation'
  $field_instances['node-challenging_case-field_cc_pro_kol_affiliation'] = array(
    'bundle' => 'challenging_case',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cc_pro_kol_affiliation',
    'label' => 'Pro KOL Affiliation',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 9,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-challenging_case-field_cc_pro_kol_image'
  $field_instances['node-challenging_case-field_cc_pro_kol_image'] = array(
    'bundle' => 'challenging_case',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cc_pro_kol_image',
    'label' => 'Pro KOL Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 8,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
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
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-challenging_case-field_cc_pro_kol_name'
  $field_instances['node-challenging_case-field_cc_pro_kol_name'] = array(
    'bundle' => 'challenging_case',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
        'weight' => 7,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cc_pro_kol_name',
    'label' => 'Pro KOL Name',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 7,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-challenging_case-field_collection_multisite'
  $field_instances['node-challenging_case-field_collection_multisite'] = array(
    'bundle' => 'challenging_case',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-challenging_case-field_tax_edition'
  $field_instances['node-challenging_case-field_tax_edition'] = array(
    'bundle' => 'challenging_case',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_edition',
    'label' => 'Edition',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-challenging_case-field_tax_section'
  $field_instances['node-challenging_case-field_tax_section'] = array(
    'bundle' => 'challenging_case',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_section',
    'label' => 'Tax Section',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-edition-body'
  $field_instances['node-edition-body'] = array(
    'bundle' => 'edition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A country, region and/or language specific version of the application ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 600,
        'type' => 'text_summary_or_trimmed',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-edition-field_edition_mainapp'
  $field_instances['node-edition-field_edition_mainapp'] = array(
    'bundle' => 'edition',
    'default_value' => array(
      0 => array(
        'nid' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'node_reference_default',
        'weight' => -2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'node_reference_default',
        'weight' => -2,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'node_reference_default',
        'weight' => -2,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'node_reference_default',
        'weight' => -2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'node_reference_default',
        'weight' => -2,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'node_reference_default',
        'weight' => -2,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'node_reference_default',
        'weight' => -2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_edition_mainapp',
    'label' => 'Application',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'default_value_php' => NULL,
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => -2,
    ),
    'widget_type' => 'nodereference_select',
  );

  // Exported field_instance: 'node-edition-field_edition_master'
  $field_instances['node-edition-field_edition_master'] = array(
    'bundle' => 'edition',
    'default_value' => array(
      0 => array(
        'value' => NULL,
      ),
    ),
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
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => -3,
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
        'weight' => -3,
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
        'weight' => -3,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => -3,
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
        'weight' => -3,
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
        'weight' => -3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_edition_master',
    'label' => 'Master Edition',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => -3,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => -3,
    ),
    'widget_type' => 'optionwidgets_onoff',
  );

  // Exported field_instance: 'node-edition-field_edition_namespace'
  $field_instances['node-edition-field_edition_namespace'] = array(
    'bundle' => 'edition',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_edition_namespace][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_edition_namespace',
    'label' => 'Namespace',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => -4,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-meeting-body'
  $field_instances['node-meeting-body'] = array(
    'bundle' => 'meeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A meeting entry',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 600,
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-page-body'
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A blank Page type',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-page_interactive_ad-body'
  $field_instances['node-page_interactive_ad-body'] = array(
    'bundle' => 'page_interactive_ad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 600,
        'type' => 'text_summary_or_trimmed',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-page_interactive_ad-field_ad_background_image'
  $field_instances['node-page_interactive_ad-field_ad_background_image'] = array(
    'bundle' => 'page_interactive_ad',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_background_image',
    'label' => 'Background Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 2,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
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
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-page_interactive_ad-field_ad_background_video'
  $field_instances['node-page_interactive_ad-field_ad_background_video'] = array(
    'bundle' => 'page_interactive_ad',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_background_video',
    'label' => 'Background Video',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mov mp4 m4v',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 3,
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
      'weight' => 3,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-page_interactive_ad-field_ad_html_file'
  $field_instances['node-page_interactive_ad-field_ad_html_file'] = array(
    'bundle' => 'page_interactive_ad',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
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
        'weight' => 4,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_html_file',
    'label' => 'HTML file',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'html',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 4,
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
      'weight' => 4,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-page_interactive_ad-field_bc_filesize'
  $field_instances['node-page_interactive_ad-field_bc_filesize'] = array(
    'bundle' => 'page_interactive_ad',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bc_filesize',
    'label' => 'Brightcove Filesize',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 0,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-page_interactive_ad-field_bcexport'
  $field_instances['node-page_interactive_ad-field_bcexport'] = array(
    'bundle' => 'page_interactive_ad',
    'default_value' => array(
      0 => array(
        'video_id' => '',
        '_error_element' => 'default_value_widget][field_bcexport][0][video_id][video_id',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => -4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => -4,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => -4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => -4,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => -4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bcexport',
    'label' => 'Brightcove Id',
    'required' => FALSE,
    'settings' => array(
      'allow_upload' => 0,
      'brightcove_player' => '',
      'per_content_player' => FALSE,
      'user_register_form' => FALSE,
    ),
    'weight' => -4,
    'widget' => array(
      'active' => 1,
      'module' => 'brightcove_field',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'brightcove_field_browser',
      'weight' => -4,
    ),
    'widget_type' => 'brightcove_cck_browser',
  );

  // Exported field_instance: 'node-page_interactive_ad-field_bcm_status'
  $field_instances['node-page_interactive_ad-field_bcm_status'] = array(
    'bundle' => 'page_interactive_ad',
    'default_value' => '',
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
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => -2,
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
        'weight' => -2,
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
        'weight' => -2,
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
        'weight' => -2,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => -2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bcm_status',
    'label' => 'BCM Status',
    'required' => FALSE,
    'settings' => array(
      'max' => 4,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
      ),
      'type' => 'options_select',
      'weight' => -2,
    ),
    'widget_type' => 'optionwidgets_select',
  );

  // Exported field_instance: 'node-page_interactive_ad-field_bcm_update'
  $field_instances['node-page_interactive_ad-field_bcm_update'] = array(
    'bundle' => 'page_interactive_ad',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'height' => 350,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
          'width' => 425,
        ),
        'type' => 'date_default',
        'weight' => -3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'height' => 350,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
          'width' => 425,
        ),
        'type' => 'date_default',
        'weight' => -3,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'height' => 350,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
          'width' => 425,
        ),
        'type' => 'date_default',
        'weight' => -3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'height' => 350,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
          'width' => 425,
        ),
        'type' => 'date_default',
        'weight' => -3,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'height' => 350,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
          'width' => 425,
        ),
        'type' => 'date_default',
        'weight' => -3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bcm_update',
    'label' => 'BCM Update',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'now',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => -3,
    'widget' => array(
      'active' => 0,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 1,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => 'U',
        'label_position' => 'above',
        'repeat_collapsed' => '',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => -3,
    ),
    'widget_type' => 'date_text',
  );

  // Exported field_instance: 'node-page_interactive_ad-field_collection_video_mp4videos'
  $field_instances['node-page_interactive_ad-field_collection_video_mp4videos'] = array(
    'bundle' => 'page_interactive_ad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_collection_video_mp4videos',
    'label' => 'BC MP4 Video',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-page_interactive_ad-field_embeddedfiles'
  $field_instances['node-page_interactive_ad-field_embeddedfiles'] = array(
    'bundle' => 'page_interactive_ad',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'Upload all files that will be used locally by the interactive ad',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_embeddedfiles',
    'label' => 'Embedded Files',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => '',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 5,
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
          'imce' => 'imce',
          'reference' => 0,
          'remote' => 0,
        ),
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-page_interactive_ad-field_video_mp4background'
  $field_instances['node-page_interactive_ad-field_video_mp4background'] = array(
    'bundle' => 'page_interactive_ad',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_mp4background',
    'label' => 'Brightcove Background Video',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => -1,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-perspective-body'
  $field_instances['node-perspective-body'] = array(
    'bundle' => 'perspective',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The perspective content type is used for sections like the european perspective.
It contains a video/ audio part which is connected to an author with some kind of abstract.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 400,
        ),
        'type' => 'text_trimmed',
        'weight' => 3,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Abstract',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-perspective-field_bc_thumbnail'
  $field_instances['node-perspective-field_bc_thumbnail'] = array(
    'bundle' => 'perspective',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bc_thumbnail',
    'label' => 'Brightcove Thumbnail',
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
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-perspective-field_bcexport'
  $field_instances['node-perspective-field_bcexport'] = array(
    'bundle' => 'perspective',
    'default_value' => array(
      0 => array(
        'video_id' => '',
        '_error_element' => 'default_value_widget][field_bcexport][0][video_id][video_id',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => -4,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => -4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'default',
        'weight' => -4,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'hidden',
        'module' => 'brightcove_field',
        'settings' => array(
          'height' => 360,
          'width' => 640,
        ),
        'type' => 'default',
        'weight' => -4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bcexport',
    'label' => 'Brightcove Id',
    'required' => FALSE,
    'settings' => array(
      'allow_upload' => 0,
      'brightcove_player' => '',
      'per_content_player' => FALSE,
      'user_register_form' => FALSE,
    ),
    'weight' => -4,
    'widget' => array(
      'active' => 1,
      'module' => 'brightcove_field',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'brightcove_field_browser',
      'weight' => 5,
    ),
    'widget_type' => 'brightcove_cck_browser',
  );

  // Exported field_instance: 'node-perspective-field_bcm_status'
  $field_instances['node-perspective-field_bcm_status'] = array(
    'bundle' => 'perspective',
    'default_value' => array(
      0 => array(
        'value' => NULL,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
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
        'weight' => -2,
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
        'weight' => -2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => -2,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bcm_status',
    'label' => 'BCM Status',
    'required' => FALSE,
    'settings' => array(
      'max' => 4,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
    'widget_type' => 'optionwidgets_select',
  );

  // Exported field_instance: 'node-perspective-field_bcm_update'
  $field_instances['node-perspective-field_bcm_update'] = array(
    'bundle' => 'perspective',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'height' => 350,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
          'width' => 425,
        ),
        'type' => 'date_default',
        'weight' => -3,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'height' => 350,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
          'width' => 425,
        ),
        'type' => 'date_default',
        'weight' => -3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'height' => 350,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
          'width' => 425,
        ),
        'type' => 'date_default',
        'weight' => -3,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => -3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bcm_update',
    'label' => 'BCM Update',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'now',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => -3,
    'widget' => array(
      'active' => 0,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 1,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => 'U',
        'label_position' => 'above',
        'repeat_collapsed' => '',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 6,
    ),
    'widget_type' => 'date_text',
  );

  // Exported field_instance: 'node-perspective-field_perspective_author'
  $field_instances['node-perspective-field_perspective_author'] = array(
    'bundle' => 'perspective',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_perspective_author][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => 'The author of this perspective',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_perspective_author',
    'label' => 'Author',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 1,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 255,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-perspective-field_perspective_author_picture'
  $field_instances['node-perspective-field_perspective_author_picture'] = array(
    'bundle' => 'perspective',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'The image of the author',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'perspective_square_100x100',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_perspective_author_picture',
    'label' => 'Author Picture',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 2,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          'attach' => 0,
          'imce' => 'imce',
          'reference' => 'reference',
          'remote' => 'remote',
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 11,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-perspective-field_perspective_direct'
  $field_instances['node-perspective-field_perspective_direct'] = array(
    'bundle' => 'perspective',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_perspective_direct][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_perspective_direct',
    'label' => 'Media URL for direct playback',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 16,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-perspective-field_perspective_fulltext'
  $field_instances['node-perspective-field_perspective_fulltext'] = array(
    'bundle' => 'perspective',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_perspective_fulltext][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
        'weight' => 4,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_perspective_fulltext',
    'label' => 'Full Text',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 4,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
    'widget_type' => 'text_textarea',
  );

  // Exported field_instance: 'node-perspective-field_perspective_hmlembeded'
  $field_instances['node-perspective-field_perspective_hmlembeded'] = array(
    'bundle' => 'perspective',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'List all embedded files described and required by the html article',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 19,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 19,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_perspective_hmlembeded',
    'label' => 'Embedded Files',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg png gif txt css js',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 19,
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
      'weight' => 19,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-perspective-field_perspective_htmlfile'
  $field_instances['node-perspective-field_perspective_htmlfile'] = array(
    'bundle' => 'perspective',
    'default_value' => '',
    'deleted' => 0,
    'description' => 'DO NOT INCLUDE HTML OR BODY TAGS

The html article related to the Perspective. <strong>Note:</strong> All embedded files{images} need to be referenced relative to this html file e.g. <imng src="image.png" and added as embedded files below.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 18,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'file_default',
        'weight' => 18,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_url_plain',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_perspective_htmlfile',
    'label' => 'Article Source File',
    'required' => FALSE,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'html htm',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 18,
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
      'weight' => 18,
    ),
    'widget_type' => 'filefield_widget',
  );

  // Exported field_instance: 'node-perspective-field_perspective_isaudio'
  $field_instances['node-perspective-field_perspective_isaudio'] = array(
    'bundle' => 'perspective',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
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
        'weight' => 17,
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
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 17,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_perspective_isaudio',
    'label' => 'Audio Playback',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 17,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 17,
    ),
    'widget_type' => 'optionwidgets_onoff',
  );

  // Exported field_instance: 'node-perspective-field_perspective_mediathumbnail'
  $field_instances['node-perspective-field_perspective_mediathumbnail'] = array(
    'bundle' => 'perspective',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 14,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 14,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_perspective_mediathumbnail',
    'label' => 'Thumbnail',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 14,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
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
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 14,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-perspective-field_perspective_murl_streamed'
  $field_instances['node-perspective-field_perspective_murl_streamed'] = array(
    'bundle' => 'perspective',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_perspective_murl_streamed][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_perspective_murl_streamed',
    'label' => 'Media URL for streamed playback',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 15,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-perspective-field_perspective_weight'
  $field_instances['node-perspective-field_perspective_weight'] = array(
    'bundle' => 'perspective',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
        'weight' => 7,
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
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_perspective_weight',
    'label' => 'Weight',
    'required' => FALSE,
    'settings' => array(
      'max' => 100,
      'min' => -100,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 7,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'options_select',
      'weight' => 16,
    ),
    'widget_type' => 'optionwidgets_select',
  );

  // Exported field_instance: 'node-perspective-field_sections'
  $field_instances['node-perspective-field_sections'] = array(
    'bundle' => 'perspective',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-perspective-field_tax_edition'
  $field_instances['node-perspective-field_tax_edition'] = array(
    'bundle' => 'perspective',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_edition',
    'label' => 'Edition',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-perspective-taxonomy_vocabulary_6'
  $field_instances['node-perspective-taxonomy_vocabulary_6'] = array(
    'bundle' => 'perspective',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_6',
    'label' => 'Perspectives',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-portal-field_portal_banner'
  $field_instances['node-portal-field_portal_banner'] = array(
    'bundle' => 'portal',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 35,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 35,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 35,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_portal_banner',
    'label' => 'Banner Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 35,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
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
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-portal-field_portal_url'
  $field_instances['node-portal-field_portal_url'] = array(
    'bundle' => 'portal',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_portal_url][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => 'The full URL to the external portal.
Leave empty for "coming soon" message',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_portal_url',
    'label' => 'URL',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 36,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-portal-field_portal_weight'
  $field_instances['node-portal-field_portal_weight'] = array(
    'bundle' => 'portal',
    'default_value' => array(
      0 => array(
        'value' => 0,
        '_error_element' => 'default_value_widget][field_portal_weight][0][value',
      ),
    ),
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
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 37,
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
        'weight' => 37,
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
        'weight' => 37,
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
        'weight' => 37,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_portal_weight',
    'label' => 'Weight',
    'required' => FALSE,
    'settings' => array(
      'max' => 100,
      'min' => -100,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 37,
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'number',
      'weight' => 10,
    ),
    'widget_type' => 'number',
  );

  // Exported field_instance: 'node-portal-field_tax_edition'
  $field_instances['node-portal-field_tax_edition'] = array(
    'bundle' => 'portal',
    'default_value' => array(
      0 => array(
        'tid' => 3272,
      ),
      1 => array(
        'tid' => 3257,
      ),
      2 => array(
        'tid' => 3287,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_edition',
    'label' => 'tax_edition',
    'required' => 0,
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

  // Exported field_instance: 'node-portal-field_tax_sections'
  $field_instances['node-portal-field_tax_sections'] = array(
    'bundle' => 'portal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_sections',
    'label' => 'tax_sections',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-sidebar_banner_ad-body'
  $field_instances['node-sidebar_banner_ad-body'] = array(
    'bundle' => 'sidebar_banner_ad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 600,
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-sidebar_banner_ad-field_banner_ad_link'
  $field_instances['node-sidebar_banner_ad-field_banner_ad_link'] = array(
    'bundle' => 'sidebar_banner_ad',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_banner_ad_link',
    'label' => 'Banner Link',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 32,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-sidebar_banner_ad-field_sidebar_banner_image'
  $field_instances['node-sidebar_banner_ad-field_sidebar_banner_image'] = array(
    'bundle' => 'sidebar_banner_ad',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 31,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 31,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 31,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 31,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sidebar_banner_image',
    'label' => 'Banner Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 31,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          0 => 1,
          'attach' => FALSE,
          'imce' => FALSE,
          'reference' => FALSE,
          'remote' => FALSE,
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 31,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-sto_featured_item-body'
  $field_instances['node-sto_featured_item-body'] = array(
    'bundle' => 'sto_featured_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 600,
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-sto_featured_item-field_featured_weight'
  $field_instances['node-sto_featured_item-field_featured_weight'] = array(
    'bundle' => 'sto_featured_item',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
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
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 35,
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
        'weight' => 35,
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
        'weight' => 35,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 35,
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
        'weight' => 35,
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
        'weight' => 35,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_weight',
    'label' => 'Featured Weight',
    'required' => FALSE,
    'settings' => array(
      'max' => 10,
      'min' => -10,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 35,
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'default_value_php' => NULL,
      ),
      'type' => 'options_select',
      'weight' => 35,
    ),
    'widget_type' => 'optionwidgets_select',
  );

  // Exported field_instance: 'node-sto_featured_item-field_sto_featured_image'
  $field_instances['node-sto_featured_item-field_sto_featured_image'] = array(
    'bundle' => 'sto_featured_item',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 32,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 32,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 32,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 32,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sto_featured_image',
    'label' => 'Featured Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => 0,
      'min_resolution' => 0,
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 32,
    'widget' => array(
      'active' => 0,
      'module' => 'image',
      'settings' => array(
        'filefield_source_attach_absolute' => 0,
        'filefield_source_attach_mode' => 'move',
        'filefield_source_attach_path' => 'file_attach',
        'filefield_source_autocomplete' => 0,
        'filefield_sources' => array(
          0 => 1,
          'attach' => FALSE,
          'imce' => FALSE,
          'reference' => FALSE,
          'remote' => FALSE,
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'bar',
        'use_default_image' => 0,
      ),
      'type' => 'image_image',
      'weight' => 32,
    ),
    'widget_type' => 'imagefield_widget',
  );

  // Exported field_instance: 'node-sto_featured_item-field_sto_featured_link'
  $field_instances['node-sto_featured_item-field_sto_featured_link'] = array(
    'bundle' => 'sto_featured_item',
    'default_value' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'height' => 350,
          'width' => 425,
        ),
        'type' => 'text_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sto_featured_link',
    'label' => 'Link',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 33,
    'widget' => array(
      'active' => 0,
      'module' => 'text',
      'settings' => array(
        'default_value' => NULL,
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-web_cancer_portal_promo_carousel-field_cancerportal_promo_image'
  $field_instances['node-web_cancer_portal_promo_carousel-field_cancerportal_promo_image'] = array(
    'bundle' => 'web_cancer_portal_promo_carousel',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cancerportal_promo_image',
    'label' => 'Promo Image',
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
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
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
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-web_cancer_portal_promo_carousel-field_cancerportal_promo_link'
  $field_instances['node-web_cancer_portal_promo_carousel-field_cancerportal_promo_link'] = array(
    'bundle' => 'web_cancer_portal_promo_carousel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
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
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cancerportal_promo_link',
    'label' => 'Promo Link',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-web_cancer_portal_promo_carousel-field_promo_overlay_text'
  $field_instances['node-web_cancer_portal_promo_carousel-field_promo_overlay_text'] = array(
    'bundle' => 'web_cancer_portal_promo_carousel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
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
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_promo_overlay_text',
    'label' => 'Promo Overlay Text',
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
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-webform-body'
  $field_instances['node-webform-body'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
      'web_cancer_portal_current_issue' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_perspectives' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'web_cancer_portal_video_library' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A blank Page type');
  t('A country, region and/or language specific version of the application ');
  t('A meeting entry');
  t('APNS Token');
  t('Abstract');
  t('Administrative Title [Internal use only]');
  t('Application');
  t('Article Author');
  t('Article Body');
  t('Article Edited Date');
  t('Article Id');
  t('Article Issue');
  t('Article Month');
  t('Article Page');
  t('Article Published Date');
  t('Article Source File');
  t('Article Title');
  t('Article Type');
  t('Article Updated Date');
  t('Article Volume');
  t('Article Year');
  t('Article Year Int');
  t('Audio');
  t('Audio Playback');
  t('Audio Stream Still Frame');
  t('Audio will be made available:');
  t('Author');
  t('Author Picture');
  t('Authors');
  t('BC MP4 Video');
  t('BCM Archive Status');
  t('BCM Status');
  t('BCM Update');
  t('Background Image');
  t('Background Video');
  t('Banner Image');
  t('Banner Link');
  t('Body');
  t('Brightcove Background Video');
  t('Brightcove Filesize');
  t('Brightcove Id');
  t('Brightcove MP4 Video');
  t('Brightcove Thumbnail');
  t('Bundle Identifier');
  t('CME Abstract');
  t('CME ID');
  t('Categories');
  t('Choose between streaming audio to the device or downloading and storing audio on the device for offline playback.');
  t('Con KOL Affiliation');
  t('Con KOL HTML');
  t('Con KOL Image');
  t('Con KOL Name');
  t('DO NOT INCLUDE HTML OR BODY TAGS

The html article related to the Perspective. <strong>Note:</strong> All embedded files{images} need to be referenced relative to this html file e.g. <imng src="image.png" and added as embedded files below.');
  t('Describes a Challenging Case');
  t('Description');
  t('Device UDID');
  t('Disclaimer Required');
  t('Disclaimer Text');
  t('Download Size');
  t('Download and Store Audio Source');
  t('Downloadable Video for Offline Storage ');
  t('Edition');
  t('Edition visibility');
  t('Embedded Files');
  t('Embedded Image');
  t('Enter Taxonomy term to add to featured video page');
  t('Featured');
  t('Featured Image');
  t('Featured Section');
  t('Featured Weight');
  t('Full Text');
  t('General HTML');
  t('HTML file');
  t('If this video is connected to a CME test, the CME test id needs to be entered here. ');
  t('Image');
  t('Issue Label');
  t('Issue Label Overwrite');
  t('Link');
  t('List all embedded files described and required by the html article');
  t('Master Edition');
  t('Media URL for direct playback');
  t('Media URL for streamed playback');
  t('Meetings');
  t('Multisite recognition');
  t('Namespace');
  t('Perspectives');
  t('Please select one or more Section/ Categories');
  t('Please specify if this video asset is supposed to be downloaded and stored on the device for playback (video can be watched offline) or if the video is streamed to the device (internet connection required to watch video).
Note that large videos (>10min) should be streamed to the device and not be made available for download. ');
  t('Popup size');
  t('Pro KOL Affiliation');
  t('Pro KOL HTML');
  t('Pro KOL Image');
  t('Pro KOL Name');
  t('Promo Image');
  t('Promo Link');
  t('Promo Overlay Text');
  t('Rating');
  t('Release Date');
  t('STO Featured Image');
  t('SWF File');
  t('Search Field');
  t('Sections');
  t('Sections/ Categories');
  t('Slideshow Link');
  t('Speaker');
  t('Specify JS, CSS or files other than images which need to be included with this HTML content for offline viewing');
  t('Specify an image referenced within the HTML which needs to be offline available in the App');
  t('Specify if this item can be featured or not. Other criteria like post date will come into effect for the actual featured list.');
  t('Specify the edition this content belongs to');
  t('Status');
  t('Streaming Audio URL');
  t('Streaming Video');
  t('Streaming Video URL');
  t('Tax Section');
  t('Taxonomy: Issue (currently named Article by mistake)');
  t('Taxonomy: Section (Preferences)');
  t('The Bundle identifier of the application. Usually in the following format: com.intstrux.[app name]');
  t('The Size of this item when downloaded for offline storage');
  t('The abstract represents the full article in views and other aggregations.');
  t('The author of this perspective');
  t('The authors of this article if any');
  t('The full URL to the external portal.
Leave empty for "coming soon" message');
  t('The image of the author');
  t('The perspective content type is used for sections like the european perspective.
It contains a video/ audio part which is connected to an author with some kind of abstract.');
  t('The version number of this application. Format X.X.X -> 1.0.0 This needs to match the store version number.');
  t('This is the individual audio asset');
  t('This is the individual video node');
  t('This read only field shows the currently used video for streaming source URL. You cannot enter a value here, just must specify a source video file above. This field will be updated as soon as the video will become available');
  t('Thumbnail');
  t('Thumbnail Image');
  t('Title');
  t('URL');
  t('Upload all files that will be used locally by the interactive ad');
  t('User ID');
  t('Version');
  t('Video Source Selection');
  t('Weight');
  t('XML File Location');
  t('[Optional] If a picture is provided it will be used as a still frame for the video track of the audio only stream');
  t('admin_title');
  t('tax_edition');
  t('tax_sections');
  t('video asset tags');

  return $field_instances;
}
