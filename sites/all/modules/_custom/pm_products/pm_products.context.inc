<?php
/**
 * @file
 * pm_products.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pm_products_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'products';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'product' => 'product',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'products',
    'menu' => 'products',
  );
  $context->condition_mode = 1;
  $export['products'] = $context;

  return $export;
}
