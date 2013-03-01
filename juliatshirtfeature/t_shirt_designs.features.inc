<?php
/**
 * @file
 * t_shirt_designs.features.inc
 */

/**
 * Implements hook_views_api().
 */
function t_shirt_designs_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function t_shirt_designs_node_info() {
  $items = array(
    'tshirt' => array(
      'name' => t('Tshirt'),
      'base' => 'node_content',
      'description' => t('A content type for uploading a T-shirt design and then ordering it.'),
      'has_title' => '1',
      'title_label' => t('Your T-Shirt Design'),
      'help' => t('Please submit your T-Shirt Design through the information provided below.'),
    ),
  );
  return $items;
}
