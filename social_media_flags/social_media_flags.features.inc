<?php
/**
 * @file
 * social_media_flags.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function social_media_flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "Post to Facebook".
  $flags['facebook'] = array(
    'content_type' => 'node',
    'title' => 'Post to Facebook',
    'global' => '1',
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Post to Facebook',
    'flag_long' => 'Click to post this to Facebook',
    'flag_message' => 'This content will be posted to Facebook',
    'unflag_short' => 'Do not post this to Facebook',
    'unflag_long' => 'Click to prevent this from being posted to Facebook',
    'unflag_message' => 'This content will not be posted to Facebook',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'social_media_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Post to Google+".
  $flags['googleplus'] = array(
    'content_type' => 'node',
    'title' => 'Post to Google+',
    'global' => '1',
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Post to Google+',
    'flag_long' => 'Click to post this to Google+',
    'flag_message' => 'This content will be posted to Google+',
    'unflag_short' => 'Do not post this to Google+',
    'unflag_long' => 'Click to prevent this from being posted to Google+',
    'unflag_message' => 'This content will not be posted to Google+',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'social_media_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Post to LinkedIn".
  $flags['linkedin'] = array(
    'content_type' => 'node',
    'title' => 'Post to LinkedIn',
    'global' => '1',
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Post to LinkedIn',
    'flag_long' => 'Click to post this to LinkedIn',
    'flag_message' => 'This content will be posted to LinkedIn',
    'unflag_short' => 'Do not post this to LinkedIn',
    'unflag_long' => 'Click to prevent this from being posted to LinkedIn',
    'unflag_message' => 'This content will not be posted to LinkedIn',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'social_media_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Post to Pinterest".
  $flags['pinterest'] = array(
    'content_type' => 'node',
    'title' => 'Post to Pinterest',
    'global' => '1',
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Post to Pinterest',
    'flag_long' => 'Click to post this to Pinterest',
    'flag_message' => 'This content will be posted to Pinterest',
    'unflag_short' => 'Do not post this to Pinterest',
    'unflag_long' => 'Click to prevent this from being posted to Pinterest',
    'unflag_message' => 'This content will not be posted to Pinterest',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'social_media_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Post to Tumblr".
  $flags['tumblr'] = array(
    'content_type' => 'node',
    'title' => 'Post to Tumblr',
    'global' => '0',
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Post to Tumblr',
    'flag_long' => 'Click to post this to Tumblr',
    'flag_message' => 'This content will be posted to Tumblr',
    'unflag_short' => 'Do not post this to Tumblr',
    'unflag_long' => 'Click to prevent this from being posted to Tumblr',
    'unflag_message' => 'This content will not be posted to Tumblr',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'social_media_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Post to Twitter".
  $flags['twitter'] = array(
    'content_type' => 'node',
    'title' => 'Post to Twitter',
    'global' => '1',
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Post to Twitter',
    'flag_long' => 'Click to post this to Twitter',
    'flag_message' => 'This content will be posted to Twitter',
    'unflag_short' => 'Do not post this to Twitter',
    'unflag_long' => 'Click to prevent this from being posted to Twitter',
    'unflag_message' => 'This content will not be posted to Twitter',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'social_media_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
