<?php
/**
 * @file
 * amp_general.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amp_general_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'amp_cancerportal_currentissue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp_cancerportal_currentissue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Current Issue US Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = '<a href="" >test</a>';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'web_cancer_portal_current_issue';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'View Aoo';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div style="text-align:right; float:right"><a href="http://theoncologist.alphamedpress.org/content/by/year" >View All</a></div>';
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
  $handler->display->display_options['title'] = 'Current Issue US';
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
  $handler->display->display_options['title'] = 'Current Issue US Edition';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'EU link';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<em><a href="/current-issue-eu" class="switchto">Switch to European Edition</a></em>';
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
  $handler->display->display_options['path'] = 'current-issue-us';

  /* Display: Web: Cancer Portal - Current Issue EU Block */
  $handler = $view->new_display('block', 'Web: Cancer Portal - Current Issue EU Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Current Issue EU';
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
  $handler->display->display_options['title'] = 'Current Issue EU Edition';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'us link';
  $handler->display->display_options['header']['area']['content'] = '<em><a href="/current-issue-us" class="switchto">Switch to US Edition</a></em>';
  $handler->display->display_options['header']['area']['format'] = '2';
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
  $handler->display->display_options['path'] = 'current-issue-eu';
  $translatables['amp_cancerportal_currentissue'] = array(
    t('Master'),
    t('Web: Cancer Portal - Current Issue US Block'),
    t('<a href="" >test</a>'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('View Aoo'),
    t('<div style="text-align:right; float:right"><a href="http://theoncologist.alphamedpress.org/content/by/year" >View All</a></div>'),
    t('term from field_tax_edition'),
    t('term from field_article_type'),
    t('Article Year Int'),
    t('Current Issue US'),
    t('more'),
    t('Web: Cancer Portal - Current Issue US Page'),
    t('Current Issue US Edition'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('EU link'),
    t('<em><a href="/current-issue-eu" class="switchto">Switch to European Edition</a></em>'),
    t('Web: Cancer Portal - Current Issue EU Block'),
    t('Current Issue EU'),
    t('Web: Cancer Portal - Current Issue EU Page'),
    t('Current Issue EU Edition'),
    t('us link'),
    t('<em><a href="/current-issue-us" class="switchto">Switch to US Edition</a></em>'),
  );
  $export['amp_cancerportal_currentissue'] = $view;

  $view = new view();
  $view->name = 'amp_cancerportal_express';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp_cancerportal_express';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Web: Cancer Portal - Current Issue US Block';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Article Type (field_article_type) */
  $handler->display->display_options['relationships']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['relationships']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['relationships']['field_article_type_tid']['field'] = 'field_article_type_tid';
  /* Field: Field: Tax Section */
  $handler->display->display_options['fields']['field_tax_section']['id'] = 'field_tax_section';
  $handler->display->display_options['fields']['field_tax_section']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['fields']['field_tax_section']['field'] = 'field_tax_section';
  $handler->display->display_options['fields']['field_tax_section']['label'] = '';
  $handler->display->display_options['fields']['field_tax_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tax_section']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_tax_section']['element_label_class'] = 'views-row';
  $handler->display->display_options['fields']['field_tax_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tax_section']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_abstract']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_abstract']['element_label_colon'] = FALSE;
  /* Field: Read More */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Read More';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Read more';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Express */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Express';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="section">[field_tax_section]</div>
<h2>[title]</h2>
<div class="read-more">[nid]</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'views-row';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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

  /* Display: AMP: Cancer Portal - Current Issue US Block */
  $handler = $view->new_display('block', 'AMP: Cancer Portal - Current Issue US Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Express';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tax_section_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Web: Cancer Portal - Current Issue US Page */
  $handler = $view->new_display('page', 'Web: Cancer Portal - Current Issue US Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Express';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Tax Section */
  $handler->display->display_options['fields']['field_tax_section']['id'] = 'field_tax_section';
  $handler->display->display_options['fields']['field_tax_section']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['fields']['field_tax_section']['field'] = 'field_tax_section';
  $handler->display->display_options['fields']['field_tax_section']['label'] = '';
  $handler->display->display_options['fields']['field_tax_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tax_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tax_section']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_abstract']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_abstract']['element_label_colon'] = FALSE;
  /* Field: Read More */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Read More';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Read more';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Express */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Express';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="section">[field_tax_section]</div>
<h2>[title]</h2>
<div class="abstract">[field_abstract]</div>
<div class="read-more">[nid]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['path'] = 'express';
  $translatables['amp_cancerportal_express'] = array(
    t('Master'),
    t('Web: Cancer Portal - Current Issue US Block'),
    t('View all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_article_type'),
    t('Read more'),
    t('<div class="section">[field_tax_section]</div>
<h2>[title]</h2>
<div class="read-more">[nid]</div>'),
    t('AMP: Cancer Portal - Current Issue US Block'),
    t('Express'),
    t('more'),
    t('Web: Cancer Portal - Current Issue US Page'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="section">[field_tax_section]</div>
<h2>[title]</h2>
<div class="abstract">[field_abstract]</div>
<div class="read-more">[nid]</div>'),
  );
  $export['amp_cancerportal_express'] = $view;

  $view = new view();
  $view->name = 'amp_challenging_cases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp-challenging-cases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Challenging Cases';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '8';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Edition (field_tax_edition) */
  $handler->display->display_options['relationships']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  /* Field: Content: Pro KOL Image */
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['id'] = 'field_cc_pro_kol_image';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['table'] = 'field_data_field_cc_pro_kol_image';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['field'] = 'field_cc_pro_kol_image';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['label'] = '';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['settings'] = array(
    'image_style' => 'challenging_cases_kol_image',
    'image_link' => '',
  );
  /* Field: Content: Pro KOL Name */
  $handler->display->display_options['fields']['field_cc_pro_kol_name']['id'] = 'field_cc_pro_kol_name';
  $handler->display->display_options['fields']['field_cc_pro_kol_name']['table'] = 'field_data_field_cc_pro_kol_name';
  $handler->display->display_options['fields']['field_cc_pro_kol_name']['field'] = 'field_cc_pro_kol_name';
  $handler->display->display_options['fields']['field_cc_pro_kol_name']['label'] = '';
  $handler->display->display_options['fields']['field_cc_pro_kol_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cc_pro_kol_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cc_pro_kol_name']['type'] = 'text_plain';
  /* Field: Content: Con KOL Image */
  $handler->display->display_options['fields']['field_cc_con_kol_image']['id'] = 'field_cc_con_kol_image';
  $handler->display->display_options['fields']['field_cc_con_kol_image']['table'] = 'field_data_field_cc_con_kol_image';
  $handler->display->display_options['fields']['field_cc_con_kol_image']['field'] = 'field_cc_con_kol_image';
  $handler->display->display_options['fields']['field_cc_con_kol_image']['label'] = '';
  $handler->display->display_options['fields']['field_cc_con_kol_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cc_con_kol_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cc_con_kol_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cc_con_kol_image']['settings'] = array(
    'image_style' => 'challenging_cases_kol_image',
    'image_link' => '',
  );
  /* Field: Content: Con KOL Name */
  $handler->display->display_options['fields']['field_cc_con_kol_name']['id'] = 'field_cc_con_kol_name';
  $handler->display->display_options['fields']['field_cc_con_kol_name']['table'] = 'field_data_field_cc_con_kol_name';
  $handler->display->display_options['fields']['field_cc_con_kol_name']['field'] = 'field_cc_con_kol_name';
  $handler->display->display_options['fields']['field_cc_con_kol_name']['label'] = '';
  $handler->display->display_options['fields']['field_cc_con_kol_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cc_con_kol_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_cc_abstract']['id'] = 'field_cc_abstract';
  $handler->display->display_options['fields']['field_cc_abstract']['table'] = 'field_data_field_cc_abstract';
  $handler->display->display_options['fields']['field_cc_abstract']['field'] = 'field_cc_abstract';
  $handler->display->display_options['fields']['field_cc_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_cc_abstract']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cc_abstract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cc_abstract']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Read more';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Challenging Cases */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Challenging Cases';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="case-left">
  <span class="pro-image">[field_cc_pro_kol_image]</span><span class="pro-name">[field_cc_pro_kol_name]</span>
  <span class="con-image">[field_cc_con_kol_image]</span><span class="con-name">[field_cc_con_kol_name]</span>
</div>
<div class="case-right">
  <h3>[title]</h3>
  <div class="abstract">[field_cc_abstract]</div>
  <div class="more">[nid]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_tax_edition_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
    'challenging_case' => 'challenging_case',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'challenging-cases';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['amp_challenging_cases'] = array(
    t('Master'),
    t('Challenging Cases'),
    t('View all'),
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
    t('term from field_tax_edition'),
    t('Read more'),
    t('<div class="case-left">
  <span class="pro-image">[field_cc_pro_kol_image]</span><span class="pro-name">[field_cc_pro_kol_name]</span>
  <span class="con-image">[field_cc_con_kol_image]</span><span class="con-name">[field_cc_con_kol_name]</span>
</div>
<div class="case-right">
  <h3>[title]</h3>
  <div class="abstract">[field_cc_abstract]</div>
  <div class="more">[nid]</div>
</div>'),
    t('All'),
    t('Page'),
    t('more'),
    t('Block'),
  );
  $export['amp_challenging_cases'] = $view;

  $view = new view();
  $view->name = 'amp_conference_perspective';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'amp_conference_perspectives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Conference Perspectives';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['fields']['description_1']['label'] = '';
  $handler->display->display_options['fields']['description_1']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy term: tax_type (field_tax_article_type) */
  $handler->display->display_options['filters']['field_tax_article_type_tid']['id'] = 'field_tax_article_type_tid';
  $handler->display->display_options['filters']['field_tax_article_type_tid']['table'] = 'field_data_field_tax_article_type';
  $handler->display->display_options['filters']['field_tax_article_type_tid']['field'] = 'field_tax_article_type_tid';
  $handler->display->display_options['filters']['field_tax_article_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_tax_article_type_tid']['vocabulary'] = 'article_types';
  /* Filter criterion: Taxonomy term: tax_type (field_tax_article_type) */
  $handler->display->display_options['filters']['field_tax_article_type_tid_1']['id'] = 'field_tax_article_type_tid_1';
  $handler->display->display_options['filters']['field_tax_article_type_tid_1']['table'] = 'field_data_field_tax_article_type';
  $handler->display->display_options['filters']['field_tax_article_type_tid_1']['field'] = 'field_tax_article_type_tid';
  $handler->display->display_options['filters']['field_tax_article_type_tid_1']['value'] = array(
    0 => '3409',
  );
  $handler->display->display_options['filters']['field_tax_article_type_tid_1']['vocabulary'] = 'article_types';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'conference-perspectives';
  $translatables['amp_conference_perspective'] = array(
    t('Master'),
    t('Conference Perspectives'),
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
    t('Page'),
  );
  $export['amp_conference_perspective'] = $view;

  return $export;
}
