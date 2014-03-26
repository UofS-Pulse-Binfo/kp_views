<?php

/**
 * @file
 * Contains the default views for KnowPulse.
 */

require_once 'default_views/kp_views.kp_search.feature.inc';

/**
 * Implements hook_views_default_views().
 */
function kp_views_views_default_views() {
  $views = array();

  $view = kp_defaultviews_sequence_search();
  $views[$view->name] = $view;

  $view = kp_defaultviews_variant_search();
  $views[$view->name] = $view;

  $view = kp_defaultviews_markers_search();
  $views[$view->name] = $view;

  $view = kp_defaultviews_genotypes_search();
  $views[$view->name] = $view;

  return $views;
}
