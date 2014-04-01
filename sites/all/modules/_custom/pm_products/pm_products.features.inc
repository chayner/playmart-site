<?php
/**
 * @file
 * pm_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pm_products_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pm_products_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pm_products_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => t('Playmart product'),
      'has_title' => '1',
      'title_label' => t('Product Name'),
      'help' => '',
    ),
  );
  return $items;
}
