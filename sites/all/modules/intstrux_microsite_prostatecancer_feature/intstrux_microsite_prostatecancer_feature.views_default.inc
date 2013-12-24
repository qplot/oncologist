<?php
/**
 * @file
 * intstrux_microsite_prostatecancer_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function intstrux_microsite_prostatecancer_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pcm_featured_articel';
  $view->description = 'PCM Featured Article';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'web_pcm_featured_article';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Multisite recognition (field_collection_multisite) */
  $handler->display->display_options['relationships']['field_collection_multisite_value']['id'] = 'field_collection_multisite_value';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['table'] = 'field_data_field_collection_multisite';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['field'] = 'field_collection_multisite_value';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['delta'] = '-1';
  /* Field: Content: Article Title */
  $handler->display->display_options['fields']['field_article_title']['id'] = 'field_article_title';
  $handler->display->display_options['fields']['field_article_title']['table'] = 'field_data_field_article_title';
  $handler->display->display_options['fields']['field_article_title']['field'] = 'field_article_title';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Contextual filter: Content: Multisite recognition (field_collection_multisite) */
  $handler->display->display_options['arguments']['field_collection_multisite_value']['id'] = 'field_collection_multisite_value';
  $handler->display->display_options['arguments']['field_collection_multisite_value']['table'] = 'field_data_field_collection_multisite';
  $handler->display->display_options['arguments']['field_collection_multisite_value']['field'] = 'field_collection_multisite_value';
  $handler->display->display_options['arguments']['field_collection_multisite_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_collection_multisite_value']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page_html' => 'page_html',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Field collection item: Multisite (field_multisite_filter) */
  $handler->display->display_options['filters']['field_multisite_filter_value']['id'] = 'field_multisite_filter_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['table'] = 'field_data_field_multisite_filter';
  $handler->display->display_options['filters']['field_multisite_filter_value']['field'] = 'field_multisite_filter_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['relationship'] = 'field_collection_multisite_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['value'] = 'pcm.ampserver.intstrux.com';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'articles';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['pcm_featured_articel'] = array(
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
    t('field collection item from field_collection_multisite'),
    t('Article Title'),
    t('Abstract'),
    t('Link'),
    t('All'),
    t('Page'),
  );
  $export['pcm_featured_articel'] = $view;

  $view = new view();
  $view->name = 'pcm_featured_challenging_cases';
  $view->description = 'PCM Featured Challenging Cases';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'web_pcm_featured_challenging_cases';
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
  $handler->display->display_options['filters']['field_multisite_filter_value']['value'] = 'pcm.ampserver.intstrux.com';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'challengingcases';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['pcm_featured_challenging_cases'] = array(
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
  $export['pcm_featured_challenging_cases'] = $view;

  $view = new view();
  $view->name = 'pcm_featured_editorials';
  $view->description = 'PCM Featured Editorials';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'web_pcm_featured_editorials';
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
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_abstract']['id'] = 'field_abstract';
  $handler->display->display_options['fields']['field_abstract']['table'] = 'field_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract']['field'] = 'field_abstract';
  /* Field: Content: Article Title */
  $handler->display->display_options['fields']['field_article_title']['id'] = 'field_article_title';
  $handler->display->display_options['fields']['field_article_title']['table'] = 'field_data_field_article_title';
  $handler->display->display_options['fields']['field_article_title']['field'] = 'field_article_title';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'editorials';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $translatables['pcm_featured_editorials'] = array(
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
    t('Abstract'),
    t('Article Title'),
    t('Page'),
  );
  $export['pcm_featured_editorials'] = $view;

  $view = new view();
  $view->name = 'pcm_featured_media';
  $view->description = 'PCM featured Media';
  $view->tag = 'pcm featured media';
  $view->base_table = 'node';
  $view->human_name = 'web_pcm_featured_media';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'domain';
  $handler->display->display_options['access']['domains'] = array(
    1 => 0,
    4 => '4',
    2 => 0,
    3 => 0,
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
  /* Relationship: Content: Multisite recognition (field_collection_multisite) */
  $handler->display->display_options['relationships']['field_collection_multisite_value']['id'] = 'field_collection_multisite_value';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['table'] = 'field_data_field_collection_multisite';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['field'] = 'field_collection_multisite_value';
  $handler->display->display_options['relationships']['field_collection_multisite_value']['delta'] = '-1';
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
  /* Sort criterion: Field collection item: Multisite (field_multisite_filter) */
  $handler->display->display_options['sorts']['field_multisite_filter_value']['id'] = 'field_multisite_filter_value';
  $handler->display->display_options['sorts']['field_multisite_filter_value']['table'] = 'field_data_field_multisite_filter';
  $handler->display->display_options['sorts']['field_multisite_filter_value']['field'] = 'field_multisite_filter_value';
  $handler->display->display_options['sorts']['field_multisite_filter_value']['relationship'] = 'field_collection_multisite_value';
  /* Sort criterion: Field collection item: Weight (field_multisite_weight) */
  $handler->display->display_options['sorts']['field_multisite_weight_value']['id'] = 'field_multisite_weight_value';
  $handler->display->display_options['sorts']['field_multisite_weight_value']['table'] = 'field_data_field_multisite_weight';
  $handler->display->display_options['sorts']['field_multisite_weight_value']['field'] = 'field_multisite_weight_value';
  $handler->display->display_options['sorts']['field_multisite_weight_value']['relationship'] = 'field_collection_multisite_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asset_audio' => 'asset_audio',
    'asset_video' => 'asset_video',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Field collection item: Multisite (field_multisite_filter) */
  $handler->display->display_options['filters']['field_multisite_filter_value']['id'] = 'field_multisite_filter_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['table'] = 'field_data_field_multisite_filter';
  $handler->display->display_options['filters']['field_multisite_filter_value']['field'] = 'field_multisite_filter_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['relationship'] = 'field_collection_multisite_value';
  $handler->display->display_options['filters']['field_multisite_filter_value']['value'] = 'pcm.ampserver.intstrux.com';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'pcmmedialibrary';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['pcm_featured_media'] = array(
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
    t('field collection item from field_collection_multisite'),
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
  $export['pcm_featured_media'] = $view;

  $view = new view();
  $view->name = 'pcm_featured_media_random';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'web_pcm_featured_media_random';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'pcm_featured_media_random';
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
  $handler->display->display_options['filters']['field_multisite_filter_value']['value'] = 'pcm.ampserver.intstrux.com';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['pcm_featured_media_random'] = array(
    t('Master'),
    t('pcm_featured_media_random'),
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
  $export['pcm_featured_media_random'] = $view;

  return $export;
}
