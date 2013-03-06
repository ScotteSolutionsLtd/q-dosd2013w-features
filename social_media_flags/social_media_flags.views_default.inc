<?php
/**
 * @file
 * social_media_flags.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function social_media_flags_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'social_media_posts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Social Media Posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pinterest Feed';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'flagged' => array(
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'flagged_1' => array(
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'flagged_2' => array(
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'flagged_3' => array(
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'flagged_4' => array(
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'flagged_5' => array(
      'more_options' => array(
        'is_secondary' => 1,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'ops_1' => 'ops_1',
    'ops' => 'ops',
    'ops_2' => 'ops_2',
    'ops_3' => 'ops_3',
    'ops_4' => 'ops_4',
    'ops_5' => 'ops_5',
    'uid' => 'uid',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_5' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Review content to post to SOCIAL MEDIA</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Flags: pinterest */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'pinterest_flag';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'pinterest';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: twitter */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['ui_name'] = 'Twitter Flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'twitter_flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'twitter';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relationship: Flags: linkedin */
  $handler->display->display_options['relationships']['flag_content_rel_2']['id'] = 'flag_content_rel_2';
  $handler->display->display_options['relationships']['flag_content_rel_2']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_2']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_2']['ui_name'] = 'Linkedin';
  $handler->display->display_options['relationships']['flag_content_rel_2']['label'] = 'linkedin_flag';
  $handler->display->display_options['relationships']['flag_content_rel_2']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_2']['flag'] = 'linkedin';
  $handler->display->display_options['relationships']['flag_content_rel_2']['user_scope'] = 'any';
  /* Relationship: Flags: facebook */
  $handler->display->display_options['relationships']['flag_content_rel_3']['id'] = 'flag_content_rel_3';
  $handler->display->display_options['relationships']['flag_content_rel_3']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_3']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_3']['ui_name'] = 'Facebook';
  $handler->display->display_options['relationships']['flag_content_rel_3']['label'] = 'fb_flag';
  $handler->display->display_options['relationships']['flag_content_rel_3']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_3']['flag'] = 'facebook';
  $handler->display->display_options['relationships']['flag_content_rel_3']['user_scope'] = 'any';
  /* Relationship: Flags: googleplus */
  $handler->display->display_options['relationships']['flag_content_rel_4']['id'] = 'flag_content_rel_4';
  $handler->display->display_options['relationships']['flag_content_rel_4']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_4']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_4']['ui_name'] = 'Google+ flag';
  $handler->display->display_options['relationships']['flag_content_rel_4']['label'] = 'gp_flag';
  $handler->display->display_options['relationships']['flag_content_rel_4']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_4']['flag'] = 'googleplus';
  $handler->display->display_options['relationships']['flag_content_rel_4']['user_scope'] = 'any';
  /* Relationship: Flags: tumblr */
  $handler->display->display_options['relationships']['flag_content_rel_5']['id'] = 'flag_content_rel_5';
  $handler->display->display_options['relationships']['flag_content_rel_5']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_5']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_5']['ui_name'] = 'Tumbler Flag';
  $handler->display->display_options['relationships']['flag_content_rel_5']['label'] = 'tumblr_flag';
  $handler->display->display_options['relationships']['flag_content_rel_5']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_5']['flag'] = 'tumblr';
  $handler->display->display_options['relationships']['flag_content_rel_5']['user_scope'] = 'any';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Pinterest';
  $handler->display->display_options['fields']['ops_1']['link_type'] = 'normal';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops']['label'] = 'Twitter';
  $handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_2']['id'] = 'ops_2';
  $handler->display->display_options['fields']['ops_2']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_2']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_2']['relationship'] = 'flag_content_rel_2';
  $handler->display->display_options['fields']['ops_2']['label'] = 'Linkedin';
  $handler->display->display_options['fields']['ops_2']['link_type'] = 'toggle';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_3']['id'] = 'ops_3';
  $handler->display->display_options['fields']['ops_3']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_3']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_3']['relationship'] = 'flag_content_rel_3';
  $handler->display->display_options['fields']['ops_3']['label'] = 'Facebook';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_4']['id'] = 'ops_4';
  $handler->display->display_options['fields']['ops_4']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_4']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_4']['relationship'] = 'flag_content_rel_4';
  $handler->display->display_options['fields']['ops_4']['label'] = 'Google+';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_5']['id'] = 'ops_5';
  $handler->display->display_options['fields']['ops_5']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_5']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_5']['relationship'] = 'flag_content_rel_5';
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'flag_content';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['uid']['label'] = 'User';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = 'All';
  $handler->display->display_options['filters']['flagged']['group'] = 1;
  $handler->display->display_options['filters']['flagged']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged']['expose']['label'] = 'Pinterest';
  $handler->display->display_options['filters']['flagged']['expose']['operator'] = 'flagged_op';
  $handler->display->display_options['filters']['flagged']['expose']['identifier'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged_1']['id'] = 'flagged_1';
  $handler->display->display_options['filters']['flagged_1']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged_1']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['filters']['flagged_1']['value'] = 'All';
  $handler->display->display_options['filters']['flagged_1']['group'] = 1;
  $handler->display->display_options['filters']['flagged_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged_1']['expose']['label'] = 'Twitter';
  $handler->display->display_options['filters']['flagged_1']['expose']['operator'] = 'flagged_1_op';
  $handler->display->display_options['filters']['flagged_1']['expose']['identifier'] = 'flagged_1';
  $handler->display->display_options['filters']['flagged_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged_2']['id'] = 'flagged_2';
  $handler->display->display_options['filters']['flagged_2']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged_2']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged_2']['relationship'] = 'flag_content_rel_2';
  $handler->display->display_options['filters']['flagged_2']['value'] = 'All';
  $handler->display->display_options['filters']['flagged_2']['group'] = 1;
  $handler->display->display_options['filters']['flagged_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged_2']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged_2']['expose']['label'] = 'Linkedin';
  $handler->display->display_options['filters']['flagged_2']['expose']['operator'] = 'flagged_2_op';
  $handler->display->display_options['filters']['flagged_2']['expose']['identifier'] = 'flagged_2';
  $handler->display->display_options['filters']['flagged_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged_3']['id'] = 'flagged_3';
  $handler->display->display_options['filters']['flagged_3']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged_3']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged_3']['relationship'] = 'flag_content_rel_3';
  $handler->display->display_options['filters']['flagged_3']['value'] = 'All';
  $handler->display->display_options['filters']['flagged_3']['group'] = 1;
  $handler->display->display_options['filters']['flagged_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged_3']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged_3']['expose']['label'] = 'Facebook';
  $handler->display->display_options['filters']['flagged_3']['expose']['operator'] = 'flagged_3_op';
  $handler->display->display_options['filters']['flagged_3']['expose']['identifier'] = 'flagged_3';
  $handler->display->display_options['filters']['flagged_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged_4']['id'] = 'flagged_4';
  $handler->display->display_options['filters']['flagged_4']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged_4']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged_4']['relationship'] = 'flag_content_rel_4';
  $handler->display->display_options['filters']['flagged_4']['value'] = 'All';
  $handler->display->display_options['filters']['flagged_4']['group'] = 1;
  $handler->display->display_options['filters']['flagged_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged_4']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged_4']['expose']['label'] = 'Google+';
  $handler->display->display_options['filters']['flagged_4']['expose']['operator'] = 'flagged_4_op';
  $handler->display->display_options['filters']['flagged_4']['expose']['identifier'] = 'flagged_4';
  $handler->display->display_options['filters']['flagged_4']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged_5']['id'] = 'flagged_5';
  $handler->display->display_options['filters']['flagged_5']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged_5']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged_5']['relationship'] = 'flag_content_rel_5';
  $handler->display->display_options['filters']['flagged_5']['value'] = 'All';
  $handler->display->display_options['filters']['flagged_5']['group'] = 1;
  $handler->display->display_options['filters']['flagged_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged_5']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged_5']['expose']['label'] = 'Tumblr';
  $handler->display->display_options['filters']['flagged_5']['expose']['operator'] = 'flagged_5_op';
  $handler->display->display_options['filters']['flagged_5']['expose']['identifier'] = 'flagged_5';
  $handler->display->display_options['filters']['flagged_5']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Pinterest';
  $handler->display->display_options['fields']['ops_1']['link_type'] = 'normal';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops']['label'] = 'Twitter';
  $handler->display->display_options['fields']['ops']['link_type'] = 'toggle';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_2']['id'] = 'ops_2';
  $handler->display->display_options['fields']['ops_2']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_2']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_2']['relationship'] = 'flag_content_rel_2';
  $handler->display->display_options['fields']['ops_2']['label'] = 'Linkedin';
  $handler->display->display_options['fields']['ops_2']['link_type'] = 'toggle';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_3']['id'] = 'ops_3';
  $handler->display->display_options['fields']['ops_3']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_3']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_3']['relationship'] = 'flag_content_rel_3';
  $handler->display->display_options['fields']['ops_3']['label'] = 'Facebook';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_4']['id'] = 'ops_4';
  $handler->display->display_options['fields']['ops_4']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_4']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_4']['relationship'] = 'flag_content_rel_4';
  $handler->display->display_options['fields']['ops_4']['label'] = 'Google+';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_5']['id'] = 'ops_5';
  $handler->display->display_options['fields']['ops_5']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_5']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_5']['relationship'] = 'flag_content_rel_5';
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'flag_content';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['uid']['label'] = 'User';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'admin/social-media-posts';

  /* Display: Pinterest Feed */
  $handler = $view->new_display('feed', 'Pinterest Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'path';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'name';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'path',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: pinterest */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'pinterest_flag';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'pinterest';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Pinterest';
  $handler->display->display_options['fields']['ops_1']['link_type'] = 'normal';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_5']['id'] = 'ops_5';
  $handler->display->display_options['fields']['ops_5']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_5']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_5']['relationship'] = 'flag_content_rel_5';
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'flag_content';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['uid']['label'] = 'User';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'View On Site';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flag_content';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = 'All';
  $handler->display->display_options['filters']['flagged']['group'] = 1;
  $handler->display->display_options['filters']['flagged']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged']['expose']['label'] = 'Pinterest';
  $handler->display->display_options['filters']['flagged']['expose']['operator'] = 'flagged_op';
  $handler->display->display_options['filters']['flagged']['expose']['identifier'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'social-media-posts/pinterest';
  $handler->display->display_options['sitename_title'] = 0;
  $export['social_media_posts'] = $view;

  return $export;
}
