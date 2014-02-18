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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3885f405-1a6b-4b93-b63c-46536abf2bd8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-48106d8c-5262-41af-9fd7-d7f027d635c1';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:og_user_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '48106d8c-5262-41af-9fd7-d7f027d635c1';
    $display->content['new-48106d8c-5262-41af-9fd7-d7f027d635c1'] = $pane;
    $display->panels['center'][0] = 'new-48106d8c-5262-41af-9fd7-d7f027d635c1';
    $pane = new stdClass();
    $pane->pid = 'new-2ddee12d-d20f-46da-a2e5-00bb4815d28b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_responder_in';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ddee12d-d20f-46da-a2e5-00bb4815d28b';
    $display->content['new-2ddee12d-d20f-46da-a2e5-00bb4815d28b'] = $pane;
    $display->panels['center'][1] = 'new-2ddee12d-d20f-46da-a2e5-00bb4815d28b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2ddee12d-d20f-46da-a2e5-00bb4815d28b';
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
    $pane->pid = 'new-0e54669e-59ee-4166-86a8-de2ddac23cc7';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'user:mail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
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
    $pane->uuid = '0e54669e-59ee-4166-86a8-de2ddac23cc7';
    $display->content['new-0e54669e-59ee-4166-86a8-de2ddac23cc7'] = $pane;
    $display->panels['middle'][0] = 'new-0e54669e-59ee-4166-86a8-de2ddac23cc7';
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
      'override_title' => 0,
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
    $pane->uuid = '4e17e53c-fbd1-45c1-9d3f-95a74b2cd940';
    $display->content['new-4e17e53c-fbd1-45c1-9d3f-95a74b2cd940'] = $pane;
    $display->panels['middle'][1] = 'new-4e17e53c-fbd1-45c1-9d3f-95a74b2cd940';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['user:user:default:teaser'] = $panelizer;

  return $export;
}
