<?php
/**
 * @file
 * distributor_map.features.inc
 */

/**
 * Implements hook_views_api().
 */
function distributor_map_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function distributor_map_node_info() {
  $items = array(
    'distributor' => array(
      'name' => t('Distributor'),
      'base' => 'node_content',
      'description' => t('A GEOBLASTER distributor complete with the distributors address, and details. The address is used in the distributor map page.'),
      'has_title' => '1',
      'title_label' => t('Distributor Name'),
      'help' => '',
    ),
  );
  return $items;
}
