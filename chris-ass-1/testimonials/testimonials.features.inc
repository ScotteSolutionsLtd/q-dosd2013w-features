<?php
/**
 * @file
 * testimonials.features.inc
 */

/**
 * Implements hook_views_api().
 */
function testimonials_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function testimonials_node_info() {
  $items = array(
    'testimoials' => array(
      'name' => t('Testimonials'),
      'base' => 'node_content',
      'description' => t('Testimonials of authenticated users'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
