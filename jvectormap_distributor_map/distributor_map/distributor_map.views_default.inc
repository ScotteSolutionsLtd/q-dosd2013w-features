<?php
/**
 * @file
 * distributor_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function distributor_map_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'distributor_world_map';
  $view->description = '';
  $view->tag = 'distributors';
  $view->base_table = 'node';
  $view->human_name = 'Distributor World Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Distributor World Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'transparency';
  $handler->display->display_options['style_options']['title'] = array(
    'title_hover' => 'title',
    'empty_hover' => 'For distributor opportunities, contact Wade Hannon at wade@gogeoblast.com',
  );
  $handler->display->display_options['style_options']['color'] = array(
    'color_background' => '#E1F4D8',
    'color_inactive' => '#C0C0C0',
    'color_active' => '#08C12A',
  );
  $handler->display->display_options['style_options']['link'] = array(
    'link_active' => 'nothing',
    'link_inactive' => 'distributors/intl',
  );
  $handler->display->display_options['style_options']['zoom'] = array(
    'zoom_default' => '7',
    'zoom_min' => '2',
    'zoom_max' => '10',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<strong>Click on a green country for information about authorized GEOBLASTER&reg; distributors. To place an order, for product support, and distributor opportunities please contact info@geo-blaster.com or call 1-888-311-8432.</strong>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_address-country]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Distributor Country */
  $handler->display->display_options['fields']['field_country_abbr']['id'] = 'field_country_abbr';
  $handler->display->display_options['fields']['field_country_abbr']['table'] = 'field_data_field_country_abbr';
  $handler->display->display_options['fields']['field_country_abbr']['field'] = 'field_country_abbr';
  $handler->display->display_options['fields']['field_country_abbr']['label'] = '';
  $handler->display->display_options['fields']['field_country_abbr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_abbr']['type'] = 'country_alpha_2';
  $handler->display->display_options['fields']['field_country_abbr']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_country_abbr']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'distributors/[field_country_abbr]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'distributor' => 'distributor',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'distributor-world-map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Distributors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['distributor_world_map'] = $view;

  $view = new view();
  $view->name = 'distributors';
  $view->description = '';
  $view->tag = 'distributors';
  $view->base_table = 'node';
  $view->human_name = 'Distributors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Distributors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['fill_single_line'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Content: Distributor Country (field_country_abbr) */
  $handler->display->display_options['relationships']['field_country_abbr_iso2']['id'] = 'field_country_abbr_iso2';
  $handler->display->display_options['relationships']['field_country_abbr_iso2']['table'] = 'field_data_field_country_abbr';
  $handler->display->display_options['relationships']['field_country_abbr_iso2']['field'] = 'field_country_abbr_iso2';
  $handler->display->display_options['relationships']['field_country_abbr_iso2']['label'] = 'country from country_abbr';
  $handler->display->display_options['relationships']['field_country_abbr_iso2']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Toll Free */
  $handler->display->display_options['fields']['field_toll_free']['id'] = 'field_toll_free';
  $handler->display->display_options['fields']['field_toll_free']['table'] = 'field_data_field_toll_free';
  $handler->display->display_options['fields']['field_toll_free']['field'] = 'field_toll_free';
  $handler->display->display_options['fields']['field_toll_free']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_toll_free']['element_label_type'] = 'strong';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<strong>Phone:</strong> [field_phone]';
  $handler->display->display_options['fields']['field_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_phone']['type'] = 'text_plain';
  /* Field: Content: FAX */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['alter']['text'] = '<br /><strong>FAX:</strong> [field_fax]';
  $handler->display->display_options['fields']['field_fax']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_fax']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_fax']['element_wrapper_type'] = 'div';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Distributor Country (field_country_abbr) */
  $handler->display->display_options['sorts']['field_country_abbr_iso2']['id'] = 'field_country_abbr_iso2';
  $handler->display->display_options['sorts']['field_country_abbr_iso2']['table'] = 'field_data_field_country_abbr';
  $handler->display->display_options['sorts']['field_country_abbr_iso2']['field'] = 'field_country_abbr_iso2';
  /* Sort criterion: Content: Distributor State Abbreviation (2 Letter) (field_distributor_state_abbr) */
  $handler->display->display_options['sorts']['field_distributor_state_abbr_value']['id'] = 'field_distributor_state_abbr_value';
  $handler->display->display_options['sorts']['field_distributor_state_abbr_value']['table'] = 'field_data_field_distributor_state_abbr';
  $handler->display->display_options['sorts']['field_distributor_state_abbr_value']['field'] = 'field_distributor_state_abbr_value';
  /* Contextual filter: Content: Distributor Country (field_country_abbr) */
  $handler->display->display_options['arguments']['field_country_abbr_iso2']['id'] = 'field_country_abbr_iso2';
  $handler->display->display_options['arguments']['field_country_abbr_iso2']['table'] = 'field_data_field_country_abbr';
  $handler->display->display_options['arguments']['field_country_abbr_iso2']['field'] = 'field_country_abbr_iso2';
  $handler->display->display_options['arguments']['field_country_abbr_iso2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_abbr_iso2']['default_argument_options']['argument'] = 'intl';
  $handler->display->display_options['arguments']['field_country_abbr_iso2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_abbr_iso2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_abbr_iso2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_country_abbr_iso2']['limit'] = '0';
  /* Contextual filter: Content: 2-Letter State Code (field_2_letter_state_code) */
  $handler->display->display_options['arguments']['field_2_letter_state_code_value']['id'] = 'field_2_letter_state_code_value';
  $handler->display->display_options['arguments']['field_2_letter_state_code_value']['table'] = 'field_data_field_2_letter_state_code';
  $handler->display->display_options['arguments']['field_2_letter_state_code_value']['field'] = 'field_2_letter_state_code_value';
  $handler->display->display_options['arguments']['field_2_letter_state_code_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_2_letter_state_code_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_2_letter_state_code_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_2_letter_state_code_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_2_letter_state_code_value']['limit'] = '0';
  /* Contextual filter: Content: Distributor State Abbreviation (2 Letter) (field_distributor_state_abbr) */
  $handler->display->display_options['arguments']['field_distributor_state_abbr_value']['id'] = 'field_distributor_state_abbr_value';
  $handler->display->display_options['arguments']['field_distributor_state_abbr_value']['table'] = 'field_data_field_distributor_state_abbr';
  $handler->display->display_options['arguments']['field_distributor_state_abbr_value']['field'] = 'field_distributor_state_abbr_value';
  $handler->display->display_options['arguments']['field_distributor_state_abbr_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_distributor_state_abbr_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_distributor_state_abbr_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_distributor_state_abbr_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_distributor_state_abbr_value']['limit'] = '0';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'distributor' => 'distributor',
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'distributors/%/%';
  $export['distributors'] = $view;

  $view = new view();
  $view->name = 'distributors_usa';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'USA Distributors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'USA Distributors';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'transparency';
  $handler->display->display_options['style_options']['title'] = array(
    'title_hover' => 'title',
    'empty_hover' => 'No distributors found.',
  );
  $handler->display->display_options['style_options']['color'] = array(
    'color_background' => '#E1F4D8',
    'color_inactive' => '#C0C0C0',
    'color_active' => '#08C12A',
  );
  $handler->display->display_options['style_options']['link'] = array(
    'link_active' => 'nothing',
    'link_inactive' => 'Inactive countries',
  );
  $handler->display->display_options['style_options']['zoom'] = array(
    'zoom_default' => '4',
    'zoom_min' => '1',
    'zoom_max' => '8',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Distributor State Abbreviation (2 Letter) */
  $handler->display->display_options['fields']['field_distributor_state_abbr']['id'] = 'field_distributor_state_abbr';
  $handler->display->display_options['fields']['field_distributor_state_abbr']['table'] = 'field_data_field_distributor_state_abbr';
  $handler->display->display_options['fields']['field_distributor_state_abbr']['field'] = 'field_distributor_state_abbr';
  $handler->display->display_options['fields']['field_distributor_state_abbr']['label'] = '';
  $handler->display->display_options['fields']['field_distributor_state_abbr']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'distributors/US/[field_distributor_state_abbr]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'distributor' => 'distributor',
  );
  /* Filter criterion: Content: Distributor Country (field_country_abbr) */
  $handler->display->display_options['filters']['field_country_abbr_iso2']['id'] = 'field_country_abbr_iso2';
  $handler->display->display_options['filters']['field_country_abbr_iso2']['table'] = 'field_data_field_country_abbr';
  $handler->display->display_options['filters']['field_country_abbr_iso2']['field'] = 'field_country_abbr_iso2';
  $handler->display->display_options['filters']['field_country_abbr_iso2']['value'] = 'US';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'usa-distributors';
  $export['distributors_usa'] = $view;

  return $export;
}
