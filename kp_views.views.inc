<?php

/**
 * Implements hook_views_handlers().
 *
 * Purpose: Register all custom handlers with views
 *   where a handler describes either "the type of field",
 *   "how a field should be filtered", "how a field should be sorted"
 *
 * @return
 *   An array of handler definitions
 *
 * @ingroup tripal_views
 */
function kp_views_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'kp_views') . '/handlers',
    ),
    'handlers' => array(

      'tripal_views_handler_filter_select_project_id' => array(
        'parent' => 'tripal_views_handler_filter_select_id',
      ),

    ),
  );
}