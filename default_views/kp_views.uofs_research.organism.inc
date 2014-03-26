<?php

/**
 * @file
 * Default views with
 *  - Tag = UofS Research
 *  - base_table = feature
 */

/**
 * Defines the uofs_crop_species View
 */
function kp_defaultviews_uofs_crop_species() {

$view = new view();
$view->name = 'uofs_crop_species';
$view->description = '';
$view->tag = 'UofS Research';
$view->base_table = 'organism';
$view->human_name = 'UofS Crop Species';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Crops';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'fluid_grid';
$handler->display->display_options['style_options']['items_width'] = '250';
$handler->display->display_options['style_options']['items_height'] = '350';
$handler->display->display_options['style_options']['advanced_layout'] = array(
  'align' => TRUE,
);
$handler->display->display_options['style_options']['list_alignment'] = 'left';
$handler->display->display_options['style_options']['items_alignment'] = 'center';
$handler->display->display_options['style_options']['box_shadow'] = '0';
$handler->display->display_options['style_options']['border_radius'] = '0';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Relationship: Organism: Organism => Node */
$handler->display->display_options['relationships']['organism_id']['id'] = 'organism_id';
$handler->display->display_options['relationships']['organism_id']['table'] = 'chado_organism';
$handler->display->display_options['relationships']['organism_id']['field'] = 'organism_id';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'organism_id';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Image (with Source) */
$handler->display->display_options['fields']['field_image_with_source']['id'] = 'field_image_with_source';
$handler->display->display_options['fields']['field_image_with_source']['table'] = 'field_data_field_image_with_source';
$handler->display->display_options['fields']['field_image_with_source']['field'] = 'field_image_with_source';
$handler->display->display_options['fields']['field_image_with_source']['relationship'] = 'organism_id';
$handler->display->display_options['fields']['field_image_with_source']['label'] = '';
$handler->display->display_options['fields']['field_image_with_source']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image_with_source']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_image_with_source']['settings'] = array(
  'view_mode' => 'thumbnail',
);
/* Field: Chado Organism: Common Name */
$handler->display->display_options['fields']['common_name']['id'] = 'common_name';
$handler->display->display_options['fields']['common_name']['table'] = 'organism';
$handler->display->display_options['fields']['common_name']['field'] = 'common_name';
$handler->display->display_options['fields']['common_name']['label'] = '';
$handler->display->display_options['fields']['common_name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['common_name']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['common_name']['element_label_colon'] = FALSE;
/* Field: Chado Organism: Genus */
$handler->display->display_options['fields']['genus']['id'] = 'genus';
$handler->display->display_options['fields']['genus']['table'] = 'organism';
$handler->display->display_options['fields']['genus']['field'] = 'genus';
$handler->display->display_options['fields']['genus']['exclude'] = TRUE;
/* Field: Chado Organism: Species */
$handler->display->display_options['fields']['species']['id'] = 'species';
$handler->display->display_options['fields']['species']['table'] = 'organism';
$handler->display->display_options['fields']['species']['field'] = 'species';
$handler->display->display_options['fields']['species']['exclude'] = TRUE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[genus] [species]';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Chado Organism: Common Name */
$handler->display->display_options['sorts']['common_name']['id'] = 'common_name';
$handler->display->display_options['sorts']['common_name']['table'] = 'organism';
$handler->display->display_options['sorts']['common_name']['field'] = 'common_name';
/* Filter criterion: Content: Why it&#039;s of Interest? (field_why_interest) */
$handler->display->display_options['filters']['field_why_interest_value']['id'] = 'field_why_interest_value';
$handler->display->display_options['filters']['field_why_interest_value']['table'] = 'field_data_field_why_interest';
$handler->display->display_options['filters']['field_why_interest_value']['field'] = 'field_why_interest_value';
$handler->display->display_options['filters']['field_why_interest_value']['relationship'] = 'organism_id';
$handler->display->display_options['filters']['field_why_interest_value']['value'] = array(
  'Crop' => 'Crop',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'research/crop-species';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Crops';
$handler->display->display_options['menu']['name'] = 'menu-our-research';

  return $view;
}

/**
 * Defines the uofs_model_species View
 */
function kp_defaultviews_uofs_model_species() {

$view = new view();
$view->name = 'uofs_model_species';
$view->description = '';
$view->tag = 'UofS Research';
$view->base_table = 'organism';
$view->human_name = 'UofS Model Species';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Other Legume Species (including Model Species)';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'fluid_grid';
$handler->display->display_options['style_options']['items_width'] = '250';
$handler->display->display_options['style_options']['items_height'] = '350';
$handler->display->display_options['style_options']['advanced_layout'] = array(
  'align' => TRUE,
);
$handler->display->display_options['style_options']['list_alignment'] = 'left';
$handler->display->display_options['style_options']['items_alignment'] = 'center';
$handler->display->display_options['style_options']['box_shadow'] = '0';
$handler->display->display_options['style_options']['border_radius'] = '0';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Relationship: Organism: Organism => Node */
$handler->display->display_options['relationships']['organism_id']['id'] = 'organism_id';
$handler->display->display_options['relationships']['organism_id']['table'] = 'chado_organism';
$handler->display->display_options['relationships']['organism_id']['field'] = 'organism_id';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'organism_id';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Image (with Source) */
$handler->display->display_options['fields']['field_image_with_source']['id'] = 'field_image_with_source';
$handler->display->display_options['fields']['field_image_with_source']['table'] = 'field_data_field_image_with_source';
$handler->display->display_options['fields']['field_image_with_source']['field'] = 'field_image_with_source';
$handler->display->display_options['fields']['field_image_with_source']['relationship'] = 'organism_id';
$handler->display->display_options['fields']['field_image_with_source']['label'] = '';
$handler->display->display_options['fields']['field_image_with_source']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image_with_source']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_image_with_source']['settings'] = array(
  'view_mode' => 'thumbnail',
);
/* Field: Chado Organism: Common Name */
$handler->display->display_options['fields']['common_name']['id'] = 'common_name';
$handler->display->display_options['fields']['common_name']['table'] = 'organism';
$handler->display->display_options['fields']['common_name']['field'] = 'common_name';
$handler->display->display_options['fields']['common_name']['label'] = '';
$handler->display->display_options['fields']['common_name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['common_name']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['common_name']['element_label_colon'] = FALSE;
/* Field: Chado Organism: Genus */
$handler->display->display_options['fields']['genus']['id'] = 'genus';
$handler->display->display_options['fields']['genus']['table'] = 'organism';
$handler->display->display_options['fields']['genus']['field'] = 'genus';
$handler->display->display_options['fields']['genus']['exclude'] = TRUE;
/* Field: Chado Organism: Species */
$handler->display->display_options['fields']['species']['id'] = 'species';
$handler->display->display_options['fields']['species']['table'] = 'organism';
$handler->display->display_options['fields']['species']['field'] = 'species';
$handler->display->display_options['fields']['species']['exclude'] = TRUE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[genus] [species]';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Chado Organism: Common Name */
$handler->display->display_options['sorts']['common_name']['id'] = 'common_name';
$handler->display->display_options['sorts']['common_name']['table'] = 'organism';
$handler->display->display_options['sorts']['common_name']['field'] = 'common_name';
/* Filter criterion: Content: Why it&#039;s of Interest? (field_why_interest) */
$handler->display->display_options['filters']['field_why_interest_value']['id'] = 'field_why_interest_value';
$handler->display->display_options['filters']['field_why_interest_value']['table'] = 'field_data_field_why_interest';
$handler->display->display_options['filters']['field_why_interest_value']['field'] = 'field_why_interest_value';
$handler->display->display_options['filters']['field_why_interest_value']['relationship'] = 'organism_id';
$handler->display->display_options['filters']['field_why_interest_value']['value'] = array(
  'Model Species' => 'Model Species',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'research/model-species';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Model Species';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-our-research';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

  return $view;
}

/**
 * Defines the uofs_wild_species View
 */
function kp_defaultviews_uofs_wild_species() {

$view = new view();
$view->name = 'uofs_wild_species';
$view->description = '';
$view->tag = 'UofS Research';
$view->base_table = 'organism';
$view->human_name = 'UofS Wild Species';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Wild Species';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'fluid_grid';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'genus_1',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['items_width'] = '250';
$handler->display->display_options['style_options']['items_height'] = '350';
$handler->display->display_options['style_options']['advanced_layout'] = array(
  'align' => TRUE,
);
$handler->display->display_options['style_options']['list_alignment'] = 'left';
$handler->display->display_options['style_options']['items_alignment'] = 'center';
$handler->display->display_options['style_options']['box_shadow'] = '0';
$handler->display->display_options['style_options']['border_radius'] = '0';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
/* Relationship: Organism: Organism => Node */
$handler->display->display_options['relationships']['organism_id']['id'] = 'organism_id';
$handler->display->display_options['relationships']['organism_id']['table'] = 'chado_organism';
$handler->display->display_options['relationships']['organism_id']['field'] = 'organism_id';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'organism_id';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Image (with Source) */
$handler->display->display_options['fields']['field_image_with_source']['id'] = 'field_image_with_source';
$handler->display->display_options['fields']['field_image_with_source']['table'] = 'field_data_field_image_with_source';
$handler->display->display_options['fields']['field_image_with_source']['field'] = 'field_image_with_source';
$handler->display->display_options['fields']['field_image_with_source']['relationship'] = 'organism_id';
$handler->display->display_options['fields']['field_image_with_source']['label'] = '';
$handler->display->display_options['fields']['field_image_with_source']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image_with_source']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_image_with_source']['settings'] = array(
  'view_mode' => 'thumbnail',
);
/* Field: Chado Organism: Common Name */
$handler->display->display_options['fields']['common_name']['id'] = 'common_name';
$handler->display->display_options['fields']['common_name']['table'] = 'organism';
$handler->display->display_options['fields']['common_name']['field'] = 'common_name';
$handler->display->display_options['fields']['common_name']['label'] = '';
$handler->display->display_options['fields']['common_name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['common_name']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['common_name']['element_label_colon'] = FALSE;
/* Field: Chado Organism: Genus */
$handler->display->display_options['fields']['genus']['id'] = 'genus';
$handler->display->display_options['fields']['genus']['table'] = 'organism';
$handler->display->display_options['fields']['genus']['field'] = 'genus';
$handler->display->display_options['fields']['genus']['exclude'] = TRUE;
/* Field: Chado Organism: Species */
$handler->display->display_options['fields']['species']['id'] = 'species';
$handler->display->display_options['fields']['species']['table'] = 'organism';
$handler->display->display_options['fields']['species']['field'] = 'species';
$handler->display->display_options['fields']['species']['exclude'] = TRUE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[genus] [species]';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Group By Genus */
$handler->display->display_options['fields']['genus_1']['id'] = 'genus_1';
$handler->display->display_options['fields']['genus_1']['table'] = 'organism';
$handler->display->display_options['fields']['genus_1']['field'] = 'genus';
$handler->display->display_options['fields']['genus_1']['ui_name'] = 'Group By Genus';
$handler->display->display_options['fields']['genus_1']['label'] = '';
$handler->display->display_options['fields']['genus_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['genus_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['genus_1']['alter']['text'] = '[genus] Species';
$handler->display->display_options['fields']['genus_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['genus_1']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['genus_1']['element_wrapper_class'] = 'views-group-title';
/* Sort criterion: Chado Organism: Common Name */
$handler->display->display_options['sorts']['common_name']['id'] = 'common_name';
$handler->display->display_options['sorts']['common_name']['table'] = 'organism';
$handler->display->display_options['sorts']['common_name']['field'] = 'common_name';
/* Filter criterion: Content: Why it&#039;s of Interest? (field_why_interest) */
$handler->display->display_options['filters']['field_why_interest_value']['id'] = 'field_why_interest_value';
$handler->display->display_options['filters']['field_why_interest_value']['table'] = 'field_data_field_why_interest';
$handler->display->display_options['filters']['field_why_interest_value']['field'] = 'field_why_interest_value';
$handler->display->display_options['filters']['field_why_interest_value']['relationship'] = 'organism_id';
$handler->display->display_options['filters']['field_why_interest_value']['value'] = array(
  'Wild Species' => 'Wild Species',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'research/wild-species';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Wild Species';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-our-research';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

  return $view;
}