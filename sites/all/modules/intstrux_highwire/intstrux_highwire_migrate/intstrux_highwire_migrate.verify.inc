<?php

function intstrux_highwire_migrate_verify_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Verify Articles before HighWire migration') . '</p>',
  );
  
  $form['actions'] = array(
    '#type' => 'actions'
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Verify'),
  );
  
  return $form;
}

function intstrux_highwire_migrate_verify_form_submit(&$form, &$form_state) {
  
  $batch = array(
    'title' => t('Processing Page HTML verification'),
    'operations' => array(
      array('intstrux_highwire_migrate_batch_start_verify', array()),
    ),
    'finished' => 'intstrux_highwire_migrate_batch_finish_verify',
    'init_message' => t('Page HTML verification is starting.'),
    'error_message' => t('Page HTML verification has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.verify.inc',
  );
  
  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_verify(&$context) {
  if (empty($context['sandbox'])) {
    $context['sandbox'] = array();
    $context['sandbox']['progress'] = 0;
    $context['sandbox']['current_node'] =0;
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
  
  $query->range(0, 25);
  
  $nids = $query->execute();
  
  foreach($nids as $delta => $nid) { 
    $node = node_load($nid->nid);
    
    $article_title = (isset($node->field_article_title[$node->language]))? $node->field_article_title[$node->language][0]['value'] : '';
    
    if(!empty($article_title)) {
      // do nothing 
    } else {
    
      $html_file_uri = (isset($node->field_htmlfile[$node->language]) && isset($node->field_htmlfile[$node->language][0]))?  $node->field_htmlfile[$node->language][0]['uri'] : '';
    
      if($html_file_url = file_create_url($html_file_uri)) {
      
        $result = drupal_http_request($html_file_url);  
      
        if($content = $result->data) {
          $title = intstrux_highwire_parse_content('h1', '', '', trim($content));

          // set article title
          $entity = new stdClass();
          $entity->nid = $node->nid;
          $entity->vid = $node->vid;
          $entity->type  = $node->type;
          $entity->original = NULL;
          $entity->field_article_title[$node->language][0]['value'] = $title;
          field_attach_presave('node', $entity);
          field_attach_update('node', $entity);
        }
      }
    }
    
    $context['sandbox']['progress']++; 
    $context['results'][] = $node->nid;
    $context['sandbox']['current_node'] = $node->nid;
    $context['message'] = t('Last imported node @nid', array('@nid' => $node->nid));  
  }
  
  if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  } 
}

function intstrux_highwire_migrate_batch_finish_verify($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Verified Successfully');
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}