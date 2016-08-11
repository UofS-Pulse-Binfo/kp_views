<?php

/**
 * @file
 * Default views with
 *  - Tag = KP Pages
 */

/**
 * Defines the kppages_organism_feature_types_chart_pie View
 */
function kp_defaultviews_feature_type_piechart() {

$view = new view();
$view->name = 'kppages_organism_feature_types_chart_pie';
$view->description = 'Pie chart of feature types on organism pages';
$view->tag = 'KP Pages';
$view->base_table = 'organism_feature_count';
$view->human_name = 'Organism: Feature Type Distribution';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Sequence & Variant Data Available';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'feature_type';
$handler->display->display_options['style_options']['data_fields'] = array(
  'num_features' => 'num_features',
  'feature_type' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'feature_type' => '#2f7ed8',
  'num_features' => '#0d233a',
);
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['colors'] = array(
  0 => '#3c4a54',
  1 => '#a9b259',
  2 => '#406b48',
  3 => '#7c9a99',
  4 => '#413e57',
  5 => '#929000',
  6 => '#508020',
  7 => '#657f8b',
  8 => '#6a8053',
  9 => '#3a8080',
);
$handler->display->display_options['style_options']['width'] = '';
$handler->display->display_options['style_options']['height'] = '';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['empty'] = TRUE;
$handler->display->display_options['header']['result']['content'] = '<span class="views-total hidden">@total</span>';
/* Field: Chado Organism Feature Count: Feature Type */
$handler->display->display_options['fields']['feature_type']['id'] = 'feature_type';
$handler->display->display_options['fields']['feature_type']['table'] = 'organism_feature_count';
$handler->display->display_options['fields']['feature_type']['field'] = 'feature_type';
$handler->display->display_options['fields']['feature_type']['label'] = 'Type';
/* Field: Chado Organism Feature Count: Num Features */
$handler->display->display_options['fields']['num_features']['id'] = 'num_features';
$handler->display->display_options['fields']['num_features']['table'] = 'organism_feature_count';
$handler->display->display_options['fields']['num_features']['field'] = 'num_features';
$handler->display->display_options['fields']['num_features']['separator'] = '';
/* Sort criterion: Chado Organism Feature Count: Num Features */
$handler->display->display_options['sorts']['num_features']['id'] = 'num_features';
$handler->display->display_options['sorts']['num_features']['table'] = 'organism_feature_count';
$handler->display->display_options['sorts']['num_features']['field'] = 'num_features';
$handler->display->display_options['sorts']['num_features']['order'] = 'DESC';
/* Filter criterion: Chado Organism Feature Count: Organism Id */
$handler->display->display_options['filters']['organism_id']['id'] = 'organism_id';
$handler->display->display_options['filters']['organism_id']['table'] = 'organism_feature_count';
$handler->display->display_options['filters']['organism_id']['field'] = 'organism_id';
$handler->display->display_options['filters']['organism_id']['value']['value'] = '4';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

return $view;
}

/**
 * Defines the kppages_organism_stock_types_chart_pie View
 */
function kp_defaultviews_organism_type_piechart() {

$view = new view();
$view->name = 'kppages_organism_stock_types_chart_pie';
$view->description = 'Pie chart of stock types on organism pages';
$view->tag = 'KP Pages';
$view->base_table = 'organism_stock_count';
$view->human_name = 'Organism: Stock Type Distribution';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Organism Stock Distribution';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'chart';
$handler->display->display_options['style_options']['library'] = '';
$handler->display->display_options['style_options']['label_field'] = 'stock_type';
$handler->display->display_options['style_options']['data_fields'] = array(
  'num_stocks' => 'num_stocks',
  'stock_type' => 0,
);
$handler->display->display_options['style_options']['field_colors'] = array(
  'stock_type' => '#2f7ed8',
  'num_stocks' => '#0d233a',
);
$handler->display->display_options['style_options']['legend_position'] = 'bottom';
$handler->display->display_options['style_options']['colors'] = array(
  0 => '#3c4a54',
  1 => '#a9b259',
  2 => '#406b48',
  3 => '#7c9a99',
  4 => '#413e57',
  5 => '#929000',
  6 => '#508020',
  7 => '#657f8b',
  8 => '#6a8053',
  9 => '#3a8080',
);
$handler->display->display_options['style_options']['width'] = '';
$handler->display->display_options['style_options']['height'] = '';
$handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
$handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
/* Field: Chado Organism Stock Count: Stock Type */
$handler->display->display_options['fields']['stock_type']['id'] = 'stock_type';
$handler->display->display_options['fields']['stock_type']['table'] = 'organism_stock_count';
$handler->display->display_options['fields']['stock_type']['field'] = 'stock_type';
$handler->display->display_options['fields']['stock_type']['label'] = 'Type';
/* Field: Chado Organism Stock Count: Num Stocks */
$handler->display->display_options['fields']['num_stocks']['id'] = 'num_stocks';
$handler->display->display_options['fields']['num_stocks']['table'] = 'organism_stock_count';
$handler->display->display_options['fields']['num_stocks']['field'] = 'num_stocks';
$handler->display->display_options['fields']['num_stocks']['separator'] = '';
/* Sort criterion: Chado Organism Stock Count: Num Stocks */
$handler->display->display_options['sorts']['num_stocks']['id'] = 'num_stocks';
$handler->display->display_options['sorts']['num_stocks']['table'] = 'organism_stock_count';
$handler->display->display_options['sorts']['num_stocks']['field'] = 'num_stocks';
$handler->display->display_options['sorts']['num_stocks']['order'] = 'DESC';
/* Filter criterion: Chado Organism Stock Count: Organism Id */
$handler->display->display_options['filters']['organism_id']['id'] = 'organism_id';
$handler->display->display_options['filters']['organism_id']['table'] = 'organism_stock_count';
$handler->display->display_options['filters']['organism_id']['field'] = 'organism_id';
$handler->display->display_options['filters']['organism_id']['value']['value'] = '4';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

return $view;
}
