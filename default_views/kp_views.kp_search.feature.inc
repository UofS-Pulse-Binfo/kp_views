<?php

/**
 * @file
 * Default views with
 *  - Tag = KP Search
 *  - base_table = feature
 */

/**
 * Defines the kp_sequence_search View
 */
function kp_defaultviews_sequence_search() {

$view = new view();
$view->name = 'kp_sequence_search';
$view->description = 'Main search for features with residues.';
$view->tag = 'KP Search';
$view->base_table = 'feature';
$view->human_name = 'KP Sequence Search';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Sequence Data';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'input_required';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Narrow down the sequences displayed by setting any of the above options. If you would like to browse all sequences in KnowPulse then click "Search" with the defaults selected.';
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['style_plugin'] = 'table';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'Narrow down the sequences displayed by setting any of the above options. If you would like to browse all sequences in KnowPulse then click "Search" with the defaults selected.';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Relationship: Feature to Project Feature */
$handler->display->display_options['relationships']['feature_id_to_project_feature']['id'] = 'feature_id_to_project_feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['table'] = 'feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['field'] = 'feature_id_to_project_feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['ui_name'] = 'Feature to Project Feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['label'] = 'Project Feature';
/* Relationship: Project Feature to Project */
$handler->display->display_options['relationships']['project_id_to_project']['id'] = 'project_id_to_project';
$handler->display->display_options['relationships']['project_id_to_project']['table'] = 'project_feature';
$handler->display->display_options['relationships']['project_id_to_project']['field'] = 'project_id_to_project';
$handler->display->display_options['relationships']['project_id_to_project']['relationship'] = 'feature_id_to_project_feature';
$handler->display->display_options['relationships']['project_id_to_project']['ui_name'] = 'Project Feature to Project';
$handler->display->display_options['relationships']['project_id_to_project']['label'] = 'Project';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Node URL */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['ui_name'] = 'Node URL';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['text'] = 'node/[nid]';
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
/* Field: Chado Feature: Feature Id */
$handler->display->display_options['fields']['feature_id']['id'] = 'feature_id';
$handler->display->display_options['fields']['feature_id']['table'] = 'feature';
$handler->display->display_options['fields']['feature_id']['field'] = 'feature_id';
$handler->display->display_options['fields']['feature_id']['exclude'] = TRUE;
/* Field: Chado Feature: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'feature';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['path'] = '[nid_1]';
/* Field: Chado Cvterm: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'cvterm';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Type';
$handler->display->display_options['fields']['name']['alter']['target'] = '_blank';
/* Field: Chado Organism: Genus */
$handler->display->display_options['fields']['genus']['id'] = 'genus';
$handler->display->display_options['fields']['genus']['table'] = 'organism';
$handler->display->display_options['fields']['genus']['field'] = 'genus';
$handler->display->display_options['fields']['genus']['exclude'] = TRUE;
/* Field: Chado Organism: Species */
$handler->display->display_options['fields']['species']['id'] = 'species';
$handler->display->display_options['fields']['species']['table'] = 'organism';
$handler->display->display_options['fields']['species']['field'] = 'species';
$handler->display->display_options['fields']['species']['label'] = 'Source Species';
$handler->display->display_options['fields']['species']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['species']['alter']['text'] = '[genus] [species]';
/* Field: Chado Feature: Seqlen */
$handler->display->display_options['fields']['seqlen']['id'] = 'seqlen';
$handler->display->display_options['fields']['seqlen']['table'] = 'feature';
$handler->display->display_options['fields']['seqlen']['field'] = 'seqlen';
$handler->display->display_options['fields']['seqlen']['label'] = 'Sequence Length';
/* Sort criterion: Chado Organism: Genus */
$handler->display->display_options['sorts']['genus']['id'] = 'genus';
$handler->display->display_options['sorts']['genus']['table'] = 'organism';
$handler->display->display_options['sorts']['genus']['field'] = 'genus';
/* Sort criterion: Chado Cvterm: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'cvterm';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Sort criterion: Chado Feature: Name */
$handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
$handler->display->display_options['sorts']['name_1']['table'] = 'feature';
$handler->display->display_options['sorts']['name_1']['field'] = 'name';
/* Filter criterion: Feature Sequence */
$handler->display->display_options['filters']['residues']['id'] = 'residues';
$handler->display->display_options['filters']['residues']['table'] = 'feature';
$handler->display->display_options['filters']['residues']['field'] = 'residues';
$handler->display->display_options['filters']['residues']['ui_name'] = 'Feature Sequence';
$handler->display->display_options['filters']['residues']['operator'] = 'longerthan';
$handler->display->display_options['filters']['residues']['value'] = '5';
$handler->display->display_options['filters']['residues']['group'] = 1;
/* Filter criterion: Organism Genus */
$handler->display->display_options['filters']['genus']['id'] = 'genus';
$handler->display->display_options['filters']['genus']['table'] = 'organism';
$handler->display->display_options['filters']['genus']['field'] = 'genus';
$handler->display->display_options['filters']['genus']['ui_name'] = 'Organism Genus';
$handler->display->display_options['filters']['genus']['value'] = array(
  'All' => 'All',
);
$handler->display->display_options['filters']['genus']['group'] = 1;
$handler->display->display_options['filters']['genus']['exposed'] = TRUE;
$handler->display->display_options['filters']['genus']['expose']['operator_id'] = 'genus_op';
$handler->display->display_options['filters']['genus']['expose']['label'] = 'Source Genus';
$handler->display->display_options['filters']['genus']['expose']['description'] = 'The organism genus the sequence is from';
$handler->display->display_options['filters']['genus']['expose']['operator'] = 'genus_op';
$handler->display->display_options['filters']['genus']['expose']['identifier'] = 'genus';
$handler->display->display_options['filters']['genus']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['genus']['values_form_type'] = 'select';
$handler->display->display_options['filters']['genus']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['genus']['select_optional'] = TRUE;
$handler->display->display_options['filters']['genus']['max_length'] = '40';
/* Filter criterion: Organism Species */
$handler->display->display_options['filters']['species']['id'] = 'species';
$handler->display->display_options['filters']['species']['table'] = 'organism';
$handler->display->display_options['filters']['species']['field'] = 'species';
$handler->display->display_options['filters']['species']['ui_name'] = 'Organism Species';
$handler->display->display_options['filters']['species']['value'] = array(
  'All' => 'All',
);
$handler->display->display_options['filters']['species']['group'] = 1;
$handler->display->display_options['filters']['species']['exposed'] = TRUE;
$handler->display->display_options['filters']['species']['expose']['operator_id'] = 'species_op';
$handler->display->display_options['filters']['species']['expose']['label'] = 'Source Species';
$handler->display->display_options['filters']['species']['expose']['description'] = 'The organism source the sequence is from';
$handler->display->display_options['filters']['species']['expose']['operator'] = 'species_op';
$handler->display->display_options['filters']['species']['expose']['identifier'] = 'species';
$handler->display->display_options['filters']['species']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['species']['values_form_type'] = 'select';
$handler->display->display_options['filters']['species']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['species']['select_optional'] = TRUE;
$handler->display->display_options['filters']['species']['max_length'] = '40';
/* Filter criterion: Feature Type ID */
$handler->display->display_options['filters']['type_id']['id'] = 'type_id';
$handler->display->display_options['filters']['type_id']['table'] = 'feature';
$handler->display->display_options['filters']['type_id']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id']['ui_name'] = 'Feature Type ID';
$handler->display->display_options['filters']['type_id']['value'] = array(
  'All' => 'All',
);
$handler->display->display_options['filters']['type_id']['group'] = 1;
$handler->display->display_options['filters']['type_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['type_id']['expose']['operator_id'] = 'type_id_op';
$handler->display->display_options['filters']['type_id']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type_id']['expose']['description'] = 'The type of sequence';
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
/* Filter criterion: Project ID */
$handler->display->display_options['filters']['project_id']['id'] = 'project_id';
$handler->display->display_options['filters']['project_id']['table'] = 'project_feature';
$handler->display->display_options['filters']['project_id']['field'] = 'project_id';
$handler->display->display_options['filters']['project_id']['relationship'] = 'feature_id_to_project_feature';
$handler->display->display_options['filters']['project_id']['ui_name'] = 'Project ID';
$handler->display->display_options['filters']['project_id']['value'] = array();
$handler->display->display_options['filters']['project_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['project_id']['expose']['operator_id'] = 'project_id_op';
$handler->display->display_options['filters']['project_id']['expose']['label'] = 'Project';
$handler->display->display_options['filters']['project_id']['expose']['description'] = 'The project producing the sequences you are interested in';
$handler->display->display_options['filters']['project_id']['expose']['operator'] = 'project_id_op';
$handler->display->display_options['filters']['project_id']['expose']['identifier'] = 'project_id';
$handler->display->display_options['filters']['project_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['project_id']['values_form_type'] = 'select';
$handler->display->display_options['filters']['project_id']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['project_id']['max_length'] = '40';
/* Filter criterion: Feature Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'feature';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['ui_name'] = 'Feature Name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['description'] = 'The name of the sequence (partial names are accepted)';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['name']['max_length'] = '40';
/* Filter criterion: Only Sequences */
$handler->display->display_options['filters']['type_id_1']['id'] = 'type_id_1';
$handler->display->display_options['filters']['type_id_1']['table'] = 'feature';
$handler->display->display_options['filters']['type_id_1']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_1']['ui_name'] = 'Only Sequences';
$handler->display->display_options['filters']['type_id_1']['value'] = array(
  255 => '255',
  442 => '442',
  251 => '251',
  447 => '447',
  109 => '109',
);
$handler->display->display_options['filters']['type_id_1']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id_1']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['type_id_1']['select_optional'] = TRUE;
$handler->display->display_options['filters']['type_id_1']['max_length'] = '40';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'search/sequences';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Sequences';
$handler->display->display_options['menu']['name'] = 'menu-bioinformatics-resources';

  return $view;
}

/**
 * Defines the kp_variant_search View
 */
function kp_defaultviews_variant_search() {

$view = new view();
$view->name = 'kp_variant_search';
$view->description = 'Main search for features with residues.';
$view->tag = 'KP Search';
$view->base_table = 'feature';
$view->human_name = 'KP Variant Search';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Sequence Variants';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'input_required';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Narrow down the variants displayed by setting any of the above options. If you would like to browse all variants in KnowPulse then click "Search" with the defaults selected.';
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['style_plugin'] = 'table';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'Narrow down the variants displayed by setting any of the above options. If you would like to browse all variants in KnowPulse then click "Search" with the defaults selected.';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Relationship: Feature to Project Feature */
$handler->display->display_options['relationships']['feature_id_to_project_feature']['id'] = 'feature_id_to_project_feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['table'] = 'feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['field'] = 'feature_id_to_project_feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['ui_name'] = 'Feature to Project Feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['label'] = 'Project Feature';
/* Relationship: Project Feature to Project */
$handler->display->display_options['relationships']['project_id_to_project']['id'] = 'project_id_to_project';
$handler->display->display_options['relationships']['project_id_to_project']['table'] = 'project_feature';
$handler->display->display_options['relationships']['project_id_to_project']['field'] = 'project_id_to_project';
$handler->display->display_options['relationships']['project_id_to_project']['relationship'] = 'feature_id_to_project_feature';
$handler->display->display_options['relationships']['project_id_to_project']['ui_name'] = 'Project Feature to Project';
$handler->display->display_options['relationships']['project_id_to_project']['label'] = 'Project';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Node URL */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['ui_name'] = 'Node URL';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['text'] = 'node/[nid]';
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
/* Field: Chado Feature: Feature Id */
$handler->display->display_options['fields']['feature_id']['id'] = 'feature_id';
$handler->display->display_options['fields']['feature_id']['table'] = 'feature';
$handler->display->display_options['fields']['feature_id']['field'] = 'feature_id';
$handler->display->display_options['fields']['feature_id']['exclude'] = TRUE;
/* Field: Chado Feature: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'feature';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['path'] = '[nid_1]';
/* Field: Chado Cvterm: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'cvterm';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Type';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = '[nid_1]';
$handler->display->display_options['fields']['name']['alter']['target'] = '_blank';
/* Field: Chado Organism: Genus */
$handler->display->display_options['fields']['genus']['id'] = 'genus';
$handler->display->display_options['fields']['genus']['table'] = 'organism';
$handler->display->display_options['fields']['genus']['field'] = 'genus';
$handler->display->display_options['fields']['genus']['exclude'] = TRUE;
/* Field: Chado Organism: Species */
$handler->display->display_options['fields']['species']['id'] = 'species';
$handler->display->display_options['fields']['species']['table'] = 'organism';
$handler->display->display_options['fields']['species']['field'] = 'species';
$handler->display->display_options['fields']['species']['label'] = 'Source Species';
$handler->display->display_options['fields']['species']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['species']['alter']['text'] = '[genus] [species]';
/* Sort criterion: Chado Organism: Genus */
$handler->display->display_options['sorts']['genus']['id'] = 'genus';
$handler->display->display_options['sorts']['genus']['table'] = 'organism';
$handler->display->display_options['sorts']['genus']['field'] = 'genus';
/* Sort criterion: Chado Cvterm: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'cvterm';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Sort criterion: Chado Feature: Name */
$handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
$handler->display->display_options['sorts']['name_1']['table'] = 'feature';
$handler->display->display_options['sorts']['name_1']['field'] = 'name';
/* Filter criterion: Organism Genus */
$handler->display->display_options['filters']['genus']['id'] = 'genus';
$handler->display->display_options['filters']['genus']['table'] = 'organism';
$handler->display->display_options['filters']['genus']['field'] = 'genus';
$handler->display->display_options['filters']['genus']['ui_name'] = 'Organism Genus';
$handler->display->display_options['filters']['genus']['value'] = array(
  'All' => 'All',
);
$handler->display->display_options['filters']['genus']['group'] = 1;
$handler->display->display_options['filters']['genus']['exposed'] = TRUE;
$handler->display->display_options['filters']['genus']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['genus']['expose']['label'] = 'Source Genus';
$handler->display->display_options['filters']['genus']['expose']['description'] = 'The organism genus the variation was originally detected in';
$handler->display->display_options['filters']['genus']['expose']['identifier'] = 'genus';
$handler->display->display_options['filters']['genus']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['genus']['values_form_type'] = 'select';
$handler->display->display_options['filters']['genus']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['genus']['select_optional'] = TRUE;
$handler->display->display_options['filters']['genus']['max_length'] = '40';
/* Filter criterion: Organism Species */
$handler->display->display_options['filters']['species']['id'] = 'species';
$handler->display->display_options['filters']['species']['table'] = 'organism';
$handler->display->display_options['filters']['species']['field'] = 'species';
$handler->display->display_options['filters']['species']['ui_name'] = 'Organism Species';
$handler->display->display_options['filters']['species']['value'] = array(
  'All' => 'All',
);
$handler->display->display_options['filters']['species']['group'] = 1;
$handler->display->display_options['filters']['species']['exposed'] = TRUE;
$handler->display->display_options['filters']['species']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['species']['expose']['label'] = 'Source Species';
$handler->display->display_options['filters']['species']['expose']['description'] = 'The organism species the variation was originally detected in';
$handler->display->display_options['filters']['species']['expose']['identifier'] = 'species';
$handler->display->display_options['filters']['species']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['species']['values_form_type'] = 'select';
$handler->display->display_options['filters']['species']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['species']['select_optional'] = TRUE;
$handler->display->display_options['filters']['species']['max_length'] = '40';
/* Filter criterion: Feature Type ID */
$handler->display->display_options['filters']['type_id']['id'] = 'type_id';
$handler->display->display_options['filters']['type_id']['table'] = 'feature';
$handler->display->display_options['filters']['type_id']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id']['ui_name'] = 'Feature Type ID';
$handler->display->display_options['filters']['type_id']['value'] = array(
  'All' => 'All',
);
$handler->display->display_options['filters']['type_id']['group'] = 1;
$handler->display->display_options['filters']['type_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['type_id']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['type_id']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type_id']['expose']['description'] = 'The type of variant';
$handler->display->display_options['filters']['type_id']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['type_id']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['type_id']['select_optional'] = TRUE;
$handler->display->display_options['filters']['type_id']['max_length'] = '40';
/* Filter criterion: Project ID */
$handler->display->display_options['filters']['project_id']['id'] = 'project_id';
$handler->display->display_options['filters']['project_id']['table'] = 'project_feature';
$handler->display->display_options['filters']['project_id']['field'] = 'project_id';
$handler->display->display_options['filters']['project_id']['relationship'] = 'feature_id_to_project_feature';
$handler->display->display_options['filters']['project_id']['ui_name'] = 'Project ID';
$handler->display->display_options['filters']['project_id']['value'] = array();
$handler->display->display_options['filters']['project_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['project_id']['expose']['operator_id'] = 'project_id_op';
$handler->display->display_options['filters']['project_id']['expose']['label'] = 'Project';
$handler->display->display_options['filters']['project_id']['expose']['description'] = 'The project identifying the genetic variations you are interested in';
$handler->display->display_options['filters']['project_id']['expose']['operator'] = 'project_id_op';
$handler->display->display_options['filters']['project_id']['expose']['identifier'] = 'project_id';
$handler->display->display_options['filters']['project_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['project_id']['values_form_type'] = 'select';
$handler->display->display_options['filters']['project_id']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['project_id']['max_length'] = '40';
/* Filter criterion: Feature Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'feature';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['ui_name'] = 'Feature Name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['description'] = 'The name of the sequence (partial names are accepted)';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['name']['max_length'] = '40';
/* Filter criterion: Variant Types */
$handler->display->display_options['filters']['type_id_1']['id'] = 'type_id_1';
$handler->display->display_options['filters']['type_id_1']['table'] = 'feature';
$handler->display->display_options['filters']['type_id_1']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_1']['ui_name'] = 'Variant Types';
$handler->display->display_options['filters']['type_id_1']['value'] = array(
  1664 => '1664',
  1112 => '1112',
  796 => '796',
);
$handler->display->display_options['filters']['type_id_1']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id_1']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['type_id_1']['max_length'] = '40';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'search/variants';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Sequence Variants';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-bioinformatics-resources';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


  return $view;
}

/**
 * Defines the kp_marker_search View
 */
function kp_defaultviews_markers_search() {

$view = new view();
$view->name = 'kp_marker_search';
$view->description = 'Main search for features with residues.';
$view->tag = 'KP Search';
$view->base_table = 'feature';
$view->human_name = 'KP Marker Search';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Markers';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'input_required';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Narrow down the markers displayed by setting any of the above options. If you would like to browse all markers in KnowPulse then click "Search" with the defaults selected.';
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['style_plugin'] = 'table';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'Narrow down the markers displayed by setting any of the above options. If you would like to browse all markers in KnowPulse then click "Search" with the defaults selected.';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Relationship: Feature to Feature Property */
$handler->display->display_options['relationships']['feature_id_to_featureprop']['id'] = 'feature_id_to_featureprop';
$handler->display->display_options['relationships']['feature_id_to_featureprop']['table'] = 'feature';
$handler->display->display_options['relationships']['feature_id_to_featureprop']['field'] = 'feature_id_to_featureprop';
$handler->display->display_options['relationships']['feature_id_to_featureprop']['ui_name'] = 'Feature to Feature Property';
$handler->display->display_options['relationships']['feature_id_to_featureprop']['label'] = 'Marker Type';
/* Relationship: Feature to Project Feature */
$handler->display->display_options['relationships']['feature_id_to_project_feature']['id'] = 'feature_id_to_project_feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['table'] = 'feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['field'] = 'feature_id_to_project_feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['ui_name'] = 'Feature to Project Feature';
$handler->display->display_options['relationships']['feature_id_to_project_feature']['label'] = 'Project Feature';
/* Relationship: Project Feature to Project */
$handler->display->display_options['relationships']['project_id_to_project']['id'] = 'project_id_to_project';
$handler->display->display_options['relationships']['project_id_to_project']['table'] = 'project_feature';
$handler->display->display_options['relationships']['project_id_to_project']['field'] = 'project_id_to_project';
$handler->display->display_options['relationships']['project_id_to_project']['relationship'] = 'feature_id_to_project_feature';
$handler->display->display_options['relationships']['project_id_to_project']['ui_name'] = 'Project Feature to Project';
$handler->display->display_options['relationships']['project_id_to_project']['label'] = 'Project';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Node URL */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['ui_name'] = 'Node URL';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid_1']['alter']['text'] = 'node/[nid]';
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
/* Field: Chado Feature: Feature Id */
$handler->display->display_options['fields']['feature_id']['id'] = 'feature_id';
$handler->display->display_options['fields']['feature_id']['table'] = 'feature';
$handler->display->display_options['fields']['feature_id']['field'] = 'feature_id';
$handler->display->display_options['fields']['feature_id']['exclude'] = TRUE;
/* Field: Chado Feature: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'feature';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_1']['alter']['path'] = '[nid_1]';
/* Field: Chado Featureprop: Value */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'featureprop';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['relationship'] = 'feature_id_to_featureprop';
$handler->display->display_options['fields']['value']['label'] = 'Type';
/* Field: Chado Organism: Genus */
$handler->display->display_options['fields']['genus']['id'] = 'genus';
$handler->display->display_options['fields']['genus']['table'] = 'organism';
$handler->display->display_options['fields']['genus']['field'] = 'genus';
$handler->display->display_options['fields']['genus']['exclude'] = TRUE;
/* Field: Chado Organism: Species */
$handler->display->display_options['fields']['species']['id'] = 'species';
$handler->display->display_options['fields']['species']['table'] = 'organism';
$handler->display->display_options['fields']['species']['field'] = 'species';
$handler->display->display_options['fields']['species']['label'] = 'Source Species';
$handler->display->display_options['fields']['species']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['species']['alter']['text'] = '[genus] [species]';
/* Sort criterion: Chado Organism: Genus */
$handler->display->display_options['sorts']['genus']['id'] = 'genus';
$handler->display->display_options['sorts']['genus']['table'] = 'organism';
$handler->display->display_options['sorts']['genus']['field'] = 'genus';
/* Sort criterion: Chado Feature: Name */
$handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
$handler->display->display_options['sorts']['name_1']['table'] = 'feature';
$handler->display->display_options['sorts']['name_1']['field'] = 'name';
/* Filter criterion: Feature Type ID */
$handler->display->display_options['filters']['type_id_1']['id'] = 'type_id_1';
$handler->display->display_options['filters']['type_id_1']['table'] = 'feature';
$handler->display->display_options['filters']['type_id_1']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id_1']['ui_name'] = 'Feature Type ID';
$handler->display->display_options['filters']['type_id_1']['value'] = array(
  3686 => '3686',
);
$handler->display->display_options['filters']['type_id_1']['group'] = 1;
$handler->display->display_options['filters']['type_id_1']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id_1']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['type_id_1']['max_length'] = '40';
/* Filter criterion: Property Type ID */
$handler->display->display_options['filters']['type_id']['id'] = 'type_id';
$handler->display->display_options['filters']['type_id']['table'] = 'featureprop';
$handler->display->display_options['filters']['type_id']['field'] = 'type_id';
$handler->display->display_options['filters']['type_id']['relationship'] = 'feature_id_to_featureprop';
$handler->display->display_options['filters']['type_id']['ui_name'] = 'Property Type ID';
$handler->display->display_options['filters']['type_id']['value'] = array(
  3966 => '3966',
);
$handler->display->display_options['filters']['type_id']['group'] = 1;
$handler->display->display_options['filters']['type_id']['values_form_type'] = 'select';
$handler->display->display_options['filters']['type_id']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['type_id']['max_length'] = '';
/* Filter criterion: Organism Genus */
$handler->display->display_options['filters']['genus']['id'] = 'genus';
$handler->display->display_options['filters']['genus']['table'] = 'organism';
$handler->display->display_options['filters']['genus']['field'] = 'genus';
$handler->display->display_options['filters']['genus']['ui_name'] = 'Organism Genus';
$handler->display->display_options['filters']['genus']['value'] = array(
  'All' => 'All',
);
$handler->display->display_options['filters']['genus']['group'] = 1;
$handler->display->display_options['filters']['genus']['exposed'] = TRUE;
$handler->display->display_options['filters']['genus']['expose']['operator_id'] = 'genus_op';
$handler->display->display_options['filters']['genus']['expose']['label'] = 'Genus';
$handler->display->display_options['filters']['genus']['expose']['description'] = 'The organism genus the marker was developed for';
$handler->display->display_options['filters']['genus']['expose']['operator'] = 'genus_op';
$handler->display->display_options['filters']['genus']['expose']['identifier'] = 'genus';
$handler->display->display_options['filters']['genus']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['genus']['values_form_type'] = 'select';
$handler->display->display_options['filters']['genus']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['genus']['select_optional'] = TRUE;
$handler->display->display_options['filters']['genus']['max_length'] = '40';
/* Filter criterion: Organism Species */
$handler->display->display_options['filters']['species']['id'] = 'species';
$handler->display->display_options['filters']['species']['table'] = 'organism';
$handler->display->display_options['filters']['species']['field'] = 'species';
$handler->display->display_options['filters']['species']['ui_name'] = 'Organism Species';
$handler->display->display_options['filters']['species']['value'] = array(
  'All' => 'All',
);
$handler->display->display_options['filters']['species']['group'] = 1;
$handler->display->display_options['filters']['species']['exposed'] = TRUE;
$handler->display->display_options['filters']['species']['expose']['operator_id'] = 'species_op';
$handler->display->display_options['filters']['species']['expose']['label'] = 'Species';
$handler->display->display_options['filters']['species']['expose']['description'] = 'The organism species the marker was developed for';
$handler->display->display_options['filters']['species']['expose']['operator'] = 'species_op';
$handler->display->display_options['filters']['species']['expose']['identifier'] = 'species';
$handler->display->display_options['filters']['species']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['species']['values_form_type'] = 'select';
$handler->display->display_options['filters']['species']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['species']['select_optional'] = TRUE;
$handler->display->display_options['filters']['species']['max_length'] = '40';
/* Filter criterion: Property Value */
$handler->display->display_options['filters']['value']['id'] = 'value';
$handler->display->display_options['filters']['value']['table'] = 'featureprop';
$handler->display->display_options['filters']['value']['field'] = 'value';
$handler->display->display_options['filters']['value']['relationship'] = 'feature_id_to_featureprop';
$handler->display->display_options['filters']['value']['ui_name'] = 'Property Value';
$handler->display->display_options['filters']['value']['value'] = array(
  'All' => 'All',
);
$handler->display->display_options['filters']['value']['group'] = 1;
$handler->display->display_options['filters']['value']['exposed'] = TRUE;
$handler->display->display_options['filters']['value']['expose']['operator_id'] = 'value_op';
$handler->display->display_options['filters']['value']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['value']['expose']['description'] = 'The type of marker you are interested in';
$handler->display->display_options['filters']['value']['expose']['operator'] = 'value_op';
$handler->display->display_options['filters']['value']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['value']['values_form_type'] = 'select';
$handler->display->display_options['filters']['value']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['value']['select_optional'] = TRUE;
$handler->display->display_options['filters']['value']['max_length'] = '40';
/* Filter criterion: Project ID */
$handler->display->display_options['filters']['project_id']['id'] = 'project_id';
$handler->display->display_options['filters']['project_id']['table'] = 'project_feature';
$handler->display->display_options['filters']['project_id']['field'] = 'project_id';
$handler->display->display_options['filters']['project_id']['relationship'] = 'feature_id_to_project_feature';
$handler->display->display_options['filters']['project_id']['ui_name'] = 'Project ID';
$handler->display->display_options['filters']['project_id']['value'] = array();
$handler->display->display_options['filters']['project_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['project_id']['expose']['operator_id'] = 'project_id_op';
$handler->display->display_options['filters']['project_id']['expose']['label'] = 'Project';
$handler->display->display_options['filters']['project_id']['expose']['description'] = 'The project producing the markers you are interest in';
$handler->display->display_options['filters']['project_id']['expose']['operator'] = 'project_id_op';
$handler->display->display_options['filters']['project_id']['expose']['identifier'] = 'project_id';
$handler->display->display_options['filters']['project_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['project_id']['values_form_type'] = 'select';
$handler->display->display_options['filters']['project_id']['select_multiple'] = TRUE;
$handler->display->display_options['filters']['project_id']['max_length'] = '40';
/* Filter criterion: Feature Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'feature';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['ui_name'] = 'Feature Name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['description'] = 'The name of the sequence (partial names are accepted)';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['name']['max_length'] = '40';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'search/markers';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Markers';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-bioinformatics-resources';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

  return $view;
}
