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
      'spaces_og_selective' => '2',
      'spaces_og_register' => 0,
      'spaces_og_directory' => 0,
      'spaces_og_private' => 0,
      'spaces_features' => array(
        'atrium_blog' => '0',
        'atrium_book' => '1',
        'atrium_calendar' => '1',
        'atrium_casetracker' => '0',
        'atrium_members' => '0',
        'atrium_shoutbox' => '0',
        'spaces_dashboard' => '1',
      ),
      'spaces_setting_home' => 'dashboard',
      'site_frontpage' => 'dashboard',
      'menu_primary_links_source' => 'menu-portal',
      'menu_default_node_menu' => 'menu-portal',
      'designkit_color' => array(
        'background' => '#9933aa',
      ),
      'designkit_image' => array(
        'logo' => 0,
      ),
    ),
    'context' => array(
      'spaces_dashboard-custom-1:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-2:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-3:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-4:reaction:block' => array(
        'blocks' => array(),
      ),
      'spaces_dashboard-custom-5:reaction:block' => array(
        'blocks' => array(),
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Portal Group');
  t('Turn a group into a public portal. All users may view public content from this group. Users must request to join this group.');

  $export['ob_atrium_portal'] = $spaces_presets;
  return $export;
}
