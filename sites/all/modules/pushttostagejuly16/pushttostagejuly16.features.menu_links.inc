<?php
/**
 * @file
 * pushttostagejuly16.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pushttostagejuly16_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: devel:devel/cache/clear
  $menu_links['devel:devel/cache/clear'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/cache/clear',
    'router_path' => 'devel/cache/clear',
    'link_title' => 'Empty cache',
    'options' => array(
      'attributes' => array(
        'title' => 'Clear the CSS cache and all database cache tables which store page, node, theme and variable caches.',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/elements
  $menu_links['devel:devel/elements'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/elements',
    'router_path' => 'devel/elements',
    'link_title' => 'Hook_elements()',
    'options' => array(
      'attributes' => array(
        'title' => 'View the active form/render elements for this site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/entity/info
  $menu_links['devel:devel/entity/info'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/entity/info',
    'router_path' => 'devel/entity/info',
    'link_title' => 'Entity info',
    'options' => array(
      'attributes' => array(
        'title' => 'View entity information across the whole site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/field/info
  $menu_links['devel:devel/field/info'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/field/info',
    'router_path' => 'devel/field/info',
    'link_title' => 'Field info',
    'options' => array(
      'attributes' => array(
        'title' => 'View fields information across the whole site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/menu/item
  $menu_links['devel:devel/menu/item'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/menu/item',
    'router_path' => 'devel/menu/item',
    'link_title' => 'Menu item',
    'options' => array(
      'attributes' => array(
        'title' => 'Details about a given menu item.',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/menu/reset
  $menu_links['devel:devel/menu/reset'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/menu/reset',
    'router_path' => 'devel/menu/reset',
    'link_title' => 'Rebuild menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Rebuild menu based on hook_menu() and revert any custom changes. All menu items return to their default settings.',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/php
  $menu_links['devel:devel/php'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/php',
    'router_path' => 'devel/php',
    'link_title' => 'Execute PHP Code',
    'options' => array(
      'attributes' => array(
        'title' => 'Execute some PHP code',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/phpinfo
  $menu_links['devel:devel/phpinfo'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/phpinfo',
    'router_path' => 'devel/phpinfo',
    'link_title' => 'PHPinfo()',
    'options' => array(
      'attributes' => array(
        'title' => 'View your server\'s PHP configuration',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/reference
  $menu_links['devel:devel/reference'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/reference',
    'router_path' => 'devel/reference',
    'link_title' => 'Function reference',
    'options' => array(
      'attributes' => array(
        'title' => 'View a list of currently defined user functions with documentation links.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/reinstall
  $menu_links['devel:devel/reinstall'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/reinstall',
    'router_path' => 'devel/reinstall',
    'link_title' => 'Reinstall modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Run hook_uninstall() and then hook_install() for a given module.',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/run-cron
  $menu_links['devel:devel/run-cron'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/run-cron',
    'router_path' => 'devel/run-cron',
    'link_title' => 'Run cron',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/session
  $menu_links['devel:devel/session'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/session',
    'router_path' => 'devel/session',
    'link_title' => 'Session viewer',
    'options' => array(
      'attributes' => array(
        'title' => 'List the contents of $_SESSION.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/settings
  $menu_links['devel:devel/settings'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/settings',
    'router_path' => 'devel/settings',
    'link_title' => 'Devel settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/admin/structure/block">block administration</a> page.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/theme/registry
  $menu_links['devel:devel/theme/registry'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/theme/registry',
    'router_path' => 'devel/theme/registry',
    'link_title' => 'Theme registry',
    'options' => array(
      'attributes' => array(
        'title' => 'View a list of available theme functions across the whole site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: devel:devel/variable
  $menu_links['devel:devel/variable'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/variable',
    'router_path' => 'devel/variable',
    'link_title' => 'Variable editor',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit and delete site variables.',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: main-menu:<nolink>
  $menu_links['main-menu:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Journal',
    'options' => array(
      'attributes' => array(
        'id' => 'journalID',
      ),
      'menu_views' => array(
        'mlid' => 0,
        'type' => 'link',
        'original_path' => 'node/65305',
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
    'weight' => -48,
  );
  // Exported menu link: main-menu:http://china.theoncologist.com/chinese-edition
  $menu_links['main-menu:http://china.theoncologist.com/chinese-edition'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://china.theoncologist.com/chinese-edition',
    'router_path' => '',
    'link_title' => 'Chinese Edition',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
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
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -38,
  );
  // Exported menu link: main-menu:http://cme.alphamedpress.org/
  $menu_links['main-menu:http://cme.alphamedpress.org/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://cme.alphamedpress.org/',
    'router_path' => '',
    'link_title' => 'CME',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
  );
  // Exported menu link: main-menu:http://oncologistportal.local/specialty-gastro
  $menu_links['main-menu:http://oncologistportal.local/specialty-gastro'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://oncologistportal.local/specialty-gastro',
    'router_path' => '',
    'link_title' => 'Gastrointestinal',
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:http://oncologistportal.local/taxonomy/term/3257
  $menu_links['main-menu:http://oncologistportal.local/taxonomy/term/3257'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://oncologistportal.local/taxonomy/term/3257',
    'router_path' => '',
    'link_title' => 'United States Edition',
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'parent_path' => 'view_cancerportal_currentpage_us',
  );
  // Exported menu link: main-menu:http://oncologistportal.local/taxonomy/term/3272
  $menu_links['main-menu:http://oncologistportal.local/taxonomy/term/3272'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://oncologistportal.local/taxonomy/term/3272',
    'router_path' => '',
    'link_title' => 'European Edition',
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'parent_path' => 'view_cancerportal_currentpage_us',
  );
  // Exported menu link: main-menu:http://sto-online.org/
  $menu_links['main-menu:http://sto-online.org/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://sto-online.org/',
    'router_path' => '',
    'link_title' => 'STO',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
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
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
  );
  // Exported menu link: main-menu:http://theoncologist.alphamedpress.org/content/by/year
  $menu_links['main-menu:http://theoncologist.alphamedpress.org/content/by/year'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://theoncologist.alphamedpress.org/content/by/year',
    'router_path' => '',
    'link_title' => 'Archives',
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:node/17852
  $menu_links['main-menu:node/17852'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/17852',
    'router_path' => 'node/%',
    'link_title' => 'meetings-chabner-colloquium-2012',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
  );
  // Exported menu link: main-menu:node/24034
  $menu_links['main-menu:node/24034'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24034',
    'router_path' => 'node/%',
    'link_title' => 'About Meetings',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
  );
  // Exported menu link: main-menu:specialty-acpharmint
  $menu_links['main-menu:specialty-acpharmint'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-acpharmint',
    'router_path' => 'specialty-acpharmint',
    'link_title' => 'Academia-Pharma Intersect',
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
    'expanded' => 1,
    'weight' => -46,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-breast-cancer
  $menu_links['main-menu:specialty-breast-cancer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-breast-cancer',
    'router_path' => 'specialty-breast-cancer',
    'link_title' => 'Breast Cancer',
    'options' => array(
      'attributes' => array(),
      'menu_views' => array(
        'mlid' => 15300,
        'type' => 'link',
        'original_path' => '',
        'view' => array(
          'name' => 'specialty_breast_cancer',
          'display' => 'page',
          'arguments' => '',
          'settings' => array(
            'wrapper_classes' => 'menu-views',
            'title' => 0,
            'title_wrapper' => '',
            'title_classes' => '',
            'title_override' => '',
            'breadcrumb' => 1,
            'breadcrumb_title' => '',
            'breadcrumb_path' => '<front>',
          ),
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-drug-dev
  $menu_links['main-menu:specialty-drug-dev'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-drug-dev',
    'router_path' => 'specialty-drug-dev',
    'link_title' => 'Development & Pharmacology',
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
    'expanded' => 1,
    'weight' => -42,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-economics
  $menu_links['main-menu:specialty-economics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-economics',
    'router_path' => 'specialty-economics',
    'link_title' => 'Economics of Oncology Practice',
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
    'expanded' => 1,
    'weight' => -40,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-endocrinology
  $menu_links['main-menu:specialty-endocrinology'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-endocrinology',
    'router_path' => 'specialty-endocrinology',
    'link_title' => 'Endocrinology',
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
    'expanded' => 1,
    'weight' => -49,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-geriatric-onc
  $menu_links['main-menu:specialty-geriatric-onc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-geriatric-onc',
    'router_path' => 'specialty-geriatric-onc',
    'link_title' => 'Geriatric',
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
    'expanded' => 1,
    'weight' => -47,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-gyno-onc
  $menu_links['main-menu:specialty-gyno-onc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-gyno-onc',
    'router_path' => 'specialty-gyno-onc',
    'link_title' => 'Gynecologic',
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
    'expanded' => 1,
    'weight' => -39,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-headneck
  $menu_links['main-menu:specialty-headneck'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-headneck',
    'router_path' => 'specialty-headneck',
    'link_title' => 'Head and Neck',
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
    'expanded' => 1,
    'weight' => -38,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-lung
  $menu_links['main-menu:specialty-lung'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-lung',
    'router_path' => 'specialty-lung',
    'link_title' => 'Lung Cancer',
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
    'expanded' => 1,
    'weight' => -37,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-lymphoma
  $menu_links['main-menu:specialty-lymphoma'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-lymphoma',
    'router_path' => 'specialty-lymphoma',
    'link_title' => 'Lymphoma',
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
    'expanded' => 1,
    'weight' => -36,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-melanoma
  $menu_links['main-menu:specialty-melanoma'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-melanoma',
    'router_path' => 'specialty-melanoma',
    'link_title' => 'Melanoma',
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
    'weight' => -34,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-neuro
  $menu_links['main-menu:specialty-neuro'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-neuro',
    'router_path' => 'specialty-neuro',
    'link_title' => 'Neuro-Oncology',
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
    'expanded' => 1,
    'weight' => -33,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-pediatric
  $menu_links['main-menu:specialty-pediatric'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-pediatric',
    'router_path' => 'specialty-pediatric',
    'link_title' => 'Pediatric Oncology',
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
    'expanded' => 1,
    'weight' => -32,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-pinedo
  $menu_links['main-menu:specialty-pinedo'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-pinedo',
    'router_path' => 'specialty-pinedo',
    'link_title' => 'Pinedo Prize Lecture',
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
    'expanded' => 1,
    'weight' => -31,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-prevention
  $menu_links['main-menu:specialty-prevention'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-prevention',
    'router_path' => 'specialty-prevention',
    'link_title' => 'Cancer Prevention',
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
    'expanded' => 1,
    'weight' => -45,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-prostate
  $menu_links['main-menu:specialty-prostate'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-prostate',
    'router_path' => 'specialty-prostate',
    'link_title' => 'Prostate',
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
    'expanded' => 1,
    'weight' => -47,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-radiation
  $menu_links['main-menu:specialty-radiation'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-radiation',
    'router_path' => 'specialty-radiation',
    'link_title' => 'Radiation Oncology',
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
    'expanded' => 1,
    'weight' => -30,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-reflections
  $menu_links['main-menu:specialty-reflections'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-reflections',
    'router_path' => 'specialty-reflections',
    'link_title' => 'Reflections',
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
    'expanded' => 1,
    'weight' => -29,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-regulatory
  $menu_links['main-menu:specialty-regulatory'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-regulatory',
    'router_path' => 'specialty-regulatory',
    'link_title' => 'Regulatory Issues',
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
    'expanded' => 1,
    'weight' => -28,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-sarcoma
  $menu_links['main-menu:specialty-sarcoma'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-sarcoma',
    'router_path' => 'specialty-sarcoma',
    'link_title' => 'Sarcomas',
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
    'expanded' => 1,
    'weight' => -27,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-symptom
  $menu_links['main-menu:specialty-symptom'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-symptom',
    'router_path' => 'specialty-symptom',
    'link_title' => 'Symptom Management',
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
    'expanded' => 1,
    'weight' => -26,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:specialty-trial
  $menu_links['main-menu:specialty-trial'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'specialty-trial',
    'router_path' => 'specialty-trial',
    'link_title' => 'Clinical Trial Results',
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
    'expanded' => 1,
    'weight' => -44,
    'parent_path' => '<nolink>',
  );
  // Exported menu link: main-menu:taxonomy/term/7723
  $menu_links['main-menu:taxonomy/term/7723'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/7723',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Clinical Trial Results',
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
    'weight' => -44,
  );
  // Exported menu link: main-menu:view_cancerportal_currentpage_us
  $menu_links['main-menu:view_cancerportal_currentpage_us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'view_cancerportal_currentpage_us',
    'router_path' => 'view_cancerportal_currentpage_us',
    'link_title' => 'Current Issue',
    'options' => array(
      'attributes' => array(),
      'menu_views' => array(
        'mlid' => 15181,
        'type' => 'link',
        'original_path' => 'node/65304',
        'view' => array(
          'name' => 'view_cancerportal_currentissue',
          'display' => 'page_1',
          'arguments' => '',
          'settings' => array(
            'wrapper_classes' => 'menu-views',
            'title' => 0,
            'title_wrapper' => '',
            'title_classes' => '',
            'title_override' => '',
            'breadcrumb' => 1,
            'breadcrumb_title' => '',
            'breadcrumb_path' => '<front>',
          ),
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: management:admin
  $menu_links['management:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
  );
  // Exported menu link: management:admin/advanced_help
  $menu_links['management:admin/advanced_help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/advanced_help',
    'router_path' => 'admin/advanced_help',
    'link_title' => 'Help',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/appearance
  $menu_links['management:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/config
  $menu_links['management:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/config/administration
  $menu_links['management:admin/config/administration'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration',
    'router_path' => 'admin/config/administration',
    'link_title' => 'Administration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administration tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/administration/admin_menu
  $menu_links['management:admin/config/administration/admin_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/admin_menu',
    'router_path' => 'admin/config/administration/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/administration',
  );
  // Exported menu link: management:admin/config/content
  $menu_links['management:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/content/ajax_comments
  $menu_links['management:admin/config/content/ajax_comments'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/ajax_comments',
    'router_path' => 'admin/config/content/ajax_comments',
    'link_title' => 'AJAX comments',
    'options' => array(
      'attributes' => array(
        'title' => 'AJAXifies comments on site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/ckeditor
  $menu_links['management:admin/config/content/ckeditor'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/ckeditor',
    'router_path' => 'admin/config/content/ckeditor',
    'link_title' => 'CKEditor',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the rich text editor.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/content_lock
  $menu_links['management:admin/config/content/content_lock'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/content_lock',
    'router_path' => 'admin/config/content/content_lock',
    'link_title' => 'Content lock',
    'options' => array(
      'attributes' => array(
        'title' => 'Configuration options for the Content lock module',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/fivestar
  $menu_links['management:admin/config/content/fivestar'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/fivestar',
    'router_path' => 'admin/config/content/fivestar',
    'link_title' => 'Fivestar',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure site-wide widgets used for Fivestar rating.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/formats
  $menu_links['management:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/highwire
  $menu_links['management:admin/config/content/highwire'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/highwire',
    'router_path' => 'admin/config/content/highwire',
    'link_title' => 'HighWire settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure HighWire integration, api keys',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/htmlpurifier
  $menu_links['management:admin/config/content/htmlpurifier'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/htmlpurifier',
    'router_path' => 'admin/config/content/htmlpurifier',
    'link_title' => 'HTML Purifier settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure overall settings for the HTML Purifier filters, including how they are cached.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/multistep
  $menu_links['management:admin/config/content/multistep'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/multistep',
    'router_path' => 'admin/config/content/multistep',
    'link_title' => 'Multistep',
    'options' => array(
      'attributes' => array(
        'title' => 'Allows the user to configure different options for the multistep module.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/translation-overview-assignments
  $menu_links['management:admin/config/content/translation-overview-assignments'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/translation-overview-assignments',
    'router_path' => 'admin/config/content/translation-overview-assignments',
    'link_title' => 'Translator assigments',
    'options' => array(
      'attributes' => array(
        'title' => 'View the translations assignments.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/translation-overview-assignments/en
  $menu_links['management:admin/config/content/translation-overview-assignments/en'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/translation-overview-assignments/en',
    'router_path' => 'admin/config/content/translation-overview-assignments/en',
    'link_title' => 'English',
    'options' => array(
      'attributes' => array(
        'title' => 'English',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'parent_path' => 'admin/config/content/translation-overview-assignments',
  );
  // Exported menu link: management:admin/config/content/translation-overview-assignments/zh-hans
  $menu_links['management:admin/config/content/translation-overview-assignments/zh-hans'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/translation-overview-assignments/zh-hans',
    'router_path' => 'admin/config/content/translation-overview-assignments/zh-hans',
    'link_title' => 'Chinese, Simplified',
    'options' => array(
      'attributes' => array(
        'title' => 'Chinese, Simplified',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content/translation-overview-assignments',
  );
  // Exported menu link: management:admin/config/content/translation-overview-manage
  $menu_links['management:admin/config/content/translation-overview-manage'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/translation-overview-manage',
    'router_path' => 'admin/config/content/translation-overview-manage',
    'link_title' => 'Translation overview',
    'options' => array(
      'attributes' => array(
        'title' => 'View the translation status of the site\'s content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/content/webform
  $menu_links['management:admin/config/content/webform'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/webform',
    'router_path' => 'admin/config/content',
    'link_title' => 'Webform settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Global configuration of webform functionality.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/content',
  );
  // Exported menu link: management:admin/config/date
  $menu_links['management:admin/config/date'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date',
    'router_path' => 'admin/config/date',
    'link_title' => 'Date API',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for modules the use the Date API.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/date/date_popup
  $menu_links['management:admin/config/date/date_popup'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/date_popup',
    'router_path' => 'admin/config/date/date_popup',
    'link_title' => 'Date Popup',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Date Popup settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/date',
  );
  // Exported menu link: management:admin/config/date/tools
  $menu_links['management:admin/config/date/tools'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/tools',
    'router_path' => 'admin/config/date/tools',
    'link_title' => 'Date Tools',
    'options' => array(
      'attributes' => array(
        'title' => 'Date Wizard and other tools to manage and create dates and calendars. ',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/date',
  );
  // Exported menu link: management:admin/config/development
  $menu_links['management:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/development/cdn
  $menu_links['management:admin/config/development/cdn'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/cdn',
    'router_path' => 'admin/config/development/cdn',
    'link_title' => 'CDN',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure CDN integration.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/devel
  $menu_links['management:admin/config/development/devel'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/devel',
    'router_path' => 'admin/config/development/devel',
    'link_title' => 'Devel settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/admin/structure/block">block administration</a> page.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/generate/content
  $menu_links['management:admin/config/development/generate/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/content',
    'router_path' => 'admin/config/development/generate/content',
    'link_title' => 'Generate content',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of nodes and comments. Optionally delete current items.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/generate/menu
  $menu_links['management:admin/config/development/generate/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/menu',
    'router_path' => 'admin/config/development/generate/menu',
    'link_title' => 'Generate menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of menus and menu links. Optionally delete current menus.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/generate/redirects
  $menu_links['management:admin/config/development/generate/redirects'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/redirects',
    'router_path' => 'admin/config/development/generate/redirects',
    'link_title' => 'Generate redirects',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of redirects. Optionally delete current redirects.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/generate/taxonomy
  $menu_links['management:admin/config/development/generate/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/taxonomy',
    'router_path' => 'admin/config/development/generate/taxonomy',
    'link_title' => 'Generate terms',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of terms. Optionally delete current terms.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/generate/user
  $menu_links['management:admin/config/development/generate/user'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/user',
    'router_path' => 'admin/config/development/generate/user',
    'link_title' => 'Generate users',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of users. Optionally delete current users.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/generate/vocabs
  $menu_links['management:admin/config/development/generate/vocabs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/vocabs',
    'router_path' => 'admin/config/development/generate/vocabs',
    'link_title' => 'Generate vocabularies',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of vocabularies. Optionally delete current vocabularies.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/generate/votingapi
  $menu_links['management:admin/config/development/generate/votingapi'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/votingapi',
    'router_path' => 'admin/config/development/generate/votingapi',
    'link_title' => 'Generate votes',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of votes on site content. Optionally delete existing votes.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/jquery_update
  $menu_links['management:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/logging
  $menu_links['management:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/maintenance
  $menu_links['management:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/performance
  $menu_links['management:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/strongarm
  $menu_links['management:admin/config/development/strongarm'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/strongarm',
    'router_path' => 'admin/config/development/strongarm',
    'link_title' => 'Strongarm',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Drupal variable settings that have been strongarmed.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/development/varnish
  $menu_links['management:admin/config/development/varnish'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/varnish',
    'router_path' => 'admin/config/development/varnish',
    'link_title' => 'Varnish',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure your varnish integration.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/development',
  );
  // Exported menu link: management:admin/config/media
  $menu_links['management:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/media/brightcove
  $menu_links['management:admin/config/media/brightcove'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/brightcove',
    'router_path' => 'admin/config/media/brightcove',
    'link_title' => 'Brightcove settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Brigthcove integration, api keys, player settings, upload settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/browser
  $menu_links['management:admin/config/media/browser'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/browser',
    'router_path' => 'admin/config/media/browser',
    'link_title' => 'Media browser settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the behavior and display of the media browser.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/file-system
  $menu_links['management:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/file-types
  $menu_links['management:admin/config/media/file-types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-types',
    'router_path' => 'admin/config/media/file-types',
    'link_title' => 'File types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage files used on your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/image-styles
  $menu_links['management:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/image-toolkit
  $menu_links['management:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/imagecache_external
  $menu_links['management:admin/config/media/imagecache_external'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/imagecache_external',
    'router_path' => 'admin/config/media/imagecache_external',
    'link_title' => 'Imagecache External',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure imagecache external',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/imce
  $menu_links['management:admin/config/media/imce'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/imce',
    'router_path' => 'admin/config/media/imce',
    'link_title' => 'IMCE',
    'options' => array(
      'attributes' => array(
        'title' => 'Control how your image/file browser works.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/media/rebuild_types
  $menu_links['management:admin/config/media/rebuild_types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/rebuild_types',
    'router_path' => 'admin/config/media/rebuild_types',
    'link_title' => 'Rebuild type information for media',
    'options' => array(
      'attributes' => array(
        'title' => 'In case there are files in file_managed w/o a type, this function rebuilds them',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/media',
  );
  // Exported menu link: management:admin/config/people
  $menu_links['management:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/people/accounts
  $menu_links['management:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config/people',
  );
  // Exported menu link: management:admin/config/people/advuser
  $menu_links['management:admin/config/people/advuser'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/advuser',
    'router_path' => 'admin/config/people/advuser',
    'link_title' => 'Advanced User',
    'options' => array(
      'attributes' => array(
        'title' => 'Advanced User Settings',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/people',
  );
  // Exported menu link: management:admin/config/people/ip-blocking
  $menu_links['management:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'parent_path' => 'admin/config/people',
  );
  // Exported menu link: management:admin/config/people/login-destination
  $menu_links['management:admin/config/people/login-destination'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/login-destination',
    'router_path' => 'admin/config/people/login-destination',
    'link_title' => 'Login destinations',
    'options' => array(
      'attributes' => array(
        'title' => 'Customize the destination that the user is redirected to after login.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'parent_path' => 'admin/config/people',
  );
  // Exported menu link: management:admin/config/people/profile
  $menu_links['management:admin/config/people/profile'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/profile',
    'router_path' => 'admin/config/people/profile',
    'link_title' => 'Profiles',
    'options' => array(
      'attributes' => array(
        'title' => 'Create customizable fields for your users.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/people',
  );
  // Exported menu link: management:admin/config/regional
  $menu_links['management:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/regional/date-time
  $menu_links['management:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/regional/i18n
  $menu_links['management:admin/config/regional/i18n'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/i18n',
    'router_path' => 'admin/config/regional/i18n',
    'link_title' => 'Multilingual settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure extended options for multilingual content and translations.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/regional/language
  $menu_links['management:admin/config/regional/language'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/language',
    'router_path' => 'admin/config/regional/language',
    'link_title' => 'Languages',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure languages for content and the user interface.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/regional/settings
  $menu_links['management:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/regional/stringoverrides
  $menu_links['management:admin/config/regional/stringoverrides'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/stringoverrides',
    'router_path' => 'admin/config/regional/stringoverrides',
    'link_title' => 'String overrides',
    'options' => array(
      'attributes' => array(
        'title' => 'Provides a quick and easy way of replacing text on the site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/regional/translate
  $menu_links['management:admin/config/regional/translate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/translate',
    'router_path' => 'admin/config/regional/translate',
    'link_title' => 'Translate interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Translate the built in interface and optionally other text.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'parent_path' => 'admin/config/regional',
  );
  // Exported menu link: management:admin/config/search
  $menu_links['management:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/search/apachesolr
  $menu_links['management:admin/config/search/apachesolr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/apachesolr',
    'router_path' => 'admin/config/search/apachesolr',
    'link_title' => 'Apache Solr search',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Apache Solr.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -8,
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/clean-urls
  $menu_links['management:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/path
  $menu_links['management:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/redirect
  $menu_links['management:admin/config/search/redirect'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/redirect',
    'router_path' => 'admin/config/search/redirect',
    'link_title' => 'URL redirects',
    'options' => array(
      'attributes' => array(
        'title' => 'Redirect users from one URL to another.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/settings
  $menu_links['management:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/sitemap
  $menu_links['management:admin/config/search/sitemap'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/sitemap',
    'router_path' => 'admin/config/search/sitemap',
    'link_title' => 'Site map',
    'options' => array(
      'attributes' => array(
        'title' => 'Control what should be displayed on the site map.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/search/votingapi
  $menu_links['management:admin/config/search/votingapi'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/votingapi',
    'router_path' => 'admin/config/search/votingapi',
    'link_title' => 'Voting API',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure sitewide settings for user-generated ratings and votes.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/search',
  );
  // Exported menu link: management:admin/config/services
  $menu_links['management:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/services/oauth
  $menu_links['management:admin/config/services/oauth'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/oauth',
    'router_path' => 'admin/config/services/oauth',
    'link_title' => 'OAuth',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for OAuth',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/services',
  );
  // Exported menu link: management:admin/config/services/push_notifications
  $menu_links['management:admin/config/services/push_notifications'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/push_notifications',
    'router_path' => 'admin/config/services',
    'link_title' => 'Push Notifications',
    'options' => array(
      'attributes' => array(
        'title' => 'Push Notifications Settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/services',
  );
  // Exported menu link: management:admin/config/services/rss-publishing
  $menu_links['management:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/services',
  );
  // Exported menu link: management:admin/config/shoutbox
  $menu_links['management:admin/config/shoutbox'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/shoutbox',
    'router_path' => 'admin/config/shoutbox',
    'link_title' => 'Shout box',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for Shout box',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/system
  $menu_links['management:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/system/actions
  $menu_links['management:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/backup_migrate
  $menu_links['management:admin/config/system/backup_migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/backup_migrate',
    'router_path' => 'admin/config/system/backup_migrate',
    'link_title' => 'Backup and Migrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Backup/restore your database or migrate data to or from another Drupal site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/cron
  $menu_links['management:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage automatic site maintenance tasks.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/entity-view-modes
  $menu_links['management:admin/config/system/entity-view-modes'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/entity-view-modes',
    'router_path' => 'admin/config/system/entity-view-modes',
    'link_title' => 'Entity view modes',
    'options' => array(
      'attributes' => array(
        'title' => 'Create new custom view modes for content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/googleanalytics
  $menu_links['management:admin/config/system/googleanalytics'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/googleanalytics',
    'router_path' => 'admin/config/system/googleanalytics',
    'link_title' => 'Google Analytics',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure tracking behavior to get insights into your website traffic and marketing effectiveness.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/memcache
  $menu_links['management:admin/config/system/memcache'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/memcache',
    'router_path' => 'admin/config/system/memcache',
    'link_title' => 'Memcache',
    'options' => array(
      'attributes' => array(
        'title' => 'Show or hide memcache statistics at the bottom of each page.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/securepages
  $menu_links['management:admin/config/system/securepages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/securepages',
    'router_path' => 'admin/config/system/securepages',
    'link_title' => 'Secure Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure which pages are and are not to be viewed in SSL',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/site-information
  $menu_links['management:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/special_menu_items
  $menu_links['management:admin/config/system/special_menu_items'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/special_menu_items',
    'router_path' => 'admin/config/system/special_menu_items',
    'link_title' => 'Special Menu Items',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Special Menu Items.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/statistics
  $menu_links['management:admin/config/system/statistics'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/statistics',
    'router_path' => 'admin/config/system/statistics',
    'link_title' => 'Statistics',
    'options' => array(
      'attributes' => array(
        'title' => 'Control details about what and how your site logs access statistics.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/username_check
  $menu_links['management:admin/config/system/username_check'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/username_check',
    'router_path' => 'admin/config/system/username_check',
    'link_title' => 'Username check',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/system/variable_example
  $menu_links['management:admin/config/system/variable_example'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/variable_example',
    'router_path' => 'admin/config/system/variable_example',
    'link_title' => 'Variable example',
    'options' => array(
      'attributes' => array(
        'title' => 'Example of auto generated settings form.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/system',
  );
  // Exported menu link: management:admin/config/user-interface
  $menu_links['management:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/user-interface/chosen
  $menu_links['management:admin/config/user-interface/chosen'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/chosen',
    'router_path' => 'admin/config/user-interface/chosen',
    'link_title' => 'Chosen',
    'options' => array(
      'attributes' => array(
        'title' => 'Configuration for Chosen plugin',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/user-interface',
  );
  // Exported menu link: management:admin/config/user-interface/menu-block
  $menu_links['management:admin/config/user-interface/menu-block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/menu-block',
    'router_path' => 'admin/config/user-interface/menu-block',
    'link_title' => 'Menu block',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure menu block.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/user-interface',
  );
  // Exported menu link: management:admin/config/user-interface/superfish
  $menu_links['management:admin/config/user-interface/superfish'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/superfish',
    'router_path' => 'admin/config/user-interface/superfish',
    'link_title' => 'Superfish',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Superfish Menus',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/user-interface',
  );
  // Exported menu link: management:admin/config/user-interface/themekey
  $menu_links['management:admin/config/user-interface/themekey'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/themekey',
    'router_path' => 'admin/config/user-interface/themekey',
    'link_title' => 'ThemeKey',
    'options' => array(
      'attributes' => array(
        'title' => 'Set up rules to switch the site\'s appearance (theme) dynamically, depending on Drupal paths or different properties.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/user-interface',
  );
  // Exported menu link: management:admin/config/user-interface/tvi
  $menu_links['management:admin/config/user-interface/tvi'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/tvi',
    'router_path' => 'admin/config/user-interface/tvi',
    'link_title' => 'TVI settings',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/user-interface',
  );
  // Exported menu link: management:admin/config/workbench
  $menu_links['management:admin/config/workbench'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workbench',
    'router_path' => 'admin/config/workbench',
    'link_title' => 'Workbench',
    'options' => array(
      'attributes' => array(
        'title' => 'Workbench',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/workbench/access
  $menu_links['management:admin/config/workbench/access'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workbench/access',
    'router_path' => 'admin/config/workbench/access',
    'link_title' => 'Workbench Access',
    'options' => array(
      'attributes' => array(
        'title' => 'Workbench access control settings',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/workbench',
  );
  // Exported menu link: management:admin/config/workbench/moderation
  $menu_links['management:admin/config/workbench/moderation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workbench/moderation',
    'router_path' => 'admin/config/workbench/moderation',
    'link_title' => 'Workbench Moderation',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure content moderation.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/config/workbench',
  );
  // Exported menu link: management:admin/config/workflow
  $menu_links['management:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/content
  $menu_links['management:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer content and comments.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/content/comment
  $menu_links['management:admin/content/comment'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => 'List and edit site comments and the comment approval queue.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/content',
  );
  // Exported menu link: management:admin/content/media
  $menu_links['management:admin/content/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/media',
    'router_path' => 'admin/content/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage files used on your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/content',
  );
  // Exported menu link: management:admin/domain/content
  $menu_links['management:admin/domain/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/domain/content',
    'router_path' => 'admin/domain/content',
    'link_title' => 'Affiliated content',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer content by domain.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/domain/content/2
  $menu_links['management:admin/domain/content/2'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/domain/content/2',
    'router_path' => 'admin/domain/content/2',
    'link_title' => '[STAGE] Oncologist Portal content',
    'options' => array(
      'attributes' => array(
        'title' => 'View content assigned to oncologistportal.alpha.intstrux.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'parent_path' => 'admin/domain/content',
  );
  // Exported menu link: management:admin/domain/content/3
  $menu_links['management:admin/domain/content/3'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/domain/content/3',
    'router_path' => 'admin/domain/content/3',
    'link_title' => 'Oncologist HD app [STAGE] content',
    'options' => array(
      'attributes' => array(
        'title' => 'View content assigned to onchd.alpha.intstrux.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'parent_path' => 'admin/domain/content',
  );
  // Exported menu link: management:admin/domain/content/4
  $menu_links['management:admin/domain/content/4'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/domain/content/4',
    'router_path' => 'admin/domain/content/4',
    'link_title' => 'Welcome to PCM content',
    'options' => array(
      'attributes' => array(
        'title' => 'View content assigned to prostatecancer.theoncologist.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'parent_path' => 'admin/domain/content',
  );
  // Exported menu link: management:admin/domain/content/5
  $menu_links['management:admin/domain/content/5'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/domain/content/5',
    'router_path' => 'admin/domain/content/5',
    'link_title' => 'Welcome to BCM content',
    'options' => array(
      'attributes' => array(
        'title' => 'View content assigned to breastcancer.theoncologist.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'parent_path' => 'admin/domain/content',
  );
  // Exported menu link: management:admin/domain/content/6
  $menu_links['management:admin/domain/content/6'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/domain/content/6',
    'router_path' => 'admin/domain/content/6',
    'link_title' => '[STAGE] STO Online content',
    'options' => array(
      'attributes' => array(
        'title' => 'View content assigned to sto-online.alpha.intstrux.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'parent_path' => 'admin/domain/content',
  );
  // Exported menu link: management:admin/domain/content/7
  $menu_links['management:admin/domain/content/7'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/domain/content/7',
    'router_path' => 'admin/domain/content/7',
    'link_title' => 'Admin Project Alpha content',
    'options' => array(
      'attributes' => array(
        'title' => 'View content assigned to admin.alpha.intstrux.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 7,
    'parent_path' => 'admin/domain/content',
  );
  // Exported menu link: management:admin/domain/content/8
  $menu_links['management:admin/domain/content/8'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/domain/content/8',
    'router_path' => 'admin/domain/content/8',
    'link_title' => 'Welcome to LCM content',
    'options' => array(
      'attributes' => array(
        'title' => 'View content assigned to lungcancer.theoncologist.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'parent_path' => 'admin/domain/content',
  );
  // Exported menu link: management:admin/domain/content/all
  $menu_links['management:admin/domain/content/all'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/domain/content/all',
    'router_path' => 'admin/domain/content/all',
    'link_title' => 'Content assigned to all affiliates',
    'options' => array(
      'attributes' => array(
        'title' => 'View content assigned to all affiliate sites.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/domain/content',
  );
  // Exported menu link: management:admin/genarte/snapshots
  $menu_links['management:admin/genarte/snapshots'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/genarte/snapshots',
    'router_path' => 'admin/genarte/snapshots',
    'link_title' => 'Geneate Snapshots',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/help
  $menu_links['management:admin/help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/help',
    'router_path' => 'admin',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Reference for usage, configuration, and modules.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/interactive/test
  $menu_links['management:admin/interactive/test'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/interactive/test',
    'router_path' => 'admin/interactive/test',
    'link_title' => 'check interactive view',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/migrate/brightcove
  $menu_links['management:admin/migrate/brightcove'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/migrate/brightcove',
    'router_path' => 'admin/migrate/brightcove',
    'link_title' => 'Migrate Brightcove',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/migrate/multigroup_new
  $menu_links['management:admin/migrate/multigroup_new'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/migrate/multigroup_new',
    'router_path' => 'admin/migrate/multigroup_new',
    'link_title' => 'Migrate Multigroups New',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/migrate/nodes
  $menu_links['management:admin/migrate/nodes'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/migrate/nodes',
    'router_path' => 'admin/migrate/nodes',
    'link_title' => 'Migrate Nodes',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 56,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/migrate/profiles
  $menu_links['management:admin/migrate/profiles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/migrate/profiles',
    'router_path' => 'admin/migrate/profiles',
    'link_title' => 'Migrate Profiles',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/migrate/solr
  $menu_links['management:admin/migrate/solr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/migrate/solr',
    'router_path' => 'admin/migrate/solr',
    'link_title' => 'Make content SOLR conform',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/migrate/taxonomy
  $menu_links['management:admin/migrate/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/migrate/taxonomy',
    'router_path' => 'admin/migrate/taxonomy',
    'link_title' => 'Migrate Taxonomy',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/modules
  $menu_links['management:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/people
  $menu_links['management:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/reports
  $menu_links['management:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/reports/access-denied
  $menu_links['management:admin/reports/access-denied'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/apachesolr
  $menu_links['management:admin/reports/apachesolr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/apachesolr',
    'router_path' => 'admin/reports/apachesolr',
    'link_title' => 'Apache Solr search index',
    'options' => array(
      'attributes' => array(
        'title' => 'Information about the contents of the index on the server',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/dblog
  $menu_links['management:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/fields
  $menu_links['management:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports/fields',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/hits
  $menu_links['management:admin/reports/hits'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/hits',
    'router_path' => 'admin/reports/hits',
    'link_title' => 'Recent hits',
    'options' => array(
      'attributes' => array(
        'title' => 'View pages that have recently been visited.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/memcache
  $menu_links['management:admin/reports/memcache'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/memcache',
    'router_path' => 'admin/reports/memcache',
    'link_title' => 'Memcache statistics',
    'options' => array(
      'attributes' => array(
        'title' => 'View statistics for all configured memcache servers.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/page-not-found
  $menu_links['management:admin/reports/page-not-found'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/pages
  $menu_links['management:admin/reports/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/pages',
    'router_path' => 'admin/reports/pages',
    'link_title' => 'Top pages',
    'options' => array(
      'attributes' => array(
        'title' => 'View pages that have been hit frequently.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/referrers
  $menu_links['management:admin/reports/referrers'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/referrers',
    'router_path' => 'admin/reports/referrers',
    'link_title' => 'Top referrers',
    'options' => array(
      'attributes' => array(
        'title' => 'View top referrers.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/search
  $menu_links['management:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/status
  $menu_links['management:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -60,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/updates
  $menu_links['management:admin/reports/updates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports/updates',
    'link_title' => 'Available updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about available updates for your installed modules and themes.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/views-plugins
  $menu_links['management:admin/reports/views-plugins'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/views-plugins',
    'router_path' => 'admin/reports/views-plugins',
    'link_title' => 'Views plugins',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of plugins used in all views.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/reports/visitors
  $menu_links['management:admin/reports/visitors'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/visitors',
    'router_path' => 'admin/reports/visitors',
    'link_title' => 'Top visitors',
    'options' => array(
      'attributes' => array(
        'title' => 'View visitors that hit many pages.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: management:admin/structure
  $menu_links['management:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -8,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/structure/block
  $menu_links['management:admin/structure/block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/bulk-export
  $menu_links['management:admin/structure/bulk-export'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/bulk-export',
    'router_path' => 'admin/structure/bulk-export',
    'link_title' => 'Bulk Exporter',
    'options' => array(
      'attributes' => array(
        'title' => 'Bulk-export multiple CTools-handled data objects to code.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/computed_field_recompute
  $menu_links['management:admin/structure/computed_field_recompute'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/computed_field_recompute',
    'router_path' => 'admin/structure/computed_field_recompute',
    'link_title' => 'Re-compute computed fields',
    'options' => array(
      'attributes' => array(
        'title' => 'Select entity types to re-compute specific computed field on.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/contact
  $menu_links['management:admin/structure/contact'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/contact',
    'router_path' => 'admin/structure/contact',
    'link_title' => 'Contact form',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a system contact form and set up categories for the form to use.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/content_migrate
  $menu_links['management:admin/structure/content_migrate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/content_migrate',
    'router_path' => 'admin/structure/content_migrate',
    'link_title' => 'Migrate fields',
    'options' => array(
      'attributes' => array(
        'title' => 'Migrate field settings and data from the Drupal 6 version to the Drupal 7 version.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/ctools-content
  $menu_links['management:admin/structure/ctools-content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ctools-content',
    'router_path' => 'admin/structure/ctools-content',
    'link_title' => 'Custom content panes',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete custom content panes.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/ctools-rulesets
  $menu_links['management:admin/structure/ctools-rulesets'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ctools-rulesets',
    'router_path' => 'admin/structure/ctools-rulesets',
    'link_title' => 'Custom access rulesets',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete custom access rulesets for use with Panels and other systems that utilize CTools content plugins.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/domain
  $menu_links['management:admin/structure/domain'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/domain',
    'router_path' => 'admin/structure/domain',
    'link_title' => 'Domains',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage and configure domains.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/features
  $menu_links['management:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/field-collections
  $menu_links['management:admin/structure/field-collections'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/field-collections',
    'router_path' => 'admin/structure/field-collections',
    'link_title' => 'Field collections',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage fields on field collections.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/menu
  $menu_links['management:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/menu/manage/devel
  $menu_links['management:admin/structure/menu/manage/devel'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/devel',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Development',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/features
  $menu_links['management:admin/structure/menu/manage/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/features',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Features',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/main-menu
  $menu_links['management:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/management
  $menu_links['management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-ad-analyst-menu
  $menu_links['management:admin/structure/menu/manage/menu-ad-analyst-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-ad-analyst-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Ad Analyst Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-ad-creator-menu
  $menu_links['management:admin/structure/menu/manage/menu-ad-creator-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-ad-creator-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Ad Creator Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-ad-reviewer-menu
  $menu_links['management:admin/structure/menu/manage/menu-ad-reviewer-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-ad-reviewer-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Ad Reviewer Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-ampmenu
  $menu_links['management:admin/structure/menu/manage/menu-ampmenu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-ampmenu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'AMP Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-app-com-intstrux-onchd-eu
  $menu_links['management:admin/structure/menu/manage/menu-app-com-intstrux-onchd-eu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-app-com-intstrux-onchd-eu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'APP: oncHD - EU',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-app-com-intstrux-onchd-us
  $menu_links['management:admin/structure/menu/manage/menu-app-com-intstrux-onchd-us'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-app-com-intstrux-onchd-us',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'APP: oncHD - US',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-app-onchd---zh
  $menu_links['management:admin/structure/menu/manage/menu-app-onchd---zh'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-app-onchd---zh',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'APP: oncHD - ZH',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-bcm-main-menu
  $menu_links['management:admin/structure/menu/manage/menu-bcm-main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-bcm-main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Web: BCM Main Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-com-intstrux-onchd
  $menu_links['management:admin/structure/menu/manage/menu-com-intstrux-onchd'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-com-intstrux-onchd',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Oncologist HD - North America - com.intstrux.onchd',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-com-intstrux-oncsd
  $menu_links['management:admin/structure/menu/manage/menu-com-intstrux-oncsd'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-com-intstrux-oncsd',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Onc SD Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-content-editor-menu
  $menu_links['management:admin/structure/menu/manage/menu-content-editor-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-content-editor-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Content Editor Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-eu-intstrux-onchd
  $menu_links['management:admin/structure/menu/manage/menu-eu-intstrux-onchd'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-eu-intstrux-onchd',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Oncologist HD - Europe - eu.intstrux.onchd',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-new-onchd-menu
  $menu_links['management:admin/structure/menu/manage/menu-new-onchd-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-new-onchd-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'New OncHD menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-pcm-main-menu
  $menu_links['management:admin/structure/menu/manage/menu-pcm-main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-pcm-main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Web: PCM Main Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-social-links
  $menu_links['management:admin/structure/menu/manage/menu-social-links'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-social-links',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Social Links',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-sto-footer-menu
  $menu_links['management:admin/structure/menu/manage/menu-sto-footer-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-sto-footer-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'STO Footer Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-sto-menu
  $menu_links['management:admin/structure/menu/manage/menu-sto-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-sto-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'STO Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-web-lcm-main-menu
  $menu_links['management:admin/structure/menu/manage/menu-web-lcm-main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-web-lcm-main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Web: LCM Main Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/menu-zh-intstrux-onchd
  $menu_links['management:admin/structure/menu/manage/menu-zh-intstrux-onchd'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-zh-intstrux-onchd',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Oncologist HD - China - zh.intstrux.onchd',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/navigation
  $menu_links['management:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/secondary-menu
  $menu_links['management:admin/structure/menu/manage/secondary-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/secondary-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Secondary menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/menu/manage/user-menu
  $menu_links['management:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User Menu',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: management:admin/structure/mini-panels
  $menu_links['management:admin/structure/mini-panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/mini-panels',
    'router_path' => 'admin/structure/mini-panels',
    'link_title' => 'Mini panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete mini panels, which can be used as blocks or content panes in other panels.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/nodequeue
  $menu_links['management:admin/structure/nodequeue'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/nodequeue',
    'router_path' => 'admin/structure/nodequeue',
    'link_title' => 'Nodequeues',
    'options' => array(
      'attributes' => array(
        'title' => 'Create and maintain simple nodequeues.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/pages
  $menu_links['management:admin/structure/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/pages',
    'router_path' => 'admin/structure/pages',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit and remove overridden system pages and user defined pages from the system.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/panels
  $menu_links['management:admin/structure/panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels',
    'router_path' => 'admin/structure/panels',
    'link_title' => 'Panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a bird\'s eye view of items related to Panels.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/profiles
  $menu_links['management:admin/structure/profiles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/profiles',
    'router_path' => 'admin/structure/profiles',
    'link_title' => 'Profile types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage profiles, including fields.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/services
  $menu_links['management:admin/structure/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/services',
    'router_path' => 'admin/structure/services',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Services',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/stylizer
  $menu_links['management:admin/structure/stylizer'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/stylizer',
    'router_path' => 'admin/structure/stylizer',
    'link_title' => 'Stylizer',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit or delete stylizer styles.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/taxonomy
  $menu_links['management:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/trigger
  $menu_links['management:admin/structure/trigger'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/trigger',
    'router_path' => 'admin/structure',
    'link_title' => 'Triggers',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure when to execute actions.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/types
  $menu_links['management:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/structure/views
  $menu_links['management:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: management:admin/workbench
  $menu_links['management:admin/workbench'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(
        'title' => 'My Workbench area',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin',
  );
  // Exported menu link: menu-ad-creator-menu:node/add/page-interactive-ad-alt
  $menu_links['menu-ad-creator-menu:node/add/page-interactive-ad-alt'] = array(
    'menu_name' => 'menu-ad-creator-menu',
    'link_path' => 'node/add/page-interactive-ad-alt',
    'router_path' => 'node/add/page-interactive-ad-alt',
    'link_title' => 'Add Interactive Ad',
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
    'weight' => 0,
  );
  // Exported menu link: menu-ampmenu:<front>
  $menu_links['menu-ampmenu:<front>'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-ampmenu:apns/overview
  $menu_links['menu-ampmenu:apns/overview'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'apns/overview',
    'router_path' => 'apns/overview',
    'link_title' => 'APNS',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-apns',
        'class' => array(
          0 => 'menu-icon',
        ),
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
  );
  // Exported menu link: menu-ampmenu:apns/testdevices
  $menu_links['menu-ampmenu:apns/testdevices'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'apns/testdevices',
    'router_path' => 'apns/testdevices',
    'link_title' => 'List of Test Devices',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'apns/overview',
  );
  // Exported menu link: menu-ampmenu:magazines
  $menu_links['menu-ampmenu:magazines'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'magazines',
    'router_path' => 'magazines',
    'link_title' => 'Manage Content',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-ampmenu:node/add
  $menu_links['menu-ampmenu:node/add'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-content',
        'class' => array(
          0 => 'menu-icon',
        ),
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
  );
  // Exported menu link: menu-ampmenu:node/add/apns-message
  $menu_links['menu-ampmenu:node/add/apns-message'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'node/add/apns-message',
    'router_path' => 'node/add',
    'link_title' => 'Create',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'apns/overview',
  );
  // Exported menu link: menu-ampmenu:node/add/apns-test-device
  $menu_links['menu-ampmenu:node/add/apns-test-device'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'node/add/apns-test-device',
    'router_path' => 'node/add',
    'link_title' => 'Add Test Device',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'apns/overview',
  );
  // Exported menu link: menu-ampmenu:node/add/article
  $menu_links['menu-ampmenu:node/add/article'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-ampmenu:node/add/magazine
  $menu_links['menu-ampmenu:node/add/magazine'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'node/add/magazine',
    'router_path' => 'node/add',
    'link_title' => 'Magazine',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-ampmenu:node/add/page-html
  $menu_links['menu-ampmenu:node/add/page-html'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'node/add/page-html',
    'router_path' => 'node/add/page-html',
    'link_title' => 'Page: HTML',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-ampmenu:node/add/page-interactive-ad
  $menu_links['menu-ampmenu:node/add/page-interactive-ad'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'node/add/page-interactive-ad',
    'router_path' => 'node/add/page-interactive-ad',
    'link_title' => 'Page: Interactive',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-ampmenu:node/add/page-mutablevideo
  $menu_links['menu-ampmenu:node/add/page-mutablevideo'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'node/add/page-mutablevideo',
    'router_path' => 'node/add',
    'link_title' => 'Page: Video Gallery',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-ampmenu:node/add/page-video
  $menu_links['menu-ampmenu:node/add/page-video'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'node/add/page-video',
    'router_path' => 'node/add',
    'link_title' => 'Page: Video',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-ampmenu:statistics/byapplication
  $menu_links['menu-ampmenu:statistics/byapplication'] = array(
    'menu_name' => 'menu-ampmenu',
    'link_path' => 'statistics/byapplication',
    'router_path' => 'statistics/byapplication',
    'link_title' => 'Statistics',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-statistics',
        'class' => array(
          0 => 'menu-icon',
        ),
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:<view>
  $menu_links['menu-app-com-intstrux-onchd-eu:<view>'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => '<view>',
    'router_path' => '<view>',
    'link_title' => '',
    'options' => array(
      'attributes' => array(),
      'menu_views' => array(
        'mlid' => 14879,
        'type' => 'view',
        'original_path' => '',
        'view' => array(
          'name' => 'app_menu_taxonomy_sections_eu',
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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'parent_path' => 'view_sections',
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_articles
  $menu_links['menu-app-com-intstrux-onchd-eu:view_articles'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'view_articles',
    'router_path' => 'view_articles',
    'link_title' => 'Issues',
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
    'weight' => -47,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_cancerportals/all
  $menu_links['menu-app-com-intstrux-onchd-eu:view_cancerportals/all'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'view_cancerportals/all',
    'router_path' => 'view_cancerportals',
    'link_title' => 'Cancer Portals',
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
    'weight' => -41,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_challengingcases/EU
  $menu_links['menu-app-com-intstrux-onchd-eu:view_challengingcases/EU'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'view_challengingcases/EU',
    'router_path' => 'view_challengingcases',
    'link_title' => 'Challenging Cases',
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
    'weight' => -40,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_customized/EU
  $menu_links['menu-app-com-intstrux-onchd-eu:view_customized/EU'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'view_customized/EU',
    'router_path' => 'view_customized',
    'link_title' => 'Customized',
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
    'weight' => -48,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_featuredqueue/eu_featured_queue
  $menu_links['menu-app-com-intstrux-onchd-eu:view_featuredqueue/eu_featured_queue'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'view_featuredqueue/eu_featured_queue',
    'router_path' => 'view_featuredqueue',
    'link_title' => 'Featured',
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
    'weight' => -49,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_interactive_ad_alt/EU
  $menu_links['menu-app-com-intstrux-onchd-eu:view_interactive_ad_alt/EU'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'view_interactive_ad_alt/EU',
    'router_path' => 'view_interactive_ad_alt',
    'link_title' => 'Advertisements',
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
    'weight' => -36,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_meetings
  $menu_links['menu-app-com-intstrux-onchd-eu:view_meetings'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'view_meetings',
    'router_path' => 'view_meetings',
    'link_title' => 'Meetings',
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
    'expanded' => 0,
    'weight' => -39,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_page/55681
  $menu_links['menu-app-com-intstrux-onchd-eu:view_page/55681'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'view_page/55681',
    'router_path' => 'view_page',
    'link_title' => 'About',
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
    'weight' => -37,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_page/55682
  $menu_links['menu-app-com-intstrux-onchd-eu:view_page/55682'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'view_page/55682',
    'router_path' => 'view_page',
    'link_title' => 'Editorial Board',
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
    'weight' => -38,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_perspectives/3272
  $menu_links['menu-app-com-intstrux-onchd-eu:view_perspectives/3272'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
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
    'weight' => -43,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_sections
  $menu_links['menu-app-com-intstrux-onchd-eu:view_sections'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
    'link_path' => 'view_sections',
    'router_path' => 'view_sections',
    'link_title' => 'Sections',
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
    'weight' => -46,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_videoasset_categories
  $menu_links['menu-app-com-intstrux-onchd-eu:view_videoasset_categories'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
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
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_videoasset_meetings
  $menu_links['menu-app-com-intstrux-onchd-eu:view_videoasset_meetings'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
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
  // Exported menu link: menu-app-com-intstrux-onchd-eu:view_videolibrary
  $menu_links['menu-app-com-intstrux-onchd-eu:view_videolibrary'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-eu',
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
    'weight' => -44,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_articles
  $menu_links['menu-app-com-intstrux-onchd-us:view_articles'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_articles',
    'router_path' => 'view_articles',
    'link_title' => 'Issues',
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
    'weight' => -47,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_cancerportals/all
  $menu_links['menu-app-com-intstrux-onchd-us:view_cancerportals/all'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_cancerportals/all',
    'router_path' => 'view_cancerportals',
    'link_title' => 'Cancer Portals',
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
    'weight' => -41,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_challengingcases/US
  $menu_links['menu-app-com-intstrux-onchd-us:view_challengingcases/US'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_challengingcases/US',
    'router_path' => 'view_challengingcases',
    'link_title' => 'Challenging Cases',
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
    'weight' => -40,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_customized/US
  $menu_links['menu-app-com-intstrux-onchd-us:view_customized/US'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_customized/US',
    'router_path' => 'view_customized',
    'link_title' => 'Customized',
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
    'weight' => -48,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_featuredqueue/us_featured_queue
  $menu_links['menu-app-com-intstrux-onchd-us:view_featuredqueue/us_featured_queue'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_featuredqueue/us_featured_queue',
    'router_path' => 'view_featuredqueue',
    'link_title' => 'Featured',
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
    'weight' => -49,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_interactive_ad_alt/US
  $menu_links['menu-app-com-intstrux-onchd-us:view_interactive_ad_alt/US'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_interactive_ad_alt/US',
    'router_path' => 'view_interactive_ad_alt',
    'link_title' => 'Advertisements',
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
    'weight' => -36,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_meetings
  $menu_links['menu-app-com-intstrux-onchd-us:view_meetings'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_meetings',
    'router_path' => 'view_meetings',
    'link_title' => 'Meetings',
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
    'weight' => -39,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_page/55681
  $menu_links['menu-app-com-intstrux-onchd-us:view_page/55681'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_page/55681',
    'router_path' => 'view_page',
    'link_title' => 'About',
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
    'weight' => -37,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_page/55682
  $menu_links['menu-app-com-intstrux-onchd-us:view_page/55682'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_page/55682',
    'router_path' => 'view_page',
    'link_title' => 'Editorial Board',
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
    'weight' => -38,
  );
  // Exported menu link: menu-app-com-intstrux-onchd-us:view_sections
  $menu_links['menu-app-com-intstrux-onchd-us:view_sections'] = array(
    'menu_name' => 'menu-app-com-intstrux-onchd-us',
    'link_path' => 'view_sections',
    'router_path' => 'view_sections',
    'link_title' => 'Sections',
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
    'weight' => -46,
  );
  // Exported menu link: menu-app-onchd---zh:<view>
  $menu_links['menu-app-onchd---zh:<view>'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => '<view>',
    'router_path' => '<view>',
    'link_title' => '',
    'options' => array(
      'attributes' => array(),
      'menu_views' => array(
        'mlid' => 14952,
        'type' => 'view',
        'original_path' => '',
        'view' => array(
          'name' => 'menu_articles',
          'display' => 'default',
          'arguments' => 'The Oncologist/ZH/journal',
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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'view_pagehtml',
  );
  // Exported menu link: menu-app-onchd---zh:node/55666
  $menu_links['menu-app-onchd---zh:node/55666'] = array(
    'menu_name' => 'menu-app-onchd---zh',
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
  // Exported menu link: menu-app-onchd---zh:view_cancerportals/all
  $menu_links['menu-app-onchd---zh:view_cancerportals/all'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_cancerportals/all',
    'router_path' => 'view_cancerportals',
    'link_title' => 'Cancer Portals',
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
    'weight' => -41,
  );
  // Exported menu link: menu-app-onchd---zh:view_challengingcases/ZH
  $menu_links['menu-app-onchd---zh:view_challengingcases/ZH'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_challengingcases/ZH',
    'router_path' => 'view_challengingcases',
    'link_title' => 'Challenging Cases',
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
    'weight' => -40,
  );
  // Exported menu link: menu-app-onchd---zh:view_customized/ZH
  $menu_links['menu-app-onchd---zh:view_customized/ZH'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_customized/ZH',
    'router_path' => 'view_customized',
    'link_title' => 'Customized',
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
    'weight' => -48,
  );
  // Exported menu link: menu-app-onchd---zh:view_featuredqueue/zh_featured_queue
  $menu_links['menu-app-onchd---zh:view_featuredqueue/zh_featured_queue'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_featuredqueue/zh_featured_queue',
    'router_path' => 'view_featuredqueue',
    'link_title' => 'Featured',
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
    'weight' => -49,
  );
  // Exported menu link: menu-app-onchd---zh:view_interactive_ad_alt/ZH
  $menu_links['menu-app-onchd---zh:view_interactive_ad_alt/ZH'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_interactive_ad_alt/ZH',
    'router_path' => 'view_interactive_ad_alt',
    'link_title' => 'Advertisements',
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
    'weight' => -36,
  );
  // Exported menu link: menu-app-onchd---zh:view_meetings
  $menu_links['menu-app-onchd---zh:view_meetings'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_meetings',
    'router_path' => 'view_meetings',
    'link_title' => 'Meetings',
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
    'weight' => -39,
  );
  // Exported menu link: menu-app-onchd---zh:view_page/55681
  $menu_links['menu-app-onchd---zh:view_page/55681'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_page/55681',
    'router_path' => 'view_page',
    'link_title' => 'About',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
  );
  // Exported menu link: menu-app-onchd---zh:view_page/55682
  $menu_links['menu-app-onchd---zh:view_page/55682'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_page/55682',
    'router_path' => 'view_page',
    'link_title' => 'Editorial Board',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
  );
  // Exported menu link: menu-app-onchd---zh:view_pagehtml
  $menu_links['menu-app-onchd---zh:view_pagehtml'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_pagehtml',
    'router_path' => 'view_pagehtml',
    'link_title' => 'Issues',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
  );
  // Exported menu link: menu-app-onchd---zh:view_perspectives/3272
  $menu_links['menu-app-onchd---zh:view_perspectives/3272'] = array(
    'menu_name' => 'menu-app-onchd---zh',
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
    'weight' => -43,
  );
  // Exported menu link: menu-app-onchd---zh:view_sections
  $menu_links['menu-app-onchd---zh:view_sections'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_sections',
    'router_path' => 'view_sections',
    'link_title' => 'Sections',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
  );
  // Exported menu link: menu-app-onchd---zh:view_videoasset_categories
  $menu_links['menu-app-onchd---zh:view_videoasset_categories'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_videoasset_categories',
    'router_path' => 'view_videoasset_categories',
    'link_title' => 'Category',
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
    'weight' => 0,
    'parent_path' => 'view_videolibrary',
  );
  // Exported menu link: menu-app-onchd---zh:view_videoasset_meetings
  $menu_links['menu-app-onchd---zh:view_videoasset_meetings'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_videoasset_meetings',
    'router_path' => 'view_videoasset_meetings',
    'link_title' => 'Meeting',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'parent_path' => 'view_videolibrary',
  );
  // Exported menu link: menu-app-onchd---zh:view_videolibrary
  $menu_links['menu-app-onchd---zh:view_videolibrary'] = array(
    'menu_name' => 'menu-app-onchd---zh',
    'link_path' => 'view_videolibrary',
    'router_path' => 'view_videolibrary',
    'link_title' => 'Video Library',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
  );
  // Exported menu link: menu-bcm-main-menu:<front>
  $menu_links['menu-bcm-main-menu:<front>'] = array(
    'menu_name' => 'menu-bcm-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'HOME',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-bcm-main-menu:bcmarticles
  $menu_links['menu-bcm-main-menu:bcmarticles'] = array(
    'menu_name' => 'menu-bcm-main-menu',
    'link_path' => 'bcmarticles',
    'router_path' => 'bcmarticles',
    'link_title' => 'ARTICLES',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-bcm-main-menu:bcmchallengingcases
  $menu_links['menu-bcm-main-menu:bcmchallengingcases'] = array(
    'menu_name' => 'menu-bcm-main-menu',
    'link_path' => 'bcmchallengingcases',
    'router_path' => 'bcmchallengingcases',
    'link_title' => 'CHALLENGING CASES',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-bcm-main-menu:bcmeditorials
  $menu_links['menu-bcm-main-menu:bcmeditorials'] = array(
    'menu_name' => 'menu-bcm-main-menu',
    'link_path' => 'bcmeditorials',
    'router_path' => 'bcmeditorials',
    'link_title' => 'EDITORIALS',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-bcm-main-menu:bcminterviews
  $menu_links['menu-bcm-main-menu:bcminterviews'] = array(
    'menu_name' => 'menu-bcm-main-menu',
    'link_path' => 'bcminterviews',
    'router_path' => 'bcminterviews',
    'link_title' => 'INTERVIEWS',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-com-intstrux-onchd:node/855
  $menu_links['menu-com-intstrux-onchd:node/855'] = array(
    'menu_name' => 'menu-com-intstrux-onchd',
    'link_path' => 'node/855',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'id' => 'home',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-com-intstrux-onchd:node/856
  $menu_links['menu-com-intstrux-onchd:node/856'] = array(
    'menu_name' => 'menu-com-intstrux-onchd',
    'link_path' => 'node/856',
    'router_path' => 'node/%',
    'link_title' => 'Podcasts',
    'options' => array(
      'attributes' => array(
        'id' => 'podcasts',
        'name' => 'Podcasts',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-com-intstrux-onchd:node/859
  $menu_links['menu-com-intstrux-onchd:node/859'] = array(
    'menu_name' => 'menu-com-intstrux-onchd',
    'link_path' => 'node/859',
    'router_path' => 'node/%',
    'link_title' => 'Issues',
    'options' => array(
      'attributes' => array(
        'id' => 'journals',
        'class' => array(
          0 => 'native',
        ),
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-com-intstrux-onchd:view_challenging_cases
  $menu_links['menu-com-intstrux-onchd:view_challenging_cases'] = array(
    'menu_name' => 'menu-com-intstrux-onchd',
    'link_path' => 'view_challenging_cases',
    'router_path' => 'view_challenging_cases',
    'link_title' => 'Challenging Cases',
    'options' => array(
      'attributes' => array(
        'id' => 'challenging_cases',
        'rel' => '4.0.2',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: menu-com-intstrux-onchd:view_portals
  $menu_links['menu-com-intstrux-onchd:view_portals'] = array(
    'menu_name' => 'menu-com-intstrux-onchd',
    'link_path' => 'view_portals',
    'router_path' => 'view_portals',
    'link_title' => 'Cancer Portals',
    'options' => array(
      'attributes' => array(
        'id' => 'reflections',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
  );
  // Exported menu link: menu-com-intstrux-onchd:view_view_cme_podcasts
  $menu_links['menu-com-intstrux-onchd:view_view_cme_podcasts'] = array(
    'menu_name' => 'menu-com-intstrux-onchd',
    'link_path' => 'view_view_cme_podcasts',
    'router_path' => 'view_view_cme_podcasts',
    'link_title' => 'CME',
    'options' => array(
      'attributes' => array(
        'id' => 'cme_podcasts',
        'rel' => '4.0.2',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
  );
  // Exported menu link: menu-com-intstrux-oncsd:express
  $menu_links['menu-com-intstrux-oncsd:express'] = array(
    'menu_name' => 'menu-com-intstrux-oncsd',
    'link_path' => 'express',
    'router_path' => 'express',
    'link_title' => 'Express',
    'options' => array(
      'attributes' => array(
        'id' => 'express',
        'name' => 'sites/default/files/oncsd_menu/express.png',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: menu-com-intstrux-oncsd:podcasts
  $menu_links['menu-com-intstrux-oncsd:podcasts'] = array(
    'menu_name' => 'menu-com-intstrux-oncsd',
    'link_path' => 'podcasts',
    'router_path' => 'podcasts',
    'link_title' => 'Podcasts',
    'options' => array(
      'attributes' => array(
        'id' => 'podcastsmenu',
        'name' => 'sites/default/files/oncsd_menu/podcasts.png',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-com-intstrux-oncsd:reflections
  $menu_links['menu-com-intstrux-oncsd:reflections'] = array(
    'menu_name' => 'menu-com-intstrux-oncsd',
    'link_path' => 'reflections',
    'router_path' => 'reflections',
    'link_title' => 'Reflections',
    'options' => array(
      'attributes' => array(
        'id' => 'reflections',
        'name' => 'sites/default/files/oncsd_menu/reflections.png',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-com-intstrux-oncsd:view_issues/journal
  $menu_links['menu-com-intstrux-oncsd:view_issues/journal'] = array(
    'menu_name' => 'menu-com-intstrux-oncsd',
    'link_path' => 'view_issues/journal',
    'router_path' => 'view_issues',
    'link_title' => 'Issues',
    'options' => array(
      'attributes' => array(
        'id' => 'issues',
        'name' => 'sites/default/files/oncsd_menu/issues.png',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-com-intstrux-oncsd:view_issues/supplement
  $menu_links['menu-com-intstrux-oncsd:view_issues/supplement'] = array(
    'menu_name' => 'menu-com-intstrux-oncsd',
    'link_path' => 'view_issues/supplement',
    'router_path' => 'view_issues',
    'link_title' => 'Supplements',
    'options' => array(
      'attributes' => array(
        'id' => 'supplements',
        'name' => 'sites/default/files/oncsd_menu/supplements.png',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-content-editor-menu:admin/content/comment
  $menu_links['menu-content-editor-menu:admin/content/comment'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
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
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-content-editor-menu:admin/content/comment/manage
  $menu_links['menu-content-editor-menu:admin/content/comment/manage'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/content/comment/manage',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Manage comments',
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
    'weight' => -50,
    'parent_path' => 'admin/content/comment',
  );
  // Exported menu link: menu-content-editor-menu:admin/content/manage
  $menu_links['menu-content-editor-menu:admin/content/manage'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/content/manage',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
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
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-content-editor-menu:admin/people
  $menu_links['menu-content-editor-menu:admin/people'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'Users',
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
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: menu-content-editor-menu:admin/people/create
  $menu_links['menu-content-editor-menu:admin/people/create'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'Add user',
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
    'weight' => -49,
    'parent_path' => 'admin/people',
  );
  // Exported menu link: menu-content-editor-menu:admin/people/manage
  $menu_links['menu-content-editor-menu:admin/people/manage'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/people/manage',
    'router_path' => 'admin/people',
    'link_title' => 'Manage users',
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
    'weight' => -50,
    'parent_path' => 'admin/people',
  );
  // Exported menu link: menu-content-editor-menu:admin/structure/menu
  $menu_links['menu-content-editor-menu:admin/structure/menu'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
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
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-content-editor-menu:admin/structure/menu/manage/menu-bcm-main-menu
  $menu_links['menu-content-editor-menu:admin/structure/menu/manage/menu-bcm-main-menu'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/structure/menu/manage/menu-bcm-main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Web: BCM Main Menu',
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
    'weight' => -47,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-content-editor-menu:admin/structure/menu/manage/menu-com-intstrux-onchd
  $menu_links['menu-content-editor-menu:admin/structure/menu/manage/menu-com-intstrux-onchd'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/structure/menu/manage/menu-com-intstrux-onchd',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'OncHD US menu',
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
    'weight' => -49,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-content-editor-menu:admin/structure/menu/manage/menu-eu-intstrux-onchd
  $menu_links['menu-content-editor-menu:admin/structure/menu/manage/menu-eu-intstrux-onchd'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/structure/menu/manage/menu-eu-intstrux-onchd',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'OncHD EU menu',
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
    'weight' => -50,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-content-editor-menu:admin/structure/menu/manage/menu-pcm-main-menu
  $menu_links['menu-content-editor-menu:admin/structure/menu/manage/menu-pcm-main-menu'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/structure/menu/manage/menu-pcm-main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Web: PCM Main Menu',
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
    'weight' => -46,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-content-editor-menu:admin/structure/menu/manage/menu-sto-menu
  $menu_links['menu-content-editor-menu:admin/structure/menu/manage/menu-sto-menu'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/structure/menu/manage/menu-sto-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'STO Menu',
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
    'weight' => -45,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-content-editor-menu:admin/structure/menu/manage/menu-zh-intstrux-onchd
  $menu_links['menu-content-editor-menu:admin/structure/menu/manage/menu-zh-intstrux-onchd'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/structure/menu/manage/menu-zh-intstrux-onchd',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'OncHD ZH menu',
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
    'weight' => -48,
    'parent_path' => 'admin/structure/menu',
  );
  // Exported menu link: menu-content-editor-menu:admin/structure/nodequeue
  $menu_links['menu-content-editor-menu:admin/structure/nodequeue'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/structure/nodequeue',
    'router_path' => 'admin/structure/nodequeue',
    'link_title' => 'Featured Queues',
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
    'weight' => 0,
    'parent_path' => 'admin/content/manage',
  );
  // Exported menu link: menu-content-editor-menu:admin/structure/taxonomy
  $menu_links['menu-content-editor-menu:admin/structure/taxonomy'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
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
    'weight' => -47,
  );
  // Exported menu link: menu-content-editor-menu:node/add
  $menu_links['menu-content-editor-menu:node/add'] = array(
    'menu_name' => 'menu-content-editor-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
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
    'weight' => -49,
  );
  // Exported menu link: menu-eu-intstrux-onchd:http://ampserver.intstrux.com/node/859
  $menu_links['menu-eu-intstrux-onchd:http://ampserver.intstrux.com/node/859'] = array(
    'menu_name' => 'menu-eu-intstrux-onchd',
    'link_path' => 'http://ampserver.intstrux.com/node/859',
    'router_path' => '',
    'link_title' => 'Meetings',
    'options' => array(
      'attributes' => array(
        'id' => 'meetings',
        'name' => 'Meetings',
        'rel' => '4.0.2',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-eu-intstrux-onchd:node/856
  $menu_links['menu-eu-intstrux-onchd:node/856'] = array(
    'menu_name' => 'menu-eu-intstrux-onchd',
    'link_path' => 'node/856',
    'router_path' => 'node/%',
    'link_title' => 'Podcasts',
    'options' => array(
      'attributes' => array(
        'id' => 'podcasts',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-eu-intstrux-onchd:node/858
  $menu_links['menu-eu-intstrux-onchd:node/858'] = array(
    'menu_name' => 'menu-eu-intstrux-onchd',
    'link_path' => 'node/858',
    'router_path' => 'node/%',
    'link_title' => 'Issues',
    'options' => array(
      'attributes' => array(
        'id' => 'journals',
        'class' => array(
          0 => 'native',
        ),
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-eu-intstrux-onchd:node/872
  $menu_links['menu-eu-intstrux-onchd:node/872'] = array(
    'menu_name' => 'menu-eu-intstrux-onchd',
    'link_path' => 'node/872',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'id' => 'home',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-eu-intstrux-onchd:view_european_perspective
  $menu_links['menu-eu-intstrux-onchd:view_european_perspective'] = array(
    'menu_name' => 'menu-eu-intstrux-onchd',
    'link_path' => 'view_european_perspective',
    'router_path' => 'view_european_perspective',
    'link_title' => 'European Perspectives',
    'options' => array(
      'attributes' => array(
        'id' => 'view_european_perspective',
        'name' => 'European Perspectives',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-eu-intstrux-onchd:view_express
  $menu_links['menu-eu-intstrux-onchd:view_express'] = array(
    'menu_name' => 'menu-eu-intstrux-onchd',
    'link_path' => 'view_express',
    'router_path' => 'view_express',
    'link_title' => 'Express',
    'options' => array(
      'attributes' => array(
        'id' => 'express',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
  );
  // Exported menu link: menu-eu-intstrux-onchd:view_reflections
  $menu_links['menu-eu-intstrux-onchd:view_reflections'] = array(
    'menu_name' => 'menu-eu-intstrux-onchd',
    'link_path' => 'view_reflections',
    'router_path' => 'view_reflections',
    'link_title' => 'Reflections',
    'options' => array(
      'attributes' => array(
        'id' => 'reflections',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: menu-new-onchd-menu:<view>
  $menu_links['menu-new-onchd-menu:<view>'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => '<view>',
    'router_path' => '<view>',
    'link_title' => '',
    'options' => array(
      'attributes' => array(),
      'menu_views' => array(
        'mlid' => 14429,
        'type' => 'view',
        'original_path' => '',
        'view' => array(
          'name' => 'app_taxonomy_terms',
          'display' => 'default',
          'arguments' => 'vocabulary_4',
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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/142
  $menu_links['menu-new-onchd-menu:taxonomy/term/142'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/142',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Breast Cancer',
    'options' => array(
      'attributes' => array(
        'title' => 'Breast Cancer',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/148
  $menu_links['menu-new-onchd-menu:taxonomy/term/148'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/148',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Hematology',
    'options' => array(
      'attributes' => array(
        'title' => 'Hematology',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/149
  $menu_links['menu-new-onchd-menu:taxonomy/term/149'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/149',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Liver Metastases',
    'options' => array(
      'attributes' => array(
        'title' => 'Liver Metastases',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/150
  $menu_links['menu-new-onchd-menu:taxonomy/term/150'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/150',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Multiple Cancer Types',
    'options' => array(
      'attributes' => array(
        'title' => 'Multiple Cancer Types',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/153
  $menu_links['menu-new-onchd-menu:taxonomy/term/153'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/153',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Prostate Cancer',
    'options' => array(
      'attributes' => array(
        'title' => 'Prostate Cancer',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/171
  $menu_links['menu-new-onchd-menu:taxonomy/term/171'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/171',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Multiple Myeloma',
    'options' => array(
      'attributes' => array(
        'title' => 'Multiple Myeloma',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/183
  $menu_links['menu-new-onchd-menu:taxonomy/term/183'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/183',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Ovarian Cancer',
    'options' => array(
      'attributes' => array(
        'title' => 'Ovarian Cancer',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/184
  $menu_links['menu-new-onchd-menu:taxonomy/term/184'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/184',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Pancreatic Cancer',
    'options' => array(
      'attributes' => array(
        'title' => 'Pancreatic Cancer',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/185
  $menu_links['menu-new-onchd-menu:taxonomy/term/185'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/185',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Colorectal Cancer',
    'options' => array(
      'attributes' => array(
        'title' => 'Colorectal Cancer',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/186
  $menu_links['menu-new-onchd-menu:taxonomy/term/186'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/186',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Melanoma',
    'options' => array(
      'attributes' => array(
        'title' => 'Melanoma',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/214
  $menu_links['menu-new-onchd-menu:taxonomy/term/214'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/214',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Patients\' Perspectives',
    'options' => array(
      'attributes' => array(
        'title' => 'Patients\' Perspectives',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/237
  $menu_links['menu-new-onchd-menu:taxonomy/term/237'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/237',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Cancer Biology',
    'options' => array(
      'attributes' => array(
        'title' => 'Cancer Biology',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/242
  $menu_links['menu-new-onchd-menu:taxonomy/term/242'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/242',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Neuro-oncology',
    'options' => array(
      'attributes' => array(
        'title' => 'Neuro-oncology',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/245
  $menu_links['menu-new-onchd-menu:taxonomy/term/245'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/245',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Cancer Imaging',
    'options' => array(
      'attributes' => array(
        'title' => 'Cancer Imaging',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/246
  $menu_links['menu-new-onchd-menu:taxonomy/term/246'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/246',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bladder Cancer',
    'options' => array(
      'attributes' => array(
        'title' => 'Bladder Cancer',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/248
  $menu_links['menu-new-onchd-menu:taxonomy/term/248'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/248',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Liver Cancer',
    'options' => array(
      'attributes' => array(
        'title' => 'Liver Cancer',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/249
  $menu_links['menu-new-onchd-menu:taxonomy/term/249'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/249',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Radiation Oncology',
    'options' => array(
      'attributes' => array(
        'title' => 'Radiation Oncology',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/251
  $menu_links['menu-new-onchd-menu:taxonomy/term/251'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/251',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Lung Cancer',
    'options' => array(
      'attributes' => array(
        'title' => 'Lung Cancer',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/3414
  $menu_links['menu-new-onchd-menu:taxonomy/term/3414'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/3414',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Commentaries',
    'options' => array(
      'attributes' => array(
        'title' => 'Commentaries',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/3415
  $menu_links['menu-new-onchd-menu:taxonomy/term/3415'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/3415',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Editorial',
    'options' => array(
      'attributes' => array(
        'title' => 'Editorial',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/3416
  $menu_links['menu-new-onchd-menu:taxonomy/term/3416'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/3416',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Reflections',
    'options' => array(
      'attributes' => array(
        'title' => 'Reflections',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-new-onchd-menu:taxonomy/term/3417
  $menu_links['menu-new-onchd-menu:taxonomy/term/3417'] = array(
    'menu_name' => 'menu-new-onchd-menu',
    'link_path' => 'taxonomy/term/3417',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Pinedo Prize Lecture',
    'options' => array(
      'attributes' => array(
        'title' => 'Pinedo Prize Lecture',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
  );
  // Exported menu link: menu-pcm-main-menu:<front>
  $menu_links['menu-pcm-main-menu:<front>'] = array(
    'menu_name' => 'menu-pcm-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'HOME',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-pcm-main-menu:articles
  $menu_links['menu-pcm-main-menu:articles'] = array(
    'menu_name' => 'menu-pcm-main-menu',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'ARTICLES',
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
    'weight' => 0,
  );
  // Exported menu link: menu-pcm-main-menu:challengingcases
  $menu_links['menu-pcm-main-menu:challengingcases'] = array(
    'menu_name' => 'menu-pcm-main-menu',
    'link_path' => 'challengingcases',
    'router_path' => 'challengingcases',
    'link_title' => 'CHALLENGING CASES',
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
    'weight' => 0,
  );
  // Exported menu link: menu-pcm-main-menu:editorials
  $menu_links['menu-pcm-main-menu:editorials'] = array(
    'menu_name' => 'menu-pcm-main-menu',
    'link_path' => 'editorials',
    'router_path' => 'editorials',
    'link_title' => 'EDITORIALS',
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
    'weight' => 0,
  );
  // Exported menu link: menu-social-links:feed/mostrecent
  $menu_links['menu-social-links:feed/mostrecent'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'feed/mostrecent',
    'router_path' => 'feed/mostrecent',
    'link_title' => 'sites/all/themes/stotheme/images/icn_rss.png',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-social-links:http://www.facebook.com/pages/The-Oncologist/141743395850072?sk=wall
  $menu_links['menu-social-links:http://www.facebook.com/pages/The-Oncologist/141743395850072?sk=wall'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'http://www.facebook.com/pages/The-Oncologist/141743395850072?sk=wall',
    'router_path' => '',
    'link_title' => 'sites/all/themes/stotheme/images/icn_facebook.png',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-social-links:http://www.youtube.com/user/TheOncologistJournal
  $menu_links['menu-social-links:http://www.youtube.com/user/TheOncologistJournal'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'http://www.youtube.com/user/TheOncologistJournal',
    'router_path' => '',
    'link_title' => 'sites/all/themes/stotheme/images/icn_youtube.png',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-social-links:https://twitter.com/#!/OncJournal
  $menu_links['menu-social-links:https://twitter.com/#!/OncJournal'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'https://twitter.com/#!/OncJournal',
    'router_path' => '',
    'link_title' => 'sites/all/themes/stotheme/images/icn_twitter.png',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-social-links:node/18667
  $menu_links['menu-social-links:node/18667'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'node/18667',
    'router_path' => 'node/%',
    'link_title' => 'sites/all/themes/stotheme/images/icn_app.png',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-sto-footer-menu:contact
  $menu_links['menu-sto-footer-menu:contact'] = array(
    'menu_name' => 'menu-sto-footer-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-sto-footer-menu:http://theoncologist.com
  $menu_links['menu-sto-footer-menu:http://theoncologist.com'] = array(
    'menu_name' => 'menu-sto-footer-menu',
    'link_path' => 'http://theoncologist.com',
    'router_path' => '',
    'link_title' => 'The Oncologist',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: menu-sto-footer-menu:node/17877
  $menu_links['menu-sto-footer-menu:node/17877'] = array(
    'menu_name' => 'menu-sto-footer-menu',
    'link_path' => 'node/17877',
    'router_path' => 'node/%',
    'link_title' => 'Copyright © 2012',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-sto-footer-menu:node/17879
  $menu_links['menu-sto-footer-menu:node/17879'] = array(
    'menu_name' => 'menu-sto-footer-menu',
    'link_path' => 'node/17879',
    'router_path' => 'node/%',
    'link_title' => 'Terms of Use',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-sto-footer-menu:node/19065
  $menu_links['menu-sto-footer-menu:node/19065'] = array(
    'menu_name' => 'menu-sto-footer-menu',
    'link_path' => 'node/19065',
    'router_path' => 'node/%',
    'link_title' => 'Site Map',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-sto-menu:<front>
  $menu_links['menu-sto-menu:<front>'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'sites/all/themes/stotheme/images/icn_home.png',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-sto-menu:challenging_cases
  $menu_links['menu-sto-menu:challenging_cases'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'challenging_cases',
    'router_path' => 'challenging_cases',
    'link_title' => 'Challenging Cases',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/20940',
  );
  // Exported menu link: menu-sto-menu:european_perspectives
  $menu_links['menu-sto-menu:european_perspectives'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'european_perspectives',
    'router_path' => 'european_perspectives',
    'link_title' => 'European Perspectives',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/20940',
  );
  // Exported menu link: menu-sto-menu:http://cme.alphamedpress.org/
  $menu_links['menu-sto-menu:http://cme.alphamedpress.org/'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'http://cme.alphamedpress.org/',
    'router_path' => '',
    'link_title' => 'Journal CME',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/17876',
  );
  // Exported menu link: menu-sto-menu:http://videocme.theoncologist.com/
  $menu_links['menu-sto-menu:http://videocme.theoncologist.com/'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'http://videocme.theoncologist.com/',
    'router_path' => '',
    'link_title' => 'Video CME',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/17876',
  );
  // Exported menu link: menu-sto-menu:medialibrary
  $menu_links['menu-sto-menu:medialibrary'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'medialibrary',
    'router_path' => 'medialibrary',
    'link_title' => 'Media Library',
    'options' => array(
      'attributes' => array(),
      'query' => array(
        'tid_2_op' => 'not',
        'tid_2' => 141,
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-sto-menu:node/17876
  $menu_links['menu-sto-menu:node/17876'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/17876',
    'router_path' => 'node/%',
    'link_title' => 'CME',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
  );
  // Exported menu link: menu-sto-menu:node/17881
  $menu_links['menu-sto-menu:node/17881'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/17881',
    'router_path' => 'node/%',
    'link_title' => 'Pinedo Prize Nominations',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/22165',
  );
  // Exported menu link: menu-sto-menu:node/17882
  $menu_links['menu-sto-menu:node/17882'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/17882',
    'router_path' => 'node/%',
    'link_title' => 'Pinedo Prize Awardees',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/22165',
  );
  // Exported menu link: menu-sto-menu:node/17883
  $menu_links['menu-sto-menu:node/17883'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/17883',
    'router_path' => 'node/%',
    'link_title' => 'STO Board',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/22165',
  );
  // Exported menu link: menu-sto-menu:node/17980
  $menu_links['menu-sto-menu:node/17980'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/17980',
    'router_path' => 'node/%',
    'link_title' => 'Chabner Colloquium 2011',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/24034',
  );
  // Exported menu link: menu-sto-menu:node/18011
  $menu_links['menu-sto-menu:node/18011'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/18011',
    'router_path' => 'node/%',
    'link_title' => 'Pinedo Cancer Care Prize',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/22165',
  );
  // Exported menu link: menu-sto-menu:node/18667
  $menu_links['menu-sto-menu:node/18667'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/18667',
    'router_path' => 'node/%',
    'link_title' => 'Mobile CME',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/17876',
  );
  // Exported menu link: menu-sto-menu:node/18677
  $menu_links['menu-sto-menu:node/18677'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/18677',
    'router_path' => 'node/%',
    'link_title' => 'ACT China',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/24034',
  );
  // Exported menu link: menu-sto-menu:node/18686
  $menu_links['menu-sto-menu:node/18686'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/18686',
    'router_path' => 'node/%',
    'link_title' => 'Prostate Cancer: Progress and Promise',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/24034',
  );
  // Exported menu link: menu-sto-menu:node/18697
  $menu_links['menu-sto-menu:node/18697'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/18697',
    'router_path' => 'node/%',
    'link_title' => 'STO Annual Meeting 2010',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'node/24034',
  );
  // Exported menu link: menu-sto-menu:node/18722
  $menu_links['menu-sto-menu:node/18722'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/18722',
    'router_path' => 'node/%',
    'link_title' => 'STO Annual Meeting 2011',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'node/24034',
  );
  // Exported menu link: menu-sto-menu:node/18741
  $menu_links['menu-sto-menu:node/18741'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/18741',
    'router_path' => 'node/%',
    'link_title' => 'STO Annual Meeting 2012',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'node/24034',
  );
  // Exported menu link: menu-sto-menu:node/20934
  $menu_links['menu-sto-menu:node/20934'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/20934',
    'router_path' => 'node/%',
    'link_title' => 'Featured Cancer Center',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/20940',
  );
  // Exported menu link: menu-sto-menu:node/20940
  $menu_links['menu-sto-menu:node/20940'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/20940',
    'router_path' => 'node/%',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
  );
  // Exported menu link: menu-sto-menu:node/22165
  $menu_links['menu-sto-menu:node/22165'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/22165',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
  );
  // Exported menu link: menu-sto-menu:node/24034
  $menu_links['menu-sto-menu:node/24034'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/24034',
    'router_path' => 'node/%',
    'link_title' => 'Meetings',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
  );
  // Exported menu link: menu-sto-menu:node/24556
  $menu_links['menu-sto-menu:node/24556'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/24556',
    'router_path' => 'node/%',
    'link_title' => 'Chabner Colloquium 2012',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/24034',
  );
  // Exported menu link: menu-sto-menu:node/27582
  $menu_links['menu-sto-menu:node/27582'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/27582',
    'router_path' => 'node/%',
    'link_title' => 'Patients\' Perspectives',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/20940',
  );
  // Exported menu link: menu-sto-menu:node/45795
  $menu_links['menu-sto-menu:node/45795'] = array(
    'menu_name' => 'menu-sto-menu',
    'link_path' => 'node/45795',
    'router_path' => 'node/%',
    'link_title' => 'European Cancer Concord',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/24034',
  );
  // Exported menu link: menu-web-lcm-main-menu:<front>
  $menu_links['menu-web-lcm-main-menu:<front>'] = array(
    'menu_name' => 'menu-web-lcm-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'HOME',
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
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-web-lcm-main-menu:lcmarticles
  $menu_links['menu-web-lcm-main-menu:lcmarticles'] = array(
    'menu_name' => 'menu-web-lcm-main-menu',
    'link_path' => 'lcmarticles',
    'router_path' => 'lcmarticles',
    'link_title' => 'ARTICLES',
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
    'weight' => -48,
  );
  // Exported menu link: menu-web-lcm-main-menu:lcmchallengingcases
  $menu_links['menu-web-lcm-main-menu:lcmchallengingcases'] = array(
    'menu_name' => 'menu-web-lcm-main-menu',
    'link_path' => 'lcmchallengingcases',
    'router_path' => 'lcmchallengingcases',
    'link_title' => 'CHALLENGING CASES',
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-web-lcm-main-menu:lcmeditorials
  $menu_links['menu-web-lcm-main-menu:lcmeditorials'] = array(
    'menu_name' => 'menu-web-lcm-main-menu',
    'link_path' => 'lcmeditorials',
    'router_path' => 'lcmeditorials',
    'link_title' => 'EDITORIALS',
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
    'weight' => -49,
  );
  // Exported menu link: menu-zh-intstrux-onchd:http://ampserver.intstrux.com/node/859
  $menu_links['menu-zh-intstrux-onchd:http://ampserver.intstrux.com/node/859'] = array(
    'menu_name' => 'menu-zh-intstrux-onchd',
    'link_path' => 'http://ampserver.intstrux.com/node/859',
    'router_path' => '',
    'link_title' => '临床试验结果',
    'options' => array(
      'attributes' => array(
        'id' => 'meetings',
        'name' => '临床试验结果',
        'rel' => '4.0.2',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-zh-intstrux-onchd:node/856
  $menu_links['menu-zh-intstrux-onchd:node/856'] = array(
    'menu_name' => 'menu-zh-intstrux-onchd',
    'link_path' => 'node/856',
    'router_path' => 'node/%',
    'link_title' => '播客',
    'options' => array(
      'attributes' => array(
        'id' => 'podcasts',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-zh-intstrux-onchd:node/857
  $menu_links['menu-zh-intstrux-onchd:node/857'] = array(
    'menu_name' => 'menu-zh-intstrux-onchd',
    'link_path' => 'node/857',
    'router_path' => 'node/%',
    'link_title' => '期刊',
    'options' => array(
      'attributes' => array(
        'id' => 'journals',
        'class' => array(
          0 => 'native',
        ),
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-zh-intstrux-onchd:node/859
  $menu_links['menu-zh-intstrux-onchd:node/859'] = array(
    'menu_name' => 'menu-zh-intstrux-onchd',
    'link_path' => 'node/859',
    'router_path' => 'node/%',
    'link_title' => '增刊',
    'options' => array(
      'attributes' => array(
        'id' => 'supplements',
        'name' => '增刊',
        'class' => array(
          0 => 'native',
        ),
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-zh-intstrux-onchd:node/873
  $menu_links['menu-zh-intstrux-onchd:node/873'] = array(
    'menu_name' => 'menu-zh-intstrux-onchd',
    'link_path' => 'node/873',
    'router_path' => 'node/%',
    'link_title' => '首页',
    'options' => array(
      'attributes' => array(
        'id' => 'home',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-zh-intstrux-onchd:view_express
  $menu_links['menu-zh-intstrux-onchd:view_express'] = array(
    'menu_name' => 'menu-zh-intstrux-onchd',
    'link_path' => 'view_express',
    'router_path' => 'view_express',
    'link_title' => '快速链接',
    'options' => array(
      'attributes' => array(
        'id' => 'express',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: menu-zh-intstrux-onchd:view_reflections
  $menu_links['menu-zh-intstrux-onchd:view_reflections'] = array(
    'menu_name' => 'menu-zh-intstrux-onchd',
    'link_path' => 'view_reflections',
    'router_path' => 'view_reflections',
    'link_title' => '思考',
    'options' => array(
      'attributes' => array(
        'id' => 'reflections',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: navigation:admin/userlist
  $menu_links['navigation:admin/userlist'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/userlist',
    'router_path' => 'admin/userlist',
    'link_title' => 'Complete Userlist',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:contact
  $menu_links['navigation:contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:domain
  $menu_links['navigation:domain'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'domain',
    'router_path' => 'domain',
    'link_title' => 'Domain',
    'options' => array(
      'attributes' => array(
        'title' => 'Go to main site',
      ),
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:domain/admin.alpha.intstrux.com
  $menu_links['navigation:domain/admin.alpha.intstrux.com'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'domain/admin.alpha.intstrux.com',
    'router_path' => 'domain/admin.alpha.intstrux.com',
    'link_title' => 'Admin Project Alpha',
    'options' => array(
      'attributes' => array(
        'title' => 'Go to admin.alpha.intstrux.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'domain',
  );
  // Exported menu link: navigation:domain/breastcancer.theoncologist.com
  $menu_links['navigation:domain/breastcancer.theoncologist.com'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'domain/breastcancer.theoncologist.com',
    'router_path' => 'domain/breastcancer.theoncologist.com',
    'link_title' => 'Welcome to BCM',
    'options' => array(
      'attributes' => array(
        'title' => 'Go to breastcancer.theoncologist.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'domain',
  );
  // Exported menu link: navigation:domain/lungcancer.theoncologist.com
  $menu_links['navigation:domain/lungcancer.theoncologist.com'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'domain/lungcancer.theoncologist.com',
    'router_path' => 'domain/lungcancer.theoncologist.com',
    'link_title' => 'Welcome to LCM',
    'options' => array(
      'attributes' => array(
        'title' => 'Go to lungcancer.theoncologist.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'domain',
  );
  // Exported menu link: navigation:domain/onchd.alpha.intstrux.com
  $menu_links['navigation:domain/onchd.alpha.intstrux.com'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'domain/onchd.alpha.intstrux.com',
    'router_path' => 'domain/onchd.alpha.intstrux.com',
    'link_title' => 'Oncologist HD app [STAGE]',
    'options' => array(
      'attributes' => array(
        'title' => 'Go to onchd.alpha.intstrux.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'domain',
  );
  // Exported menu link: navigation:domain/oncologistportal.alpha.intstrux.com
  $menu_links['navigation:domain/oncologistportal.alpha.intstrux.com'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'domain/oncologistportal.alpha.intstrux.com',
    'router_path' => 'domain/oncologistportal.alpha.intstrux.com',
    'link_title' => '[STAGE] Oncologist Portal',
    'options' => array(
      'attributes' => array(
        'title' => 'Go to oncologistportal.alpha.intstrux.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'domain',
  );
  // Exported menu link: navigation:domain/prostatecancer.theoncologist.com
  $menu_links['navigation:domain/prostatecancer.theoncologist.com'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'domain/prostatecancer.theoncologist.com',
    'router_path' => 'domain/prostatecancer.theoncologist.com',
    'link_title' => 'Welcome to PCM',
    'options' => array(
      'attributes' => array(
        'title' => 'Go to prostatecancer.theoncologist.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'domain',
  );
  // Exported menu link: navigation:domain/sto-online.alpha.intstrux.com
  $menu_links['navigation:domain/sto-online.alpha.intstrux.com'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'domain/sto-online.alpha.intstrux.com',
    'router_path' => 'domain/sto-online.alpha.intstrux.com',
    'link_title' => '[STAGE] STO Online',
    'options' => array(
      'attributes' => array(
        'title' => 'Go to sto-online.alpha.intstrux.com',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'domain',
  );
  // Exported menu link: navigation:filter/tips
  $menu_links['navigation:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:node/add
  $menu_links['navigation:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:node/add/apns-client
  $menu_links['navigation:node/add/apns-client'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/apns-client',
    'router_path' => 'node/add/apns-client',
    'link_title' => 'APNS Client',
    'options' => array(
      'attributes' => array(
        'title' => 'Apple Push Notification Service (APNS) Client describes a device with one of our IOS apps installed to it and the user agreed to receive push notifications.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/article
  $menu_links['navigation:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article (HighWire - Automatic)',
    'options' => array(
      'attributes' => array(
        'title' => 'Auto generate articles from Highwire for Journals in the US and EU editions',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/article-express
  $menu_links['navigation:node/add/article-express'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article-express',
    'router_path' => 'node/add/article-express',
    'link_title' => 'Article Express',
    'options' => array(
      'attributes' => array(
        'title' => 'Auto generates express entries from Highwire in the US and EU editions',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/asset-audio
  $menu_links['navigation:node/add/asset-audio'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/asset-audio',
    'router_path' => 'node/add/asset-audio',
    'link_title' => 'Asset Audio',
    'options' => array(
      'attributes' => array(
        'title' => 'This is the individual audio asset',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/asset-image
  $menu_links['navigation:node/add/asset-image'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/asset-image',
    'router_path' => 'node/add/asset-image',
    'link_title' => 'Image [Non HTML Article]',
    'options' => array(
      'attributes' => array(
        'title' => 'Images can be used in conjunction with Taxonomy: Article Containers, e.g. Issues, Supplements, like Article (CADMUS - MANUAL) content. 
This is very helpful when the actual content is not available as HTML.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/asset-video
  $menu_links['navigation:node/add/asset-video'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/asset-video',
    'router_path' => 'node/add/asset-video',
    'link_title' => 'Video',
    'options' => array(
      'attributes' => array(
        'title' => 'A Brightcove video wrapper',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/challenging-case
  $menu_links['navigation:node/add/challenging-case'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/challenging-case',
    'router_path' => 'node/add/challenging-case',
    'link_title' => 'Challenging Case',
    'options' => array(
      'attributes' => array(
        'title' => 'Describes a Challenging Case',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/edition
  $menu_links['navigation:node/add/edition'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/edition',
    'router_path' => 'node/add/edition',
    'link_title' => 'Edition - Sub-Application',
    'options' => array(
      'attributes' => array(
        'title' => 'A country, region and/or language specific version of the application ',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/meeting
  $menu_links['navigation:node/add/meeting'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/meeting',
    'router_path' => 'node/add/meeting',
    'link_title' => 'Meeting',
    'options' => array(
      'attributes' => array(
        'title' => 'A meeting entry',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/page
  $menu_links['navigation:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => 'A blank Page type',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/page-html
  $menu_links['navigation:node/add/page-html'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page-html',
    'router_path' => 'node/add/page-html',
    'link_title' => 'Article (CADMUS - MANUAL)',
    'options' => array(
      'attributes' => array(
        'title' => 'A Page which includes a full html representation. 
Please note that all referenced files need to be uploaded as well.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/page-interactive-ad
  $menu_links['navigation:node/add/page-interactive-ad'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page-interactive-ad',
    'router_path' => 'node/add/page-interactive-ad',
    'link_title' => 'Interactive Ad (Depreciated)',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/page-interactive-ad-alt
  $menu_links['navigation:node/add/page-interactive-ad-alt'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page-interactive-ad-alt',
    'router_path' => 'node/add/page-interactive-ad-alt',
    'link_title' => 'Interactive Ad',
    'options' => array(
      'attributes' => array(
        'title' => 'Full Page Ad Content with JS-Native integration',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/panel
  $menu_links['navigation:node/add/panel'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/panel',
    'router_path' => 'node/add/panel',
    'link_title' => 'Panel',
    'options' => array(
      'attributes' => array(
        'title' => 'A panel layout broken up into rows and columns.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/perspective
  $menu_links['navigation:node/add/perspective'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/perspective',
    'router_path' => 'node/add/perspective',
    'link_title' => 'Perspective',
    'options' => array(
      'attributes' => array(
        'title' => 'The perspective content type is used for sections like the european perspective.
It contains a video/ audio part which is connected to an author with some kind of abstract.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/poll
  $menu_links['navigation:node/add/poll'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/poll',
    'router_path' => 'node/add/poll',
    'link_title' => 'Poll',
    'options' => array(
      'attributes' => array(
        'title' => 'A <em>poll</em> is a question with a set of possible responses. A <em>poll</em>, once created, automatically provides a simple running count of the number of votes received for each response.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/portal
  $menu_links['navigation:node/add/portal'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/portal',
    'router_path' => 'node/add/portal',
    'link_title' => 'Portal',
    'options' => array(
      'attributes' => array(
        'title' => 'An external portal in connection with The Oncologist',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/sidebar-banner-ad
  $menu_links['navigation:node/add/sidebar-banner-ad'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/sidebar-banner-ad',
    'router_path' => 'node/add/sidebar-banner-ad',
    'link_title' => 'Sidebar Banner Ad',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/sto-featured-item
  $menu_links['navigation:node/add/sto-featured-item'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/sto-featured-item',
    'router_path' => 'node/add/sto-featured-item',
    'link_title' => 'STO Featured Item',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/web-cancer-portal-promo-carousel
  $menu_links['navigation:node/add/web-cancer-portal-promo-carousel'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/web-cancer-portal-promo-carousel',
    'router_path' => 'node/add/web-cancer-portal-promo-carousel',
    'link_title' => 'Web: Cancer Portal - Promo Carousel',
    'options' => array(
      'attributes' => array(
        'title' => 'Add image, title, and description for Promo Carousel on Cancer Portal website.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/webform
  $menu_links['navigation:node/add/webform'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:poll
  $menu_links['navigation:poll'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'poll',
    'router_path' => 'poll',
    'link_title' => 'Polls',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:profile
  $menu_links['navigation:profile'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'profile',
    'router_path' => 'profile',
    'link_title' => 'User list',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:search
  $menu_links['navigation:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:sitemap
  $menu_links['navigation:sitemap'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Site map',
    'options' => array(
      'attributes' => array(
        'title' => 'Display a site map with RSS feeds.',
      ),
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:variable/example
  $menu_links['navigation:variable/example'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'variable/example',
    'router_path' => 'variable/example',
    'link_title' => 'Variable example',
    'options' => array(
      'attributes' => array(
        'title' => 'List some variables.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: navigation:view_customized
  $menu_links['navigation:view_customized'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'view_customized',
    'router_path' => 'view_customized',
    'link_title' => 'Customized Content',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
  );
  // Exported menu link: navigation:view_personalized
  $menu_links['navigation:view_personalized'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'view_personalized',
    'router_path' => 'view_personalized',
    'link_title' => 'Customized Content',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
  );
  // Exported menu link: user-menu:profile-main
  $menu_links['user-menu:profile-main'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'profile-main',
    'router_path' => 'profile-main',
    'link_title' => '',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ACT China');
  t('AJAX comments');
  t('AMP Menu');
  t('APNS');
  t('APNS Client');
  t('APP: oncHD - EU');
  t('APP: oncHD - US');
  t('APP: oncHD - ZH');
  t('ARTICLES');
  t('About');
  t('About Meetings');
  t('About us');
  t('Academia-Pharma Intersect');
  t('Account settings');
  t('Actions');
  t('Ad Analyst Menu');
  t('Ad Creator Menu');
  t('Ad Reviewer Menu');
  t('Add Interactive Ad');
  t('Add Test Device');
  t('Add content');
  t('Add user');
  t('Admin Project Alpha');
  t('Admin Project Alpha content');
  t('Administration');
  t('Administration menu');
  t('Advanced User');
  t('Advertisements');
  t('Affiliated content');
  t('Apache Solr search');
  t('Apache Solr search index');
  t('Appearance');
  t('Archives');
  t('Article');
  t('Article (CADMUS - MANUAL)');
  t('Article (HighWire - Automatic)');
  t('Article Express');
  t('Asset Audio');
  t('Available updates');
  t('Backup and Migrate');
  t('Bladder Cancer');
  t('Blocks');
  t('Breast Cancer');
  t('Brightcove settings');
  t('Bulk Exporter');
  t('CDN');
  t('CHALLENGING CASES');
  t('CKEditor');
  t('CME');
  t('Cancer Biology');
  t('Cancer Imaging');
  t('Cancer Portals');
  t('Cancer Prevention');
  t('Category');
  t('Chabner Colloquium 2011');
  t('Chabner Colloquium 2012');
  t('Challenging Case');
  t('Challenging Cases');
  t('Chinese Edition');
  t('Chinese, Simplified');
  t('Chosen');
  t('Clean URLs');
  t('Clinical Trial Results');
  t('Colorectal Cancer');
  t('Commentaries');
  t('Comments');
  t('Complete Userlist');
  t('Compose tips');
  t('Configuration');
  t('Contact');
  t('Contact Us');
  t('Contact form');
  t('Content');
  t('Content Editor Menu');
  t('Content assigned to all affiliates');
  t('Content authoring');
  t('Content lock');
  t('Content types');
  t('Copyright © 2012');
  t('Create');
  t('Cron');
  t('Current Issue');
  t('Custom access rulesets');
  t('Custom content panes');
  t('Customized');
  t('Customized Content');
  t('Dashboard');
  t('Date API');
  t('Date Popup');
  t('Date Tools');
  t('Date and time');
  t('Devel settings');
  t('Development');
  t('Development & Pharmacology');
  t('Domain');
  t('Domains');
  t('EDITORIALS');
  t('Economics of Oncology Practice');
  t('Edition - Sub-Application');
  t('Editorial');
  t('Editorial Board');
  t('Empty cache');
  t('Endocrinology');
  t('English');
  t('Entity info');
  t('Entity view modes');
  t('European Cancer Concord');
  t('European Edition');
  t('European Perspectives');
  t('Execute PHP Code');
  t('Express');
  t('Featured');
  t('Featured Cancer Center');
  t('Featured Queues');
  t('Features');
  t('Field collections');
  t('Field info');
  t('Field list');
  t('File system');
  t('File types');
  t('Fivestar');
  t('Function reference');
  t('Gastrointestinal');
  t('Geneate Snapshots');
  t('Generate content');
  t('Generate menus');
  t('Generate redirects');
  t('Generate terms');
  t('Generate users');
  t('Generate vocabularies');
  t('Generate votes');
  t('Geriatric');
  t('Google Analytics');
  t('Gynecologic');
  t('HOME');
  t('HTML Purifier settings');
  t('Head and Neck');
  t('Help');
  t('Hematology');
  t('HighWire settings');
  t('Home');
  t('Hook_elements()');
  t('IMCE');
  t('INTERVIEWS');
  t('IP address blocking');
  t('Image [Non HTML Article]');
  t('Image styles');
  t('Image toolkit');
  t('Imagecache External');
  t('Interactive Ad');
  t('Interactive Ad (Depreciated)');
  t('Issues');
  t('Journal');
  t('Journal CME');
  t('Languages');
  t('List of Test Devices');
  t('Liver Cancer');
  t('Liver Metastases');
  t('Log out');
  t('Logging and errors');
  t('Login destinations');
  t('Lung Cancer');
  t('Lymphoma');
  t('Magazine');
  t('Main menu');
  t('Maintenance mode');
  t('Make content SOLR conform');
  t('Manage Content');
  t('Manage comments');
  t('Manage users');
  t('Management');
  t('Media');
  t('Media Library');
  t('Media browser settings');
  t('Meeting');
  t('Meetings');
  t('Melanoma');
  t('Memcache');
  t('Memcache statistics');
  t('Menu block');
  t('Menu item');
  t('Menus');
  t('Migrate Brightcove');
  t('Migrate Multigroups New');
  t('Migrate Nodes');
  t('Migrate Profiles');
  t('Migrate Taxonomy');
  t('Migrate fields');
  t('Mini panels');
  t('Mobile CME');
  t('Modules');
  t('Multilingual settings');
  t('Multiple Cancer Types');
  t('Multiple Myeloma');
  t('Multistep');
  t('My Workbench');
  t('Navigation');
  t('Neuro-Oncology');
  t('Neuro-oncology');
  t('New OncHD menu');
  t('Nodequeues');
  t('OAuth');
  t('Onc SD Menu');
  t('OncHD EU menu');
  t('OncHD US menu');
  t('OncHD ZH menu');
  t('Oncologist HD - China - zh.intstrux.onchd');
  t('Oncologist HD - Europe - eu.intstrux.onchd');
  t('Oncologist HD - North America - com.intstrux.onchd');
  t('Oncologist HD app [STAGE]');
  t('Oncologist HD app [STAGE] content');
  t('Ovarian Cancer');
  t('PHPinfo()');
  t('Page');
  t('Page: HTML');
  t('Page: Interactive');
  t('Page: Video');
  t('Page: Video Gallery');
  t('Pages');
  t('Pancreatic Cancer');
  t('Panel');
  t('Panels');
  t('Patients\' Perspectives');
  t('Pediatric Oncology');
  t('People');
  t('Performance');
  t('Perspective');
  t('Pinedo Cancer Care Prize');
  t('Pinedo Prize Awardees');
  t('Pinedo Prize Lecture');
  t('Pinedo Prize Nominations');
  t('Podcasts');
  t('Poll');
  t('Polls');
  t('Portal');
  t('Profile types');
  t('Profiles');
  t('Prostate');
  t('Prostate Cancer');
  t('Prostate Cancer: Progress and Promise');
  t('Push Notifications');
  t('RSS publishing');
  t('Radiation Oncology');
  t('Re-compute computed fields');
  t('Rebuild menus');
  t('Rebuild type information for media');
  t('Recent hits');
  t('Recent log messages');
  t('Reflections');
  t('Regional and language');
  t('Regional settings');
  t('Regulatory Issues');
  t('Reinstall modules');
  t('Reports');
  t('Run cron');
  t('STO');
  t('STO Annual Meeting 2010');
  t('STO Annual Meeting 2011');
  t('STO Annual Meeting 2012');
  t('STO Board');
  t('STO Featured Item');
  t('STO Footer Menu');
  t('STO Menu');
  t('Sarcomas');
  t('Saved');
  t('Search');
  t('Search and metadata');
  t('Search settings');
  t('Secondary menu');
  t('Sections');
  t('Secure Pages');
  t('Services');
  t('Session viewer');
  t('Shout box');
  t('Sidebar Banner Ad');
  t('Site Map');
  t('Site information');
  t('Site map');
  t('Social Links');
  t('Special Menu Items');
  t('Statistics');
  t('Status report');
  t('String overrides');
  t('Strongarm');
  t('Structure');
  t('Stylizer');
  t('Superfish');
  t('Supplements');
  t('Symptom Management');
  t('System');
  t('TVI settings');
  t('Taxonomy');
  t('Terms of Use');
  t('Text formats');
  t('The Oncologist');
  t('Theme registry');
  t('ThemeKey');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top pages');
  t('Top referrers');
  t('Top search phrases');
  t('Top visitors');
  t('Translate interface');
  t('Translation overview');
  t('Translator assigments');
  t('Triggers');
  t('URL aliases');
  t('URL redirects');
  t('United States Edition');
  t('User Menu');
  t('User account');
  t('User interface');
  t('User list');
  t('Username check');
  t('Users');
  t('Variable editor');
  t('Variable example');
  t('Varnish');
  t('Video');
  t('Video CME');
  t('Video Library');
  t('Views');
  t('Views plugins');
  t('Voting API');
  t('Web services');
  t('Web: BCM Main Menu');
  t('Web: Cancer Portal - Promo Carousel');
  t('Web: LCM Main Menu');
  t('Web: PCM Main Menu');
  t('Webform');
  t('Webform settings');
  t('Welcome to BCM');
  t('Welcome to BCM content');
  t('Welcome to LCM');
  t('Welcome to LCM content');
  t('Welcome to PCM');
  t('Welcome to PCM content');
  t('Workbench');
  t('Workbench Access');
  t('Workbench Moderation');
  t('Workflow');
  t('[STAGE] Oncologist Portal');
  t('[STAGE] Oncologist Portal content');
  t('[STAGE] STO Online');
  t('[STAGE] STO Online content');
  t('check interactive view');
  t('jQuery update');
  t('meetings-chabner-colloquium-2012');
  t('sites/all/themes/stotheme/images/icn_app.png');
  t('sites/all/themes/stotheme/images/icn_facebook.png');
  t('sites/all/themes/stotheme/images/icn_home.png');
  t('sites/all/themes/stotheme/images/icn_rss.png');
  t('sites/all/themes/stotheme/images/icn_twitter.png');
  t('sites/all/themes/stotheme/images/icn_youtube.png');
  t('临床试验结果');
  t('增刊');
  t('快速链接');
  t('思考');
  t('播客');
  t('期刊');
  t('首页');


  return $menu_links;
}
