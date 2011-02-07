<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ob_atrium_portal_group_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "spaces" && $api == "spaces") {
    return array("version" => 3);
  }
}
