<?php
/**
 * @file
 * testimonials.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function testimonials_field_default_fields() {
  $fields = array();

  // Exported field: 'node-testimonial-body'.
  $fields['node-testimonial-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'testimonial',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Did you enjoy your stay? Do you have any thoughts, compliments or constructive criticism? ',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '200',
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Testimonial',
      'required' => 1,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-testimonial-field_client_email'.
  $fields['node-testimonial-field_client_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_client_email',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'email',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'testimonial',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'What is your email?',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_client_email',
      'label' => 'Email',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-testimonial-field_rating'.
  $fields['node-testimonial-field_rating'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_rating',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => 'Excellent',
          2 => 'Good',
          3 => 'Fair',
          4 => 'Mediocre',
          5 => 'Awful',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'testimonial',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => 'How would you rate your experience?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_rating',
      'label' => 'Rating',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-testimonial-field_test_image'.
  $fields['node-testimonial-field_test_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '5',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_test_image',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'testimonial',
      'deleted' => '0',
      'description' => 'Feel free to upload images as part of your testimonial - this field is optional.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'medium',
          ),
          'type' => 'image',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_test_image',
      'label' => 'Images',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '5 MB',
        'max_resolution' => '600x600',
        'min_resolution' => '100x100',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'aviary_feather_enabled' => 0,
          'aviary_feather_position' => '0',
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'clipboard' => 0,
              'imageeditor' => 0,
              'plupload' => 0,
              'reference' => 0,
              'remote' => 0,
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imageeditor' => array(
              'source_imageeditor_image' => 0,
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'flauntr_styler_enabled' => 0,
          'flauntr_styler_position' => '0',
          'fotoflexer_enabled' => 0,
          'fotoflexer_position' => '0',
          'imageeditor_icons_position' => '0',
          'imageeditor_inline_revert_enabled' => 0,
          'imageeditor_inline_revert_position' => '0',
          'imageeditor_replace' => 0,
          'imageshack_upload_enabled' => 0,
          'imageshack_upload_position' => '0',
          'immio_upload_enabled' => 0,
          'immio_upload_position' => '0',
          'insert' => 0,
          'insert_absolute' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'colorbox__cheap_dropshadow' => 0,
            'colorbox__corners_combo' => 0,
            'colorbox__default' => 0,
            'colorbox__galleryformatter_slide' => 0,
            'colorbox__galleryformatter_thumb' => 0,
            'colorbox__keyword_positioning' => 0,
            'colorbox__large' => 0,
            'colorbox__medium' => 0,
            'colorbox__positioned_underlay' => 0,
            'colorbox__relative_canvas' => 0,
            'colorbox__rotate_alpha' => 0,
            'colorbox__rotate_alpha_gif' => 0,
            'colorbox__rotate_scale' => 0,
            'colorbox__rotate_scale_alpha' => 0,
            'colorbox__rounded' => 0,
            'colorbox__rounded_bl' => 0,
            'colorbox__rounded_flattened' => 0,
            'colorbox__scale' => 0,
            'colorbox__scale_canvas' => 0,
            'colorbox__scale_rotate' => 0,
            'colorbox__thumbnail' => 0,
            'colorbox__watermark_100' => 0,
            'colorbox__watermark_50' => 0,
            'icon_link' => 0,
            'image' => 0,
            'image_cheap_dropshadow' => 0,
            'image_corners_combo' => 0,
            'image_default' => 0,
            'image_galleryformatter_slide' => 0,
            'image_galleryformatter_thumb' => 0,
            'image_keyword_positioning' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_positioned_underlay' => 0,
            'image_relative_canvas' => 0,
            'image_rotate_alpha' => 0,
            'image_rotate_alpha_gif' => 0,
            'image_rotate_scale' => 0,
            'image_rotate_scale_alpha' => 0,
            'image_rounded' => 0,
            'image_rounded_bl' => 0,
            'image_rounded_flattened' => 0,
            'image_scale' => 0,
            'image_scale_canvas' => 0,
            'image_scale_rotate' => 0,
            'image_thumbnail' => 0,
            'image_watermark_100' => 0,
            'image_watermark_50' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'paintweb_enabled' => 0,
          'paintweb_position' => '0',
          'picmonkey_enabled' => 0,
          'picmonkey_position' => '0',
          'pixlr_editor_enabled' => 0,
          'pixlr_editor_position' => '0',
          'pixlr_express_enabled' => 0,
          'pixlr_express_position' => '0',
          'pixlr_upload_enabled' => 0,
          'pixlr_upload_position' => '0',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
          'snipshot_enabled' => 0,
          'snipshot_position' => '0',
          'sumopaint_enabled' => 0,
          'sumopaint_position' => '0',
          'svgedit_enabled' => 0,
          'svgedit_position' => '0',
        ),
        'type' => 'image_image',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-testimonial-field_test_location'.
  $fields['node-testimonial-field_test_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_test_location',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'testimonial',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Where are you from? Eg. City, Country',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_test_location',
      'label' => 'Location',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Did you enjoy your stay? Do you have any thoughts, compliments or constructive criticism? ');
  t('Email');
  t('Feel free to upload images as part of your testimonial - this field is optional.');
  t('How would you rate your experience?');
  t('Images');
  t('Location');
  t('Rating');
  t('Testimonial');
  t('What is your email?');
  t('Where are you from? Eg. City, Country');

  return $fields;
}
