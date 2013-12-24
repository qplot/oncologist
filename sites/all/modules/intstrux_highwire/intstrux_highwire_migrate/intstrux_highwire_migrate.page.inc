<?php

function intstrux_highwire_migrate_page_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Set missed article pages') . '</p>',
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

function intstrux_highwire_migrate_page_form_submit(&$form, &$form_state) {
  $operations = array();
  
  $query = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('n.type', 'article')
      ->orderBy('n.nid', 'ASC');
  
  $query->leftJoin('field_data_field_article_page', 'ap', 'n.nid = ap.entity_id');
  $query->condition(
    db_or()
      ->condition('ap.field_article_page_value', NULL, 'IS NULL')
      ->condition('ap.field_article_page_value', '')
  );

  $total = $query->countQuery()->execute()->fetchField();
  
  $nids = $query->execute()->fetchAll();
  
  foreach($nids as $delta => $nid) { 
    $operations[] = array('intstrux_highwire_migrate_batch_start_page', array($nid, array('total' => $total, 'progress' => $delta)));
  }
    
  $batch = array(
    'title' => t('Setting page value'),
    'operations' => $operations,
    'finished' => 'intstrux_highwire_migrate_batch_finish_page',
    'init_message' => t('Setting page is starting.'),
    'error_message' => t('Setting page has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.page.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_page($nid, $details, &$context) {
  usleep(3999999);
  
  $node = node_load($nid->nid);

  if($node) {
    
    // initial value
    $page_value = 1000;
    
    $entity = new stdClass();
    $entity->nid = $node->nid;
    $entity->vid = $node->vid;
    $entity->type  = $node->type;
    
    if(isset($node->field_article_id[$node->language])) {
      
      $doi = $node->field_article_id[$node->language][0]['doi'];
      
      if($article = intstrux_highwire_article_load($doi)) {
        
        if(isset($article['atom:entry']) && $entry = $article['atom:entry']) {
          
          // set article page
          if($page = intstrux_highwire_parse_page($entry)) {
            $page_value = $page;
          } 
        }
      }
    }
    
    $entity->field_article_page[$node->language][0]['value'] = $page_value;

    field_attach_presave('node', $entity);
    field_attach_update('node', $entity);

    $context['message'] = t('Current progress: @progress | Current Node: @node | Total Nodes: @total | Title: @title', array(
      '@progress' => $details['progress'],  
      '@total' => $details['total'],
      '@node' => $node->nid,    
      '@title' => $node->title,
    ));     
  }
}

function intstrux_highwire_migrate_batch_finish_page($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Verified Successfully');
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}