<?php
/**
 * @file
 * intstrux_solr_feature.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function intstrux_solr_feature_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'production_solr_search_environment';
  $environment->name = 'Production SOLR search environment';
  $environment->url = 'http://108.171.175.37:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_access_always_add_grants' => 0,
    'apachesolr_index_last' => array(
      'comment' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'field_collection_item' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'node' => array(
        'last_changed' => '1384199901',
        'last_entity_id' => '66146',
      ),
      'profile2' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'profile2_type' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'redirect' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'file' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_term' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_vocabulary' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'user' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
    ),
    'apachesolr_index_updated' => 1384235401,
    'apachesolr_last_optimize' => 1384204501,
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '2:100.0',
    'apachesolr_search_comment_boost' => '1:100.0',
    'apachesolr_search_date_boost' => '4:300.0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'apns_client' => '0',
      'page_html' => '0',
      'article' => '0',
      'article_express' => '0',
      'asset_audio' => '0',
      'audio' => '0',
      'challenging_case' => '0',
      'edition' => '0',
      'image' => '0',
      'asset_image' => '0',
      'page_interactive_ad_alt' => '0',
      'page_interactive_ad' => '0',
      'meeting' => '0',
      'default' => '0',
      'page' => '0',
      'panel' => '0',
      'perspective' => '0',
      'poll' => '0',
      'portal' => '0',
      'sto_featured_item' => '0',
      'sidebar_banner_ad' => '0',
      'video' => '0',
      'asset_video' => '0',
      'web_cancer_portal_promo_carousel' => '0',
      'webform' => '0',
    ),
    'field_bias' => array(
      'access__all' => '0',
      'access_node_2y8ulc_domain_all' => '0',
      'bm_field_asset_disclaimer_requir' => '0',
      'bm_field_featured' => '0',
      'bm_field_inject_category' => '0',
      'bm_field_perspective_isaudio' => '0',
      'bs_field_asset_disclaimer_requir' => '0',
      'bs_field_featured' => '0',
      'bs_field_inject_category' => '0',
      'bs_field_perspective_isaudio' => '0',
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '1.0',
      'dm_field_bcm_update' => '0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_last_comment_or_change' => '0',
      'ds_last_comment_timestamp' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_article_author' => '0',
      'im_field_article_issue' => '0',
      'im_field_article_type' => '0',
      'im_field_article_volume' => '0',
      'im_field_article_year' => '0',
      'im_field_bcm_status' => '0',
      'im_field_featured_weight' => '0',
      'im_field_perspective_weight' => '0',
      'im_field_sections' => '0',
      'im_field_tax_article' => '0',
      'im_field_tax_edition' => '0',
      'im_field_tax_section' => '0',
      'im_taxonomy_vocabulary_4' => '0',
      'im_taxonomy_vocabulary_5' => '0',
      'im_taxonomy_vocabulary_6' => '0',
      'im_vid_1' => '0',
      'im_vid_10' => '0',
      'im_vid_11' => '0',
      'im_vid_12' => '0',
      'im_vid_13' => '0',
      'im_vid_14' => '0',
      'im_vid_15' => '0',
      'im_vid_16' => '0',
      'im_vid_22' => '0',
      'im_vid_4' => '0',
      'im_vid_5' => '0',
      'im_vid_6' => '0',
      'is_bc_id' => '0',
      'is_bc_meeting_weight' => '0',
      'is_comment_count' => '0',
      'is_field_bcm_status' => '0',
      'is_field_featured_weight' => '0',
      'is_field_perspective_weight' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'is_unified_sorting_date' => '0',
      'itm_field_article_month' => '0',
      'itm_field_article_page' => '0',
      'itm_field_portal_weight' => '0',
      'its_field_article_month' => '0',
      'its_field_article_page' => '0',
      'its_field_portal_weight' => '0',
      'label' => '21.0',
      'path' => '0',
      'path_alias' => '0',
      'site' => '0',
      'sm_field_asset_swf_file' => '0',
      'sm_vid_Article_Container__Issues__Supplements___for_MANUAL_Articles_' => '0',
      'sm_vid_Article_Types' => '0',
      'sm_vid_Authors' => '0',
      'sm_vid_Categories' => '0',
      'sm_vid_Editions' => '0',
      'sm_vid_Issues' => '0',
      'sm_vid_Meetings' => '0',
      'sm_vid_Menu_Category' => '0',
      'sm_vid_Perspectives' => '0',
      'sm_vid_Sections' => '0',
      'sm_vid_Volumes' => '0',
      'sm_vid_Years' => '0',
      'sort_bc_abstract' => '0',
      'sort_bc_speaker' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'spell' => '0',
      'ss_bc_abstract' => '0',
      'ss_bc_speaker' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '2.0',
      'tid' => '0',
      'timestamp' => '0',
      'tm_vid_10_names' => '13.0',
      'tm_vid_11_names' => '0',
      'tm_vid_12_names' => '3.0',
      'tm_vid_13_names' => '3.0',
      'tm_vid_14_names' => '13.0',
      'tm_vid_15_names' => '5.0',
      'tm_vid_16_names' => '0',
      'tm_vid_1_names' => '0',
      'tm_vid_22_names' => '0',
      'tm_vid_4_names' => '0',
      'tm_vid_5_names' => '0',
      'tm_vid_6_names' => '0',
      'tos_content_extra' => '0.1',
      'tos_name' => '0',
      'tos_name_formatted' => '0',
      'ts_comments' => '0.5',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'article_express',
      2 => 'asset_image',
      3 => 'asset_video',
      4 => 'challenging_case',
      5 => 'page',
      6 => 'page_html',
      7 => 'perspective',
      8 => 'portal',
      9 => 'webform',
    ),
  );
  $export['production_solr_search_environment'] = $environment;

  return $export;
}
