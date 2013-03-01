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
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Please let us know how satisfied you were with your stay. We value your input greatly.'),
    ),
  );
  return $items;
}
