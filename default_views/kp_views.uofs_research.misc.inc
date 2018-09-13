<?php

/**
 * @file
 * Default views with
 *  - Tag = UofS Research
 */

/**
 * Defines the uofs_publications View
 */
function kp_defaultviews_uofs_publications() {
  $view = new view();
  $view->name = 'uofs_publications_tripal_3';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'TPUB__0000002';
  $view->human_name = 'UofS Publications Tripal 3';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Publication: Entity ID */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'TPUB__0000002';
  $handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  /* Field: Publication: Citation */
  $handler->display->display_options['fields']['tpub__citation']['id'] = 'tpub__citation';
  $handler->display->display_options['fields']['tpub__citation']['table'] = 'TPUB__0000002';
  $handler->display->display_options['fields']['tpub__citation']['field'] = 'tpub__citation';
  $handler->display->display_options['fields']['tpub__citation']['label'] = '';
  $handler->display->display_options['fields']['tpub__citation']['alter']['path'] = 'publication/[entity_id]';
  $handler->display->display_options['fields']['tpub__citation']['element_label_colon'] = FALSE;
  /* Field: Publication: Entity ID */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'TPUB__0000002';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_1']['alter']['text'] = '<br /><a href="../publication/[entity_id]">More Information</a>';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE;
  /* Filter criterion: Publication: Publication Year */
  $handler->display->display_options['filters']['tpub__year']['id'] = 'tpub__year';
  $handler->display->display_options['filters']['tpub__year']['table'] = 'TPUB__0000002';
  $handler->display->display_options['filters']['tpub__year']['field'] = 'tpub__year';
  $handler->display->display_options['filters']['tpub__year']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tpub__year']['expose']['operator_id'] = 'tpub__year_op';
  $handler->display->display_options['filters']['tpub__year']['expose']['label'] = 'Year Published';
  $handler->display->display_options['filters']['tpub__year']['expose']['description'] = 'The year the article was published in';
  $handler->display->display_options['filters']['tpub__year']['expose']['operator'] = 'tpub__year_op';
  $handler->display->display_options['filters']['tpub__year']['expose']['identifier'] = 'pyear';
  $handler->display->display_options['filters']['tpub__year']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'research/publications';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Publications';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-our-research';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  return $view;
}

/**
 * Defines the uofs_projects View
 */
function kp_defaultviews_uofs_projects() {

$view = new view();
$view->name = 'uofs_projects';
$view->description = '';
$view->tag = 'UofS Research';
$view->base_table = 'project';
$view->human_name = 'UofS Projects';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Project: Project => Node */
$handler->display->display_options['relationships']['project_id']['id'] = 'project_id';
$handler->display->display_options['relationships']['project_id']['table'] = 'chado_project';
$handler->display->display_options['relationships']['project_id']['field'] = 'project_id';
/* Relationship: Chado Project: project_id => Projectprop */
$handler->display->display_options['relationships']['project_id_to_projectprop']['id'] = 'project_id_to_projectprop';
$handler->display->display_options['relationships']['project_id_to_projectprop']['table'] = 'project';
$handler->display->display_options['relationships']['project_id_to_projectprop']['field'] = 'project_id_to_projectprop';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_date_month_year']['id'] = 'field_date_month_year';
$handler->display->display_options['fields']['field_date_month_year']['table'] = 'field_data_field_date_month_year';
$handler->display->display_options['fields']['field_date_month_year']['field'] = 'field_date_month_year';
$handler->display->display_options['fields']['field_date_month_year']['relationship'] = 'project_id';
$handler->display->display_options['fields']['field_date_month_year']['label'] = '';
$handler->display->display_options['fields']['field_date_month_year']['element_class'] = 'project-date';
$handler->display->display_options['fields']['field_date_month_year']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date_month_year']['settings'] = array(
  'format_type' => 'month_year_granularity',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
);
/* Field: Chado Project: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'project';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = 'node/[nid]';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Description */
$handler->display->display_options['fields']['value']['id'] = 'value';
$handler->display->display_options['fields']['value']['table'] = 'projectprop';
$handler->display->display_options['fields']['value']['field'] = 'value';
$handler->display->display_options['fields']['value']['relationship'] = 'project_id_to_projectprop';
$handler->display->display_options['fields']['value']['ui_name'] = 'Description';
$handler->display->display_options['fields']['value']['label'] = '';
$handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
/* Field: Content: Related Species */
$handler->display->display_options['fields']['field_organism']['id'] = 'field_organism';
$handler->display->display_options['fields']['field_organism']['table'] = 'field_data_field_organism';
$handler->display->display_options['fields']['field_organism']['field'] = 'field_organism';
$handler->display->display_options['fields']['field_organism']['relationship'] = 'project_id';
$handler->display->display_options['fields']['field_organism']['label'] = '';
$handler->display->display_options['fields']['field_organism']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_organism']['settings'] = array(
  'link' => 1,
);
/* Field: Content: Research Area */
$handler->display->display_options['fields']['field_research_area']['id'] = 'field_research_area';
$handler->display->display_options['fields']['field_research_area']['table'] = 'field_data_field_research_area';
$handler->display->display_options['fields']['field_research_area']['field'] = 'field_research_area';
$handler->display->display_options['fields']['field_research_area']['relationship'] = 'project_id';
$handler->display->display_options['fields']['field_research_area']['label'] = '';
$handler->display->display_options['fields']['field_research_area']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_research_area']['settings'] = array(
  'link' => 1,
);
/* Sort criterion: Content: Date - end date (field_date_month_year:value2) */
$handler->display->display_options['sorts']['field_date_month_year_value2']['id'] = 'field_date_month_year_value2';
$handler->display->display_options['sorts']['field_date_month_year_value2']['table'] = 'field_data_field_date_month_year';
$handler->display->display_options['sorts']['field_date_month_year_value2']['field'] = 'field_date_month_year_value2';
$handler->display->display_options['sorts']['field_date_month_year_value2']['relationship'] = 'project_id';
$handler->display->display_options['sorts']['field_date_month_year_value2']['order'] = 'DESC';
/* Sort criterion: Chado Project: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'project';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Contextual filter: Content: Related Species (field_organism) */
$handler->display->display_options['arguments']['field_organism_target_id']['id'] = 'field_organism_target_id';
$handler->display->display_options['arguments']['field_organism_target_id']['table'] = 'field_data_field_organism';
$handler->display->display_options['arguments']['field_organism_target_id']['field'] = 'field_organism_target_id';
$handler->display->display_options['arguments']['field_organism_target_id']['relationship'] = 'project_id';
$handler->display->display_options['arguments']['field_organism_target_id']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_organism_target_id']['title'] = '%1 Projects';
$handler->display->display_options['arguments']['field_organism_target_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_organism_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_organism_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_organism_target_id']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Content: Research Area (field_research_area) */
$handler->display->display_options['arguments']['field_research_area_target_id']['id'] = 'field_research_area_target_id';
$handler->display->display_options['arguments']['field_research_area_target_id']['table'] = 'field_data_field_research_area';
$handler->display->display_options['arguments']['field_research_area_target_id']['field'] = 'field_research_area_target_id';
$handler->display->display_options['arguments']['field_research_area_target_id']['relationship'] = 'project_id';
$handler->display->display_options['arguments']['field_research_area_target_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_research_area_target_id']['summary']['format'] = 'default_summary';
/* Filter criterion: Chado Cvterm: Name */
$handler->display->display_options['filters']['name_1']['id'] = 'name_1';
$handler->display->display_options['filters']['name_1']['table'] = 'cvterm';
$handler->display->display_options['filters']['name_1']['field'] = 'name';
$handler->display->display_options['filters']['name_1']['relationship'] = 'project_id_to_projectprop';
$handler->display->display_options['filters']['name_1']['value'] = 'project_description';
$handler->display->display_options['filters']['name_1']['group'] = 1;
/* Filter criterion: Content: Related Species (field_organism) */
$handler->display->display_options['filters']['field_organism_target_id']['id'] = 'field_organism_target_id';
$handler->display->display_options['filters']['field_organism_target_id']['table'] = 'field_data_field_organism';
$handler->display->display_options['filters']['field_organism_target_id']['field'] = 'field_organism_target_id';
$handler->display->display_options['filters']['field_organism_target_id']['relationship'] = 'project_id';
$handler->display->display_options['filters']['field_organism_target_id']['group'] = 1;
$handler->display->display_options['filters']['field_organism_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_organism_target_id']['expose']['operator_id'] = 'field_organism_target_id_op';
$handler->display->display_options['filters']['field_organism_target_id']['expose']['label'] = 'Species';
$handler->display->display_options['filters']['field_organism_target_id']['expose']['operator'] = 'field_organism_target_id_op';
$handler->display->display_options['filters']['field_organism_target_id']['expose']['identifier'] = 'field_organism_target_id';
$handler->display->display_options['filters']['field_organism_target_id']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_organism_target_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Content: Research Area (field_research_area) */
$handler->display->display_options['filters']['field_research_area_target_id']['id'] = 'field_research_area_target_id';
$handler->display->display_options['filters']['field_research_area_target_id']['table'] = 'field_data_field_research_area';
$handler->display->display_options['filters']['field_research_area_target_id']['field'] = 'field_research_area_target_id';
$handler->display->display_options['filters']['field_research_area_target_id']['relationship'] = 'project_id';
$handler->display->display_options['filters']['field_research_area_target_id']['group'] = 1;
$handler->display->display_options['filters']['field_research_area_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['operator_id'] = 'field_research_area_target_id_op';
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['label'] = 'Research Program';
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['operator'] = 'field_research_area_target_id_op';
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['identifier'] = 'field_research_area_target_id';
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Chado Project: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'project';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name Contains';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['name']['max_length'] = '40';
/* Filter criterion: Content: Type (field_project_type) */
$handler->display->display_options['filters']['field_project_type_value']['id'] = 'field_project_type_value';
$handler->display->display_options['filters']['field_project_type_value']['table'] = 'field_data_field_project_type';
$handler->display->display_options['filters']['field_project_type_value']['field'] = 'field_project_type_value';
$handler->display->display_options['filters']['field_project_type_value']['relationship'] = 'project_id';
$handler->display->display_options['filters']['field_project_type_value']['value'] = array(
  'main' => 'main',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Projects';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Research Area (field_research_area) */
$handler->display->display_options['arguments']['field_research_area_target_id']['id'] = 'field_research_area_target_id';
$handler->display->display_options['arguments']['field_research_area_target_id']['table'] = 'field_data_field_research_area';
$handler->display->display_options['arguments']['field_research_area_target_id']['field'] = 'field_research_area_target_id';
$handler->display->display_options['arguments']['field_research_area_target_id']['relationship'] = 'project_id';
$handler->display->display_options['arguments']['field_research_area_target_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_research_area_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['path'] = 'research/projects';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Projects';
$handler->display->display_options['menu']['name'] = 'menu-our-research';

/* Display: Species Projects */
$handler = $view->new_display('block', 'Species Projects', 'block_1');
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Related Species (field_organism) */
$handler->display->display_options['arguments']['field_organism_target_id']['id'] = 'field_organism_target_id';
$handler->display->display_options['arguments']['field_organism_target_id']['table'] = 'field_data_field_organism';
$handler->display->display_options['arguments']['field_organism_target_id']['field'] = 'field_organism_target_id';
$handler->display->display_options['arguments']['field_organism_target_id']['relationship'] = 'project_id';
$handler->display->display_options['arguments']['field_organism_target_id']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_organism_target_id']['title'] = '%1 Projects';
$handler->display->display_options['arguments']['field_organism_target_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_organism_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_organism_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_organism_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Chado Cvterm: Name */
$handler->display->display_options['filters']['name_1']['id'] = 'name_1';
$handler->display->display_options['filters']['name_1']['table'] = 'cvterm';
$handler->display->display_options['filters']['name_1']['field'] = 'name';
$handler->display->display_options['filters']['name_1']['relationship'] = 'project_id_to_projectprop';
$handler->display->display_options['filters']['name_1']['value'] = 'project_description';
$handler->display->display_options['filters']['name_1']['group'] = 1;
/* Filter criterion: Chado Project: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'project';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name Contains';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['name']['max_length'] = '40';
/* Filter criterion: Content: Research Area (field_research_area) */
$handler->display->display_options['filters']['field_research_area_target_id']['id'] = 'field_research_area_target_id';
$handler->display->display_options['filters']['field_research_area_target_id']['table'] = 'field_data_field_research_area';
$handler->display->display_options['filters']['field_research_area_target_id']['field'] = 'field_research_area_target_id';
$handler->display->display_options['filters']['field_research_area_target_id']['relationship'] = 'project_id';
$handler->display->display_options['filters']['field_research_area_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['operator_id'] = 'field_research_area_target_id_op';
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['label'] = 'Research Program';
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['operator'] = 'field_research_area_target_id_op';
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['identifier'] = 'field_research_area_target_id';
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_research_area_target_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);

/* Display: Research Program Projects */
$handler = $view->new_display('block', 'Research Program Projects', 'block_2');
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Research Area (field_research_area) */
$handler->display->display_options['arguments']['field_research_area_target_id']['id'] = 'field_research_area_target_id';
$handler->display->display_options['arguments']['field_research_area_target_id']['table'] = 'field_data_field_research_area';
$handler->display->display_options['arguments']['field_research_area_target_id']['field'] = 'field_research_area_target_id';
$handler->display->display_options['arguments']['field_research_area_target_id']['relationship'] = 'project_id';
$handler->display->display_options['arguments']['field_research_area_target_id']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_research_area_target_id']['title'] = '%1 Projects';
$handler->display->display_options['arguments']['field_research_area_target_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_research_area_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_research_area_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_research_area_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Chado Cvterm: Name */
$handler->display->display_options['filters']['name_1']['id'] = 'name_1';
$handler->display->display_options['filters']['name_1']['table'] = 'cvterm';
$handler->display->display_options['filters']['name_1']['field'] = 'name';
$handler->display->display_options['filters']['name_1']['relationship'] = 'project_id_to_projectprop';
$handler->display->display_options['filters']['name_1']['value'] = 'project_description';
$handler->display->display_options['filters']['name_1']['group'] = 1;
/* Filter criterion: Chado Project: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'project';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name Contains';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['name']['max_length'] = '40';
/* Filter criterion: Content: Related Species (field_organism) */
$handler->display->display_options['filters']['field_organism_target_id']['id'] = 'field_organism_target_id';
$handler->display->display_options['filters']['field_organism_target_id']['table'] = 'field_data_field_organism';
$handler->display->display_options['filters']['field_organism_target_id']['field'] = 'field_organism_target_id';
$handler->display->display_options['filters']['field_organism_target_id']['relationship'] = 'project_id';
$handler->display->display_options['filters']['field_organism_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_organism_target_id']['expose']['operator_id'] = 'field_organism_target_id_op';
$handler->display->display_options['filters']['field_organism_target_id']['expose']['label'] = 'Species';
$handler->display->display_options['filters']['field_organism_target_id']['expose']['operator'] = 'field_organism_target_id_op';
$handler->display->display_options['filters']['field_organism_target_id']['expose']['identifier'] = 'field_organism_target_id';
$handler->display->display_options['filters']['field_organism_target_id']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_organism_target_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);

  return $view;
}

/**
 * Defines the uofs_research_areas View
 */
function kp_defaultviews_uofs_research_areas() {

$view = new view();
$view->name = 'uofs_research_areas';
$view->description = '';
$view->tag = 'UofS Research';
$view->base_table = 'node';
$view->human_name = 'UofS Research Areas';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'UofS Research Areas';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'fluid_grid';
$handler->display->display_options['style_options']['items_width'] = '300';
$handler->display->display_options['style_options']['items_height'] = '250';
$handler->display->display_options['style_options']['advanced_layout'] = array(
  'align' => TRUE,
);
$handler->display->display_options['style_options']['list_alignment'] = 'left';
$handler->display->display_options['style_options']['items_alignment'] = 'center';
$handler->display->display_options['style_options']['box_shadow'] = '0';
$handler->display->display_options['style_options']['border_radius'] = '0';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Research Area Thumnail */
$handler->display->display_options['fields']['field_page_thumnail']['id'] = 'field_page_thumnail';
$handler->display->display_options['fields']['field_page_thumnail']['table'] = 'field_data_field_page_thumnail';
$handler->display->display_options['fields']['field_page_thumnail']['field'] = 'field_page_thumnail';
$handler->display->display_options['fields']['field_page_thumnail']['label'] = '';
$handler->display->display_options['fields']['field_page_thumnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_page_thumnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_page_thumnail']['settings'] = array(
  'image_style' => 'medium',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'uofs_research_area' => 'uofs_research_area',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'research/programs';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Research Programs';
$handler->display->display_options['menu']['name'] = 'menu-our-research';

  return $view;
}
