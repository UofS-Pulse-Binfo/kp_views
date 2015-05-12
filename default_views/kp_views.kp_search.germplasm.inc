<?php

/**
 * @file
 * Default views with
 *  - Tag = KP Search: Germplasm
 *  - base_table = stock
 */

/**
 * Defines the kp_germplasm_search View
 */
function kp_defaultviews_germplasm_search() {

$view = new view();
$view->name = 'kp_germplasm_search';
$view->description = 'A searchable list of all the germplasm available for a given genus.';
$view->tag = 'KP Search: Germplasm';
$view->base_table = 'stock';
$view->human_name = 'KP Germplasm Search';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Germplasm';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access germplasm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'input_required';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Select any filter and click on Search to see results';
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['style_plugin'] = 'table';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
/* Field: Chado Stock: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'stock';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['path'] = '[nid]';
/* Field: Chado Stock: Uniquename */
$handler->display->display_options['fields']['uniquename']['id'] = 'uniquename';
$handler->display->display_options['fields']['uniquename']['table'] = 'stock';
$handler->display->display_options['fields']['uniquename']['field'] = 'uniquename';
$handler->display->display_options['fields']['uniquename']['label'] = 'KP Accession';
$handler->display->display_options['fields']['uniquename']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['uniquename']['alter']['path'] = '[nid]';
/* Field: Chado Cvterm: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'cvterm';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Type';
/* Field: Chado Organism: Species */
$handler->display->display_options['fields']['species']['id'] = 'species';
$handler->display->display_options['fields']['species']['table'] = 'organism';
$handler->display->display_options['fields']['species']['field'] = 'species';
/* Sort criterion: Chado Organism: Species */
$handler->display->display_options['sorts']['species']['id'] = 'species';
$handler->display->display_options['sorts']['species']['table'] = 'organism';
$handler->display->display_options['sorts']['species']['field'] = 'species';
/* Sort criterion: Chado Stock: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'stock';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Contextual filter: Chado Organism: Genus */
$handler->display->display_options['arguments']['genus']['id'] = 'genus';
$handler->display->display_options['arguments']['genus']['table'] = 'organism';
$handler->display->display_options['arguments']['genus']['field'] = 'genus';
$handler->display->display_options['arguments']['genus']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['genus']['title'] = '%1 Germplasm';
$handler->display->display_options['arguments']['genus']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['genus']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['genus']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['genus']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['genus']['limit'] = '0';
/* Filter criterion: Chado Stock: Type Id */
$handler->display->display_options['filters']['type_id']['id'] = 'type_id';
$handler->display->display_options['filters']['type_id']['table'] = 'stock';
$handler->display->display_options['filters']['type_id']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id']['value'] = array(
  'All' => 'All',
);
$handler->display->display_options['filters']['type_id']['group'] = 1;
$handler->display->display_options['filters']['type_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['type_id']['expose']['operator_id'] = 'type_id_op';
$handler->display->display_options['filters']['type_id']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type_id']['expose']['description'] = 'The type of germplasm you are interested in';
$handler->display->display_options['filters']['type_id']['expose']['operator'] = 'type_id_op';
$handler->display->display_options['filters']['type_id']['expose']['identifier'] = 'type_id';
$handler->display->display_options['filters']['type_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['type_id']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['type_id']['select_optional'] = TRUE;
$handler->display->display_options['filters']['type_id']['max_length'] = '40';
/* Filter criterion: Chado Stock: Uniquename */
$handler->display->display_options['filters']['uniquename']['id'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['table'] = 'stock';
$handler->display->display_options['filters']['uniquename']['field'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['group'] = 1;
$handler->display->display_options['filters']['uniquename']['exposed'] = TRUE;
$handler->display->display_options['filters']['uniquename']['expose']['operator_id'] = 'uniquename_op';
$handler->display->display_options['filters']['uniquename']['expose']['label'] = 'KP  Accession';
$handler->display->display_options['filters']['uniquename']['expose']['description'] = 'The unique accession in KnowPulse for the germplasm you are interested in';
$handler->display->display_options['filters']['uniquename']['expose']['operator'] = 'uniquename_op';
$handler->display->display_options['filters']['uniquename']['expose']['identifier'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['uniquename']['max_length'] = '40';
/* Filter criterion: Chado Stock: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'stock';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['description'] = 'The name of the germplasm you are interested in (partial names are accepted)';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['name']['max_length'] = '40';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'search/germplasm/all/%';
$handler->display->display_options['menu']['title'] = 'Varieties';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-bioinformatics-main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

return $view;
}

/**
 * Defines the kp_germplasm_variety_search View
 */
function kp_defaultviews_germplasm_variety_search() {

$view = new view();
$view->name = 'kp_germplasm_variety_search';
$view->description = 'A listing of all varieties for a given genus.';
$view->tag = 'KP Search: Germplasm';
$view->base_table = 'stock';
$view->human_name = 'KP Variety Search';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Varieties';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access varieties';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Year Released */
$handler->display->display_options['relationships']['stock_id_to_stockprop']['id'] = 'stock_id_to_stockprop';
$handler->display->display_options['relationships']['stock_id_to_stockprop']['table'] = 'stock';
$handler->display->display_options['relationships']['stock_id_to_stockprop']['field'] = 'stock_id_to_stockprop';
$handler->display->display_options['relationships']['stock_id_to_stockprop']['ui_name'] = 'Year Released';
$handler->display->display_options['relationships']['stock_id_to_stockprop']['label'] = 'Year Released';
/* Relationship: Market Class */
$handler->display->display_options['relationships']['stock_id_to_stockprop_1']['id'] = 'stock_id_to_stockprop_1';
$handler->display->display_options['relationships']['stock_id_to_stockprop_1']['table'] = 'stock';
$handler->display->display_options['relationships']['stock_id_to_stockprop_1']['field'] = 'stock_id_to_stockprop';
$handler->display->display_options['relationships']['stock_id_to_stockprop_1']['ui_name'] = 'Market Class';
$handler->display->display_options['relationships']['stock_id_to_stockprop_1']['label'] = 'Market Class';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
/* Field: Chado Stock: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'stock';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['path'] = '[nid]';
/* Field: Chado Stock: Uniquename */
$handler->display->display_options['fields']['uniquename']['id'] = 'uniquename';
$handler->display->display_options['fields']['uniquename']['table'] = 'stock';
$handler->display->display_options['fields']['uniquename']['field'] = 'uniquename';
$handler->display->display_options['fields']['uniquename']['label'] = 'KP Accession';
$handler->display->display_options['fields']['uniquename']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['uniquename']['alter']['path'] = '[nid]';
/* Field: Value */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'stockprop';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['relationship'] = 'stock_id_to_stockprop';
$handler->display->display_options['fields']['value']['ui_name'] = 'Value';
$handler->display->display_options['fields']['value']['label'] = 'Year Released';
/* Field: Value */
$handler->display->display_options['fields']['value_1']['id'] = 'value_1';
$handler->display->display_options['fields']['value_1']['table'] = 'stockprop';
$handler->display->display_options['fields']['value_1']['field'] = 'value';
$handler->display->display_options['fields']['value_1']['relationship'] = 'stock_id_to_stockprop_1';
$handler->display->display_options['fields']['value_1']['ui_name'] = 'Value';
$handler->display->display_options['fields']['value_1']['label'] = 'Market Class';
/* Sort criterion: Chado Organism: Genus */
$handler->display->display_options['sorts']['genus']['id'] = 'genus';
$handler->display->display_options['sorts']['genus']['table'] = 'organism';
$handler->display->display_options['sorts']['genus']['field'] = 'genus';
/* Sort criterion: Chado Organism: Species */
$handler->display->display_options['sorts']['species']['id'] = 'species';
$handler->display->display_options['sorts']['species']['table'] = 'organism';
$handler->display->display_options['sorts']['species']['field'] = 'species';
/* Sort criterion: Chado Stock: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'stock';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Contextual filter: Chado Organism: Genus */
$handler->display->display_options['arguments']['genus']['id'] = 'genus';
$handler->display->display_options['arguments']['genus']['table'] = 'organism';
$handler->display->display_options['arguments']['genus']['field'] = 'genus';
$handler->display->display_options['arguments']['genus']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['genus']['title'] = '%1 Varieties';
$handler->display->display_options['arguments']['genus']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['genus']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['genus']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['genus']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['genus']['limit'] = '0';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
  3 => 'OR',
);
/* Filter criterion: Chado Stock: Type Id */
$handler->display->display_options['filters']['type_id']['id'] = 'type_id';
$handler->display->display_options['filters']['type_id']['table'] = 'stock';
$handler->display->display_options['filters']['type_id']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id']['value'] = '3683';
$handler->display->display_options['filters']['type_id']['group'] = 1;
$handler->display->display_options['filters']['type_id']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id']['max_length'] = '40';
/* Filter criterion: Chado Stock: Uniquename */
$handler->display->display_options['filters']['uniquename']['id'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['table'] = 'stock';
$handler->display->display_options['filters']['uniquename']['field'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['group'] = 1;
$handler->display->display_options['filters']['uniquename']['exposed'] = TRUE;
$handler->display->display_options['filters']['uniquename']['expose']['operator_id'] = 'uniquename_op';
$handler->display->display_options['filters']['uniquename']['expose']['label'] = 'KP  Accession';
$handler->display->display_options['filters']['uniquename']['expose']['description'] = 'The unique accession in KnowPulse for the variety you are interested in';
$handler->display->display_options['filters']['uniquename']['expose']['operator'] = 'uniquename_op';
$handler->display->display_options['filters']['uniquename']['expose']['identifier'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['uniquename']['max_length'] = '40';
/* Filter criterion: Chado Stock: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'stock';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['description'] = 'The name of the variety you are interested in (partial names are accepted)';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['name']['max_length'] = '40';
/* Filter criterion: Type */
$handler->display->display_options['filters']['type_id_1']['id'] = 'type_id_1';
$handler->display->display_options['filters']['type_id_1']['table'] = 'stockprop';
$handler->display->display_options['filters']['type_id_1']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_1']['relationship'] = 'stock_id_to_stockprop';
$handler->display->display_options['filters']['type_id_1']['ui_name'] = 'Type';
$handler->display->display_options['filters']['type_id_1']['value'] = '3688';
$handler->display->display_options['filters']['type_id_1']['group'] = 2;
$handler->display->display_options['filters']['type_id_1']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id_1']['max_length'] = '40';
/* Filter criterion: Empty */
$handler->display->display_options['filters']['type_id_3']['id'] = 'type_id_3';
$handler->display->display_options['filters']['type_id_3']['table'] = 'stockprop';
$handler->display->display_options['filters']['type_id_3']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_3']['relationship'] = 'stock_id_to_stockprop';
$handler->display->display_options['filters']['type_id_3']['ui_name'] = 'Empty';
$handler->display->display_options['filters']['type_id_3']['operator'] = 'empty';
$handler->display->display_options['filters']['type_id_3']['value'] = 'NULL';
$handler->display->display_options['filters']['type_id_3']['group'] = 2;
$handler->display->display_options['filters']['type_id_3']['max_length'] = '40';
/* Filter criterion: Type */
$handler->display->display_options['filters']['type_id_2']['id'] = 'type_id_2';
$handler->display->display_options['filters']['type_id_2']['table'] = 'stockprop';
$handler->display->display_options['filters']['type_id_2']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_2']['relationship'] = 'stock_id_to_stockprop_1';
$handler->display->display_options['filters']['type_id_2']['ui_name'] = 'Type';
$handler->display->display_options['filters']['type_id_2']['value'] = '3682';
$handler->display->display_options['filters']['type_id_2']['group'] = 3;
$handler->display->display_options['filters']['type_id_2']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id_2']['max_length'] = '40';
/* Filter criterion: Empty */
$handler->display->display_options['filters']['type_id_4']['id'] = 'type_id_4';
$handler->display->display_options['filters']['type_id_4']['table'] = 'stockprop';
$handler->display->display_options['filters']['type_id_4']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_4']['relationship'] = 'stock_id_to_stockprop_1';
$handler->display->display_options['filters']['type_id_4']['ui_name'] = 'Empty';
$handler->display->display_options['filters']['type_id_4']['operator'] = 'empty';
$handler->display->display_options['filters']['type_id_4']['value'] = 'NULL';
$handler->display->display_options['filters']['type_id_4']['group'] = 3;
$handler->display->display_options['filters']['type_id_4']['max_length'] = '40';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'search/germplasm/varieties/%';
$handler->display->display_options['menu']['title'] = 'Varieties';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-bioinformatics-main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

return $view;
}

/**
 * Defines the kp_germplasm_ril_search View
 */
function kp_defaultviews_germplasm_ril_search() {

$view = new view();
$view->name = 'kp_germplasm_ril_search';
$view->description = 'A listing of Recombinant imbred lines (RILs)';
$view->tag = 'KP Search: Germplasm';
$view->base_table = 'stock';
$view->human_name = 'KP RIL Search';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'RILs (Recombinant Imbred Lines)';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access crosses';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Maternal Relationship */
$handler->display->display_options['relationships']['stock_id_to_stock_relationship']['id'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship']['table'] = 'stock';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship']['field'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship']['ui_name'] = 'Maternal Relationship';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship']['label'] = 'Maternal Relationship';
/* Relationship: Maternal Parent */
$handler->display->display_options['relationships']['subject_id_to_stock']['id'] = 'subject_id_to_stock';
$handler->display->display_options['relationships']['subject_id_to_stock']['table'] = 'stock_relationship';
$handler->display->display_options['relationships']['subject_id_to_stock']['field'] = 'subject_id_to_stock';
$handler->display->display_options['relationships']['subject_id_to_stock']['relationship'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['relationships']['subject_id_to_stock']['ui_name'] = 'Maternal Parent';
$handler->display->display_options['relationships']['subject_id_to_stock']['label'] = 'Maternal Parent';
/* Relationship: Paternal Relationship */
$handler->display->display_options['relationships']['stock_id_to_stock_relationship_1']['id'] = 'stock_id_to_stock_relationship_1';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship_1']['table'] = 'stock';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship_1']['field'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship_1']['ui_name'] = 'Paternal Relationship';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship_1']['label'] = 'Paternal Relationship';
/* Relationship: Paternal Parent */
$handler->display->display_options['relationships']['subject_id_to_stock_1']['id'] = 'subject_id_to_stock_1';
$handler->display->display_options['relationships']['subject_id_to_stock_1']['table'] = 'stock_relationship';
$handler->display->display_options['relationships']['subject_id_to_stock_1']['field'] = 'subject_id_to_stock';
$handler->display->display_options['relationships']['subject_id_to_stock_1']['relationship'] = 'stock_id_to_stock_relationship_1';
$handler->display->display_options['relationships']['subject_id_to_stock_1']['ui_name'] = 'Paternal Parent';
$handler->display->display_options['relationships']['subject_id_to_stock_1']['label'] = 'Paternal Parent';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
/* Field: Chado Stock: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'stock';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['path'] = '[nid]';
/* Field: Chado Stock: Uniquename */
$handler->display->display_options['fields']['uniquename']['id'] = 'uniquename';
$handler->display->display_options['fields']['uniquename']['table'] = 'stock';
$handler->display->display_options['fields']['uniquename']['field'] = 'uniquename';
$handler->display->display_options['fields']['uniquename']['label'] = 'KP Accession';
$handler->display->display_options['fields']['uniquename']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['uniquename']['alter']['path'] = '[nid]';
/* Field: Chado Organism: Species */
$handler->display->display_options['fields']['species']['id'] = 'species';
$handler->display->display_options['fields']['species']['table'] = 'organism';
$handler->display->display_options['fields']['species']['field'] = 'species';
/* Field: Chado Stock: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'stock';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'subject_id_to_stock';
$handler->display->display_options['fields']['name']['label'] = 'Maternal Parent';
/* Field: Chado Stock: Name */
$handler->display->display_options['fields']['name_2']['id'] = 'name_2';
$handler->display->display_options['fields']['name_2']['table'] = 'stock';
$handler->display->display_options['fields']['name_2']['field'] = 'name';
$handler->display->display_options['fields']['name_2']['relationship'] = 'subject_id_to_stock_1';
$handler->display->display_options['fields']['name_2']['label'] = 'Paternal Parent';
/* Sort criterion: Chado Organism: Species */
$handler->display->display_options['sorts']['species']['id'] = 'species';
$handler->display->display_options['sorts']['species']['table'] = 'organism';
$handler->display->display_options['sorts']['species']['field'] = 'species';
/* Sort criterion: Global: PHP */
$handler->display->display_options['sorts']['php']['id'] = 'php';
$handler->display->display_options['sorts']['php']['table'] = 'views';
$handler->display->display_options['sorts']['php']['field'] = 'php';
$handler->display->display_options['sorts']['php']['use_php_setup'] = 0;
$handler->display->display_options['sorts']['php']['php_sort'] = '// get value for row1
if (preg_match(\'/\\w+-([0-9]+)/\',$row1->name_1,$matches)) {
  $row1_RIL_num = $matches[1];
}
else {
  $row1_RIL_num = 1;
  watchdog(\'kp search\', \'Unable to determine RIL number for %ril in KP Search: RIL\', array(\'%ril\' => $row1->name_1), WATCHDOG_WARNING);
}
// get value for row2
if (preg_match(\'/\\w+-([0-9]+)/\',$row2->name_1,$matches)) {
  $row2_RIL_num = $matches[1];
}
else {
  $row2_RIL_num = 2;
  watchdog(\'kp search\', \'Unable to determine RIL number for %ril in KP Search: RIL\', array(\'%ril\' => $row1->name_1), WATCHDOG_WARNING);
}

// compare
if ($row1_RIL_num < $row2_RIL_num) {
  return -1;
}
elseif ($row1_RIL_num > $row2_RIL_num) {
  return 1;
}
else {
  return 0;
}';
/* Contextual filter: Chado Organism: Genus */
$handler->display->display_options['arguments']['genus']['id'] = 'genus';
$handler->display->display_options['arguments']['genus']['table'] = 'organism';
$handler->display->display_options['arguments']['genus']['field'] = 'genus';
$handler->display->display_options['arguments']['genus']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['genus']['title'] = '%1 RILs (Recombinant Imbred Lines)';
$handler->display->display_options['arguments']['genus']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['genus']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['genus']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['genus']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['genus']['limit'] = '0';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
  3 => 'OR',
);
/* Filter criterion: Chado Stock: Type Id */
$handler->display->display_options['filters']['type_id']['id'] = 'type_id';
$handler->display->display_options['filters']['type_id']['table'] = 'stock';
$handler->display->display_options['filters']['type_id']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id']['value'] = array(
  3967 => '3967',
);
$handler->display->display_options['filters']['type_id']['group'] = 1;
$handler->display->display_options['filters']['type_id']['expose']['operator_id'] = 'type_id_op';
$handler->display->display_options['filters']['type_id']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type_id']['expose']['description'] = 'The type of germplasm you are interested in';
$handler->display->display_options['filters']['type_id']['expose']['operator'] = 'type_id_op';
$handler->display->display_options['filters']['type_id']['expose']['identifier'] = 'type_id';
$handler->display->display_options['filters']['type_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['type_id']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['type_id']['select_optional'] = TRUE;
$handler->display->display_options['filters']['type_id']['max_length'] = '40';
/* Filter criterion: Chado Stock: Uniquename */
$handler->display->display_options['filters']['uniquename']['id'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['table'] = 'stock';
$handler->display->display_options['filters']['uniquename']['field'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['group'] = 1;
$handler->display->display_options['filters']['uniquename']['exposed'] = TRUE;
$handler->display->display_options['filters']['uniquename']['expose']['operator_id'] = 'uniquename_op';
$handler->display->display_options['filters']['uniquename']['expose']['label'] = 'KP  Accession';
$handler->display->display_options['filters']['uniquename']['expose']['description'] = 'The unique accession in KnowPulse for the germplasm you are interested in';
$handler->display->display_options['filters']['uniquename']['expose']['operator'] = 'uniquename_op';
$handler->display->display_options['filters']['uniquename']['expose']['identifier'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['uniquename']['max_length'] = '40';
/* Filter criterion: Chado Stock: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'stock';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['description'] = 'The name of the germplasm you are interested in (partial names are accepted)';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['name']['max_length'] = '40';
/* Filter criterion: Type */
$handler->display->display_options['filters']['type_id_1']['id'] = 'type_id_1';
$handler->display->display_options['filters']['type_id_1']['table'] = 'stock_relationship';
$handler->display->display_options['filters']['type_id_1']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_1']['relationship'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['filters']['type_id_1']['ui_name'] = 'Type';
$handler->display->display_options['filters']['type_id_1']['value'] = '3632';
$handler->display->display_options['filters']['type_id_1']['group'] = 2;
$handler->display->display_options['filters']['type_id_1']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id_1']['max_length'] = '40';
/* Filter criterion: Empty */
$handler->display->display_options['filters']['type_id_2']['id'] = 'type_id_2';
$handler->display->display_options['filters']['type_id_2']['table'] = 'stock_relationship';
$handler->display->display_options['filters']['type_id_2']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_2']['relationship'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['filters']['type_id_2']['ui_name'] = 'Empty';
$handler->display->display_options['filters']['type_id_2']['operator'] = 'empty';
$handler->display->display_options['filters']['type_id_2']['value'] = 'NULL';
$handler->display->display_options['filters']['type_id_2']['group'] = 2;
$handler->display->display_options['filters']['type_id_2']['max_length'] = '40';
/* Filter criterion: Type */
$handler->display->display_options['filters']['type_id_3']['id'] = 'type_id_3';
$handler->display->display_options['filters']['type_id_3']['table'] = 'stock_relationship';
$handler->display->display_options['filters']['type_id_3']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_3']['relationship'] = 'stock_id_to_stock_relationship_1';
$handler->display->display_options['filters']['type_id_3']['ui_name'] = 'Type';
$handler->display->display_options['filters']['type_id_3']['value'] = '3633';
$handler->display->display_options['filters']['type_id_3']['group'] = 3;
$handler->display->display_options['filters']['type_id_3']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id_3']['max_length'] = '40';
/* Filter criterion: Empty */
$handler->display->display_options['filters']['type_id_4']['id'] = 'type_id_4';
$handler->display->display_options['filters']['type_id_4']['table'] = 'stock_relationship';
$handler->display->display_options['filters']['type_id_4']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_4']['relationship'] = 'stock_id_to_stock_relationship_1';
$handler->display->display_options['filters']['type_id_4']['ui_name'] = 'Empty';
$handler->display->display_options['filters']['type_id_4']['operator'] = 'empty';
$handler->display->display_options['filters']['type_id_4']['value'] = 'NULL';
$handler->display->display_options['filters']['type_id_4']['group'] = 3;
$handler->display->display_options['filters']['type_id_4']['max_length'] = '40';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'search/germplasm/RILs/%';
$handler->display->display_options['menu']['title'] = 'Varieties';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-bioinformatics-main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

return $view;
}

/**
 * Defines the kp_germplasm_cross_search View
 */
function kp_defaultviews_germplasm_cross_search() {

$view = new view();
$view->name = 'kp_germplasm_cross_search';
$view->description = 'A searchable listing of germplasm from the breeding program.';
$view->tag = 'KP Search: Germplasm';
$view->base_table = 'stock';
$view->human_name = 'KP Cross Search';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Crosses';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access crosses';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'input_required';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Select any filter and click on Search to see results';
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Maternal Parent Relationship */
$handler->display->display_options['relationships']['stock_id_to_stock_relationship']['id'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship']['table'] = 'stock';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship']['field'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship']['ui_name'] = 'Maternal Parent Relationship';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship']['label'] = 'Maternal Parent Relationship';
/* Relationship: Maternal Parent */
$handler->display->display_options['relationships']['subject_id_to_stock']['id'] = 'subject_id_to_stock';
$handler->display->display_options['relationships']['subject_id_to_stock']['table'] = 'stock_relationship';
$handler->display->display_options['relationships']['subject_id_to_stock']['field'] = 'subject_id_to_stock';
$handler->display->display_options['relationships']['subject_id_to_stock']['relationship'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['relationships']['subject_id_to_stock']['ui_name'] = 'Maternal Parent';
$handler->display->display_options['relationships']['subject_id_to_stock']['label'] = 'Maternal Parent';
/* Relationship: Paternal Parent Relationship */
$handler->display->display_options['relationships']['stock_id_to_stock_relationship_1']['id'] = 'stock_id_to_stock_relationship_1';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship_1']['table'] = 'stock';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship_1']['field'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship_1']['ui_name'] = 'Paternal Parent Relationship';
$handler->display->display_options['relationships']['stock_id_to_stock_relationship_1']['label'] = 'Paternal Parent Relationship';
/* Relationship: Paternal Parent */
$handler->display->display_options['relationships']['subject_id_to_stock_1']['id'] = 'subject_id_to_stock_1';
$handler->display->display_options['relationships']['subject_id_to_stock_1']['table'] = 'stock_relationship';
$handler->display->display_options['relationships']['subject_id_to_stock_1']['field'] = 'subject_id_to_stock';
$handler->display->display_options['relationships']['subject_id_to_stock_1']['relationship'] = 'stock_id_to_stock_relationship_1';
$handler->display->display_options['relationships']['subject_id_to_stock_1']['ui_name'] = 'Paternal Parent';
$handler->display->display_options['relationships']['subject_id_to_stock_1']['label'] = 'Paternal Parent';
/* Relationship: Crossing Block Year */
$handler->display->display_options['relationships']['stock_id_to_stockprop']['id'] = 'stock_id_to_stockprop';
$handler->display->display_options['relationships']['stock_id_to_stockprop']['table'] = 'stock';
$handler->display->display_options['relationships']['stock_id_to_stockprop']['field'] = 'stock_id_to_stockprop';
$handler->display->display_options['relationships']['stock_id_to_stockprop']['ui_name'] = 'Crossing Block Year';
$handler->display->display_options['relationships']['stock_id_to_stockprop']['label'] = 'Crossing Block Year';
/* Relationship: Crossing Block Season */
$handler->display->display_options['relationships']['stock_id_to_stockprop_1']['id'] = 'stock_id_to_stockprop_1';
$handler->display->display_options['relationships']['stock_id_to_stockprop_1']['table'] = 'stock';
$handler->display->display_options['relationships']['stock_id_to_stockprop_1']['field'] = 'stock_id_to_stockprop';
$handler->display->display_options['relationships']['stock_id_to_stockprop_1']['ui_name'] = 'Crossing Block Season';
$handler->display->display_options['relationships']['stock_id_to_stockprop_1']['label'] = 'Crossing Block Season';
/* Relationship: Cross Type */
$handler->display->display_options['relationships']['type_id_to_cvterm']['id'] = 'type_id_to_cvterm';
$handler->display->display_options['relationships']['type_id_to_cvterm']['table'] = 'stock';
$handler->display->display_options['relationships']['type_id_to_cvterm']['field'] = 'type_id_to_cvterm';
$handler->display->display_options['relationships']['type_id_to_cvterm']['ui_name'] = 'Cross Type';
$handler->display->display_options['relationships']['type_id_to_cvterm']['label'] = 'Cross Type';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
/* Field: Chado Stock: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'stock';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = 'Cross Number';
$handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['path'] = '[nid]';
/* Field: Chado Stock: Uniquename */
$handler->display->display_options['fields']['uniquename']['id'] = 'uniquename';
$handler->display->display_options['fields']['uniquename']['table'] = 'stock';
$handler->display->display_options['fields']['uniquename']['field'] = 'uniquename';
$handler->display->display_options['fields']['uniquename']['label'] = 'KP Accession';
$handler->display->display_options['fields']['uniquename']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['uniquename']['alter']['path'] = '[nid]';
/* Field: Cross Type */
$handler->display->display_options['fields']['name_3']['id'] = 'name_3';
$handler->display->display_options['fields']['name_3']['table'] = 'cvterm';
$handler->display->display_options['fields']['name_3']['field'] = 'name';
$handler->display->display_options['fields']['name_3']['relationship'] = 'type_id_to_cvterm';
$handler->display->display_options['fields']['name_3']['ui_name'] = 'Cross Type';
$handler->display->display_options['fields']['name_3']['label'] = 'Cross Type';
/* Field: Value */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'stockprop';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['relationship'] = 'stock_id_to_stockprop';
$handler->display->display_options['fields']['value']['ui_name'] = 'Value';
$handler->display->display_options['fields']['value']['label'] = 'Crossing Block Year';
/* Field: Value */
$handler->display->display_options['fields']['value_1']['id'] = 'value_1';
$handler->display->display_options['fields']['value_1']['table'] = 'stockprop';
$handler->display->display_options['fields']['value_1']['field'] = 'value';
$handler->display->display_options['fields']['value_1']['relationship'] = 'stock_id_to_stockprop_1';
$handler->display->display_options['fields']['value_1']['ui_name'] = 'Value';
$handler->display->display_options['fields']['value_1']['label'] = 'Crossing Block Season';
/* Field: Chado Stock: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'stock';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'subject_id_to_stock';
$handler->display->display_options['fields']['name']['label'] = 'Maternal Parent';
/* Field: Chado Stock: Name */
$handler->display->display_options['fields']['name_2']['id'] = 'name_2';
$handler->display->display_options['fields']['name_2']['table'] = 'stock';
$handler->display->display_options['fields']['name_2']['field'] = 'name';
$handler->display->display_options['fields']['name_2']['relationship'] = 'subject_id_to_stock_1';
$handler->display->display_options['fields']['name_2']['label'] = 'Paternal Parent';
/* Sort criterion: Year */
$handler->display->display_options['sorts']['value']['id'] = 'value';
$handler->display->display_options['sorts']['value']['table'] = 'stockprop';
$handler->display->display_options['sorts']['value']['field'] = 'value';
$handler->display->display_options['sorts']['value']['relationship'] = 'stock_id_to_stockprop';
$handler->display->display_options['sorts']['value']['ui_name'] = 'Year';
$handler->display->display_options['sorts']['value']['order'] = 'DESC';
/* Sort criterion: Season */
$handler->display->display_options['sorts']['value_1']['id'] = 'value_1';
$handler->display->display_options['sorts']['value_1']['table'] = 'stockprop';
$handler->display->display_options['sorts']['value_1']['field'] = 'value';
$handler->display->display_options['sorts']['value_1']['relationship'] = 'stock_id_to_stockprop_1';
$handler->display->display_options['sorts']['value_1']['ui_name'] = 'Season';
/* Sort criterion: Chado Stock: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'stock';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Contextual filter: Chado Organism: Genus */
$handler->display->display_options['arguments']['genus']['id'] = 'genus';
$handler->display->display_options['arguments']['genus']['table'] = 'organism';
$handler->display->display_options['arguments']['genus']['field'] = 'genus';
$handler->display->display_options['arguments']['genus']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['genus']['title'] = '%1 Crosses';
$handler->display->display_options['arguments']['genus']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['genus']['breadcrumb'] = '%1 Crosses';
$handler->display->display_options['arguments']['genus']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['genus']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['genus']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['genus']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['genus']['limit'] = '0';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  4 => 'AND',
  3 => 'OR',
  2 => 'OR',
);
/* Filter criterion: Chado Stock: Type Id */
$handler->display->display_options['filters']['type_id']['id'] = 'type_id';
$handler->display->display_options['filters']['type_id']['table'] = 'stock';
$handler->display->display_options['filters']['type_id']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id']['value'] = array(
  3627 => '3627',
  3661 => '3661',
  3662 => '3662',
  3626 => '3626',
  3660 => '3660',
);
$handler->display->display_options['filters']['type_id']['group'] = 1;
$handler->display->display_options['filters']['type_id']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['type_id']['max_length'] = '40';
/* Filter criterion: Type */
$handler->display->display_options['filters']['type_id_1']['id'] = 'type_id_1';
$handler->display->display_options['filters']['type_id_1']['table'] = 'stockprop';
$handler->display->display_options['filters']['type_id_1']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_1']['relationship'] = 'stock_id_to_stockprop';
$handler->display->display_options['filters']['type_id_1']['ui_name'] = 'Type';
$handler->display->display_options['filters']['type_id_1']['value'] = '3663';
$handler->display->display_options['filters']['type_id_1']['group'] = 1;
$handler->display->display_options['filters']['type_id_1']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id_1']['max_length'] = '40';
/* Filter criterion: Type */
$handler->display->display_options['filters']['type_id_2']['id'] = 'type_id_2';
$handler->display->display_options['filters']['type_id_2']['table'] = 'stockprop';
$handler->display->display_options['filters']['type_id_2']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_2']['relationship'] = 'stock_id_to_stockprop_1';
$handler->display->display_options['filters']['type_id_2']['ui_name'] = 'Type';
$handler->display->display_options['filters']['type_id_2']['value'] = '3664';
$handler->display->display_options['filters']['type_id_2']['group'] = 1;
$handler->display->display_options['filters']['type_id_2']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id_2']['max_length'] = '40';
/* Filter criterion: Type */
$handler->display->display_options['filters']['name_1']['id'] = 'name_1';
$handler->display->display_options['filters']['name_1']['table'] = 'cvterm';
$handler->display->display_options['filters']['name_1']['field'] = 'name';
$handler->display->display_options['filters']['name_1']['relationship'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['filters']['name_1']['ui_name'] = 'Type';
$handler->display->display_options['filters']['name_1']['value'] = 'is_maternal_parent_of';
$handler->display->display_options['filters']['name_1']['group'] = 2;
$handler->display->display_options['filters']['name_1']['values_form_type'] = 'select';
$handler->display->display_options['filters']['name_1']['max_length'] = '40';
/* Filter criterion: Empty */
$handler->display->display_options['filters']['type_id_3']['id'] = 'type_id_3';
$handler->display->display_options['filters']['type_id_3']['table'] = 'stock_relationship';
$handler->display->display_options['filters']['type_id_3']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_3']['relationship'] = 'stock_id_to_stock_relationship';
$handler->display->display_options['filters']['type_id_3']['ui_name'] = 'Empty';
$handler->display->display_options['filters']['type_id_3']['operator'] = 'empty';
$handler->display->display_options['filters']['type_id_3']['value'] = 'NULL';
$handler->display->display_options['filters']['type_id_3']['group'] = 2;
$handler->display->display_options['filters']['type_id_3']['max_length'] = '40';
/* Filter criterion: Type */
$handler->display->display_options['filters']['name_2']['id'] = 'name_2';
$handler->display->display_options['filters']['name_2']['table'] = 'cvterm';
$handler->display->display_options['filters']['name_2']['field'] = 'name';
$handler->display->display_options['filters']['name_2']['relationship'] = 'stock_id_to_stock_relationship_1';
$handler->display->display_options['filters']['name_2']['ui_name'] = 'Type';
$handler->display->display_options['filters']['name_2']['value'] = 'is_paternal_parent_of';
$handler->display->display_options['filters']['name_2']['group'] = 3;
$handler->display->display_options['filters']['name_2']['values_form_type'] = 'select';
$handler->display->display_options['filters']['name_2']['max_length'] = '40';
/* Filter criterion: Empty */
$handler->display->display_options['filters']['type_id_4']['id'] = 'type_id_4';
$handler->display->display_options['filters']['type_id_4']['table'] = 'stock_relationship';
$handler->display->display_options['filters']['type_id_4']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_4']['relationship'] = 'stock_id_to_stock_relationship_1';
$handler->display->display_options['filters']['type_id_4']['ui_name'] = 'Empty';
$handler->display->display_options['filters']['type_id_4']['operator'] = 'empty';
$handler->display->display_options['filters']['type_id_4']['value'] = 'NULL';
$handler->display->display_options['filters']['type_id_4']['group'] = 3;
$handler->display->display_options['filters']['type_id_4']['max_length'] = '40';
/* Filter criterion: Value */
$handler->display->display_options['filters']['value']['id'] = 'value';
$handler->display->display_options['filters']['value']['table'] = 'stockprop';
$handler->display->display_options['filters']['value']['field'] = 'value';
$handler->display->display_options['filters']['value']['relationship'] = 'stock_id_to_stockprop';
$handler->display->display_options['filters']['value']['ui_name'] = 'Value';
$handler->display->display_options['filters']['value']['group'] = 4;
$handler->display->display_options['filters']['value']['exposed'] = TRUE;
$handler->display->display_options['filters']['value']['expose']['operator_id'] = 'value_op';
$handler->display->display_options['filters']['value']['expose']['label'] = 'Crossing Block Year';
$handler->display->display_options['filters']['value']['expose']['description'] = 'The year the cross was produced in';
$handler->display->display_options['filters']['value']['expose']['operator'] = 'value_op';
$handler->display->display_options['filters']['value']['expose']['identifier'] = 'crossblock_year';
$handler->display->display_options['filters']['value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Value */
$handler->display->display_options['filters']['value_1']['id'] = 'value_1';
$handler->display->display_options['filters']['value_1']['table'] = 'stockprop';
$handler->display->display_options['filters']['value_1']['field'] = 'value';
$handler->display->display_options['filters']['value_1']['relationship'] = 'stock_id_to_stockprop_1';
$handler->display->display_options['filters']['value_1']['ui_name'] = 'Value';
$handler->display->display_options['filters']['value_1']['group'] = 4;
$handler->display->display_options['filters']['value_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['value_1']['expose']['operator_id'] = 'value_1_op';
$handler->display->display_options['filters']['value_1']['expose']['label'] = 'Crossing Block Season';
$handler->display->display_options['filters']['value_1']['expose']['description'] = 'The season the cross was produced in';
$handler->display->display_options['filters']['value_1']['expose']['operator'] = 'value_1_op';
$handler->display->display_options['filters']['value_1']['expose']['identifier'] = 'crossblock_season';
$handler->display->display_options['filters']['value_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Chado Stock: Uniquename */
$handler->display->display_options['filters']['uniquename']['id'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['table'] = 'stock';
$handler->display->display_options['filters']['uniquename']['field'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['group'] = 4;
$handler->display->display_options['filters']['uniquename']['exposed'] = TRUE;
$handler->display->display_options['filters']['uniquename']['expose']['operator_id'] = 'uniquename_op';
$handler->display->display_options['filters']['uniquename']['expose']['label'] = 'KP  Accession';
$handler->display->display_options['filters']['uniquename']['expose']['description'] = 'The unique accession in KnowPulse for the cross you are interested in';
$handler->display->display_options['filters']['uniquename']['expose']['operator'] = 'uniquename_op';
$handler->display->display_options['filters']['uniquename']['expose']['identifier'] = 'uniquename';
$handler->display->display_options['filters']['uniquename']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['uniquename']['max_length'] = '40';
/* Filter criterion: Chado Stock: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'stock';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 4;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Cross Number';
$handler->display->display_options['filters']['name']['expose']['description'] = 'The cross number of the cross you are interested in (partial cross numbers are accepted)';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['name']['max_length'] = '40';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'search/germplasm/crosses/%';
$handler->display->display_options['menu']['title'] = 'Varieties';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-bioinformatics-main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

return $view;
}