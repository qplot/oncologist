<?php
/**
 * @file
 * intstrux_microsite_breastcancer_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function intstrux_microsite_breastcancer_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bcm_featured_articel';
  $view->description = 'BCM Featured Article';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'web_bcm_featured_article';
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
  /* Relationship: Content: Multisite recognition (field_collection_multisite) */
  $handler->display->display_options['relationships']['field_collection_multisite_value']['id'] = 'field_collection_multisite_value';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['table'] = 'field_data_field_collection_multisite';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['field'] = 'field_collection_multisite_value';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['delta'] = '-1';
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
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '!=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '49987';
  $handler->display->display_options['filters']['nid']['group'] = '0';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = FALSE;
  /* Filter criterion: Field collection item: Multisite (field_multisite_filter) */
  $handler->display->display_options['filters']['field_multisite_filter_value']['id'] = 'field_multisite_filter_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['table'] = 'field_data_field_multisite_filter';
  $handler->display->display_options['filters']['field_multisite_filter_value']['field'] = 'field_multisite_filter_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['relationship'] = 'field_collection_multisite_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['value'] = 'bcm.ampserver.intstrux.com';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'bcmarticles';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['bcm_featured_articel'] = array(
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
    t('field collection item from field_collection_multisite'),
    t('Link'),
    t('Article Title'),
    t('Abstract'),
    t('Page'),
  );
  $export['bcm_featured_articel'] = $view;

  $view = new view();
  $view->name = 'bcm_featured_challenging_cases';
  $view->description = 'BCM Featured Challenging Cases';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'web_bcm_featured_challenging_cases';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Challenging Cases';
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'No challenging cases found';
  $handler->display->display_options['empty']['text']['format'] = '1';
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
  $handler->display->display_options['fields']['value']['precision'] = '0';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'votingapi_cache_1';
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
  /* Field: Content: Pro KOL Image */
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['id'] = 'field_cc_pro_kol_image';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['table'] = 'field_data_field_cc_pro_kol_image';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['field'] = 'field_cc_pro_kol_image';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cc_pro_kol_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Con KOL Name */
  $handler->display->display_options['fields']['field_cc_con_kol_name']['id'] = 'field_cc_con_kol_name';
  $handler->display->display_options['fields']['field_cc_con_kol_name']['table'] = 'field_data_field_cc_con_kol_name';
  $handler->display->display_options['fields']['field_cc_con_kol_name']['field'] = 'field_cc_con_kol_name';
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
  /* Filter criterion: Field collection item: Multisite (field_multisite_filter) */
  $handler->display->display_options['filters']['field_multisite_filter_value']['id'] = 'field_multisite_filter_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['table'] = 'field_data_field_multisite_filter';
  $handler->display->display_options['filters']['field_multisite_filter_value']['field'] = 'field_multisite_filter_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['relationship'] = 'field_collection_multisite_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['value'] = 'bcm.ampserver.intstrux.com';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'bcmchallengingcases';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['bcm_featured_challenging_cases'] = array(
    t('Defaults'),
    t('Challenging Cases'),
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
    t('No challenging cases found'),
    t('Average'),
    t('Count'),
    t('field collection item from field_collection_multisite'),
    t('Title'),
    t('Nid'),
    t('Value'),
    t('.'),
    t(','),
    t('Abstract'),
    t('Con KOL Image'),
    t('Pro KOL Image'),
    t('Con KOL Name'),
    t('Pro KOL Name'),
    t('Page'),
  );
  $export['bcm_featured_challenging_cases'] = $view;

  $view = new view();
  $view->name = 'bcm_featured_editorials';
  $view->description = 'BCM Featured Editorials';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'web_bcm_featured_editorials';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page_html' => 'page_html',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '23937';
  $handler->display->display_options['filters']['nid']['group'] = '0';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['multigroup_page_html_group_multisite_recognition']['id'] = 'multigroup_page_html_group_multisite_recognition';
  $handler->display->display_options['filters']['multigroup_page_html_group_multisite_recognition']['table'] = 'node';
  $handler->display->display_options['filters']['multigroup_page_html_group_multisite_recognition']['field'] = 'multigroup_page_html_group_multisite_recognition';
  $handler->display->display_options['filters']['multigroup_page_html_group_multisite_recognition']['group'] = '0';
  $handler->display->display_options['filters']['multigroup_page_html_group_multisite_recognition']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'bcmeditorials';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['bcm_featured_editorials'] = array(
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
  $export['bcm_featured_editorials'] = $view;

  $view = new view();
  $view->name = 'bcm_featured_media_random';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'web_bcm_featured_media_random';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'bcm_featured_media_random';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Multisite recognition (field_collection_multisite) */
  $handler->display->display_options['relationships']['field_collection_multisite_value']['id'] = 'field_collection_multisite_value';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['table'] = 'field_data_field_collection_multisite';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['field'] = 'field_collection_multisite_value';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['delta'] = '-1';
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
  /* Filter criterion: Field collection item: Multisite (field_multisite_filter) */
  $handler->display->display_options['filters']['field_multisite_filter_value']['id'] = 'field_multisite_filter_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['table'] = 'field_data_field_multisite_filter';
  $handler->display->display_options['filters']['field_multisite_filter_value']['field'] = 'field_multisite_filter_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['relationship'] = 'field_collection_multisite_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['value'] = 'bcm.ampserver.intstrux.com';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['bcm_featured_media_random'] = array(
    t('Master'),
    t('bcm_featured_media_random'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field collection item from field_collection_multisite'),
    t('Title'),
    t('Speaker'),
    t('Thumbnail Image'),
    t('Block'),
  );
  $export['bcm_featured_media_random'] = $view;

  return $export;
}
