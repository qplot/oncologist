<?php

function intstrux_highwire_migrate_cme_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Select Countries') . '</p>',
  );
  
  $form['actions'] = array(
    '#type' => 'actions'
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Process'),
  );
  
  return $form;
}

function intstrux_highwire_migrate_cme_form_submit(&$form, &$form_state) {
  $operations = array();
  
  $query = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('n.type', 'article')
      ->orderBy('n.nid', 'ASC');
  
  $total = $query->countQuery()->execute()->fetchField();
  
  $nids = $query->execute()->fetchAll();
  
  foreach($nids as $delta => $nid) { 
    $operations[] = array('intstrux_highwire_migrate_batch_start_cme', array($nid, array('total' => $total, 'progress' => $delta)));
  }
    
  $batch = array(
    'title' => t('Processing Country Selection'),
    'operations' => $operations,
    'finished' => 'intstrux_highwire_migrate_batch_finish_cme',
    'init_message' => t('Country Selection is starting.'),
    'error_message' => t('Country Selection has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.cme.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_cme($nid, $details, &$context) {
  
  $node = node_load($nid->nid);

  if($node) {
    if(isset($node->field_article_body[$node->language]) && (strpos($node->field_article_body[$node->language][0]['value'], 'CME') !== false)) {
      if(isset($node->field_tax_section)) {
        
        $tids = $node->field_tax_section[$node->language];
        
        $entity = new stdClass();
        $entity->nid = $node->nid;
        $entity->vid = $node->vid;
        $entity->type  = $node->type;

        if($tid = _intstrux_highwire_taxonomy('CME', 'sections')) {
          $tids[]['tid'] = $tid;
        }
        
        if($tid) {
          
          $entity->field_tax_section[$node->language] = $tids;
          
          field_attach_presave('node', $entity);
          field_attach_update('node', $entity);
        }
      }
    }

    $context['message'] = t('Current progress: @progress | Current Node: @node | Total Nodes: @total | Title: @title', array(
      '@progress' => $details['progress'],  
      '@total' => $details['total'],
      '@node' => $node->nid,    
      '@title' => $node->title,
    ));     
  }
}

function intstrux_highwire_migrate_batch_finish_cme($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Verified Successfully');
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}