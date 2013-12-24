<?php

function amp_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'stemcell' => array(
        'title' => t('AMP Migrate'),
      ),
    ),
    'migrations' => array(
      'Latest' => array(
        'class_name' => 'StemcellLatestMigration',
        'group_name' => 'stemcell',
      ),
    ),
  );
  return $api;
}

?>