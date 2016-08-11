<?php

/**
 * @file
 * Contains the default views for KnowPulse.
 */

require_once 'default_views/kp_views.kp_search.feature.inc';
require_once 'default_views/kp_views.kp_search.germplasm.inc';
require_once 'default_views/kp_views.uofs_research.organism.inc';
require_once 'default_views/kp_views.uofs_research.misc.inc';
require_once 'default_views/kp_views.tripal_page_charts.inc';

/**
 * Implements hook_views_default_views().
 */
function kp_views_views_default_views() {
  $views = array();

  // Tag: UofS Research /////////////////////////
  $view = kp_defaultviews_uofs_crop_species();
  $views[$view->name] = $view;

  $view = kp_defaultviews_uofs_model_species();
  $views[$view->name] = $view;

  $view = kp_defaultviews_uofs_wild_species();
  $views[$view->name] = $view;

  $view = kp_defaultviews_uofs_publications();
  $views[$view->name] = $view;

  $view = kp_defaultviews_uofs_projects();
  $views[$view->name] = $view;

  $view = kp_defaultviews_uofs_research_areas();
  $views[$view->name] = $view;

  // Tag: KP Search /////////////////////////////
  $view = kp_defaultviews_sequence_search();
  $views[$view->name] = $view;

  $view = kp_defaultviews_variant_search();
  $views[$view->name] = $view;

  $view = kp_defaultviews_markers_search();
  $views[$view->name] = $view;

  // Tag :Kp Search: Germplasm //////////////////
  $view = kp_defaultviews_germplasm_search();
  $views[$view->name] = $view;

  $view = kp_defaultviews_germplasm_variety_search();
  $views[$view->name] = $view;

  $view = kp_defaultviews_germplasm_ril_search();
  $views[$view->name] = $view;

  $view = kp_defaultviews_germplasm_cross_search();
  $views[$view->name] = $view;

  // Tag: KP Pages //////////////////////////////
  $view = kp_defaultviews_feature_type_piechart();
  $views[$view->name] = $view;

  $view = kp_defaultviews_organism_type_piechart();
  $views[$view->name] = $view;

  return $views;
}
