<?php
/**
 * @file
 * scotts_partner_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function scotts_partner_type_taxonomy_default_vocabularies() {
  return array(
    'industry' => array(
      'name' => 'Industry',
      'machine_name' => 'industry',
      'description' => 'List related industries',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
