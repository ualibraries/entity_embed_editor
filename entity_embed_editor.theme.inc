<?php

/**
 * @file
 * Theme functions for entity_embed_editor feature.
 */

/**
 * Returns HTML for a captioned item, usually an image.
 */
function theme_entity_link($variables) {
  $output = '';
  $output .= '<a' . drupal_attributes($variables['attributes']) . '>';
  $output .= $variables['item'];
  $output .= '</a>';
  return $output;
}
