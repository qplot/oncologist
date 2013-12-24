<?php
/**
 * @file
 * intstrux_migration_roles_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function intstrux_migration_roles_feature_user_default_roles() {
  $roles = array();

  // Exported role: ad analyst.
  $roles['ad analyst'] = array(
    'name' => 'ad analyst',
    'weight' => '3',
  );

  // Exported role: ad creator.
  $roles['ad creator'] = array(
    'name' => 'ad creator',
    'weight' => '1',
  );

  // Exported role: ad reviewer.
  $roles['ad reviewer'] = array(
    'name' => 'ad reviewer',
    'weight' => '2',
  );

  // Exported role: content admin.
  $roles['content admin'] = array(
    'name' => 'content admin',
    'weight' => '0',
  );

  return $roles;
}
