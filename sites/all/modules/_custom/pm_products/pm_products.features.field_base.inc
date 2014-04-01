<?php
/**
 * @file
 * pm_products.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function pm_products_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_product_ages'
  $field_bases['field_product_ages'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_product_ages',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '6wks - 23mos' => '6wks - 23mos',
        '0 - 2' => '0 - 2',
        '2 - 5' => '2 - 5',
        '5 - 8' => '5 - 8',
        '8 - 12' => '8 - 12',
        '12 - Adult' => '12 - Adult',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_product_images'
  $field_bases['field_product_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_product_images',
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
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
