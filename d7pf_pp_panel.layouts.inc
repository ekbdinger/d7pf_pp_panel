<?php
/**
 * @file
 * d7pf_pp_panel.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function d7pf_pp_panel_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'pp_121';
  $layout->admin_title = 'PP_121';
  $layout->admin_description = 'Going to try pushing Setup and Item keys on top of each other. So they will take up about a third of the 2nd row of the panel.  Then Setup will take up the other 2/3';
  $layout->category = 'PP';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 4,
          1 => 1,
          2 => 'main-row',
          3 => 6,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '32.05458843756716',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 8,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '67.94541156243284',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 9,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'pp_top',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 7,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      7 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'children' => array(),
        'class' => '',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
        ),
        'parent' => '2',
        'class' => '',
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'setup',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      'pp_top' => array(
        'type' => 'region',
        'title' => 'pp_top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'setup' => array(
        'type' => 'region',
        'title' => 'Setup',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
    ),
  );
  $export['pp_121'] = $layout;

  return $export;
}
