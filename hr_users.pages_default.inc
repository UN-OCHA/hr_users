<?php
/**
 * @file
 * hr_users.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function hr_users_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hr_space_people';
  $page->task = 'page';
  $page->admin_title = 'Space People';
  $page->admin_description = '';
  $page->path = 'node/%node/people';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
      'keyword' => 'node',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hr_space_people_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hr_space_people';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '14a87d7a-ecf6-4555-afaf-0163f0da7636';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-786069d4-87cf-495f-a049-cd50dc5b2741';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_users-space_members';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '786069d4-87cf-495f-a049-cd50dc5b2741';
    $display->content['new-786069d4-87cf-495f-a049-cd50dc5b2741'] = $pane;
    $display->panels['contentmain'][0] = 'new-786069d4-87cf-495f-a049-cd50dc5b2741';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-786069d4-87cf-495f-a049-cd50dc5b2741';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hr_space_people'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hr_user_check_ins';
  $page->task = 'page';
  $page->admin_title = 'User check-ins';
  $page->admin_description = '';
  $page->path = 'check-ins';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'My check-ins',
    'name' => 'user-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hr_user_check_ins_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hr_user_check_ins';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '83f22f06-0840-485a-be75-cc9bf6bef892';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6a11c7c6-b8d4-4f6d-9ace-a107c2d436f7';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_user_memberships-checkins';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'hr_highlighted',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a11c7c6-b8d4-4f6d-9ace-a107c2d436f7';
    $display->content['new-6a11c7c6-b8d4-4f6d-9ace-a107c2d436f7'] = $pane;
    $display->panels['contentmain'][0] = 'new-6a11c7c6-b8d4-4f6d-9ace-a107c2d436f7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hr_user_check_ins'] = $page;

  return $pages;

}
