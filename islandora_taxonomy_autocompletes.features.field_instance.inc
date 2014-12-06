<?php
/**
 * @file
 * islandora_taxonomy_autocompletes.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function islandora_taxonomy_autocompletes_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-islandora_autocompletes-body'
  $field_instances['node-islandora_autocompletes-body'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_genre_bgtchm'
  $field_instances['node-islandora_autocompletes-field_genre_bgtchm'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Basic Genre Terms for Cultural Heritage Materials - http://memory.loc.gov/ammem/techdocs/genre.html',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_genre_bgtchm',
    'label' => 'Basic Genre Terms for Cultural Heritage Materials',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_genre_marcgt'
  $field_instances['node-islandora_autocompletes-field_genre_marcgt'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'http://www.loc.gov/standards/valuelist/marcgt.html',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_genre_marcgt',
    'label' => 'MARC Genre Term List',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_genre_migfg'
  $field_instances['node-islandora_autocompletes-field_genre_migfg'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'http://www.loc.gov/rr/mopic/miggen.html',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_genre_migfg',
    'label' => 'Moving Image Genre Form Guide',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_hierarchicalgeographic_cou'
  $field_instances['node-islandora_autocompletes-field_hierarchicalgeographic_cou'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'http://en.wikipedia.org/wiki/ISO_3166-2',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hierarchicalgeographic_cou',
    'label' => 'hierarchicalGeographic country',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_hierarchicalgeographic_pro'
  $field_instances['node-islandora_autocompletes-field_hierarchicalgeographic_pro'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hierarchicalgeographic_pro',
    'label' => 'hierarchicalGeographic province',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_hierarchicalgeographic_sta'
  $field_instances['node-islandora_autocompletes-field_hierarchicalgeographic_sta'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hierarchicalgeographic_sta',
    'label' => 'hierarchicalGeographic state',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_language_iso639_b'
  $field_instances['node-islandora_autocompletes-field_language_iso639_b'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'http://www.loc.gov/standards/iso639-2/php/code_list.php',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_language_iso639_b',
    'label' => 'Language - ISO639-b',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_marc_relators'
  $field_instances['node-islandora_autocompletes-field_marc_relators'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'http://www.loc.gov/marc/relators/relaterm.html',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marc_relators',
    'label' => 'MARC Relator (text)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_mods_note_types'
  $field_instances['node-islandora_autocompletes-field_mods_note_types'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'http://www.loc.gov/standards/mods/mods-notes.html',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mods_note_types',
    'label' => 'MODS Note types',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_mods_physical_notes'
  $field_instances['node-islandora_autocompletes-field_mods_physical_notes'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mods_physical_notes',
    'label' => 'MODS physicalDescription Note Types',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_physicaldescription_cat'
  $field_instances['node-islandora_autocompletes-field_physicaldescription_cat'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'http://www.loc.gov/standards/valuelist/marccategory.html',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_physicaldescription_cat',
    'label' => 'physicalDescription Categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_publication_frequency'
  $field_instances['node-islandora_autocompletes-field_publication_frequency'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'http://www.loc.gov/standards/sourcelist/frequency.html',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publication_frequency',
    'label' => 'Publication Frequency',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_rda_content'
  $field_instances['node-islandora_autocompletes-field_rda_content'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'http://www.loc.gov/standards/valuelist/rdacontent.html',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rda_content',
    'label' => 'RDA Content',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-islandora_autocompletes-field_target_audience'
  $field_instances['node-islandora_autocompletes-field_target_audience'] = array(
    'bundle' => 'islandora_autocompletes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'http://www.loc.gov/standards/sourcelist/target-audience.html',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_target_audience',
    'label' => 'Target Audience',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 45,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Genre Terms for Cultural Heritage Materials');
  t('Basic Genre Terms for Cultural Heritage Materials - http://memory.loc.gov/ammem/techdocs/genre.html');
  t('Body');
  t('Language - ISO639-b');
  t('MARC Genre Term List');
  t('MARC Relator (text)');
  t('MODS Note types');
  t('MODS physicalDescription Note Types');
  t('Moving Image Genre Form Guide');
  t('Publication Frequency');
  t('RDA Content');
  t('Target Audience');
  t('hierarchicalGeographic country');
  t('hierarchicalGeographic province');
  t('hierarchicalGeographic state');
  t('http://en.wikipedia.org/wiki/ISO_3166-2');
  t('http://www.loc.gov/marc/relators/relaterm.html');
  t('http://www.loc.gov/rr/mopic/miggen.html');
  t('http://www.loc.gov/standards/iso639-2/php/code_list.php');
  t('http://www.loc.gov/standards/mods/mods-notes.html');
  t('http://www.loc.gov/standards/sourcelist/frequency.html');
  t('http://www.loc.gov/standards/sourcelist/target-audience.html');
  t('http://www.loc.gov/standards/valuelist/marccategory.html');
  t('http://www.loc.gov/standards/valuelist/marcgt.html');
  t('http://www.loc.gov/standards/valuelist/rdacontent.html');
  t('physicalDescription Categories');

  return $field_instances;
}
