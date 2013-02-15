<?php
/**
 * @file
 * partner_with_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function partner_with_feature_node_info() {
  $items = array(
    'features' => array(
      'name' => t('Features'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Features'),
      'help' => '',
    ),
  );
  return $items;
}
