<?php
/**
 * @file
 * testimonials.features.inc
 */

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
      'title_label' => t('Client Representative'),
      'help' => t('Which representative handled your request and provided you with the indicated service?'),
    ),
  );
  return $items;
}
