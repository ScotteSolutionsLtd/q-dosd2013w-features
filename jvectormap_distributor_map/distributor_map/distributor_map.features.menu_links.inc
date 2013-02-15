<?php
/**
 * @file
 * distributor_map.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function distributor_map_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:distributor-world-map
  $menu_links['main-menu:distributor-world-map'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'distributor-world-map',
    'router_path' => 'distributor-world-map',
    'link_title' => 'Distribuidores',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'es',
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-31',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Distribuidores');


  return $menu_links;
}
