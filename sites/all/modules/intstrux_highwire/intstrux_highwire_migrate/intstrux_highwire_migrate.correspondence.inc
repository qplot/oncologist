<?php
        
function intstrux_highwire_migrate_correspondence_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Import correspondence') . '</p>',
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

function intstrux_highwire_migrate_correspondence_form_submit(&$form, &$form_state, $start_nid = 0) {
  $operations = array();
  
  $query = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('n.nid', $start_nid, '>')
      ->condition('n.type', 'article')
      ->orderBy('n.nid', 'ASC');

  $total = $query->countQuery()->execute()->fetchField();
  
  $nids = $query->execute()->fetchAll();
  
  foreach($nids as $delta => $nid) { 
    $operations[] = array('intstrux_highwire_migrate_batch_start_correspondence', array($nid, array('total' => $total, 'progress' => $delta)));
  }
    
  $batch = array(
    'title' => t('Importing correspondence'),
    'operations' => $operations,
    'finished' => 'intstrux_highwire_migrate_batch_finish_correspondence',
    'init_message' => t('Setting page is starting.'),
    'error_message' => t('Setting page has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.correspondence.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_correspondence($nid, $details, &$context) {
  
  
  $node = node_load($nid->nid);

  if($node) {
    
    if(isset($node->field_article_id[$node->language])) {
      
      usleep(3999999);
      
      $doi = $node->field_article_id[$node->language][0]['doi'];
      
      if($article = intstrux_highwire_article_load($doi)) {
        
        if(isset($article['atom:entry']) && $entry = $article['atom:entry']) {

          if($html = intstrux_highwire_article_content_load_by_entry($entry, 'full')) {
            
            $entity = new stdClass();
            $entity->nid = $node->nid;
            $entity->vid = $node->vid;
            $entity->type  = $node->type;
            
            
            $dom = new DOMDocument();
            $dom->loadXML($html);
            $xpath = new DOMXPath($dom);
            
            
            // find  elements with id article-title-1
            $title_html = $xpath->query('//*[contains(@id, "article-title-1")]');
              
            // set title HTML field
            if($title_html->length) {
              $title_html_node = $title_html->item(0);
              $title_inner_html = $title_html_node->ownerDocument->saveHTML($title_html_node);
              $title_html_content = intstrux_highwire_parse_content('h1', 'id', 'article-title-1', $title_inner_html);
              $entity->field_article_title_html[$node->language][0] = array('value' => $title_html_content, 'format' => '2');  //2 = Full HTML
            }
            
            // find elements with class correspondence-list
            $correspondence = $xpath->query('//*[contains(@class, "corresp-list")]');

            // set correspondence 
            if($correspondence->length) {
              $corresp_node = $correspondence->item(0);
              $entity->field_article_correspondence[$node->language][0] = array('value' => $corresp_node->ownerDocument->saveHTML($corresp_node), 'format' => '2');  //2 = Full HTML 
            }

            // find elements with class history-list
            $history = $xpath->query('//*[contains(@class, "history-list")]');

            // set history 
            if($history->length) {
              $history_node = $history->item(0);
              $entity->field_article_history[$node->language][0] = array('value' => $history_node->ownerDocument->saveHTML($history_node), 'format' => '2');  //2 = Full HTML 
            }
            
            if(isset($node)) {
              field_attach_presave('node', $entity);
              field_attach_update('node', $entity);
            }
          }
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

function intstrux_highwire_migrate_batch_finish_correspondence($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Verified Successfully');
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}