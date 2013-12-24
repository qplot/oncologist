<?php

function intstrux_highwire_migrate_keywords_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Import keywords') . '</p>',
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

function intstrux_highwire_migrate_keywords_form_submit(&$form, &$form_state, $start_nid = 0) {
  $operations = array();
  
  $query = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('n.nid', $start_nid, '>')
      ->condition('n.type', 'article')
      ->orderBy('n.nid', 'ASC');

  $total = $query->countQuery()->execute()->fetchField();
  
  $nids = $query->execute()->fetchAll();
  
  foreach($nids as $delta => $nid) { 
    $operations[] = array('intstrux_highwire_migrate_batch_start_keywords', array($nid, array('total' => $total, 'progress' => $delta)));
  }
    
  $batch = array(
    'title' => t('Importing keywords'),
    'operations' => $operations,
    'finished' => 'intstrux_highwire_migrate_batch_finish_keywords',
    'init_message' => t('Keyword import is starting.'),
    'error_message' => t('Setting page has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.keywords.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_keywords($nid, $details, &$context) {
  
  
  drush_print(t('-->Loading: '.$nid->nid));

  $node = node_load($nid->nid);

  if($node) {
    
    if(isset($node->field_article_full[$node->language][0]['value'])) {
      
      usleep(500000);
      
      $html = $node->field_article_full[$node->language][0]['value'];
      $dom = new DOMDocument();
      @$dom->loadHTML($html);
      $xpath = new DOMXPath($dom);

      $entries = $xpath->query('//li[contains(@class,"kwd")]');

      drush_print("Keyword Length: {$entries->length}\n ");

      //RESET
      $node->field_keywords[$node->language] = array();

      $vocabulary_machine_name = "keywords";
      $tax = taxonomy_vocabulary_machine_name_load($vocabulary_machine_name);
      $vid = $tax->vid;

      for($i=0; $i < $entries->length; $i++){
        
        $keyword = $entries->item($i)->nodeValue;

        $terms = taxonomy_get_term_by_name($keyword, $vocabulary_machine_name);
        if (!empty($terms)) {
          // term already exists
          $tid = key($terms);
        } else {
          // add term and get the tid
          $term = new stdClass();
          $term->name = $keyword;
          $term->vid = $vid;

          $status = taxonomy_term_save($term);
          $tid = $term->tid;
        }
        
        $node->field_keywords[$node->language][$i]['tid'] = $tid;

        drush_print("Keyword: {$keyword}  TID: {$tid}");


      }

      drush_print("Keywords: ".print_r($node->field_keywords[$node->language], true));
      node_save($node);
      drush_print(t('--> Submitted node'));
      
    }
    else{
      drush_print(t('Node has no full article HTML: '.$nid));
    }
    
  }
  else{
    drush_print(t('Node not found: '.$nid));
  }
  $context['message'] = t('Current progress: @progress | Current Node: @node | Total Nodes: @total | Title: @title', array(
      '@progress' => $details['progress'],  
      '@total' => $details['total'],
      '@node' => $node->nid,    
      '@title' => $node->title,
    ));     
}

function intstrux_highwire_migrate_batch_finish_keywords($success, $results, $operations) {
  if ($success) {
    drupal_set_message('keywords generated sucessfully');
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}