<?php
/**
 * @file
 * Contains tripal_views_handler_filter_select_project_id
 */

/**
 */
class tripal_views_handler_filter_select_project_id extends tripal_views_handler_filter_select_id {

  /**
   * For the SQL generating the options, determine the WHERE clauses
   *
   * @return
   *   An array of full qualified where clauses (ie: table.myfield = 'fred')
   */
  function get_select_option_where() {
    $where = parent::get_select_option_where();

    // We only know how to handle this if the base table of the view = feature
    if ($this->view->base_table == 'feature') {

      // Filters
      // --------------------
      foreach ($this->view->filter as $filter_name => $filter) {

        if (!empty($filter->value) AND !$filter->options['exposed']) {

          // First generate the simple WHERE
          if (is_array($filter->value)) {
            $nested_where = $filter->field . ' IN (' . implode(',',$filter->value) . ')';
          }
          else {
            if ($this->operator = 'longerthan') {
              $nested_where = 'LENGTH('.$filter->field.') > ' . "'" . $filter->value . "'";
            }
            else {
              $nested_where = $filter->field . $this->operator . $filter->value;
            }
          }

          // Then make it part of a sub-select
          if ($filter->table == 'feature') {
            $where[] = 'CHILD.feature_id IN (SELECT feature_id FROM {feature} WHERE ' . $nested_where . ')';
          }
        }
      }

      // Arguments
      // --------------------
      foreach ($this->view->argument as $argument_name => $argument) {
        if ($argument->table == 'organism') {

          $value = $this->view->args[ $argument->position ];
          $where[]  = 'CHILD.feature_id IN (SELECT f.feature_id FROM {feature} f LEFT JOIN {organism} o ON o.organism_id=f.organism_id WHERE o.' . $argument->field . '=' . "'" . $value . "'" . ')';
        }
      }
    }

    return $where;
  }

}
