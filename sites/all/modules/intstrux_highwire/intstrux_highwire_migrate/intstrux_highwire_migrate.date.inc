<?php

function intstrux_highwire_migrate_date_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Migrate Articles Dates from HighWire.') . '</p>',
  );
  
  $form['actions'] = array(
    '#type' => 'actions'
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Migrate Dates'),
  );
  
  return $form;
}

function intstrux_highwire_migrate_date_form_submit(&$form, &$form_state) {
  $batch = array(
    'title' => t('Processing HighWire Dates Migration'),
    'operations' => array(
      array('intstrux_highwire_migrate_batch_start_date', array()),
    ),
    'finished' => 'intstrux_highwire_migrate_batch_finish_date',
    'init_message' => t('HighWire dates migration is starting.'),
    'error_message' => t('HighWire dates migration has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.date.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_date(&$context) {
  global $timers, $language;
  timer_stop('batch_processing');
  $timers['batch_processing']['time'] = 9001;
  
  //usleep(3999999);
    
  if (empty($context['sandbox'])) {
    $context['sandbox'] = array();
    $context['sandbox']['progress'] = 0;
    $context['sandbox']['current_node'] = 0;
    $context['results']['found'] = 0;
    $context['results']['not_found'] = 0;
    $context['sandbox']['max'] = 0;
  }
  
  $query = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('n.type', 'page_html')
    ->condition('n.nid', $context['sandbox']['current_node'], '>')
    ->orderBy('n.nid', 'ASC');
  
  if(!$context['sandbox']['max']) {
    $context['sandbox']['max'] = $query->countQuery()->execute()->fetchField();
  }
  
  $query->range(0, 1);
  
  $nids = $query->execute();
  
  foreach($nids as $delta => $nid) { 
    $node = node_load($nid->nid);
    
    if(isset($node->field_article_id[$node->language])) {
      
      $article_id = $node->field_article_id[$node->language][0]['doi'];  
        
      if($article = intstrux_highwire_article_load($article_id)) {
        $entry = $article['atom:entry'];
          
        // set article published, updated, edited dates
        $entity = new stdClass();
        $entity->nid = $node->nid;
        $entity->vid = $node->vid;
        $entity->type  = $node->type;
          
        if($published = intstrux_highwire_parse_published($entry)) {
          $entity->field_article_published_date[$node->language][0]['value'] = $published;    
        }
          
        if($updated = intstrux_highwire_parse_updated($entry)) {
          $entity->field_article_updated_date[$node->language][0]['value'] = $updated;  
        }
          
        if($edited = intstrux_highwire_parse_edited($entry)) {
          $entity->field_article_edited_date[$node->language][0]['value'] = $edited;
        }
        
        if($published || $updated || $edited) {
          field_attach_presave('node', $entity);
          field_attach_update('node', $entity);
        }
      }    

      $context['results']['found']++;
    } else {
      $context['results']['not_found']++;  
    }
    
    $context['sandbox']['progress']++; 
    $context['results']['nodes'][] = $node->nid;
    $context['sandbox']['current_node'] = $node->nid;
    $context['message'] = t('Last imported node @nid', array('@nid' => $node->nid));  
  }
  
  if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  } 
}

function intstrux_highwire_migrate_batch_finish_date($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Migrated Successfully');
    drupal_set_message(t('The final result !result', array('!result' => print_r($results, true))));
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}

