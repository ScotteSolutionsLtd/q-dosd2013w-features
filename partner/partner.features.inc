<?php
/**
 * @file
 * partner.features.inc
 */

/**
 * Implements hook_node_info().
 */
function partner_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => t('These are the people that I have worked with in the past.'),
      'has_title' => '1',
      'title_label' => t('partner'),
      'help' => '',
    ),
  );
  return $items;
}
