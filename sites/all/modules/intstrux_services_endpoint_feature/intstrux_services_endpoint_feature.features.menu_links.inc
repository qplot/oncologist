<?php
/**
 * @file
 * intstrux_services_endpoint_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function intstrux_services_endpoint_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-app-com-intstrux-onchd-eu:node/55666
  $menu_links['menu-app-com-intstrux-onchd-eu:node/55666'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'node/55666',
    'router_path' => 'node/%',
    'link_title' => 'Saved',
    'options' => array(
      'attributes' => array(
        'rel' => 'app://saved',
        'class' => array(
          0 => 'menu-native',
        ),
      ),
      'menu_views' => array(
        'mlid' => 0,
        'type' => 'link',
        'original_path' => '',
        'view' => array(
          'name' => FALSE,
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_pagehtml
  $menu_links['menu-app-com-intstrux-onchd-eu:view_pagehtml'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'view_pagehtml',
    'router_path' => 'view_pagehtml',
    'link_title' => 'STO Meetings',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-level-0',
          1 => 'child-menu-wide',
        ),
      ),
      'menu_views' => array(
        'mlid' => 0,
        'type' => 'link',
        'original_path' => '',
        'view' => array(
          'name' => FALSE,
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'view_meetings',
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:<view>
  $menu_links['menu-app-com-intstrux-onchd-us:<view>'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => '<view>',
    'router_path' => '<view>',
    'link_title' => '',
    'options' => array(
      'attributes' => array(),
      'menu_views' => array(
        'mlid' => 14851,
        'type' => 'view',
        'original_path' => '',
        'view' => array(
          'name' => 'view_sto_meetings',
          'display' => 'default',
          'arguments' => '',
          'settings' => array(
            'wrapper_classes' => 'menu-views',
            'breadcrumb' => 1,
            'breadcrumb_title' => '',
            'breadcrumb_path' => '<front>',
            'title' => 0,
            'title_wrapper' => '',
            'title_classes' => '',
            'title_override' => '',
          ),
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'parent_path' => 'view_sto_meetings',
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:node/55666
  $menu_links['menu-app-com-intstrux-onchd-us:node/55666'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'node/55666',
    'router_path' => 'node/%',
    'link_title' => 'Saved',
    'options' => array(
      'attributes' => array(
        'rel' => 'app://saved',
        'class' => array(
          0 => 'menu-native',
        ),
      ),
      'menu_views' => array(
        'mlid' => 0,
        'type' => 'link',
        'original_path' => '',
        'view' => array(
          'name' => FALSE,
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_pagehtml
  $menu_links['menu-app-com-intstrux-onchd-us:view_pagehtml'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_pagehtml',
    'router_path' => 'view_pagehtml',
    'link_title' => 'STO Meetings',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-level-0',
          1 => 'child-menu-wide',
        ),
      ),
      'menu_views' => array(
        'mlid' => 0,
        'type' => 'link',
        'original_path' => '',
        'view' => array(
          'name' => FALSE,
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'parent_path' => 'view_meetings',
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_perspectives/3272
  $menu_links['menu-app-com-intstrux-onchd-us:view_perspectives/3272'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_perspectives/3272',
    'router_path' => 'view_perspectives',
    'link_title' => 'European Perspectives',
    'options' => array(
      'attributes' => array(),
      'menu_views' => array(
        'mlid' => 0,
        'type' => 'link',
        'original_path' => '',
        'view' => array(
          'name' => FALSE,
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_videoasset_categories
  $menu_links['menu-app-com-intstrux-onchd-us:view_videoasset_categories'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_videoasset_categories',
    'router_path' => 'view_videoasset_categories',
    'link_title' => 'Category',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-level-0',
          1 => 'child-menu-wide',
        ),
      ),
      'menu_views' => array(
        'mlid' => 0,
        'type' => 'link',
        'original_path' => '',
        'view' => array(
          'name' => FALSE,
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'parent_path' => 'view_videolibrary',
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_videoasset_meetings
  $menu_links['menu-app-com-intstrux-onchd-us:view_videoasset_meetings'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_videoasset_meetings',
    'router_path' => 'view_videoasset_meetings',
    'link_title' => 'Meeting',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-level-0',
          1 => 'child-menu-wide',
        ),
      ),
      'menu_views' => array(
        'mlid' => 0,
        'type' => 'link',
        'original_path' => '',
        'view' => array(
          'name' => FALSE,
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'parent_path' => 'view_videolibrary',
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_videolibrary
  $menu_links['menu-app-com-intstrux-onchd-us:view_videolibrary'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_videolibrary',
    'router_path' => 'view_videolibrary',
    'link_title' => 'Video Library',
    'options' => array(
      'attributes' => array(),
      'menu_views' => array(
        'mlid' => 0,
        'type' => 'link',
        'original_path' => '',
        'view' => array(
          'name' => FALSE,
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('European Perspectives');
  t('Meeting');
  t('STO Meetings');
  t('Saved');
  t('Video Library');


  return $menu_links;
}
