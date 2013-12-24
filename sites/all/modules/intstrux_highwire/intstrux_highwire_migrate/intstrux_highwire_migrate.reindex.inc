<?php

function intstrux_highwire_migrate_reindex_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Reindex Nodes') . '</p>',
  );
  
  $form['actions'] = array(
    '#type' => 'actions'
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Reindex'),
  );
  
  return $form;
}

function intstrux_highwire_migrate_reindex_form_submit(&$form, &$form_state, $start_nid = 0, $node_type = 'all') {
  $operations = array();
  
  $inner_query = db_select('taxonomy_index', 't')->fields('t', array('nid'))->distinct();
  
  $query = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('n.nid', $start_nid, '>')
      ->condition('n.nid', $inner_query, 'NOT IN')
      ->orderBy('n.nid', 'ASC');
  
  $types = node_type_get_names();
  
  if($node_type != 'all' && isset($types[$node_type])) {
    $query->condition('n.type', $node_type);
  }
  
  $total = $query->countQuery()->execute()->fetchField();
  
  $nids = $query->execute()->fetchAll();
  
  foreach($nids as $delta => $nid) { 
    $operations[] = array('intstrux_highwire_migrate_batch_start_reindex', array($nid, array('total' => $total, 'progress' => $delta)));
  }
    
  $batch = array(
    'title' => t('Processing Reindex Nodes'),
    'operations' => $operations,
    'finished' => 'intstrux_highwire_migrate_batch_finish_reindex',
    'init_message' => t('Reindex nodes is starting.'),
    'error_message' => t('Reindex nodes has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.reindex.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_reindex($nid, $details, &$context) {
  
  //$tid = db_select('taxonomy_index', 't')->fields('t', array('tid'))->condition('t.nid', $nid->nid)->execute()->fetchField();
  
  //if(!$tid) {
  if(TRUE) {
    $node = node_load($nid->nid);

    if($node) {
      taxonomy_build_node_index($node);

      $context['message'] = t('Current progress: @progress | Current Node: @node | Total Nodes: @total | Title: @title', array(
        '@progress' => $details['progress'],  
        '@total' => $details['total'],
        '@node' => $node->nid,    
        '@title' => $node->title,
      ));     
    }
  } else {
    $context['message'] = t('Skip Node: @node', array('@node' => $nid->nid));
  }
}

function intstrux_highwire_migrate_batch_finish_reindex($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Verified Successfully');
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}