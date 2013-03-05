<?php
/**
 * @file
 * testimonials.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function testimonials_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:testimonials
  $menu_links['main-menu:testimonials'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'testimonials',
    'router_path' => 'testimonials',
    'link_title' => 'Testimonials',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Testimonials');


  return $menu_links;
}
