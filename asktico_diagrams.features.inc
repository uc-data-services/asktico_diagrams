<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function asktico_diagrams_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function asktico_diagrams_node_info() {
  $items = array(
    'diagram' => array(
      'name' => t('Diagram'),
      'module' => 'features',
      'description' => t('Diagrams and flowcharts about work flows or related processes. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
