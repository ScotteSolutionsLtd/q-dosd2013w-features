<?php

/**
 * @file
 * Holds the class for vectormap views plugin.
 */

/**
 * @file
 *
 * Views Style plugin extension.
 */
class views_plugin_style_jvectormap extends views_plugin_style {

  /**
   * Set default map options.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['title']['title_hover'] = array('default' => '');
    $options['color']['color_background'] = array('default' => '#ffffff');
    $options['color']['color_inactive'] = array('default' => '#dddddd');
    $options['color']['color_active'] = array('default' => '#bbbbbb');
    $options['link']['link_active'] = array('default' => '');
    $options['link']['link_inactive'] = array('default' => '');
    $options['zoom']['zoom_default'] = array('default' => '1');
    $options['zoom']['zoom_min'] = array('default' => '1');
    $options['zoom']['zoom_max'] = array('default' => '5');
    $options['title']['empty_hover'] = array('default' => t('Default empty text'));

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $handlers = $this->display->handler->get_handlers('field');
    if (empty($handlers)) {
      $form['error_markup'] = array(
        '#markup' => '<div class="error messages">' . t('You need at least one field before you can configure your map settings') . '</div>',
      );
      return;
    }
    $field_names = $this->display->handler->get_field_labels();

    $form['country_code'] = array(
      '#type' => 'select',
      '#title' => t('Country code field'),
      '#description' => t('Field that contains country codes. This field is used to attach the data to the countries.'),
      '#required' => TRUE,
      '#options' => $field_names,
      '#default_value' => $this->options['country_code']
    );
    $form['title'] = array(
      '#type' => 'fieldset',
      '#title' => t('Title'),
    );
    $form['title']['title_hover'] = array(
      '#type' => 'select',
      '#title' => t('Hover message'),
      '#description' => t('Select the field to use as map hover. Set empty if no hover.'),
      '#required' => FALSE,
      '#options' => $field_names,
      '#default_value' => $this->options['title']['title_hover']
    );
    $form['title']['empty_hover'] = array(
      '#type' => 'textfield',
      '#title' => t('Empty hover text'),
      '#description' => t('Set default text for empty hover.'),
      '#required' => TRUE,
      '#default_value' => $this->options['title']['empty_hover']
    );
    $form['color'] = array(
      '#type' => 'fieldset',
      '#title' => t('Colors'),
    );
    $form['color']['color_background'] = array(
      '#type' => 'textfield',
      '#title' => t('Background color'),
      '#description' => t('Set default color for map background.'),
      '#required' => TRUE,
      '#default_value' => $this->options['color']['color_background']
    );
    $form['color']['color_inactive'] = array(
      '#type' => 'textfield',
      '#title' => t('Inactive country color'),
      '#description' => t('Set default color for countries with no data.'),
      '#required' => TRUE,
      '#default_value' => $this->options['color']['color_inactive']
    );
    $form['color']['color_active'] = array(
      '#type' => 'textfield',
      '#title' => t('Active country color'),
      '#description' => t('Set default color for countries which has data but no unique color definition. No link renders country unclickable.'),
      '#required' => FALSE,
      '#default_value' => $this->options['color']['color_active']
    );
    $form['link'] = array(
      '#type' => 'fieldset',
      '#title' => t('Links'),
    );

    $form['link']['link_active'] = array(
      '#type' => 'select',
      '#title' => t('Active countries'),
      '#description' => t('The field to use as link for active items. Either internal or external link. No link renders country unclickable.'),
      '#required' => FALSE,
      '#options' => $field_names,
      '#default_value' => $this->options['link']['link_active']
    );
    $form['link']['link_inactive'] = array(
      '#type' => 'textfield',
      '#title' => t('Inactive countries'),
      '#description' => t('A link to use for countries having no result. No link disables click'),
      '#default_value' => $this->options['link']['link_inactive']
    );
    $form['zoom'] = array(
      '#type' => 'fieldset',
      '#title' => t('Zoom'),
    );
    $form['zoom']['zoom_default'] = array(
      '#type' => 'textfield',
      '#title' => t('Default zoom'),
      '#description' => t('Map zoom defaults'),
      '#attributes' => array(),
      '#required' => TRUE,
      '#default_value' => $this->options['zoom']['zoom_default']
    );

    $form['zoom']['zoom_min'] = array(
      '#type' => 'textfield',
      '#title' => t('Minimum'),
      '#description' => t('Map zoom minimum'),
      '#attributes' => array(),
      '#required' => TRUE,
      '#default_value' => $this->options['zoom']['zoom_min']
    );
    $form['zoom']['zoom_max'] = array(
      '#type' => 'textfield',
      '#title' => t('Maximum'),
      '#description' => t('Map zoom maximum'),
      '#attributes' => array(),
      '#required' => TRUE,
      '#default_value' => $this->options['zoom']['zoom_max']
    );
  }

  /**
   * Transform the View result in a list of maker locations and render as a map.
   *
   * @param type $result
   *   This is superfluous, same as $this->view->result.
   *
   */
  function render($result) {
    $view = $this->view;
    $options = $this->options;
    $field = $view->field;

    // Get the field data and parse it into a map array.
    $rows = array();
    $json_data = array();
    foreach ($view->result as $count => $row) {
      $out = array();
      $view->row_index = $count;
      $data = _views_jvectormap_render_fields($view, $row);

      // Country hover title
      if (!empty($this->options['title']['title_hover'])) {
        $out['cTitle'] = $data[($this->options['title']['title_hover'])]->content;
      }
      // Active country
      if (!empty($this->options['color']['color_active'])) {
        $out['cColor'] = $this->options['color']['color_active'];
      }
      else {
        $out['cColor'] = '#000000';
      }
      // Country click link
      if (!empty($this->options['link']['link_active']) && (isset($data[($this->options['link']['link_active'])]))) {
        $out['cLink'] = $data[($this->options['link']['link_active'])]->content;
      }
      // Country code source
      if (!empty($this->options['country_code'])) {
        $out['cCode'] = strtoupper($data[($this->options['country_code'])]->content);
      }

      $rows[] = _views_jvectormap_render_fields($view, $row);
      $json_data[($out['cCode'])] = $out;
    }

    // Set some other data
    $settings = array(
      'map' => array(
        'color' => $this->options['color']['color_inactive'],
        'backgroundColor' => $this->options['color']['color_background'],
        'hoverOpacity' => 0.7,
        'hoverColor' => '#89c610',
        'emptyHover' => $this->options['title']['empty_hover']
      ),
      'data' => $json_data,
      'raw' => $rows,
    );
    
    drupal_alter('jvectormap_data', $settings, $result);

    // Now let's build a quick color array..
    $settings['colormap'] = array();
    foreach($settings['data'] AS $cid => $data){
      $settings['colormap'][$cid] = $data['cColor'];
    }

    if (!empty($this->view->live_preview)) {
      //return theme('jvectormap',$settings);
      $table = array();
      foreach ($settings['data'] AS $rid => $data) {
        $table[] = $data;
      }

      $header = array(
        'cTitle' => t('Hover title'),
        'cColor' => t('Country color'),
        'cLink' => t('Href link'),
        'cCode' => t('2 digits country code'),
      );
      return theme_table(array(
            'header' => $header,
            'rows' => $table,
            'attributes' => array(),
            'caption' => '',
            'colgroups' => array()
          ));
    }
    else {

      return theme('jvectormap', $settings);
    }
  }
}