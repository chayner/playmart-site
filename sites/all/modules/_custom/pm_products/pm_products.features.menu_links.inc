<?php
/**
 * @file
 * pm_products.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pm_products_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_products:products
  $menu_links['main-menu_products:products'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'products',
    'router_path' => 'products',
    'link_title' => 'Products',
    'options' => array(
      'identifier' => 'main-menu_products:products',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_product:node/add/product
  $menu_links['navigation_product:node/add/product'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/product',
    'router_path' => 'node/add/product',
    'link_title' => 'Product',
    'options' => array(
      'attributes' => array(
        'title' => 'Playmart product',
      ),
      'identifier' => 'navigation_product:node/add/product',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Product');
  t('Products');


  return $menu_links;
}
