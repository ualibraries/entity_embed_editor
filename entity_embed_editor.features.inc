<?php
/**
 * @file
 * entity_embed_editor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function entity_embed_editor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "entity_embed" && $api == "default_entity_embed_configurations") {
    return array("version" => "1");
  }
}
