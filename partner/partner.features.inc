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
      'description' => t('Information about our partners.'),
      'has_title' => '1',
      'title_label' => t('Partner Information:'),
      'help' => '',
    ),
  );
  return $items;
}
