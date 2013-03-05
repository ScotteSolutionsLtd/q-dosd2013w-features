<?php
/**
 * @file
 * testimonials.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function testimonials_user_default_permissions() {
  $permissions = array();

  // Exported permission: create testimoials content.
  $permissions['create testimoials content'] = array(
    'name' => 'create testimoials content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
