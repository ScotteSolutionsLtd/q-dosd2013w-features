<?php
/**
 * @file
 * testimonials.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function testimonials_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'testimonials';
  $view->description = 'A view of testimonials that allows the administrator to sort them by various criteria, as well as a block. ';
  $view->tag = 'Testimonials';
  $view->base_table = 'node';
  $view->human_name = 'Testimonials';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Testimonials';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'field_client_email' => 'field_client_email',
    'field_test_location' => 'field_test_location',
    'field_rating' => 'field_rating',
    'body' => 'body',
    'field_test_image' => 'field_test_image',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_client_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_test_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_test_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['content'] = 'This page displays testimonials posted by clients/customers, and was created for administrators to easily access the provided information/feedback. You can use the dropdown menus to sort the testimonials by the date they were posted, the title, the rating, or the location given by the client, as well as whether you would like the results to be displayed in ascending or descending order (eg. A-Z or Z-A, oldest to newest or newest to oldest).';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Testimonials Found';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no Testimonials to be displayed at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_test_location']['id'] = 'field_test_location';
  $handler->display->display_options['fields']['field_test_location']['table'] = 'field_data_field_test_location';
  $handler->display->display_options['fields']['field_test_location']['field'] = 'field_test_location';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_client_email']['id'] = 'field_client_email';
  $handler->display->display_options['fields']['field_client_email']['table'] = 'field_data_field_client_email';
  $handler->display->display_options['fields']['field_client_email']['field'] = 'field_client_email';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_test_image']['id'] = 'field_test_image';
  $handler->display->display_options['fields']['field_test_image']['table'] = 'field_data_field_test_image';
  $handler->display->display_options['fields']['field_test_image']['field'] = 'field_test_image';
  $handler->display->display_options['fields']['field_test_image']['label'] = '';
  $handler->display->display_options['fields']['field_test_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_test_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_test_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_test_image']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_image_style' => 'default',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_test_image']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Rating (field_rating) */
  $handler->display->display_options['sorts']['field_rating_value']['id'] = 'field_rating_value';
  $handler->display->display_options['sorts']['field_rating_value']['table'] = 'field_data_field_rating';
  $handler->display->display_options['sorts']['field_rating_value']['field'] = 'field_rating_value';
  $handler->display->display_options['sorts']['field_rating_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_rating_value']['expose']['label'] = 'Rating';
  /* Sort criterion: Content: Location (field_test_location) */
  $handler->display->display_options['sorts']['field_test_location_value']['id'] = 'field_test_location_value';
  $handler->display->display_options['sorts']['field_test_location_value']['table'] = 'field_data_field_test_location';
  $handler->display->display_options['sorts']['field_test_location_value']['field'] = 'field_test_location_value';
  $handler->display->display_options['sorts']['field_test_location_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_test_location_value']['expose']['label'] = 'Location';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonial' => 'testimonial',
  );

  /* Display: Testimonials Page */
  $handler = $view->new_display('page', 'Testimonials Page', 'page');
  $handler->display->display_options['display_description'] = 'This is a page where all the created Testimonials can be viewed and sorted by different criteria.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Post Date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_client_email']['id'] = 'field_client_email';
  $handler->display->display_options['fields']['field_client_email']['table'] = 'field_data_field_client_email';
  $handler->display->display_options['fields']['field_client_email']['field'] = 'field_client_email';
  $handler->display->display_options['fields']['field_client_email']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_test_location']['id'] = 'field_test_location';
  $handler->display->display_options['fields']['field_test_location']['table'] = 'field_data_field_test_location';
  $handler->display->display_options['fields']['field_test_location']['field'] = 'field_test_location';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_test_image']['id'] = 'field_test_image';
  $handler->display->display_options['fields']['field_test_image']['table'] = 'field_data_field_test_image';
  $handler->display->display_options['fields']['field_test_image']['field'] = 'field_test_image';
  $handler->display->display_options['fields']['field_test_image']['label'] = '';
  $handler->display->display_options['fields']['field_test_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_test_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_test_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_test_image']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_image_style' => 'default',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_test_image']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post Date';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Sort criterion: Content: Location (field_test_location) */
  $handler->display->display_options['sorts']['field_test_location_value']['id'] = 'field_test_location_value';
  $handler->display->display_options['sorts']['field_test_location_value']['table'] = 'field_data_field_test_location';
  $handler->display->display_options['sorts']['field_test_location_value']['field'] = 'field_test_location_value';
  $handler->display->display_options['sorts']['field_test_location_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_test_location_value']['expose']['label'] = 'Location';
  /* Sort criterion: Content: Rating (field_rating) */
  $handler->display->display_options['sorts']['field_rating_value']['id'] = 'field_rating_value';
  $handler->display->display_options['sorts']['field_rating_value']['table'] = 'field_data_field_rating';
  $handler->display->display_options['sorts']['field_rating_value']['field'] = 'field_rating_value';
  $handler->display->display_options['sorts']['field_rating_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_rating_value']['expose']['label'] = 'Rating';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonial' => 'testimonial',
  );
  /* Filter criterion: Content: Rating (field_rating) */
  $handler->display->display_options['filters']['field_rating_value']['id'] = 'field_rating_value';
  $handler->display->display_options['filters']['field_rating_value']['table'] = 'field_data_field_rating';
  $handler->display->display_options['filters']['field_rating_value']['field'] = 'field_rating_value';
  $handler->display->display_options['filters']['field_rating_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rating_value']['expose']['operator_id'] = 'field_rating_value_op';
  $handler->display->display_options['filters']['field_rating_value']['expose']['label'] = 'Rating';
  $handler->display->display_options['filters']['field_rating_value']['expose']['operator'] = 'field_rating_value_op';
  $handler->display->display_options['filters']['field_rating_value']['expose']['identifier'] = 'field_rating_value';
  $handler->display->display_options['filters']['field_rating_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_rating_value']['group_info']['label'] = 'Rating';
  $handler->display->display_options['filters']['field_rating_value']['group_info']['identifier'] = 'field_rating_value';
  $handler->display->display_options['filters']['field_rating_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Good Ratings',
      'operator' => 'or',
      'value' => array(
        1 => '1',
        2 => '2',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'admin/testimonials';

  /* Display: Testimonials Slideshow Block */
  $handler = $view->new_display('block', 'Testimonials Slideshow Block', 'block');
  $handler->display->display_options['display_description'] = 'A block that displays testimonials in a slideshow format.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    1 => '1',
    2 => '2',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_test_location']['id'] = 'field_test_location';
  $handler->display->display_options['fields']['field_test_location']['table'] = 'field_data_field_test_location';
  $handler->display->display_options['fields']['field_test_location']['field'] = 'field_test_location';
  $handler->display->display_options['fields']['field_test_location']['label'] = '';
  $handler->display->display_options['fields']['field_test_location']['element_label_colon'] = FALSE;
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimonial' => 'testimonial',
  );
  /* Filter criterion: Content: Rating (field_rating) */
  $handler->display->display_options['filters']['field_rating_value']['id'] = 'field_rating_value';
  $handler->display->display_options['filters']['field_rating_value']['table'] = 'field_data_field_rating';
  $handler->display->display_options['filters']['field_rating_value']['field'] = 'field_rating_value';
  $handler->display->display_options['filters']['field_rating_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_rating_value']['value'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['block_description'] = 'Testimonials Slideshow Block';
  $translatables['testimonials'] = array(
    t('Master'),
    t('Testimonials'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Description'),
    t('This page displays testimonials posted by clients/customers, and was created for administrators to easily access the provided information/feedback. You can use the dropdown menus to sort the testimonials by the date they were posted, the title, the rating, or the location given by the client, as well as whether you would like the results to be displayed in ascending or descending order (eg. A-Z or Z-A, oldest to newest or newest to oldest).'),
    t('No Testimonials Found'),
    t('There are no Testimonials to be displayed at this time.'),
    t('Location'),
    t('Email'),
    t('Rating'),
    t('Title'),
    t('Published'),
    t('Testimonials Page'),
    t('This is a page where all the created Testimonials can be viewed and sorted by different criteria.'),
    t('Post Date'),
    t('Testimonials Slideshow Block'),
    t('A block that displays testimonials in a slideshow format.'),
  );
  $export['testimonials'] = $view;

  return $export;
}
