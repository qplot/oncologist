<?php

function intstrux_highwire_migrate_body_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Migrate Articles Body field from HighWire.') . '</p>',
  );
  
  $form['actions'] = array(
    '#type' => 'actions'
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Migrate Article Body'),
  );
  
  return $form;
}

function intstrux_highwire_migrate_body_form_submit(&$form, &$form_state) {
  $batch = array(
    'title' => t('Processing HighWire Article Body Migration'),
    'operations' => array(
      array('intstrux_highwire_migrate_batch_start_body', array()),
    ),
    'finished' => 'intstrux_highwire_migrate_batch_finish_body',
    'init_message' => t('HighWire dates migration is starting.'),
    'error_message' => t('HighWire dates migration has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.body.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_body(&$context) {
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
        
        // set article abstract and images
        $entity = new stdClass();
        $entity->nid = $node->nid;
        $entity->vid = $node->vid;
        $entity->type  = $node->type;
        
        if($html = intstrux_highwire_article_content_load_by_entry($entry, 'full')) {
          
          // retrieve original images
          $embeddedimages = isset($node->field_embeddedimage[$node->language])? $node->field_embeddedimage[$node->language] : array();     
          
          $dom = new DOMDocument();
          $dom->loadXML($html);
          $xpath = new DOMXPath($dom);
            
          // remove title 
          $article_title = $xpath->query('//*[contains(@id,"article-title")]');
          if($article_title->length) {
            $article_title->item(0)->parentNode->removeChild($article_title->item(0));  
          }
          
          // remove contributors
          $contributors = $xpath->query('//*[contains(@class,"contributors")]');

          if($contributors->length) {
            $contributors->item(0)->parentNode->removeChild($contributors->item(0));   
          }
          
          // remove article high lights
          $kwd = $xpath->query('//*[contains(@class,"kwd-group")]');
        
          if($kwd->length) {
            $kwd->item(0)->parentNode->removeChild($kwd->item(0));  
          }
          
          
          $abstract_html = '';
        
          // remove abstract
          $abstracts = $xpath->query('//*[contains(@class,"abstract")]');
          if($abstracts->length) {
            foreach($abstracts as $abstract) {
              $h2Tags = $abstract->getElementsByTagName('h2');
            
              if($h2Tags->length && strtolower($h2Tags->item(0)->nodeValue) == 'abstract') {
                
                foreach($abstract->childNodes as $child) {
                  if($child->nodeName != 'h2') {
                    $abstract_html .= $child->ownerDocument->saveXML( $child );  
                  }  
                }
              
                // remove abstract
                $abstract->parentNode->removeChild($abstract);
              }
            }  
          }
        
          // set abstract field
          if($abstract_html) {
            $entity->field_abstract[$node->language][0] = array('value' => $abstract_html, 'format' => '2');  //2 = Full HTML  
          }
          
          $nfigures = array();

          // find all elements with fig-inline 
          $figures = $xpath->query('//*[contains(@class, "fig-inline")]');

          foreach($figures as $figure) {

            if($figure->hasChildNodes()) {
              $figure->removeChild($figure->childNodes->item(0));  
            }

            $figure_id = $figure->parentNode->getAttribute('id');

            // get figure atom url
            if($figure_url = intstrux_highwire_parse_link($entry, $figure_id, 'atom')) {

              $fragment = intstrux_highwire_request(array('url' => $figure_url, 'params' => array ('type' => 'json')));

              $figure_img_url = ($fragment)? intstrux_highwire_parse_link($fragment['atom:entry'], $figure_id . '.large', 'jpg') : FALSE;

              if(!empty($figure_img_url) && ($figure_img_data = intstrux_highwire_request(array('url' => $figure_img_url)))) {

                if($figure_name = _intstrux_highwire_file_name($figure_img_url)) {

                  $figure_destination = file_build_uri($figure_name);  

                  if($file = file_save_data($figure_img_data, $figure_destination, FILE_EXISTS_RENAME)) {

                    $nfigures[$file->fid] = $figure;  

                    $embeddedimages[] = (array) $file;   
                  }
                } else {
                  drupal_set_message('NO Figure IMAGE NAME');
                }
              }
            } else {
              drupal_set_message(t('@id : Figure URL NOT FOUND', array('@id' => $figure_id))); 
            }
          }

          $ntables = array();

          $tables = $xpath->query('//*[contains(@class, "table-inline")]');

          foreach($tables as $table) {

            if($table->hasChildNodes()) {
              $table->removeChild($table->childNodes->item(0));  
            }

            $table_id = $table->parentNode->getAttribute('id');

            if($table_url = intstrux_highwire_parse_link($entry, $table_id, 'atom')) {

              $fragment = intstrux_highwire_request(array('url' => $table_url, 'params' => array ('type' => 'json')));  

              $table_img_url = ($fragment)? intstrux_highwire_parse_link($fragment['atom:entry'], $table_id . '.large', 'jpg') : FALSE;

              if(!empty($table_img_url) && ($table_img_data = intstrux_highwire_request(array('url' => $table_img_url)))) {

                if($table_name = _intstrux_highwire_file_name($table_img_url)) {

                  $table_destination = file_build_uri($table_name); 

                  if($file = file_save_data($table_img_data, $table_destination, FILE_EXISTS_RENAME)) {

                    $ntables[$file->fid] = $table;

                    $embeddedimages[] = (array) $file;   
                  }

                }  else {
                   drupal_set_message('NO Table IMAGE NAMe'); 
                }

              } else {
                drupal_set_message(t('@id : Table Image URL NOT FOUND', array('@id' => $table_id)));   
              }
            } else {
              drupal_set_message(t('@id : Table URL NOT FOUND', array('@id' => $table_id))); 
            }
          }

          $ngraphics = array();

          $graphics = $xpath->query('//*[contains(@class, "graphic-inline")]');

          foreach($graphics as $graphic) {

            if($graphic->hasChildNodes()) {
              $graphic->removeChild($graphic->childNodes->item(0));  
            }

            $graphic_id = $graphic->parentNode->getAttribute('id');

            if($graphic_img_url = intstrux_highwire_parse_link($entry, $graphic_id, 'gif')) {

              if($graphic_img_data = intstrux_highwire_request(array('url' => $graphic_img_url))) {

                if($graphic_name = _intstrux_highwire_file_name($graphic_img_url)) {

                  $graphic_destination = file_build_uri($graphic_name);  

                  if($file = file_save_data($graphic_img_data, $graphic_destination, FILE_EXISTS_RENAME)) {

                    $ngraphics[$file->fid] = $graphic;

                    $embeddedimages[] = (array) $file; 
                  }
                } else {
                  drupal_set_message('NO Graphic IMAGE NAMe'); 
                }  
              } else {
                drupal_set_message(t('@id : Graphic Image DATA NOT FOUND', array('@id' => $graphic_id)));
              } 
            } else {
              drupal_set_message(t('@id : Graphic Image URL NOT FOUND', array('@id' => $graphic_id)));
            }
          }


          if($embeddedimages) {
            $entity->field_embeddedimage[$node->language] = $embeddedimages; 
          }
          
          // save abstract and images
          field_attach_presave('node', $entity);
          field_attach_update('node', $entity);
          
          // append images to HTML
          foreach($nfigures as $fid => $figure) {
            if($file = file_load($fid)) {
              // append figure image to html dom 
              $imgElement = $dom->createElement('img');
              $imgElement->setAttribute('class', 'large');
              $imgElement->setAttribute('alt', 'Figure');
              $imgElement->setAttribute('src', file_create_url($file->uri));
              $figure->appendChild($imgElement);
            }          
          }
        
          foreach($ntables as $fid => $table) {
            if($file = file_load($fid)) {  
              // append table image to html dom
              $imgElement = $dom->createElement('img');
              $imgElement->setAttribute('class', 'large');
              $imgElement->setAttribute('alt', 'Table');
              $imgElement->setAttribute('src', file_create_url($file->uri)); 
              //$imgElement->setAttribute('style', 'width: 50%;');
              $table->appendChild($imgElement);  
            }
          }
          
          foreach($ngraphics as $fid => $graphic) {
            if($file = file_load($fid)) {  
              // append graphic image to html dom
              $imgElement = $dom->createElement('img');
              $imgElement->setAttribute('class', 'graphic');
              $imgElement->setAttribute('alt', 'Graphic');
              $imgElement->setAttribute('src', file_create_url($file->uri)); 
              $graphic->appendChild($imgElement);  
            }
          }
          
          if($new_html = $dom->saveHTML()) {
            // remove blank lines
            $new_html = preg_replace("/(^[\r\n]*|[\r\n]+)[\s\t]*[\r\n]+/", '', $new_html); 
            
            // set article abstract and images
            $entity = new stdClass();
            $entity->nid = $node->nid;
            $entity->vid = $node->vid;
            $entity->type  = $node->type;
            
            $entity->field_article_body[$node->language][0] = array('value' => $new_html, 'format' => '2');  //2 = Full HTML
            
            field_attach_presave('node', $entity);
            field_attach_update('node', $entity);
          }
        }
      }

      $context['results']['found']++;
    } else {
      $context['results']['not_found']++;  
    }
    
    $context['sandbox']['progress']++; 
    $context['results']['nodes'][] = $node->nid;
    $context['sandbox']['current_node'] = $node->nid;
    $context['message'] = t('Current progress: @progress | Current Node: @node | Total Articles: @total | Title: @title', array(
      '@progress' => $context['sandbox']['progress'],  
      '@node' => $node->nid,    
      '@total' => $context['sandbox']['max'],
      '@title' => $node->title,
    ));  
  }
  
  if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  } 
}

function intstrux_highwire_migrate_batch_finish_body($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Migrated Successfully');
    drupal_set_message(t('The final result !result', array('!result' => print_r($results, true))));
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}

