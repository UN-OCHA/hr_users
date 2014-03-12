<?php
/**
 * @file
 * hr_users.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function hr_users_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'user:user:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '9',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3885f405-1a6b-4b93-b63c-46536abf2bd8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-21bfd4b2-e8b8-4ed0-86ef-11192594db4c';
    $pane->panel = 'left';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '21bfd4b2-e8b8-4ed0-86ef-11192594db4c';
    $display->content['new-21bfd4b2-e8b8-4ed0-86ef-11192594db4c'] = $pane;
    $display->panels['left'][0] = 'new-21bfd4b2-e8b8-4ed0-86ef-11192594db4c';
    $pane = new stdClass();
    $pane->pid = 'new-1e22a84c-4bb2-40ea-a07d-3b2243177eb6';
    $pane->panel = 'right';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'user:profile_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1e22a84c-4bb2-40ea-a07d-3b2243177eb6';
    $display->content['new-1e22a84c-4bb2-40ea-a07d-3b2243177eb6'] = $pane;
    $display->panels['right'][0] = 'new-1e22a84c-4bb2-40ea-a07d-3b2243177eb6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'user:user:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '02f76176-982f-4716-9f14-e5a3b0e42b7a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4e17e53c-fbd1-45c1-9d3f-95a74b2cd940';
    $pane->panel = 'middle';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'user:profile_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4e17e53c-fbd1-45c1-9d3f-95a74b2cd940';
    $display->content['new-4e17e53c-fbd1-45c1-9d3f-95a74b2cd940'] = $pane;
    $display->panels['middle'][0] = 'new-4e17e53c-fbd1-45c1-9d3f-95a74b2cd940';
    $pane = new stdClass();
    $pane->pid = 'new-0e54669e-59ee-4166-86a8-de2ddac23cc7';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'user:mail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0e54669e-59ee-4166-86a8-de2ddac23cc7';
    $display->content['new-0e54669e-59ee-4166-86a8-de2ddac23cc7'] = $pane;
    $display->panels['middle'][1] = 'new-0e54669e-59ee-4166-86a8-de2ddac23cc7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default:teaser'] = $panelizer;

  return $export;
}
