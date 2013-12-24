<?php
/**
 * @file
 * pushttostagejuly16.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pushttostagejuly16_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'app_menu_taxonomy_sections_eu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'App: menu_taxonomy_sections EU';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'App: menu_taxonomy_sections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Field: Edition (field_tax_edition) */
  $handler->display->display_options['relationships']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'view_sections/[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'sections' => 'sections',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'app-menu-taxonomy';
  $translatables['app_menu_taxonomy_sections_eu'] = array(
    t('Master'),
    t('App: menu_taxonomy_sections'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('node'),
    t('term from field_tax_edition'),
    t('Term ID'),
    t('.'),
    t('Page'),
  );
  $export['app_menu_taxonomy_sections_eu'] = $view;

  $view = new view();
  $view->name = 'app_menu_taxonomy_sections_us';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'App: menu_taxonomy_sections US';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'App: menu_taxonomy_sections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Field: Edition (field_tax_edition) */
  $handler->display->display_options['relationships']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'view_sections/[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'sections' => 'sections',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'app-menu-taxonomy';
  $translatables['app_menu_taxonomy_sections_us'] = array(
    t('Master'),
    t('App: menu_taxonomy_sections'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('node'),
    t('term from field_tax_edition'),
    t('Term ID'),
    t('.'),
    t('Page'),
  );
  $export['app_menu_taxonomy_sections_us'] = $view;

  $view = new view();
  $view->name = 'app_menu_taxonomy_sections_zh';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'App: menu_taxonomy_sections ZH';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'App: menu_taxonomy_sections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Field: Edition (field_tax_edition) */
  $handler->display->display_options['relationships']['field_tax_edition_tid']['id'] = 'field_tax_edition_tid';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['table'] = 'field_data_field_tax_edition';
  $handler->display->display_options['relationships']['field_tax_edition_tid']['field'] = 'field_tax_edition_tid';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'view_sections/[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'sections' => 'sections',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'app-menu-taxonomy';
  $translatables['app_menu_taxonomy_sections_zh'] = array(
    t('Master'),
    t('App: menu_taxonomy_sections'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('node'),
    t('term from field_tax_edition'),
    t('Term ID'),
    t('.'),
    t('Page'),
  );
  $export['app_menu_taxonomy_sections_zh'] = $view;

  $view = new view();
  $view->name = 'clone_of_specialty_gastro';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-gastro';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gastrointestinal Cancer';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3388',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-gastro';
  $translatables['clone_of_specialty_gastro'] = array(
    t('Master'),
    t('Gastrointestinal Cancer'),
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
  $export['clone_of_specialty_gastro'] = $view;

  $view = new view();
  $view->name = 'lcm_featured_article';
  $view->description = 'LCM Featured Article';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Web: lcm_featured_article';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'No articles found';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Content: Article Title */
  $handler->display->display_options['fields']['field_article_title']['id'] = 'field_article_title';
  $handler->display->display_options['fields']['field_article_title']['table'] = 'field_data_field_article_title';
  $handler->display->display_options['fields']['field_article_title']['field'] = 'field_article_title';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  /* Sort criterion: Content: Article Published Date (field_article_published_date) */
  $handler->display->display_options['sorts']['field_article_published_date_value']['id'] = 'field_article_published_date_value';
  $handler->display->display_options['sorts']['field_article_published_date_value']['table'] = 'field_data_field_article_published_date';
  $handler->display->display_options['sorts']['field_article_published_date_value']['field'] = 'field_article_published_date_value';
  $handler->display->display_options['sorts']['field_article_published_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3396',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'lcmarticles';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['lcm_featured_article'] = array(
    t('Defaults'),
    t('Articles'),
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
    t('No articles found'),
    t('Link'),
    t('Article Title'),
    t('Abstract'),
    t('Page'),
  );
  $export['lcm_featured_article'] = $view;

  $view = new view();
  $view->name = 'lcm_featured_challenging_cases';
  $view->description = 'LCM Featured Challenging Cases';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Web: lcm_featured_challenging_cases';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['label'] = 'Average';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'vote',
    'function' => 'average',
  );
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache_1']['id'] = 'votingapi_cache_1';
  $handler->display->display_options['relationships']['votingapi_cache_1']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_1']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_1']['label'] = 'Count';
  $handler->display->display_options['relationships']['votingapi_cache_1']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'vote',
    'function' => 'count',
  );
  /* Relationship: Content: Multisite recognition (field_collection_multisite) */
  $handler->display->display_options['relationships']['field_collection_multisite_value']['id'] = 'field_collection_multisite_value';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['table'] = 'field_data_field_collection_multisite';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['field'] = 'field_collection_multisite_value';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = 'Average';
  $handler->display->display_options['fields']['value']['precision'] = '0';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'votingapi_cache_1';
  $handler->display->display_options['fields']['value_1']['label'] = 'Count';
  $handler->display->display_options['fields']['value_1']['precision'] = '0';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_cc_abstract']['id'] = 'field_cc_abstract';
  $handler->display->display_options['fields']['field_cc_abstract']['table'] = 'field_data_field_cc_abstract';
  $handler->display->display_options['fields']['field_cc_abstract']['field'] = 'field_cc_abstract';
  /* Field: Content: Con KOL Image */
  $handler->display->display_options['fields']['field_cc_con_kol_image']['id'] = 'field_cc_con_kol_image';
  $handler->display->display_options['fields']['field_cc_con_kol_image']['table'] = 'field_data_field_cc_con_kol_image';
  $handler->display->display_options['fields']['field_cc_con_kol_image']['field'] = 'field_cc_con_kol_image';
  $handler->display->display_options['fields']['field_cc_con_kol_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cc_con_kol_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Con KOL Name */
  $handler->display->display_options['fields']['field_cc_con_kol_name']['id'] = 'field_cc_con_kol_name';
  $handler->display->display_options['fields']['field_cc_con_kol_name']['table'] = 'field_data_field_cc_con_kol_name';
  $handler->display->display_options['fields']['field_cc_con_kol_name']['field'] = 'field_cc_con_kol_name';
  /* Field: Content: Pro KOL Image */
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['id'] = 'field_cc_pro_kol_image';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['table'] = 'field_data_field_cc_pro_kol_image';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['field'] = 'field_cc_pro_kol_image';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Pro KOL Name */
  $handler->display->display_options['fields']['field_cc_pro_kol_name']['id'] = 'field_cc_pro_kol_name';
  $handler->display->display_options['fields']['field_cc_pro_kol_name']['table'] = 'field_data_field_cc_pro_kol_name';
  $handler->display->display_options['fields']['field_cc_pro_kol_name']['field'] = 'field_cc_pro_kol_name';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'challenging_case' => 'challenging_case',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    3396 => '3396',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'lcmchallengingcases';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['lcm_featured_challenging_cases'] = array(
    t('Defaults'),
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
    t('Average'),
    t('Count'),
    t('field collection item from field_collection_multisite'),
    t('Title'),
    t('Nid'),
    t('.'),
    t(','),
    t('Abstract'),
    t('Con KOL Image'),
    t('Con KOL Name'),
    t('Pro KOL Image'),
    t('Pro KOL Name'),
    t('Page'),
  );
  $export['lcm_featured_challenging_cases'] = $view;

  $view = new view();
  $view->name = 'lcm_featured_editorials';
  $view->description = 'LCM Featured Editorials';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Web: lcm_featured_editorials';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Article Published Date (field_article_published_date) */
  $handler->display->display_options['sorts']['field_article_published_date_value']['id'] = 'field_article_published_date_value';
  $handler->display->display_options['sorts']['field_article_published_date_value']['table'] = 'field_data_field_article_published_date';
  $handler->display->display_options['sorts']['field_article_published_date_value']['field'] = 'field_article_published_date_value';
  $handler->display->display_options['sorts']['field_article_published_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page_html' => 'page_html',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Article Type (field_article_type) */
  $handler->display->display_options['filters']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['filters']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['value'] = array(
    3635 => '3635',
  );
  $handler->display->display_options['filters']['field_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_type_tid']['vocabulary'] = 'article_types';
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3396',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'lcmeditorials';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['lcm_featured_editorials'] = array(
    t('Defaults'),
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
    t('Link'),
    t('Title'),
    t('Page'),
  );
  $export['lcm_featured_editorials'] = $view;

  $view = new view();
  $view->name = 'lcm_featured_media';
  $view->description = 'LCM featured Media';
  $view->tag = 'lcm featured media';
  $view->base_table = 'node';
  $view->human_name = 'Web: lcm_featured_media';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'domain';
  $handler->display->display_options['access']['domains'] = array(
    2 => 0,
    8 => '8',
    7 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['access']['domain_strict'] = 0;
  $handler->display->display_options['access']['domain_member'] = 0;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Thumbnail Image (field_video_thumbimage:fid) */
  $handler->display->display_options['relationships']['field_video_thumbimage_fid']['id'] = 'field_video_thumbimage_fid';
  $handler->display->display_options['relationships']['field_video_thumbimage_fid']['table'] = 'field_data_field_video_thumbimage';
  $handler->display->display_options['relationships']['field_video_thumbimage_fid']['field'] = 'field_video_thumbimage_fid';
  /* Relationship: Content: Downloadable Video for Offline Storage  (field_video_localvideo:fid) */
  $handler->display->display_options['relationships']['field_video_localvideo_fid']['id'] = 'field_video_localvideo_fid';
  $handler->display->display_options['relationships']['field_video_localvideo_fid']['table'] = 'field_data_field_video_localvideo';
  $handler->display->display_options['relationships']['field_video_localvideo_fid']['field'] = 'field_video_localvideo_fid';
  /* Relationship: Content: Thumbnail Image (field_audio_thumbimage:fid) */
  $handler->display->display_options['relationships']['field_audio_thumbimage_fid']['id'] = 'field_audio_thumbimage_fid';
  $handler->display->display_options['relationships']['field_audio_thumbimage_fid']['table'] = 'field_data_field_audio_thumbimage';
  $handler->display->display_options['relationships']['field_audio_thumbimage_fid']['field'] = 'field_audio_thumbimage_fid';
  /* Relationship: Content: Download and Store Audio Source (field_audio_localaudio:fid) */
  $handler->display->display_options['relationships']['field_audio_localaudio_fid']['id'] = 'field_audio_localaudio_fid';
  $handler->display->display_options['relationships']['field_audio_localaudio_fid']['table'] = 'field_data_field_audio_localaudio';
  $handler->display->display_options['relationships']['field_audio_localaudio_fid']['field'] = 'field_audio_localaudio_fid';
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_featured']['id'] = 'field_featured';
  $handler->display->display_options['fields']['field_featured']['table'] = 'field_data_field_featured';
  $handler->display->display_options['fields']['field_featured']['field'] = 'field_featured';
  /* Field: Content: Featured Weight */
  $handler->display->display_options['fields']['field_featured_weight']['id'] = 'field_featured_weight';
  $handler->display->display_options['fields']['field_featured_weight']['table'] = 'field_data_field_featured_weight';
  $handler->display->display_options['fields']['field_featured_weight']['field'] = 'field_featured_weight';
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_video_speaker']['id'] = 'field_video_speaker';
  $handler->display->display_options['fields']['field_video_speaker']['table'] = 'field_data_field_video_speaker';
  $handler->display->display_options['fields']['field_video_speaker']['field'] = 'field_video_speaker';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_video_title']['id'] = 'field_video_title';
  $handler->display->display_options['fields']['field_video_title']['table'] = 'field_data_field_video_title';
  $handler->display->display_options['fields']['field_video_title']['field'] = 'field_video_title';
  /* Field: Content: Slideshow Link */
  $handler->display->display_options['fields']['field_video_slideshow_link']['id'] = 'field_video_slideshow_link';
  $handler->display->display_options['fields']['field_video_slideshow_link']['table'] = 'field_data_field_video_slideshow_link';
  $handler->display->display_options['fields']['field_video_slideshow_link']['field'] = 'field_video_slideshow_link';
  /* Field: Content: Streaming Video */
  $handler->display->display_options['fields']['field_video_rvideoupload']['id'] = 'field_video_rvideoupload';
  $handler->display->display_options['fields']['field_video_rvideoupload']['table'] = 'field_data_field_video_rvideoupload';
  $handler->display->display_options['fields']['field_video_rvideoupload']['field'] = 'field_video_rvideoupload';
  $handler->display->display_options['fields']['field_video_rvideoupload']['click_sort_column'] = 'fid';
  /* Field: Content: Streaming Video URL */
  $handler->display->display_options['fields']['field_video_remotevideo']['id'] = 'field_video_remotevideo';
  $handler->display->display_options['fields']['field_video_remotevideo']['table'] = 'field_data_field_video_remotevideo';
  $handler->display->display_options['fields']['field_video_remotevideo']['field'] = 'field_video_remotevideo';
  /* Field: Content: Disclaimer Required */
  $handler->display->display_options['fields']['field_asset_disclaimer_required']['id'] = 'field_asset_disclaimer_required';
  $handler->display->display_options['fields']['field_asset_disclaimer_required']['table'] = 'field_data_field_asset_disclaimer_required';
  $handler->display->display_options['fields']['field_asset_disclaimer_required']['field'] = 'field_asset_disclaimer_required';
  /* Field: Content: Disclaimer Text */
  $handler->display->display_options['fields']['field_asset_disclaimer_text']['id'] = 'field_asset_disclaimer_text';
  $handler->display->display_options['fields']['field_asset_disclaimer_text']['table'] = 'field_data_field_asset_disclaimer_text';
  $handler->display->display_options['fields']['field_asset_disclaimer_text']['field'] = 'field_asset_disclaimer_text';
  /* Sort criterion: Content: Featured Weight (field_featured_weight) */
  $handler->display->display_options['sorts']['field_featured_weight_value']['id'] = 'field_featured_weight_value';
  $handler->display->display_options['sorts']['field_featured_weight_value']['table'] = 'field_data_field_featured_weight';
  $handler->display->display_options['sorts']['field_featured_weight_value']['field'] = 'field_featured_weight_value';
  $handler->display->display_options['sorts']['field_featured_weight_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asset_video' => 'asset_video',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Categories (taxonomy_vocabulary_4) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['id'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['table'] = 'field_data_taxonomy_vocabulary_4';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['field'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['value'] = array(
    251 => '251',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['vocabulary'] = 'vocabulary_4';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'lcmmedialibrary';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MEDIA LIBRARY';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-web-lcm-main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['lcm_featured_media'] = array(
    t('Defaults'),
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
    t('image from field_video_thumbimage'),
    t('file from field_video_localvideo'),
    t('image from field_audio_thumbimage'),
    t('file from field_audio_localaudio'),
    t('Featured'),
    t('Featured Weight'),
    t('Speaker'),
    t('Title'),
    t('Slideshow Link'),
    t('Streaming Video'),
    t('Streaming Video URL'),
    t('Disclaimer Required'),
    t('Disclaimer Text'),
    t('Page'),
    t('Block'),
  );
  $export['lcm_featured_media'] = $view;

  $view = new view();
  $view->name = 'lcm_featured_media_random';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Web: lcm_featured_media_random';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'lcm_featured_media_random';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Categories (taxonomy_vocabulary_4) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_4_tid']['id'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_4_tid']['table'] = 'field_data_taxonomy_vocabulary_4';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_4_tid']['field'] = 'taxonomy_vocabulary_4_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_video_title']['id'] = 'field_video_title';
  $handler->display->display_options['fields']['field_video_title']['table'] = 'field_data_field_video_title';
  $handler->display->display_options['fields']['field_video_title']['field'] = 'field_video_title';
  /* Field: Content: Speaker */
  $handler->display->display_options['fields']['field_video_speaker']['id'] = 'field_video_speaker';
  $handler->display->display_options['fields']['field_video_speaker']['table'] = 'field_data_field_video_speaker';
  $handler->display->display_options['fields']['field_video_speaker']['field'] = 'field_video_speaker';
  /* Field: Content: Thumbnail Image */
  $handler->display->display_options['fields']['field_video_thumbimage']['id'] = 'field_video_thumbimage';
  $handler->display->display_options['fields']['field_video_thumbimage']['table'] = 'field_data_field_video_thumbimage';
  $handler->display->display_options['fields']['field_video_thumbimage']['field'] = 'field_video_thumbimage';
  $handler->display->display_options['fields']['field_video_thumbimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbimage']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asset_video' => 'asset_video',
  );
  /* Filter criterion: Content: Categories (taxonomy_vocabulary_4) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['id'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['table'] = 'field_data_taxonomy_vocabulary_4';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['field'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['value'] = array(
    0 => '251',
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['vocabulary'] = 'vocabulary_4';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['lcm_featured_media_random'] = array(
    t('Master'),
    t('lcm_featured_media_random'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from taxonomy_vocabulary_4'),
    t('Title'),
    t('Speaker'),
    t('Thumbnail Image'),
    t('Block'),
  );
  $export['lcm_featured_media_random'] = $view;

  $view = new view();
  $view->name = 'specialty_acpharmint';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-acpharmint';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Academia-Pharma Intersect';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3377',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-acpharmint';
  $translatables['specialty_acpharmint'] = array(
    t('Master'),
    t('Academia-Pharma Intersect'),
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
  $export['specialty_acpharmint'] = $view;

  $view = new view();
  $view->name = 'specialty_breast_cancer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-breast-cancer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Breast Cancer';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3378',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';
  $handler->display->display_options['path'] = 'specialty-breast-cancer';
  $translatables['specialty_breast_cancer'] = array(
    t('Master'),
    t('Breast Cancer'),
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
  $export['specialty_breast_cancer'] = $view;

  $view = new view();
  $view->name = 'specialty_drug_dev';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-drug-dev';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New Drug Development and Clinical Pharmacology';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3402',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-drug-dev';
  $translatables['specialty_drug_dev'] = array(
    t('Master'),
    t('New Drug Development and Clinical Pharmacology'),
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
  $export['specialty_drug_dev'] = $view;

  $view = new view();
  $view->name = 'specialty_economics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-economics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Economics of Oncology Practice';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3386',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-economics';
  $translatables['specialty_economics'] = array(
    t('Master'),
    t('Economics of Oncology Practice'),
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
  $export['specialty_economics'] = $view;

  $view = new view();
  $view->name = 'specialty_endocrinology';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-endocrinology';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Endocrinology';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3387',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-endocrinology';
  $translatables['specialty_endocrinology'] = array(
    t('Master'),
    t('Endocrinology'),
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
  $export['specialty_endocrinology'] = $view;

  $view = new view();
  $view->name = 'specialty_geriatric_onc';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-geriatric-onc';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Geriatric Oncology';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3391',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-geriatric-onc';
  $translatables['specialty_geriatric_onc'] = array(
    t('Master'),
    t('Geriatric Oncology'),
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
  $export['specialty_geriatric_onc'] = $view;

  $view = new view();
  $view->name = 'specialty_gyno_onc';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-gyno-onc';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gynecologic Oncology';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3392',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-gyno-onc';
  $translatables['specialty_gyno_onc'] = array(
    t('Master'),
    t('Gynecologic Oncology'),
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
  $export['specialty_gyno_onc'] = $view;

  $view = new view();
  $view->name = 'specialty_headneck';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-headneck';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Head and Neck Cancers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3393',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-headneck';
  $translatables['specialty_headneck'] = array(
    t('Master'),
    t('Head and Neck Cancers'),
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
  $export['specialty_headneck'] = $view;

  $view = new view();
  $view->name = 'specialty_lung';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-lung';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lung';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3396',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-lung';
  $translatables['specialty_lung'] = array(
    t('Master'),
    t('Lung'),
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
  $export['specialty_lung'] = $view;

  $view = new view();
  $view->name = 'specialty_lymphoma';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-lymphoma';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lymphoma';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3397',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-lymphoma';
  $translatables['specialty_lymphoma'] = array(
    t('Master'),
    t('Lymphoma'),
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
  $export['specialty_lymphoma'] = $view;

  $view = new view();
  $view->name = 'specialty_melanoma';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-melanoma';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Melanoma';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3399',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-melanoma';
  $translatables['specialty_melanoma'] = array(
    t('Master'),
    t('Melanoma'),
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
  $export['specialty_melanoma'] = $view;

  $view = new view();
  $view->name = 'specialty_neuro_oncology';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-neuro-oncology';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Neuro-Oncology';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3401',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-neuro';
  $translatables['specialty_neuro_oncology'] = array(
    t('Master'),
    t('Neuro-Oncology'),
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
  $export['specialty_neuro_oncology'] = $view;

  $view = new view();
  $view->name = 'specialty_pinedo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-pinedo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pinedo Prize Lecture';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3418',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-pinedo';
  $translatables['specialty_pinedo'] = array(
    t('Master'),
    t('Pinedo Prize Lecture'),
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
  $export['specialty_pinedo'] = $view;

  $view = new view();
  $view->name = 'specialty_prevention';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-prevention';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cancer Prevention';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3382',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-prevention';
  $translatables['specialty_prevention'] = array(
    t('Master'),
    t('Cancer Prevention'),
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
  $export['specialty_prevention'] = $view;

  $view = new view();
  $view->name = 'specialty_prostate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-prostate';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'specialty-prostate';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3389',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-prostate';
  $translatables['specialty_prostate'] = array(
    t('Master'),
    t('specialty-prostate'),
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
  $export['specialty_prostate'] = $view;

  $view = new view();
  $view->name = 'specialty_radiation_oncology';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-radiation-oncology';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Radiation Oncology';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3405',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-radiation';
  $translatables['specialty_radiation_oncology'] = array(
    t('Master'),
    t('Radiation Oncology'),
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
  $export['specialty_radiation_oncology'] = $view;

  $view = new view();
  $view->name = 'specialty_reflections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-reflections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reflections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3422',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-reflections';
  $translatables['specialty_reflections'] = array(
    t('Master'),
    t('Reflections'),
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
  $export['specialty_reflections'] = $view;

  $view = new view();
  $view->name = 'specialty_regulatory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-regulatory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Regulatory Issues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3406',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-regulatory';
  $translatables['specialty_regulatory'] = array(
    t('Master'),
    t('Regulatory Issues'),
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
  $export['specialty_regulatory'] = $view;

  $view = new view();
  $view->name = 'specialty_sarcomas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-sarcomas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sarcomas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3407',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-sarcoma';
  $translatables['specialty_sarcomas'] = array(
    t('Master'),
    t('Sarcomas'),
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
  $export['specialty_sarcomas'] = $view;

  $view = new view();
  $view->name = 'specialty_symptom';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-symptom';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Symptom Management and Supportive Care';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3408',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-symptom';
  $translatables['specialty_symptom'] = array(
    t('Master'),
    t('Symptom Management and Supportive Care'),
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
  $export['specialty_symptom'] = $view;

  $view = new view();
  $view->name = 'specialty_trial';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'specialty-trial';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Clinical Trial Results';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Field: Tax Section (field_tax_section) */
  $handler->display->display_options['filters']['field_tax_section_tid']['id'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['table'] = 'field_data_field_tax_section';
  $handler->display->display_options['filters']['field_tax_section_tid']['field'] = 'field_tax_section_tid';
  $handler->display->display_options['filters']['field_tax_section_tid']['value'] = array(
    0 => '3385',
  );
  $handler->display->display_options['filters']['field_tax_section_tid']['vocabulary'] = 'sections';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'specialty-trial';
  $translatables['specialty_trial'] = array(
    t('Master'),
    t('Clinical Trial Results'),
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
  $export['specialty_trial'] = $view;

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
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
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
    t('View all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_tax_edition'),
    t('term from field_article_type'),
    t('Article Year Int'),
    t('Current Issue US'),
    t('more'),
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

  /* Display: Web: Cancer Portal - Current Issue US Block */
  $handler = $view->new_display('block', 'Web: Cancer Portal - Current Issue US Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Express';
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
    t('Express'),
    t('Web: Cancer Portal - Current Issue US Page'),
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
  $handler->display->display_options['title'] = 'Featured Articles';
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
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_perspective_author']['id'] = 'field_perspective_author';
  $handler->display->display_options['fields']['field_perspective_author']['table'] = 'field_data_field_perspective_author';
  $handler->display->display_options['fields']['field_perspective_author']['field'] = 'field_perspective_author';
  $handler->display->display_options['fields']['field_perspective_author']['label'] = '';
  $handler->display->display_options['fields']['field_perspective_author']['element_label_colon'] = FALSE;
  /* Field: Content: Author Picture */
  $handler->display->display_options['fields']['field_perspective_author_picture']['id'] = 'field_perspective_author_picture';
  $handler->display->display_options['fields']['field_perspective_author_picture']['table'] = 'field_data_field_perspective_author_picture';
  $handler->display->display_options['fields']['field_perspective_author_picture']['field'] = 'field_perspective_author_picture';
  $handler->display->display_options['fields']['field_perspective_author_picture']['label'] = '';
  $handler->display->display_options['fields']['field_perspective_author_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_perspective_author_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_perspective_author_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_abstract']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['path'] = 'featured-articles';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['view_cancerportal_featuredarticlesqueue'] = array(
    t('Master'),
    t('Featured Articles'),
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
  $handler->display->display_options['title'] = 'Global Perspectives';
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
    t('Global Perspectives'),
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
  $handler->display->display_options['title'] = 'Prostate Cancer';
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
  $handler->display->display_options['title'] = 'Breast Cancer';
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
  $handler->display->display_options['title'] = 'Lung Cancer';
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
    t('View all'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_tax_edition'),
    t('term from field_article_type'),
    t('Article Year Int'),
    t('Web: Cancer Portal - Prostate Portal Block'),
    t('Prostate Cancer'),
    t('more'),
    t('Web: Cancer Portal - Prostate Portal Page'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Web: Cancer Portal - Breast Portal Block'),
    t('Breast Cancer'),
    t('Web: Cancer Portal - Breast Portal Page Page'),
    t('Web: Cancer Portal - Breast Portal'),
    t('Web: Cancer Portal - Lung Portal Page Block'),
    t('Lung Cancer'),
    t('Web: Cancer Portal - Lung Portal Page'),
    t('Web: Cancer Portal - Lung Portal'),
  );
  $export['view_cancerportal_portals'] = $view;

  $view = new view();
  $view->name = 'view_cancerportal_promcarouseloqueue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Web: view_cancerportal_promcarousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Web: view_cancerportal_promcarousel';
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
  $handler->display->display_options['path'] = 'view_cancerportal_promcarousel';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['view_cancerportal_promcarouseloqueue'] = array(
    t('Master'),
    t('Web: view_cancerportal_promcarousel'),
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
    t('Block'),
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
  $handler->display->display_options['path'] = 'videolibrary-sto';

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
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
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
  $handler->display->display_options['title'] = 'Video Library';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'video-library';

  /* Display: Web: Cancer Portal - Video Library Block */
  $handler = $view->new_display('block', 'Web: Cancer Portal - Video Library Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Video Library';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['view_cancerportal_videolibrary'] = array(
    t('Master'),
    t('view_videolibrary'),
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
    t('Nid'),
    t('Title'),
    t('Web: Cancer Portal - Video Library Page'),
    t('Video Library'),
    t('more'),
    t('Web: Cancer Portal - Video Library Block'),
  );
  $export['view_cancerportal_videolibrary'] = $view;

  $view = new view();
  $view->name = 'view_featuredqueue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'App: view_featuredqueue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'App: view_featuredqueue';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Contextual filter: Nodequeue: Queue machine name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'nodequeue_rel';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view_featuredqueue';
  $translatables['view_featuredqueue'] = array(
    t('Master'),
    t('App: view_featuredqueue'),
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
    t('All'),
    t('Page'),
  );
  $export['view_featuredqueue'] = $view;

  $view = new view();
  $view->name = 'view_items_featuredqueue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'App: view_items_featuredqueue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'App: view_featuredqueue';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Contextual filter: Nodequeue: Queue machine name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'nodequeue_queue';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'nodequeue_rel';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view_items_featuredqueue';
  $translatables['view_items_featuredqueue'] = array(
    t('Master'),
    t('App: view_featuredqueue'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('queue'),
    t('All'),
    t('Page'),
  );
  $export['view_items_featuredqueue'] = $view;

  return $export;
}
