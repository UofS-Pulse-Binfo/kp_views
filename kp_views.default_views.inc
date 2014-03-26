<?php

/**
 * @file
 * Contains the default views for KnowPulse.
 */

/**
 * Implements hook_views_default_views().
 */
function kp_views_views_default_views() {
  $views = array();

  $view = kp_defaultviews_sequence_search();
  //$views[$view->name] = $view;

  $view = kp_defaultviews_variant_search();
  //$views[$view->name] = $view;

  $view = kp_defaultviews_markers_search();
  //$views[$view->name] = $view;

  $view = kp_defaultviews_genotypes_search();
  //$views[$view->name] = $view;

  return $views;
}

/**
 * Defines the kp_sequence_search View
 */
function kp_defaultviews_sequence_search() {

  return $view;
}

/**
 * Defines the kp_variant_search View
 */
function kp_defaultviews_variant_search() {

  return $view;
}

/**
 * Defines the kp_marker_search View
 */
function kp_defaultviews_markers_search() {

  return $view;
}

/**
 * Defines the kp_genotype_search View
 */
function kp_defaultviews_genotypes_search() {

  return $view;
}