<?php
/**
 * @file
 * intstrux_cancer_portal_frontpage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function intstrux_cancer_portal_frontpage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_cancerportal_currentissue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Web: view_cancerportal_currentissue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Current Issue US Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'web_cancer_portal_current_issue';
  /* Relationship: Field: Edition (field_tax_edition) */
  $handler->display->display_options['relationships']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  /* Relationship: Content: Article Type (field_article_type) */
  $handler->display->display_options['relationships']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['relationships']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['relationships']['field_article_type_tid']['field'] = 'field_article_type_tid';
  /* Field: Content: Article Month */
  $handler->display->display_options['fields']['field_article_month']['id'] = 'field_article_month';
  $handler->display->display_options['fields']['field_article_month']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['fields']['field_article_month']['field'] = 'field_article_month';
  $handler->display->display_options['fields']['field_article_month']['label'] = '';
  $handler->display->display_options['fields']['field_article_month']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Article Year Int */
  $handler->display->display_options['fields']['field_article_year_int']['id'] = 'field_article_year_int';
  $handler->display->display_options['fields']['field_article_year_int']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['fields']['field_article_year_int']['field'] = 'field_article_year_int';
  $handler->display->display_options['fields']['field_article_year_int']['exclude'] = TRUE;
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = '';
  $handler->display->display_options['fields']['field_article_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_type']['delta_offset'] = '0';
  /* Field: Content: Issue Label */
  $handler->display->display_options['fields']['field_issue_label']['id'] = 'field_issue_label';
  $handler->display->display_options['fields']['field_issue_label']['table'] = 'field_data_field_issue_label';
  $handler->display->display_options['fields']['field_issue_label']['field'] = 'field_issue_label';
  $handler->display->display_options['fields']['field_issue_label']['label'] = '';
  $handler->display->display_options['fields']['field_issue_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_issue_label']['alter']['path'] = 'view_articles/[field_article_type]/[field_article_year_int]/[field_article_month]';
  $handler->display->display_options['fields']['field_issue_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_label']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  /* Sort criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['sorts']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['sorts']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['sorts']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['sorts']['field_article_year_int_value']['order'] = 'DESC';
  /* Sort criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['sorts']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['sorts']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['sorts']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['sorts']['field_article_month_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3272',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';

  /* Display: Web: Cancer Portal - Current Issue US Block */
  $handler = $view->new_display('block', 'Web: Cancer Portal - Current Issue US Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Current Issue US Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3257',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';

  /* Display: Web: Cancer Portal - Current Issue US Page */
  $handler = $view->new_display('page', 'Web: Cancer Portal - Current Issue US Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Current Issue US Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3257',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';
  $handler->display->display_options['path'] = 'view_cancerportal_currentpage_us';

  /* Display: Web: Cancer Portal - Current Issue EU Block */
  $handler = $view->new_display('block', 'Web: Cancer Portal - Current Issue EU Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Current Issue EU Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3272',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';

  /* Display: Web: Cancer Portal - Current Issue EU Page */
  $handler = $view->new_display('page', 'Web: Cancer Portal - Current Issue EU Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Current Issue EU Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3272',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';
  $handler->display->display_options['path'] = 'view_cancerportal_currentpage_eu';
  $translatables['view_cancerportal_currentissue'] = array(
    t('Master'),
    t('Web: Cancer Portal - Current Issue US Block'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_tax_edition'),
    t('term from field_article_type'),
    t('Article Year Int'),
    t('Web: Cancer Portal - Current Issue US Page'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Web: Cancer Portal - Current Issue EU Block'),
    t('Web: Cancer Portal - Current Issue EU Page'),
  );
  $export['view_cancerportal_currentissue'] = $view;

  $view = new view();
  $view->name = 'view_cancerportal_express';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Web: view_cancerportal_express';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Current Issue US Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'web_cancer_portal_current_issue';
  /* Relationship: Content: Article Type (field_article_type) */
  $handler->display->display_options['relationships']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['relationships']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['relationships']['field_article_type_tid']['field'] = 'field_article_type_tid';
  /* Field: Content: Article Month */
  $handler->display->display_options['fields']['field_article_month']['id'] = 'field_article_month';
  $handler->display->display_options['fields']['field_article_month']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['fields']['field_article_month']['field'] = 'field_article_month';
  $handler->display->display_options['fields']['field_article_month']['label'] = '';
  $handler->display->display_options['fields']['field_article_month']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Article Year Int */
  $handler->display->display_options['fields']['field_article_year_int']['id'] = 'field_article_year_int';
  $handler->display->display_options['fields']['field_article_year_int']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['fields']['field_article_year_int']['field'] = 'field_article_year_int';
  $handler->display->display_options['fields']['field_article_year_int']['exclude'] = TRUE;
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = '';
  $handler->display->display_options['fields']['field_article_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_type']['delta_offset'] = '0';
  /* Field: Content: Issue Label */
  $handler->display->display_options['fields']['field_issue_label']['id'] = 'field_issue_label';
  $handler->display->display_options['fields']['field_issue_label']['table'] = 'field_data_field_issue_label';
  $handler->display->display_options['fields']['field_issue_label']['field'] = 'field_issue_label';
  $handler->display->display_options['fields']['field_issue_label']['label'] = '';
  $handler->display->display_options['fields']['field_issue_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_issue_label']['alter']['path'] = 'view_articles/[field_article_type]/[field_article_year_int]/[field_article_month]';
  $handler->display->display_options['fields']['field_issue_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_label']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  /* Sort criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['sorts']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['sorts']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['sorts']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['sorts']['field_article_year_int_value']['order'] = 'DESC';
  /* Sort criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['sorts']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['sorts']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['sorts']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['sorts']['field_article_month_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3272',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';

  /* Display: Web: Cancer Portal - Current Issue US Block */
  $handler = $view->new_display('block', 'Web: Cancer Portal - Current Issue US Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Express Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article_express' => 'article_express',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';

  /* Display: Web: Cancer Portal - Current Issue US Page */
  $handler = $view->new_display('page', 'Web: Cancer Portal - Current Issue US Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Express Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article_express' => 'article_express',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  $handler->display->display_options['path'] = 'view_cancerportal_currentpage_us';
  $translatables['view_cancerportal_express'] = array(
    t('Master'),
    t('Web: Cancer Portal - Current Issue US Block'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_article_type'),
    t('Article Year Int'),
    t('Web: Cancer Portal - Express Block'),
    t('Web: Cancer Portal - Current Issue US Page'),
    t('Web: Cancer Portal - Express Page'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
  );
  $export['view_cancerportal_express'] = $view;

  $view = new view();
  $view->name = 'view_cancerportal_featuredarticlesqueue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Web: view_cancerportal_featuredarticlesqueue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Web: view_cancerportal_promocarousel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'web_cancer_portal_current_issue';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['queues'] = array(
    'eu_featured_queue' => 0,
    'us_featured_queue' => 0,
    'zh_featured_queue' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Promo Image */
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['id'] = 'field_cancerportal_promo_image';
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['table'] = 'field_data_field_cancerportal_promo_image';
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['field'] = 'field_cancerportal_promo_image';
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['label'] = '';
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Promo Overlay Text */
  $handler->display->display_options['fields']['field_promo_overlay_text']['id'] = 'field_promo_overlay_text';
  $handler->display->display_options['fields']['field_promo_overlay_text']['table'] = 'field_data_field_promo_overlay_text';
  $handler->display->display_options['fields']['field_promo_overlay_text']['field'] = 'field_promo_overlay_text';
  $handler->display->display_options['fields']['field_promo_overlay_text']['label'] = '';
  $handler->display->display_options['fields']['field_promo_overlay_text']['element_label_colon'] = FALSE;
  /* Field: Content: Promo Link */
  $handler->display->display_options['fields']['field_cancerportal_promo_link']['id'] = 'field_cancerportal_promo_link';
  $handler->display->display_options['fields']['field_cancerportal_promo_link']['table'] = 'field_data_field_cancerportal_promo_link';
  $handler->display->display_options['fields']['field_cancerportal_promo_link']['field'] = 'field_cancerportal_promo_link';
  $handler->display->display_options['fields']['field_cancerportal_promo_link']['label'] = '';
  $handler->display->display_options['fields']['field_cancerportal_promo_link']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Nodequeue: Queue machine name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['name']['value'] = 'web_cancer_portal_featured_artic';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view_cancerportal_promocarousel';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['view_cancerportal_featuredarticlesqueue'] = array(
    t('Master'),
    t('Web: view_cancerportal_promocarousel'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('Page'),
    t('Block'),
  );
  $export['view_cancerportal_featuredarticlesqueue'] = $view;

  $view = new view();
  $view->name = 'view_cancerportal_perspectives';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Web: view_cancerportal_perspectives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'view_canerportal_perspectives';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'web_cancer_portal_perspectives';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'PerspectiveTitle';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_perspective_author']['id'] = 'field_perspective_author';
  $handler->display->display_options['fields']['field_perspective_author']['table'] = 'field_data_field_perspective_author';
  $handler->display->display_options['fields']['field_perspective_author']['field'] = 'field_perspective_author';
  $handler->display->display_options['fields']['field_perspective_author']['label'] = 'Perspective Author';
  /* Field: Content: Author Picture */
  $handler->display->display_options['fields']['field_perspective_author_picture']['id'] = 'field_perspective_author_picture';
  $handler->display->display_options['fields']['field_perspective_author_picture']['table'] = 'field_data_field_perspective_author_picture';
  $handler->display->display_options['fields']['field_perspective_author_picture']['field'] = 'field_perspective_author_picture';
  $handler->display->display_options['fields']['field_perspective_author_picture']['label'] = 'Perspective Author Picture';
  $handler->display->display_options['fields']['field_perspective_author_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_perspective_author_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Article Source File */
  $handler->display->display_options['fields']['field_perspective_htmlfile']['id'] = 'field_perspective_htmlfile';
  $handler->display->display_options['fields']['field_perspective_htmlfile']['table'] = 'field_data_field_perspective_htmlfile';
  $handler->display->display_options['fields']['field_perspective_htmlfile']['field'] = 'field_perspective_htmlfile';
  $handler->display->display_options['fields']['field_perspective_htmlfile']['click_sort_column'] = 'fid';
  /* Sort criterion: Content: Weight (field_perspective_weight) */
  $handler->display->display_options['sorts']['field_perspective_weight_value']['id'] = 'field_perspective_weight_value';
  $handler->display->display_options['sorts']['field_perspective_weight_value']['table'] = 'field_data_field_perspective_weight';
  $handler->display->display_options['sorts']['field_perspective_weight_value']['field'] = 'field_perspective_weight_value';
  $handler->display->display_options['sorts']['field_perspective_weight_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Edition (field_tax_edition) */
  $handler->display->display_options['arguments']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['arguments']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['arguments']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['arguments']['field_tax_edition_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tax_edition_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tax_edition_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tax_edition_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'perspective' => 'perspective',
  );

  /* Display: Web: Cancer Portal - Perspective Page */
  $handler = $view->new_display('page', 'Web: Cancer Portal - Perspective Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'view_cancerportal_perspectives';

  /* Display: Web: Cancer Portal - Perspective Block */
  $handler = $view->new_display('block', 'Web: Cancer Portal - Perspective Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['view_cancerportal_perspectives'] = array(
    t('Master'),
    t('view_canerportal_perspectives'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nid'),
    t('PerspectiveTitle'),
    t('Perspective Author'),
    t('Perspective Author Picture'),
    t('Body'),
    t('Article Source File'),
    t('All'),
    t('Web: Cancer Portal - Perspective Page'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Web: Cancer Portal - Perspective Block'),
  );
  $export['view_cancerportal_perspectives'] = $view;

  $view = new view();
  $view->name = 'view_cancerportal_portals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Web: view_cancerportal_portals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Prostate Portal';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'web_cancer_portal_current_issue';
  /* Relationship: Field: Edition (field_tax_edition) */
  $handler->display->display_options['relationships']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  /* Relationship: Content: Article Type (field_article_type) */
  $handler->display->display_options['relationships']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['relationships']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['relationships']['field_article_type_tid']['field'] = 'field_article_type_tid';
  /* Field: Content: Article Month */
  $handler->display->display_options['fields']['field_article_month']['id'] = 'field_article_month';
  $handler->display->display_options['fields']['field_article_month']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['fields']['field_article_month']['field'] = 'field_article_month';
  $handler->display->display_options['fields']['field_article_month']['label'] = '';
  $handler->display->display_options['fields']['field_article_month']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Article Year Int */
  $handler->display->display_options['fields']['field_article_year_int']['id'] = 'field_article_year_int';
  $handler->display->display_options['fields']['field_article_year_int']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['fields']['field_article_year_int']['field'] = 'field_article_year_int';
  $handler->display->display_options['fields']['field_article_year_int']['exclude'] = TRUE;
  /* Field: Content: Article Type */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = '';
  $handler->display->display_options['fields']['field_article_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_type']['delta_offset'] = '0';
  /* Field: Content: Issue Label */
  $handler->display->display_options['fields']['field_issue_label']['id'] = 'field_issue_label';
  $handler->display->display_options['fields']['field_issue_label']['table'] = 'field_data_field_issue_label';
  $handler->display->display_options['fields']['field_issue_label']['field'] = 'field_issue_label';
  $handler->display->display_options['fields']['field_issue_label']['label'] = '';
  $handler->display->display_options['fields']['field_issue_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_issue_label']['alter']['path'] = 'view_articles/[field_article_type]/[field_article_year_int]/[field_article_month]';
  $handler->display->display_options['fields']['field_issue_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_label']['group_columns'] = array(
    'bundle' => 'bundle',
  );
  /* Sort criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['sorts']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['sorts']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['sorts']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['sorts']['field_article_year_int_value']['order'] = 'DESC';
  /* Sort criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['sorts']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['sorts']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['sorts']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['sorts']['field_article_month_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3272',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';

  /* Display: Web: Cancer Portal - Prostate Portal Block */
  $handler = $view->new_display('block', 'Web: Cancer Portal - Prostate Portal Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Prostate Portal';
  $handler->display->display_options['display_description'] = 'Web: Cancer Portal - Prostate Portal Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3257',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3389',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Web: Cancer Portal - Prostate Portal Page */
  $handler = $view->new_display('page', 'Web: Cancer Portal - Prostate Portal Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Prostate Portal';
  $handler->display->display_options['display_description'] = 'Web: Cancer Portal - Prostate Portal Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3257',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3389',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';
  $handler->display->display_options['path'] = 'view_cancerportal_prostatecancer';

  /* Display: Web: Cancer Portal - Breast Portal Block */
  $handler = $view->new_display('block', 'Web: Cancer Portal - Breast Portal Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Breast Portal';
  $handler->display->display_options['display_description'] = 'Web: Cancer Portal - Breast Portal Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3257',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3378',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Web: Cancer Portal - Breast Portal Page Page */
  $handler = $view->new_display('page', 'Web: Cancer Portal - Breast Portal Page Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Breast Portal';
  $handler->display->display_options['display_description'] = 'Web: Cancer Portal - Breast Portal Page Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3257',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3378',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';
  $handler->display->display_options['path'] = 'view_cancerportal_breastcancer';

  /* Display: Web: Cancer Portal - Lung Portal Page Block */
  $handler = $view->new_display('block', 'Web: Cancer Portal - Lung Portal Page Block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Lung Portal';
  $handler->display->display_options['display_description'] = 'Web: Cancer Portal - Lung Portal Page Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3257',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3396',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Web: Cancer Portal - Lung Portal Page */
  $handler = $view->new_display('page', 'Web: Cancer Portal - Lung Portal Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Lung Portal';
  $handler->display->display_options['display_description'] = 'Web: Cancer Portal - Lung Portal Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '',
    'article' => 'article',
  );
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    0 => '3257',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3396',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';
  $handler->display->display_options['path'] = 'view_cancerportal_lungcancer';
  $translatables['view_cancerportal_portals'] = array(
    t('Master'),
    t('Web: Cancer Portal - Prostate Portal'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_tax_edition'),
    t('term from field_article_type'),
    t('Article Year Int'),
    t('Web: Cancer Portal - Prostate Portal Block'),
    t('Web: Cancer Portal - Prostate Portal Page'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Web: Cancer Portal - Breast Portal Block'),
    t('Web: Cancer Portal - Breast Portal'),
    t('Web: Cancer Portal - Breast Portal Page Page'),
    t('Web: Cancer Portal - Lung Portal Page Block'),
    t('Web: Cancer Portal - Lung Portal'),
    t('Web: Cancer Portal - Lung Portal Page'),
  );
  $export['view_cancerportal_portals'] = $view;

  $view = new view();
  $view->name = 'view_cancerportal_promcarouseloqueue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Web: view_cancerportal_promcarouseloqueue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Web: view_cancerportal_promocarousel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['queues'] = array(
    'eu_featured_queue' => 0,
    'us_featured_queue' => 0,
    'zh_featured_queue' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Promo Image */
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['id'] = 'field_cancerportal_promo_image';
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['table'] = 'field_data_field_cancerportal_promo_image';
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['field'] = 'field_cancerportal_promo_image';
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['label'] = '';
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cancerportal_promo_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Promo Overlay Text */
  $handler->display->display_options['fields']['field_promo_overlay_text']['id'] = 'field_promo_overlay_text';
  $handler->display->display_options['fields']['field_promo_overlay_text']['table'] = 'field_data_field_promo_overlay_text';
  $handler->display->display_options['fields']['field_promo_overlay_text']['field'] = 'field_promo_overlay_text';
  $handler->display->display_options['fields']['field_promo_overlay_text']['label'] = '';
  $handler->display->display_options['fields']['field_promo_overlay_text']['element_label_colon'] = FALSE;
  /* Field: Content: Promo Link */
  $handler->display->display_options['fields']['field_cancerportal_promo_link']['id'] = 'field_cancerportal_promo_link';
  $handler->display->display_options['fields']['field_cancerportal_promo_link']['table'] = 'field_data_field_cancerportal_promo_link';
  $handler->display->display_options['fields']['field_cancerportal_promo_link']['field'] = 'field_cancerportal_promo_link';
  $handler->display->display_options['fields']['field_cancerportal_promo_link']['label'] = '';
  $handler->display->display_options['fields']['field_cancerportal_promo_link']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Nodequeue: Queue machine name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['name']['value'] = 'web_cancer_portal_promo_carousel';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view_cancerportal_promocarousel';
  $translatables['view_cancerportal_promcarouseloqueue'] = array(
    t('Master'),
    t('Web: view_cancerportal_promocarousel'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('queue'),
    t('Page'),
  );
  $export['view_cancerportal_promcarouseloqueue'] = $view;

  $view = new view();
  $view->name = 'view_cancerportal_sto';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Web: view_cancerportal_sto';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'view_videolibrary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'web_cancer_portal_video_library';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_video_title']['id'] = 'field_video_title';
  $handler->display->display_options['fields']['field_video_title']['table'] = 'field_data_field_video_title';
  $handler->display->display_options['fields']['field_video_title']['field'] = 'field_video_title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asset_video' => 'asset_video',
  );
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '7733',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'view_cancerportal_videolibrary';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['view_cancerportal_sto'] = array(
    t('Master'),
    t('view_videolibrary'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Nid'),
    t('Title'),
    t('Page'),
    t('Block'),
  );
  $export['view_cancerportal_sto'] = $view;

  $view = new view();
  $view->name = 'view_cancerportal_videolibrary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Web: view_cancerportal_videolibrary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'view_videolibrary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'web_cancer_portal_video_library';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_video_title']['id'] = 'field_video_title';
  $handler->display->display_options['fields']['field_video_title']['table'] = 'field_data_field_video_title';
  $handler->display->display_options['fields']['field_video_title']['field'] = 'field_video_title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asset_video' => 'asset_video',
  );

  /* Display: Web: Cancer Portal - Video Library Page */
  $handler = $view->new_display('page', 'Web: Cancer Portal - Video Library Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Video Library Page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'view_cancerportal_videolibrary';

  /* Display: Web: Cancer Portal - Video Library Block */
  $handler = $view->new_display('block', 'Web: Cancer Portal - Video Library Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Video Library Block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['view_cancerportal_videolibrary'] = array(
    t('Master'),
    t('view_videolibrary'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Nid'),
    t('Title'),
    t('Web: Cancer Portal - Video Library Page'),
    t('Web: Cancer Portal - Video Library Block'),
  );
  $export['view_cancerportal_videolibrary'] = $view;

  return $export;
}
