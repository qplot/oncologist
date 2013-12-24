<?php

function intstrux_highwire_migrate_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Import HighWire Article ID and other info Page HTML content type.') . '</p>',
  );
  
  $form['actions'] = array(
    '#type' => 'actions'
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Migrate'),
  );
  
  return $form;
}

function intstrux_highwire_migrate_form_submit(&$form, &$form_state) {

  $batch = array(
    'title' => t('Processing HighWire migration'),
    'operations' => array(
      array('intstrux_highwire_migrate_batch_start_migrate', array()),
    ),
    'finished' => 'intstrux_highwire_migrate_batch_finish',
    'init_message' => t('HighWire migration is starting.'),
    'error_message' => t('HighWire migration has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.default.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_migrate(&$context) {
  if (empty($context['sandbox'])) {
    $context['sandbox'] = array();
    $context['sandbox']['progress'] = 0;
    $context['sandbox']['current_node'] =0;
    $context['sandbox']['max'] = 0;
    $context['sandbox']['found_node'] = 0;
    $context['sandbox']['not_found_node'] = 0;
    $context['sandbox']['found_article'] = 0;
  }
  
  $query = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('n.type', 'page_html')
    ->condition('n.nid', $context['sandbox']['current_node'], '>')
    ->orderBy('n.nid', 'ASC');
  
  if(!$context['sandbox']['max']) {
    $context['sandbox']['max'] = $query->countQuery()->execute()->fetchField();
  }
  
  $query->range(0, 5);

  $nids = $query->execute();
  
  foreach($nids as $delta => $nid) { 
    $node = node_load($nid->nid);

    $article_title = (isset($node->field_article_title[$node->language]))? $node->field_article_title[$node->language][0]['value'] : '';
    
    if(!empty($article_title) && !isset($node->field_article_id[$node->language])) {
      $article_id = _intstrux_highwire_search(check_plain($article_title));
      
      if($article_id) {
        
        $context['sandbox']['found_article']++;
        
        if($article = intstrux_highwire_article_load($article_id)) {
          
          $entry = $article['atom:entry'];
          
          $entity = new stdClass();
          $entity->nid = $node->nid;
          $entity->vid = $node->vid;
          $entity->type  = $node->type;
          $entity->original = NULL;  
          
          // set article doi
          $entity->field_article_id[$node->language][0]['doi'] = $article_id;
            
          // set article page
          if($page = intstrux_highwire_parse_page($entry)) {
            $entity->field_article_page[$node->language][0]['value'] = $page;
          }
          
          // set article month
          if($month = intstrux_highwire_parse_month($entry)) {
            $entity->field_article_month[$node->language][0]['value'] = $month;
          }
          
          // set article year
          if($year = intstrux_highwire_parse_year($entry)) {
            // taxonomy
            if($tid = _intstrux_highwire_taxonomy($year, 'years')) {
              $entity->field_article_year[$node->language][0]['tid'] = $tid;
            }  
          }
          
          // set article volume id
          if($volume_id = intstrux_highwire_parse_volume_id($entry)) {
            // taxonomy
            if($tid = _intstrux_highwire_taxonomy($volume_id, 'volumes')) {
              $entity->field_article_volume[$node->language][0]['tid'] = $tid;  
            }  
              
          }
          
          // set article issue id
          if($issue_id = intstrux_highwire_parse_issue_id($entry)) {
            // taxonomy
            if($tid = intstrux_highwire_migrate_taxonomy($issue_id, 'issues')) {
              $entity->field_article_issue[$node->language][0]['tid'] = $tid;  
            }  
          }
          
          // set article author and contributors
          if($authors = intstrux_highwire_parse_authors($entry)) {
            // taxonomy
            foreach($authors as $delta => $author) {
              if($tid = intstrux_highwire_migrate_taxonomy($author, 'authors')) {
                $entity->field_article_author[$node->language][$delta]['tid'] = $tid;
              }  
            }  
          }
          
          field_attach_presave('node', $entity);
          field_attach_update('node', $entity);
        }
      }
        
      $context['sandbox']['found_node']++;
    } else {
      $context['sandbox']['not_found_node']++;
    }
    
    $context['sandbox']['progress']++; 
    $context['results']['nodes'][] = array(
      'nid' => $node->nid,
      'title' => $node->title,
      'article_title' => check_plain($article_title),
    );
    $context['sandbox']['current_node'] = $node->nid;
    $context['message'] = t('Last imported node @nid | Current progress @progress | Total nodes @total', array('@nid' => $node->nid, '@progress' => $context['sandbox']['progress'], '@total' => $context['sandbox']['max']));  
  }
  
  if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  } 
  
  if($context['finished']) {
    $context['results']['founds'] = array(
      'nodes found' => $context['sandbox']['found_node'],
      'nodes not found' => $context['sandbox']['not_found_node'], 
      'total nodes' => $context['sandbox']['max'],
      'total articles' => $context['sandbox']['found_article'],
    );
  }
}

function intstrux_highwire_migrate_batch_finish($success, $results, $operations) {
  if ($success) {
    //drupal_set_message(t('@count results processed. Check !log for more details.', array('@count' => count($results), '!log' => l('Recent log messages', 'admin/reports/dblog'))));
    drupal_set_message(print_r($results['founds'], true));
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
    
  }
  
  drupal_set_message(print_r($results, true));
}