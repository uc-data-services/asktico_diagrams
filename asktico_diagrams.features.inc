<?php

/**
 * Implementation of hook_node_info().
 */
function asktico_diagrams_node_info() {
  $items = array(
    'diagram' => array(
      'name' => t('Diagrams'),
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
