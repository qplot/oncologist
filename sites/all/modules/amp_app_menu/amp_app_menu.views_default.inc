<?php
/**
 * @file
 * amp_app_menu.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amp_app_menu_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'amp_articles_alt';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp_articles_alt';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'App: Articles ALT';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '36';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_article_volume' => 'field_article_volume',
    'field_article_issue' => 'field_article_issue',
    'field_article_month' => 'field_article_month',
    'field_article_year' => 'field_article_year',
  );
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
  $handler->display->display_options['fields']['field_issue_label']['alter']['target'] = '_parent';
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
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_article_type_tid';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
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
  /* Filter criterion: Content: Article Month (field_article_month) */
  $handler->display->display_options['filters']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['filters']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['filters']['field_article_month_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_month_value']['value']['value'] = '0';
  /* Filter criterion: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['filters']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['filters']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['filters']['field_article_year_int_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_article_year_int_value']['value']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'amp_articles_alt';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['amp_articles_alt'] = array(
    t('Master'),
    t('App: Articles ALT'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_tax_edition'),
    t('term from field_article_type'),
    t('Article Year Int'),
    t('All'),
    t('Page'),
    t('Block'),
  );
  $export['amp_articles_alt'] = $view;

  $view = new view();
  $view->name = 'amp_current_issues_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp_current_issues_menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'amp_current_issues_menu';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Article Type (field_article_type) */
  $handler->display->display_options['relationships']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['relationships']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['relationships']['field_article_type_tid']['field'] = 'field_article_type_tid';
  /* Field: Field: Sections/ Categories */
  $handler->display->display_options['fields']['field_tax_section']['id'] = 'field_tax_section';
  $handler->display->display_options['fields']['field_tax_section']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['fields']['field_tax_section']['field'] = 'field_tax_section';
  $handler->display->display_options['fields']['field_tax_section']['label'] = '';
  $handler->display->display_options['fields']['field_tax_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tax_section']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  $handler->display->display_options['fields']['field_article_year_int']['label'] = '';
  $handler->display->display_options['fields']['field_article_year_int']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_year_int']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Article Page (field_article_page) */
  $handler->display->display_options['sorts']['field_article_page_value']['id'] = 'field_article_page_value';
  $handler->display->display_options['sorts']['field_article_page_value']['table'] = 'field_data_field_article_page';
  $handler->display->display_options['sorts']['field_article_page_value']['field'] = 'field_article_page_value';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_article_type_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'Journal';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['arguments']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['arguments']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['arguments']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['arguments']['field_article_year_int_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_article_year_int_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_article_year_int_value']['default_argument_options']['code'] = '$amp_articles_alt_view = views_get_view_result(\'amp_articles_alt\',\'page\',\'all\',\'Journal\');
$year = $amp_articles_alt_view[0]->field_data_field_article_year_int_field_article_year_int_val;
return $year;';
  $handler->display->display_options['arguments']['field_article_year_int_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_article_year_int_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_year_int_value']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Article Month (field_article_month) */
  $handler->display->display_options['arguments']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['arguments']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['arguments']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['arguments']['field_article_month_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_article_month_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_article_month_value']['default_argument_options']['code'] = '$amp_articles_alt_view = views_get_view_result(\'amp_articles_alt\',\'page\',\'all\',\'Journal\');
$month = $amp_articles_alt_view[0]->field_data_field_article_month_field_article_month_value;
return $month;';
  $handler->display->display_options['arguments']['field_article_month_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_article_month_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_month_value']['summary_options']['items_per_page'] = '25';
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
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'amp-current-issues-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $translatables['amp_current_issues_menu'] = array(
    t('Master'),
    t('amp_current_issues_menu'),
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
    t('term from field_article_type'),
    t('All'),
    t('Page'),
    t('Block'),
  );
  $export['amp_current_issues_menu'] = $view;

  $view = new view();
  $view->name = 'amp_view_articles_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp_view_articles_menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'App: View Articles Menu';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: Article Type (field_article_type) */
  $handler->display->display_options['relationships']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['relationships']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['relationships']['field_article_type_tid']['field'] = 'field_article_type_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Article Page (field_article_page) */
  $handler->display->display_options['sorts']['field_article_page_value']['id'] = 'field_article_page_value';
  $handler->display->display_options['sorts']['field_article_page_value']['table'] = 'field_data_field_article_page';
  $handler->display->display_options['sorts']['field_article_page_value']['field'] = 'field_article_page_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_article_type_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Content: Article Year Int (field_article_year_int) */
  $handler->display->display_options['arguments']['field_article_year_int_value']['id'] = 'field_article_year_int_value';
  $handler->display->display_options['arguments']['field_article_year_int_value']['table'] = 'field_data_field_article_year_int';
  $handler->display->display_options['arguments']['field_article_year_int_value']['field'] = 'field_article_year_int_value';
  $handler->display->display_options['arguments']['field_article_year_int_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_article_year_int_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_article_year_int_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_year_int_value']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Article Month (field_article_month) */
  $handler->display->display_options['arguments']['field_article_month_value']['id'] = 'field_article_month_value';
  $handler->display->display_options['arguments']['field_article_month_value']['table'] = 'field_data_field_article_month';
  $handler->display->display_options['arguments']['field_article_month_value']['field'] = 'field_article_month_value';
  $handler->display->display_options['arguments']['field_article_month_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_article_month_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_article_month_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_month_value']['summary_options']['items_per_page'] = '25';
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
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view_articles_menu';
  $translatables['amp_view_articles_menu'] = array(
    t('Master'),
    t('App: View Articles Menu'),
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
    t('term from field_article_type'),
    t('All'),
    t('Page'),
  );
  $export['amp_view_articles_menu'] = $view;

  return $export;
}
