<?php
/**
 * @file
 * intstrux_services_endpoint_feature.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function intstrux_services_endpoint_feature_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'applicaion';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'rest/application';
  $endpoint->authentication = array(
    'services' => 'services',
    'services_oauth' => array(
      'oauth_context' => 'app',
      'credentials' => 'none',
      'authorization' => '',
    ),
  );
  $endpoint->server_settings = array(
    'formatters' => array(
      'bencode' => TRUE,
      'json' => TRUE,
      'php' => TRUE,
      'rss' => TRUE,
      'xml' => TRUE,
      'yaml' => TRUE,
      'jsonp' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => TRUE,
      'application/x-www-form-urlencoded' => TRUE,
      'application/x-yaml' => TRUE,
      'application/xml' => TRUE,
      'multipart/form-data' => TRUE,
      'text/xml' => TRUE,
    ),
  );
  $endpoint->resources = array(
    'intstrux_apns_shortened_url' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'intstrux_apns' => array(
      'operations' => array(
        'create' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'delete' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'appmenu' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'apppager' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'appuser' => array(
      'actions' => array(
        'passwordReset' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'passwordOneTimeLogin' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'comment' => array(
      'operations' => array(
        'create' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'update' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'delete' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'index' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
      'actions' => array(
        'countAll' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'countNew' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'node' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'create' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'update' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'delete' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'index' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
      'relationships' => array(
        'files' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'comments' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => 'none',
              'authorization' => '',
            ),
          ),
        ),
      ),
      'targeted_actions' => array(
        'attach_file' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'system' => array(
      'actions' => array(
        'connect' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'get_variable' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'set_variable' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'del_variable' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'taxonomy_term' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'create' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'update' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'delete' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'index' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
      'actions' => array(
        'selectNodes' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'taxonomy_vocabulary' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'create' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'update' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'delete' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'index' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
      'actions' => array(
        'getTree' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'user' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'create' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'update' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'delete' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'index' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
      'actions' => array(
        'login' => array(
          'enabled' => '1',
          'settings' => array(
            'services' => array(
              'resource_api_version' => '1.0',
            ),
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'logout' => array(
          'enabled' => '1',
          'settings' => array(
            'services' => array(
              'resource_api_version' => '1.0',
            ),
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'register' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'menu' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'views' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
    'votingapi' => array(
      'actions' => array(
        'select_votes' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
        'set_votes' => array(
          'enabled' => '1',
          'settings' => array(
            'services_oauth' => array(
              'credentials' => '',
              'authorization' => '',
            ),
          ),
        ),
      ),
    ),
  );
  $endpoint->debug = 1;
  $export['applicaion'] = $endpoint;

  return $export;
}
