<?php

/**
 * Implementation of hook_spaces_presets().
 */
function ob_atrium_portal_group_spaces_presets() {
  $export = array();
  $spaces_presets = new stdClass;
  $spaces_presets->disabled = FALSE; /* Edit this to true to make a default spaces_presets disabled initially */
  $spaces_presets->api_version = 3;
  $spaces_presets->name = 'ob_atrium_portal';
  $spaces_presets->title = 'Portal Group';
  $spaces_presets->description = 'Turn a group into a public portal. All users may view public content from this group. Users must request to join this group.';
  $spaces_presets->space_type = 'og';
  $spaces_presets->value = array(
    'variable' => array(
      'spaces_og_selective' => '1',
      'spaces_og_register' => 1,
      'spaces_og_directory' => 1,
      'spaces_og_private' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Portal Group');
  t('Turn a group into a public portal. All users may view public content from this group. Users must request to join this group.');

  $export['ob_atrium_portal'] = $spaces_presets;
  return $export;
}
