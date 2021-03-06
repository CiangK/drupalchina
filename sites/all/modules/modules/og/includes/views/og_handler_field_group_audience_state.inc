<?php
// $Id: og_handler_field_group_audience_state.inc,v 1.1.2.1 2010/12/15 09:14:11 amitaibu Exp $
/**
 * @file
 * Contains the group field handler for field group audience - state.
 */

/**
 * Field group audience - "state" field handler.
 */
class og_handler_field_group_audience_state extends views_handler_field {

  function render($values) {
    $states = og_group_content_states();
    return $states[$values->{$this->field_alias}];
  }
}
