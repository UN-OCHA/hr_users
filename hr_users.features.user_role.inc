<?php
/**
 * @file
 * hr_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hr_users_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 2,
    'machine_name' => 'editor',
  );

  return $roles;
}
