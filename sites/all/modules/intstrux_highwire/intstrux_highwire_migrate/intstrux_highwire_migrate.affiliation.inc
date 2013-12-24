<?php

function intstrux_highwire_migrate_affiliation_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Import affiliations') . '</p>',
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

function intstrux_highwire_migrate_affiliation_form_submit(&$form, &$form_state, $start_nid = 0) {
  $operations = array();
  
  $query = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('n.nid', $start_nid, '>')
      ->condition('n.type', 'article')
      ->orderBy('n.nid', 'ASC');

  $total = $query->countQuery()->execute()->fetchField();
  
  $nids = $query->execute()->fetchAll();
  
  foreach($nids as $delta => $nid) { 
    $operations[] = array('intstrux_highwire_migrate_batch_start_affiliation', array($nid, array('total' => $total, 'progress' => $delta)));
  }
    
  $batch = array(
    'title' => t('Importing affiliations'),
    'operations' => $operations,
    'finished' => 'intstrux_highwire_migrate_batch_finish_affiliation',
    'init_message' => t('Setting page is starting.'),
    'error_message' => t('Setting page has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.affiliation.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_affiliation($nid, $details, &$context) {
  
  
  $node = node_load($nid->nid);

  if($node) {
    
    if(isset($node->field_article_id[$node->language])) {
      
      usleep(3999999);
      
      $doi = $node->field_article_id[$node->language][0]['doi'];
      
      if($article = intstrux_highwire_article_load($doi)) {
        
        if(isset($article['atom:entry']) && $entry = $article['atom:entry']) {

          if($html = intstrux_highwire_article_content_load_by_entry($entry, 'abstract')) {
            
            $entity = new stdClass();
            $entity->nid = $node->nid;
            $entity->vid = $node->vid;
            $entity->type  = $node->type;
            

            
            
            $dom = new DOMDocument();
            $dom->loadXML($html);
            $xpath = new DOMXPath($dom);
            
            // find  elements with class contributor-list
            $contributors = $xpath->query('//*[contains(@class, "contributor-list")]');
            
            if($contributors->length) {
              $html_node = $contributors->item(0);
              $entity->field_authors[$node->language][0] = array('value' => $html_node->ownerDocument->saveHTML($html_node), 'format' => '2');  //2 = Full HTML
            }
            
            // find  elements with class affiliation-list
            $affiliations = $xpath->query('//*[contains(@class, "affiliation-list")]');
            
            if($affiliations->length) {
              $html_node = $affiliations->item(0);
              $entity->field_article_affiliations[$node->language][0] = array('value' => $html_node->ownerDocument->saveHTML($html_node), 'format' => '2');  //2 = Full HTML 
            }
            
            if(isset($node)) {
              field_attach_presave('node', $entity);
              field_attach_update('node', $entity);
            }
          }

          /*
          if($authors = intstrux_highwire_parse_author_affiliations($entry)) {
            $entity->field_authors[$node->language][0] = array('value' => theme('intstrux_highwire_authors_items', array('items' => $authors)), 'format' => '2');  //2 = Full HTML
            
            if($affiliations = intstrux_highwire_parse_affiliations($entry)) {
              $entity->field_article_affiliations[$node->language][0] = array('value' => theme('intstrux_highwire_affiliations_items', array('items' => $affiliations)), 'format' => '2');  //2 = Full HTML  
            }   
          } elseif($authors = intstrux_highwire_parse_authors($entry)) {
            $entity->field_authors[$node->language][0] = array('value' => theme('intstrux_highwire_authors_items', array('items' => $authors)), 'format' => '2');  //2 = Full HTML
          }
           * 
           */
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

function intstrux_highwire_migrate_batch_finish_affiliation($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Verified Successfully');
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}