<?php
/**
 * @file
 * islandora_taxonomy_autocompletes.features.inc
 */

/**
 * Implements hook_node_info().
 */
function islandora_taxonomy_autocompletes_node_info() {
  $items = array(
    'islandora_autocompletes' => array(
      'name' => t('Islandora Autocompletes'),
      'base' => 'node_content',
      'description' => t('a content type to hold the taxonomy fields for autocomplete lookups in Islandora forms.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
