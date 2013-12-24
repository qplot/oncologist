<?php
/**
 * @file
 * amp_tester.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amp_tester_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'amp_tester';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp-tester';
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
  $handler->display->display_options['path'] = 'tester';

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
  $translatables['amp_tester'] = array(
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
  $export['amp_tester'] = $view;

  return $export;
}
