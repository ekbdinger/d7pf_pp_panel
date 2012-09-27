<?php
/**
 * @file
 * d7pf_pp_panel.stylizer.inc
 */

/**
 * Implements hook_default_stylizer().
 */
function d7pf_pp_panel_default_stylizer() {
  $export = array();

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'blue_back';
  $style->admin_title = 'blue background color';
  $style->admin_description = 'Light blue background, created by Paul on March 9, 2012';
  $style->settings = array(
    'name' => 'blue_back',
    'style_base' => 'pane_rounded_shadow',
    'palette' => array(
      'background' => '#e0e7f0',
      'text' => '#000000',
      'header-text' => '#000000',
      'header-border' => '#000000',
    ),
    'header_font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'text_font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'header_border' => array(
      'thickness' => '',
      'style' => '',
    ),
  );
  $export['blue_back'] = $style;

  return $export;
}
