<?php
/**
 * @file
 * entity_embed_editor.default_entity_embed_configurations.inc
 */

/**
 * Implements hook_default_entity_embed_configuration().
 */
function entity_embed_editor_default_entity_embed_configuration() {
  $export = array();

  $configuration = new stdClass();
  $configuration->disabled = FALSE; /* Edit this to true to make a default configuration disabled initially */
  $configuration->api_version = 1;
  $configuration->admin_title = 'Media';
  $configuration->name = 'media';
  $configuration->entity_type = 'file';
  $configuration->entity_type_bundles = array(
    'image' => 'image',
  );
  $configuration->button_icon_fid = 0;
  $configuration->display_plugins = array(
    'entityreference:entityreference_entity_view' => 'entityreference:entityreference_entity_view',
  );
  $export['media'] = $configuration;

  return $export;
}
