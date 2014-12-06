<?php
/**
 * @file
 * islandora_taxonomy_autocompletes.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function islandora_taxonomy_autocompletes_taxonomy_default_vocabularies() {
  return array(
    'mods_genre_authority_bgtchm' => array(
      'name' => 'mods genre authority bgtchm',
      'machine_name' => 'mods_genre_authority_bgtchm',
      'description' => 'http://memory.loc.gov/ammem/techdocs/genre.html',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_genre_authority_marcgt' => array(
      'name' => 'mods genre authority marcgt',
      'machine_name' => 'mods_genre_authority_marcgt',
      'description' => 'http://www.loc.gov/standards/valuelist/marcgt.html',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_genre_authority_migfg' => array(
      'name' => 'mods genre authority migfg',
      'machine_name' => 'mods_genre_authority_migfg',
      'description' => 'http://www.loc.gov/rr/mopic/miggen.html',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_genre_authority_rdacontent' => array(
      'name' => 'mods genre authority rdacontent',
      'machine_name' => 'mods_genre_authority_rdacontent',
      'description' => 'http://www.loc.gov/standards/valuelist/rdacontent.html',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_language_languageterm_authority_iso639_2' => array(
      'name' => 'mods language languageterm authority iso639-2',
      'machine_name' => 'mods_language_languageterm_authority_iso639_2',
      'description' => 'http://www.loc.gov/standards/iso639-2/php/code_list.php',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_name_role_roleterm_authority_marcrelator' => array(
      'name' => 'mods name role roleterm authority marcrelator',
      'machine_name' => 'mods_name_role_roleterm_authority_marcrelator',
      'description' => 'http://www.loc.gov/marc/relators/relaterm.html',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_note_type' => array(
      'name' => 'mods note type',
      'machine_name' => 'mods_note_type',
      'description' => 'http://www.loc.gov/standards/mods/mods-notes.html',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_origininfo_frequency' => array(
      'name' => 'mods origininfo frequency',
      'machine_name' => 'mods_origininfo_frequency',
      'description' => 'http://www.loc.gov/standards/sourcelist/frequency.html',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_physicaldescription_form_authority_marcsmd' => array(
      'name' => 'mods physicaldescription form authority marccategory',
      'machine_name' => 'mods_physicaldescription_form_authority_marcsmd',
      'description' => 'http://www.loc.gov/standards/valuelist/marccategory.html',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_physicaldescription_note_type' => array(
      'name' => 'mods physicaldescription note type',
      'machine_name' => 'mods_physicaldescription_note_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_subject_hierarchicalgeographic_country_authority_iso3166_2' => array(
      'name' => 'mods subject hierarchicalGeographic country authority iso3166-2',
      'machine_name' => 'mods_subject_hierarchicalgeographic_country_authority_iso3166_2',
      'description' => 'http://en.wikipedia.org/wiki/ISO_3166-2',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_subject_hierarchicalgeographic_province' => array(
      'name' => 'mods subject hierarchicalGeographic province',
      'machine_name' => 'mods_subject_hierarchicalgeographic_province',
      'description' => 'provinces',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_subject_hierarchicalgeographic_state' => array(
      'name' => 'mods subject hierarchicalGeographic state',
      'machine_name' => 'mods_subject_hierarchicalgeographic_state',
      'description' => 'states',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'mods_targetaudience_authority_marctarget' => array(
      'name' => 'mods targetAudience authority marctarget',
      'machine_name' => 'mods_targetaudience_authority_marctarget',
      'description' => 'http://www.loc.gov/standards/sourcelist/target-audience.html',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
