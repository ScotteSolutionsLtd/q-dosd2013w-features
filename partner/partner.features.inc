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
      'description' => t('Partners of our company that we have worked with.'),
      'has_title' => '1',
      'title_label' => t('Partners'),
      'help' => '',
    ),
  );
  return $items;
}
