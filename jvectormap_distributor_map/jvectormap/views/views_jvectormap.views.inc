<?php
/**
 * Implements hook_views_plugins().
 */
function views_jvectormap_views_plugins() {  
  //xdebug_break();
  $path = drupal_get_path('module', 'views_jvectormap');
  $plugins = array(
    'style' => array(
      'transparency' => array(
        'title' => t('Jquery vector map'),
        'help' => t('Display views data as a world map using jquery vector map plugin.'),
        'help topic' => 'style-vectormap',
        'handler' => 'views_plugin_style_jvectormap',
        'path' => $path . '/views',
        'theme' => 'views_view_jvectormap',
        'theme path' => $path . '/views',
        'uses fields' => TRUE,
        'uses options' => TRUE, 
        'uses grouping' => FALSE,
        'uses row plugin' => FALSE,
        'type' => 'normal',
        'even empty' => FALSE,
      )
    )
  );
  return $plugins;
}