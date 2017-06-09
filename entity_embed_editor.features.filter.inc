<?php
/**
 * @file
 * entity_embed_editor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function entity_embed_editor_filter_default_formats() {
  $formats = array();

  // Exported format: Editor.
  $formats['editor'] = array(
    'format' => 'editor',
    'name' => 'Editor',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'editor' => 'ckeditor',
    'editor_settings' => 'a:3:{s:7:"toolbar";a:1:{i:0;a:7:{i:0;a:2:{s:4:"name";s:10:"Formatting";s:5:"items";a:2:{i:0;s:4:"Bold";i:1;s:6:"Italic";}}i:1;a:2:{s:4:"name";s:9:"Alignment";s:5:"items";a:3:{i:0;s:11:"JustifyLeft";i:1;s:13:"JustifyCenter";i:2;s:12:"JustifyRight";}}i:2;a:2:{s:4:"name";s:5:"Lists";s:5:"items";a:2:{i:0;s:12:"BulletedList";i:1;s:12:"NumberedList";}}i:3;a:2:{s:4:"name";s:5:"Media";s:5:"items";a:2:{i:0;s:10:"Blockquote";i:1;s:11:"DrupalImage";}}i:4;a:2:{s:4:"name";s:8:"Language";s:5:"items";a:1:{i:0;s:8:"Language";}}i:5;a:2:{s:4:"name";s:5:"Tools";s:5:"items";a:2:{i:0;s:6:"Source";i:1;s:8:"Maximize";}}i:6;a:2:{s:4:"name";s:5:"Media";s:5:"items";a:1:{i:0;s:5:"media";}}}}s:12:"image_upload";a:5:{s:6:"status";i:1;s:6:"scheme";s:6:"public";s:9:"directory";s:13:"inline-images";s:8:"max_size";s:0:"";s:14:"max_dimensions";a:2:{s:5:"width";s:0:"";s:6:"height";s:0:"";}}s:7:"plugins";a:2:{s:5:"style";a:1:{s:10:"style_list";a:0:{}}s:8:"language";a:1:{s:13:"language_list";s:2:"un";}}}',
    'filters' => array(
      'editor_align' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'editor_entity_link' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'editor_caption' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'entity_embed' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <drupal-entity data-*> <img> <figure> <figcaption> <div> <h1> <h2> <h3> <p> <sub> <sup> <caption> <tr> <th> <td> <thead> <tbody> <table> <br>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
