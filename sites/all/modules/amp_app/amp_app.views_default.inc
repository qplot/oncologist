<?php
/**
 * @file
 * amp_app.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amp_app_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'amp_view_articles_current';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp_view_articles_current';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'App: View Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Article Page */
  $handler->display->display_options['fields']['field_article_page']['id'] = 'field_article_page';
  $handler->display->display_options['fields']['field_article_page']['table'] = 'field_data_field_article_page';
  $handler->display->display_options['fields']['field_article_page']['field'] = 'field_article_page';
  $handler->display->display_options['fields']['field_article_page']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Article Page (field_article_page) */
  $handler->display->display_options['sorts']['field_article_page_value']['id'] = 'field_article_page_value';
  $handler->display->display_options['sorts']['field_article_page_value']['table'] = 'field_data_field_article_page';
  $handler->display->display_options['sorts']['field_article_page_value']['field'] = 'field_article_page_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  /* Filter criterion: Field: Edition (field_tax_edition) */
  $handler->display->display_options['filters']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['filters']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  $handler->display->display_options['filters']['field_tax_edition_tid']['value'] = array(
    3257 => '3257',
  );
  $handler->display->display_options['filters']['field_tax_edition_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tax_edition_tid']['vocabulary'] = 'editions';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view_articles_current';
  $translatables['amp_view_articles_current'] = array(
    t('Master'),
    t('App: View Articles'),
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
    t('Article Page'),
    t('Page'),
  );
  $export['amp_view_articles_current'] = $view;

  $view = new view();
  $view->name = 'amp_view_items_articles_current';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp_view_items_articles_current';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'App: View Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['path'] = 'view_items_articles_current';
  $translatables['amp_view_items_articles_current'] = array(
    t('Master'),
    t('App: View Articles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_article_type'),
    t('All'),
    t('Page'),
  );
  $export['amp_view_items_articles_current'] = $view;

  $view = new view();
  $view->name = 'amp_view_latest';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp_view_latest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Express Online First';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'latest' => 'latest',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view_latestOLD';
  $translatables['amp_view_latest'] = array(
    t('Master'),
    t('Express Online First'),
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
  $export['amp_view_latest'] = $view;

  $view = new view();
  $view->name = 'amp_view_sections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp_view_sections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'view_sections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: term */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['ui_name'] = 'term';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'sections' => 'sections',
    'ad_groups' => 0,
    'articles' => 0,
    'article_types' => 0,
    'vocabulary_3' => 0,
    'authors' => 0,
    'vocabulary_4' => 0,
    'companies' => 0,
    'edition' => 0,
    'editions' => 0,
    'flavors' => 0,
    'issues' => 0,
    'magazine_type' => 0,
    'magazines' => 0,
    'vocabulary_5' => 0,
    'meetings_location' => 0,
    'vocabulary_1' => 0,
    'vocabulary_6' => 0,
    'publications' => 0,
    'specialties' => 0,
    'vocabulary_2' => 0,
    'volumes' => 0,
    'years' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  /* Field: Content: Article Author */
  $handler->display->display_options['fields']['field_article_author']['id'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['table'] = 'field_data_field_article_author';
  $handler->display->display_options['fields']['field_article_author']['field'] = 'field_article_author';
  $handler->display->display_options['fields']['field_article_author']['delta_offset'] = '0';
  /* Field: Content: Article Title */
  $handler->display->display_options['fields']['field_article_title']['id'] = 'field_article_title';
  $handler->display->display_options['fields']['field_article_title']['table'] = 'field_data_field_article_title';
  $handler->display->display_options['fields']['field_article_title']['field'] = 'field_article_title';
  /* Field: Content: Article Page */
  $handler->display->display_options['fields']['field_article_page']['id'] = 'field_article_page';
  $handler->display->display_options['fields']['field_article_page']['table'] = 'field_data_field_article_page';
  $handler->display->display_options['fields']['field_article_page']['field'] = 'field_article_page';
  $handler->display->display_options['fields']['field_article_page']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Authors */
  $handler->display->display_options['fields']['field_authors']['id'] = 'field_authors';
  $handler->display->display_options['fields']['field_authors']['table'] = 'field_data_field_authors';
  $handler->display->display_options['fields']['field_authors']['field'] = 'field_authors';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Release Date (field_release_date) */
  $handler->display->display_options['sorts']['field_release_date_value']['id'] = 'field_release_date_value';
  $handler->display->display_options['sorts']['field_release_date_value']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['sorts']['field_release_date_value']['field'] = 'field_release_date_value';
  $handler->display->display_options['sorts']['field_release_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = TRUE;
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
  $handler->display->display_options['path'] = 'view_sections';
  $translatables['amp_view_sections'] = array(
    t('Master'),
    t('view_sections'),
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
    t('term'),
    t('Nid'),
    t('Abstract'),
    t('Article Author'),
    t('Article Title'),
    t('Article Page'),
    t('Authors'),
    t('Name'),
    t('All'),
    t('Page'),
  );
  $export['amp_view_sections'] = $view;

  $view = new view();
  $view->name = 'view_items_latest';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'view_items_latest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'App: View Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'latest' => 'latest',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view_items_latest';
  $translatables['view_items_latest'] = array(
    t('Master'),
    t('App: View Articles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_article_type'),
    t('Page'),
  );
  $export['view_items_latest'] = $view;

  $view = new view();
  $view->name = 'view_latest';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'view_latest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Express Online First';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'latest' => 'latest',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view_latest';
  $translatables['view_latest'] = array(
    t('Master'),
    t('Express Online First'),
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
    t('Page'),
  );
  $export['view_latest'] = $view;

  return $export;
}
