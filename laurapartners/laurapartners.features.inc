<?php
/**
 * @file
 * laurapartners.features.inc
 */

/**
 * Implements hook_node_info().
 */
function laurapartners_node_info() {
  $items = array(
    'our_partners' => array(
      'name' => t('Our Partners'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Partner Name'),
      'help' => '',
    ),
  );
  return $items;
}
