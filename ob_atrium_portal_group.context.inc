<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function ob_atrium_portal_group_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout_portal';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array();
  $context->reactions = array();
  $context->condition_mode = 0;

  $export['layout_portal'] = $context;
  return $export;
}
