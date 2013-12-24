<?php

function intstrux_highwire_migrate_import_new_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Import Articles from HighWire.') . '</p>',
  );
  
  $form['volume'] = array(
    '#type' => 'select',
    '#title' => t('Volume'),
    '#options' => array(
      '' => '- Select Volume -', 
      1 => 1996, 
      2 => 1997, 
      3 => 1998, 
      4 => 1999, 
      5 => 2000, 
      6 => 2001, 
      7 => 2002,
      8 => 2003, 
      9 => 2004, 
      10 => 2005, 
      11 => 2006, 
      12 => 2007, 
      13 => 2008, 
      14 => 2009, 
      15 => 2010, 
      16 => 2011, 
      17 => 2012,
      18 => 2013,
      19 => 2014),
    '#default_value' => '',
    '#required' => TRUE,
  );
  
  $form['issue'] = array (
    '#type' => 'select',
    '#title' => t('Issue'),
    '#options' => array('' => '- Select Issue -', 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12),
    '#default_value' => '',
  );
  
  $form['from_date'] = array(
    '#type' => 'select',
    '#title' => t('From Date'),
    '#options' => array(),
    '#default_value' => '<none>', 
  );
  
  $form['to_date'] = array(
    '#type' => 'select',
    '#title' => t('To Date'),
    '#options' => array(),
    '#default_value' => '<none>',
  );
  
  $form['actions'] = array(
    '#type' => 'actions'
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Import'),
  );
  
  return $form;
}

function intstrux_highwire_migrate_import_new_form_submit(&$form, &$form_state) {
  
  $volume = $form_state['values']['volume'];
    
  $batch = array(
    'title' => t('Processing HighWire Import'),
    'operations' => array(
      array('intstrux_highwire_migrate_batch_start_import_new', array($volume)),
    ),
    'finished' => 'intstrux_highwire_migrate_batch_finish_import_new',
    'init_message' => t('HighWire import is starting.'),
    'error_message' => t('HighWire import has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.import_new.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_import_new($volume, &$context) {
  global $timers, $language;
  //timer_stop('batch_processing');
  //$timers['batch_processing']['time'] = 9001;
  
  //usleep(3999999);
  
  if (empty($context['sandbox'])) {
    $context['sandbox'] = array();
    $context['sandbox']['progress'] = 0;
    $context['sandbox']['current_article'] = 0;
    $context['sandbox']['current_page'] = 0;
    $context['sandbox']['max'] = 0;
  }
  
  $count = 1;
  $start = ($context['sandbox']['current_page'] * $count) + 1;
  
  if($result = intstrux_highwire_search_by_volume($volume, $start, $count)) {
    $totalResults = $result['opensearch:totalResults']['$'];
        
    if(!$context['sandbox']['max']) {
      $context['sandbox']['max'] = $totalResults;
    }
    
    // if there's only one item, create key 0
    if(!isset($result['atom:entry'][0])) {
      $atom_entry = $result['atom:entry'];
      unset($result['atom:entry']);
      $result['atom:entry'] = array(
        '0' => $atom_entry,
      );
    }
    
    foreach($result['atom:entry'] as $entry) {
      
      $context['sandbox']['progress']++; 
      
      $atom_id = db_select('highwire_migrate', 'hwm')
          ->fields('hwm', array('atom_id'))
          ->condition('hwm.atom_id', intstrux_highwire_parse_id($entry))
          ->execute()
          ->fetchField();

      if(empty($atom_id)) {
        usleep(3999999);

        $title = intstrux_highwire_parse_title($entry); 

        $context['sandbox']['current_article'] = (intstrux_highwire_parse_doi($entry))? intstrux_highwire_parse_doi($entry) : intstrux_highwire_parse_pmid($entry);

        drupal_set_message($context['sandbox']['current_article'] . ' : ' . $title); 

        // create new node
        $node = new stdClass();
        $node->type = 'page_html';
        node_object_prepare($node);

        $node->title = truncate_utf8($title, 255, TRUE);
        $node->language = LANGUAGE_NONE;

        if($title) {
          $node->field_article_title[$node->language][0]['value'] = $title;
        }

        // set article doi
        if($article_id = intstrux_highwire_parse_doi($entry)) {
          $node->field_article_id[$node->language][0]['doi'] = $article_id;

          drupal_set_message(t('Article ID: @id', array('@id' => $article_id)));
        } else {
          drupal_set_message(t('no article id'));
        }

        // set article page
        if($page = intstrux_highwire_parse_page($entry)) {
          $node->field_article_page[$node->language][0]['value'] = $page;
        }

        // set article month
        if($month = intstrux_highwire_parse_month($entry)) {
          $node->field_article_month[$node->language][0]['value'] = $month;
        }

        // set article year
        if($year = intstrux_highwire_parse_year($entry)) {
          // taxonomy
          if($tid = _intstrux_highwire_taxonomy($year, 'years')) {
            $node->field_article_year[$node->language][0]['tid'] = $tid;
          }  
        }

        // set article volume id
        if($volume_id = intstrux_highwire_parse_volume_id($entry)) {
          // taxonomy
          if($tid = _intstrux_highwire_taxonomy($volume_id, 'volumes')) {
            $node->field_article_volume[$node->language][0]['tid'] = $tid;  
          }       
        }

        // set article issue id
        if($issue_id = intstrux_highwire_parse_issue_id($entry)) {
          // taxonomy
          if($tid = _intstrux_highwire_taxonomy($issue_id, 'issues')) {
            $node->field_article_issue[$node->language][0]['tid'] = $tid; 
          }

          $tax_tid = 0;

          if(is_numeric($issue_id)) {  
            if($tid = _intstrux_highwire_taxonomy('Journal', 'article_types')) {
              $tax_tid = $tid; 
            }
          } elseif( strpos($issue_id, 'suppl') !== FALSE ) {
            if($tid = _intstrux_highwire_taxonomy('Supplement', 'article_types')) {
              $tax_tid = $tid; 
            }
          } else {
            if($tid = _intstrux_highwire_taxonomy('Other', 'article_types')) {
              $tax_tid = $tid;
            }
          }

          if($tax_tid) {
            $node->field_article_type[$node->language][0]['tid'] = $tax_tid;  
          }
        }

        // set article author and contributors
        if($authors = intstrux_highwire_parse_authors($entry)) {

          // authors text field
          $node->field_authors[$node->language][0]['value'] = implode(' ', $authors);

          // taxonomy
          foreach($authors as $delta => $author) {
            if($tid = _intstrux_highwire_taxonomy($author, 'authors')) {
              $node->field_article_author[$node->language][$delta]['tid'] = $tid;
            }  
          }
        }

        // set article category or section or subject
        if($section = intstrux_highwire_parse_categories($entry)) {
          // taxonomy
          if($tid = _intstrux_highwire_taxonomy($section, 'sections')) {
            $node->field_tax_section[$node->language][0]['tid'] = $tid; 
          }  
        }

        // set article published date
        if($published = intstrux_highwire_parse_published($entry)) {
          $node->field_article_published_date[$node->language][0]['value'] = $published;    
        }

        // set article updated date
        if($updated = intstrux_highwire_parse_updated($entry)) {
          $node->field_article_updated_date[$node->language][0]['value'] = $updated;  
        }

        // set article edited date
        if($edited = intstrux_highwire_parse_edited($entry)) {
          $node->field_article_edited_date[$node->language][0]['value'] = $edited;  
        }

        // set domain 
        if(TRUE) {
          $field_collection_item = entity_create('field_collection_item', array('field_name' => 'field_collection_multisite'));
          $field_collection_item->setHostEntity('node', $node);
          $field_collection_item->field_multisite_filter[$node->language][0]['value'] = 'oncologisthd.ampserver.intstrux.com';
          $field_collection_item->save();
        }

        if($html = intstrux_highwire_article_content_load_by_entry($entry, 'full')) {

          $embeddedimages = array();

          $dom = new DOMDocument();
          //$dom->formatOutput = TRUE;
          $dom->loadXML($html);
          $xpath = new DOMXPath($dom);

          $abstract_html = '';

          // find  elements under element with class abstract
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
            $node->field_abstract[$node->language][0] = array('value' => $abstract_html, 'format' => '2');  //2 = Full HTML  
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
            $node->field_embeddedimage[$node->language] = $embeddedimages; 
          }
        }

        //&& !empty($node->title)
        if ($node = node_submit($node) ) {
          node_save($node); 
          drupal_set_message(t('Node @title : @nid added successfully at page: @page', array('@title' => $node->title, '@nid' => $node->nid, '@page' => $context['sandbox']['current_page']))); 

          // store image in dom and attach to node again.
          if(isset($dom)) {
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

            if($new_html = $dom->saveHTML()) {

              // remove blank lines
              $new_html = preg_replace("/(^[\r\n]*|[\r\n]+)[\s\t]*[\r\n]+/", '', $new_html);  

              $node->field_article_body[$node->language][0] = array('value' => $new_html, 'format' => '2');  //2 = Full HTML 

              field_attach_presave('node', $node);
              field_attach_update('node', $node);
            }
          }

          // create an indicator 
          db_insert('highwire_migrate')->fields(array('nid' => $node->nid, 'atom_id' => intstrux_highwire_parse_id($entry)))->execute();

        } else {
          drupal_set_message(t('Node @title not added', array('@title' => $node->title)), "error");  
        }

        $context['results'][] = print_r($node, true);

        $context['message'] = t('Current progress: @progress | Current page: @page | Current article: @article | Total Articles: @total | Title: @title', array(
          '@progress' => $context['sandbox']['progress'],  
          '@page' => $context['sandbox']['current_page'],  
          '@article' => $context['sandbox']['current_article'],  
          '@total' => $context['sandbox']['max'],
          '@title' => $title,
        )); 
      } else {
        $context['message'] = t('Skip article @atom_id', array('@atom_id' => $atom_id));
      }
    }
    
    $context['sandbox']['current_page']++;
  }

  if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
    $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
  } 
}

function intstrux_highwire_migrate_batch_finish_import_new($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Imported Successfully');
    drupal_set_message(t('The final result !result', array('!result' => print_r($results, true))));
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}