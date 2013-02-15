<?php
/**
 * @file
 * scotts_partner_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function scotts_partner_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function scotts_partner_type_node_info() {
  $items = array(
    'partners' => array(
      'name' => t('Partners'),
      'base' => 'node_content',
      'description' => t('Add a partner you do business with regularly who can be presented as such on your website :)'),
      'has_title' => '1',
      'title_label' => t('Partner Name'),
      'help' => '',
    ),
  );
  return $items;
}
