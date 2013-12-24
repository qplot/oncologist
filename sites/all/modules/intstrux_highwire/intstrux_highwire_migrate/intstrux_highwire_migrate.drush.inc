<?php

function intstrux_highwire_migrate_body_drush_migrate($start_nid = 0) {
  
  $operations = array();
  
  drush_print(dt('Start migration'));
  
  $query = db_select('node', 'n')
    ->fields('n', array('nid'))
    ->condition('n.type', 'page_html')
    ->condition('n.nid', $start_nid, '>')
    ->orderBy('n.nid', 'ASC');
  
  $query->leftJoin('field_data_field_article_body', 'ab', 'n.nid = ab.entity_id');
  $query->condition(
    db_or()
      ->condition('ab.field_article_body_value', NULL, 'IS NULL')
      ->condition('ab.field_article_body_value', '')
  );
 
  $total = $query->countQuery()->execute()->fetchField();
  
  $nids = $query->execute();

  foreach($nids as $delta => $nid) { 
    $operations[] = array('intstrux_highwire_migrate_batch_start_body', array($nid, array('total' => $total, 'progress' => $delta)));
  }
    
  $batch = array(
    'operations' => $operations,
    'finished' => 'intstrux_highwire_migrate_batch_finish_body',
  );

  batch_set($batch); 
  $batch =& batch_get();
  
  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;
  
  //Start processing the batch operations.
  drush_backend_batch_process(); 
}

function intstrux_highwire_migrate_batch_start_body($nid, $details, &$context) {
  
  usleep(2000000);
  
  if (empty($context['sandbox'])) {
    $context['sandbox'] = array();
    $context['results']['found'] = 0;
    $context['results']['not_found'] = 0;
  }
  
  $node = node_load($nid->nid);
  
  $args = array(
    'path' => 'opensearch/results',
    'params' => array(
      'v' => '1', // required value is 1
      'cql' => 'dc.title all (' . _node_title_encode($node->title) . ')', // the searchTerms CQL search query, search by title
      'type' => 'json' // output should be returned in JSON format.
    ),
  );
    
  //if(isset($node->field_article_id[$node->language])) {
  if($result = intstrux_highwire_request($args)) {

    //$article_id = $node->field_article_id[$node->language][0]['doi'];  
    
    //if($article = intstrux_highwire_article_load($article_id)) {
    
    
    if(isset($result['atom:feed']) && isset($result['atom:feed']['opensearch:totalResults']) && $result['atom:feed']['opensearch:totalResults']['$'] == 1) {
    
      $entry = $result['atom:feed']['atom:entry'];
      
      drush_print(dt('Found: ') . $result['atom:feed']['opensearch:totalResults']['$']);
      
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
            $imgElement->setAttribute('src', _file_create_url($file->uri));
            $figure->appendChild($imgElement);
          }          
        }

        foreach($ntables as $fid => $table) {
          if($file = file_load($fid)) {  
            // append table image to html dom
            $imgElement = $dom->createElement('img');
            $imgElement->setAttribute('class', 'large');
            $imgElement->setAttribute('alt', 'Table');
            $imgElement->setAttribute('src', _file_create_url($file->uri)); 
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
            $imgElement->setAttribute('src', _file_create_url($file->uri)); 
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
  $context['message'] = t('Current progress: @progress | Current Node: @node | Total Articles: @total | Title: @title', array(
    '@progress' => $details['progress'],  
    '@node' => $node->nid,    
    '@total' => $details['total'],
    '@title' => $node->title,
  ));  
}

function intstrux_highwire_migrate_batch_finish_body($success, $results, $operations) {
  if ($success) {
    // Here we could do something meaningful with the results.
    // We just display the number of nodes we processed...
    drupal_set_message(t('@count results processed in @requests HTTP requests.', array('@count' => count($results), '@requests' => 'nothing yay' )));
    drupal_set_message(t('The final result was "%final"', array('%final' => end($results))));
  }
  else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}

function intstrux_highwire_migrate_drush_import($volume) {
  
  $finished = false;
  $max = 0;
  $progress = 0;
  $current_page = 0;
  
  while(!$finished) {
    
    usleep(3999999);
    
    $count = 1;
    $start = ($current_page * $count) + 1;
    
    if($result = intstrux_highwire_search_by_volume($volume, $start, $count)) {
      $totalResults = $result['opensearch:totalResults']['$'];
      
      if(!$max) {
        $max = $totalResults;
      }
      
      $current_page++;
      
      // if there's only one item, create key 0
      if(!isset($result['atom:entry'][0])) {
        $atom_entry = $result['atom:entry'];
        unset($result['atom:entry']);
        $result['atom:entry'] = array(
          '0' => $atom_entry,
        );
      }
      
      $progress++;
      
      foreach($result['atom:entry'] as $entry) {
   
        $atom_id = db_select('highwire_migrate', 'hwm')
            ->fields('hwm', array('atom_id'))
            ->condition('hwm.atom_id', intstrux_highwire_parse_id($entry))
            ->execute()
            ->fetchField();
        
        if(empty($atom_id)) {
          $title = intstrux_highwire_parse_title($entry); 
          
          // create new node
          $node = new stdClass();
          $node->type = 'article';
          node_object_prepare($node);
          
          // set node author 
          if(!isset($node->nid)) {
            $node->uid = 1;
          }
          
          $node->title = truncate_utf8($title, 255, TRUE);
          $node->language = LANGUAGE_NONE;
          
          if($title) {
            $node->field_article_title[$node->language][0]['value'] = $node->title;
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
          
          // set abstract and images
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
                  $imgElement->setAttribute('src', _file_create_url($file->uri));
                  $figure->appendChild($imgElement);
                }          
              }

              foreach($ntables as $fid => $table) {
                if($file = file_load($fid)) {  
                  // append table image to html dom
                  $imgElement = $dom->createElement('img');
                  $imgElement->setAttribute('class', 'large');
                  $imgElement->setAttribute('alt', 'Table');
                  $imgElement->setAttribute('src', _file_create_url($file->uri)); 
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
                  $imgElement->setAttribute('src', _file_create_url($file->uri)); 
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
            
            $message = t('Current progress: @progress | Current page: @page | Current article: @article | Total Articles: @total | Title: @title', array(
              '@progress' => $progress,  
              '@page' => $current_page,  
              '@article' => $article_id,  
              '@total' => $max,
              '@title' => $title,
            )); 
            
            drush_print($message);

          } else {
            drupal_set_message(t('Node @title not added', array('@title' => $node->title)), "error");  
          }
        } else {
          $message = t('Current progress: @progress | Current page: @page | Total Articles: @total | Skip article @atom_id', array(
            '@progress' => $progress,  
            '@page' => $current_page,  
            '@total' => $max,
            '@atom_id' => $atom_id,
          ));
          drush_print($message);
        }
      }
      
      
    }
    
    if ($progress == $max) {
      $finished = true;
    }
  }
}

function intstrux_highwire_migrate_drush_remove() {
    
  $query = db_select('node', 'n')
          ->fields('n', array('n.nid'))
          ->condition('n.type', 'article');
  
  $nids = $query->execute()->fetchAll();
  
  foreach($nids as $nid) {
    node_delete($nid->nid);
    db_delete('highwire_migrate')->condition('nid', $nid->nid)->execute();
    drush_print(t('Removed Node ID: @id', array('@id' => $nid->nid)));
  }
  
  drush_print(t('All articles have been removed successfully'));
    
}

function intstrux_highwire_migrate_drush_reindex($start_nid, $node_type) {
  
  drush_print(t('Please wait :D'));
  
  module_load_include('inc', 'intstrux_highwire_migrate', 'intstrux_highwire_migrate.reindex');
  
  $form = NULL;
  $form_state = NULL;
  
  intstrux_highwire_migrate_reindex_form_submit($form, $form_state, $start_nid, $node_type);
  $batch =& batch_get();
  
  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;
  
  //Start processing the batch operations.
  drush_backend_batch_process(); 
}

function intstrux_highwire_migrate_drush_country() {
  drush_print(t('Please wait :D'));
  
  module_load_include('inc', 'intstrux_highwire_migrate', 'intstrux_highwire_migrate.country');
  
  $form = NULL;
  $form_state = NULL;
  
  intstrux_highwire_migrate_country_form_submit($form, $form_state);
  $batch =& batch_get();
  
  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;
  
  //Start processing the batch operations.
  drush_backend_batch_process(); 
}

function intstrux_highwire_migrate_drush_cme() {
  drush_print(t('Please wait :D'));
  
  module_load_include('inc', 'intstrux_highwire_migrate', 'intstrux_highwire_migrate.cme');
  
  $form = NULL;
  $form_state = NULL;
  
  intstrux_highwire_migrate_cme_form_submit($form, $form_state);
  $batch =& batch_get();
  
  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;
  
  //Start processing the batch operations.
  drush_backend_batch_process(); 
  
  
  drush_print(t('Process has been completed'));
}

function intstrux_highwire_migrate_drush_page() {
  drush_print(t('Please wait :D'));
  
  module_load_include('inc', 'intstrux_highwire_migrate', 'intstrux_highwire_migrate.page');
  
  $form = NULL;
  $form_state = NULL;
  
  intstrux_highwire_migrate_page_form_submit($form, $form_state);
  $batch =& batch_get();
  
  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;
  
  //Start processing the batch operations.
  drush_backend_batch_process(); 
  
  
  drush_print(t('Process has been completed'));
}

function intstrux_highwire_migrate_drush_affiliation($start_nid) {
  drush_print(t('Please wait :D'));
  
  module_load_include('inc', 'intstrux_highwire_migrate', 'intstrux_highwire_migrate.affiliation');
  
  $form = NULL;
  $form_state = NULL;
  
  intstrux_highwire_migrate_affiliation_form_submit($form, $form_state, $start_nid);
  $batch =& batch_get();
  
  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;
  
  //Start processing the batch operations.
  drush_backend_batch_process(); 
  
  
  drush_print(t('Process has been completed'));
}


function intstrux_highwire_migrate_drush_rawdata($start_nid) {
  drush_print(t('Please wait :D'));
  
  module_load_include('inc', 'intstrux_highwire_migrate', 'intstrux_highwire_migrate.rawdata');
  
  $form = NULL;
  $form_state = NULL;
  
  intstrux_highwire_migrate_rawdata_form_submit($form, $form_state, $start_nid);
  $batch =& batch_get();
  
  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;
  
  //Start processing the batch operations.
  drush_backend_batch_process(); 
  
  
  drush_print(t('Process has been completed'));
}


function intstrux_highwire_migrate_drush_keywords($start_nid) {
  drush_print(t('Please wait :D'));
  
  module_load_include('inc', 'intstrux_highwire_migrate', 'intstrux_highwire_migrate.keywords');
  
  $form = NULL;
  $form_state = NULL;
  
  intstrux_highwire_migrate_keywords_form_submit($form, $form_state, $start_nid);
  $batch =& batch_get();
  
  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;
  
  //Start processing the batch operations.
  drush_backend_batch_process(); 
  
  
  drush_print(t('Process has been completed'));
}


function intstrux_highwire_migrate_drush_article_cleanup($start_nid) {
  drush_print(t('Please wait :D'));
  
  module_load_include('inc', 'intstrux_highwire_migrate', 'intstrux_highwire_migrate.cleanup');
  
  $form = NULL;
  $form_state = NULL;
  
  intstrux_highwire_migrate_cleanup_form_submit($form, $form_state, $start_nid);
  $batch =& batch_get();
  
  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;
  
  //Start processing the batch operations.
  drush_backend_batch_process(); 
  
  
  drush_print(t('Process has been completed'));
}

function intstrux_highwire_migrate_drush_correspondence($start_nid) {
  drush_print(t('Please wait :D'));
  
  module_load_include('inc', 'intstrux_highwire_migrate', 'intstrux_highwire_migrate.correspondence');
  
  $form = NULL;
  $form_state = NULL;
  
  intstrux_highwire_migrate_correspondence_form_submit($form, $form_state, $start_nid);
  $batch =& batch_get();
  
  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;
  
  //Start processing the batch operations.
  drush_backend_batch_process(); 
  
  
  drush_print(t('Process has been completed'));
}


function intstrux_highwire_migrate_drush_command() {
  $items  = array();
  
  $items['highwire-body-migrate'] = array(
    'callback'    => 'intstrux_highwire_migrate_body_drush_migrate',
    'aliases' => array('hw-body-migrate'),
    'description' => dt('Migrate highwire articles with existing articles.'),
    'arguments' => array(
      'start_nid' => 'Integer start nid.',
    ),
    'options' => array (
      'show-progress' => 'Will cause progress information to be printed to stdout',
    ),
  );
  
  $items['highwire-import'] = array(
    'callback'    => 'intstrux_highwire_migrate_drush_import',
    'aliases' => array('hw-import'),
    'description' => dt('Migrate highwire articles with existing articles.'),
    'arguments' => array(
      'volume' => 'HighWire volume number.',
    ),
  );
  
  $items['highwire-remove-article'] = array(
    'callback'    => 'intstrux_highwire_migrate_drush_remove',
    'aliases' => array('hw-remove-article'),
    'description' => dt('Remove highwire articles.'),
  );
  
  $items['highwire-reindex-node'] = array(
    'callback'    => 'intstrux_highwire_migrate_drush_reindex',
    'aliases' => array('hw-reindex-node'),
    'description' => dt('Reindex Nodes.'),
    'arguments' => array(
      'start_nid' => 'Integer start nid.',
      'node_type' => 'Node type.',
    ),
  );
  
  $items['highwire-country-select'] = array(
    'callback'    => 'intstrux_highwire_migrate_drush_country',
    'aliases' => array('hw-country-select'),
    'description' => dt('Articles Country Select.'),
  );
  
  $items['highwire-cme-select'] = array(
    'callback'    => 'intstrux_highwire_migrate_drush_cme',
    'aliases' => array('hw-cme-select'),
    'description' => dt('Articles CME Select.'),
  );
  
  $items['highwire-article-page'] = array(
    'callback'    => 'intstrux_highwire_migrate_drush_page',
    'aliases' => array('hw-article-page'),
    'description' => dt('Articles page.'),
  );
  
  $items['highwire-article-aff'] = array(
    'callback'    => 'intstrux_highwire_migrate_drush_affiliation',
    'aliases' => array('hw-article-aff'),
    'description' => dt('Importing affiliations.'),
    'arguments' => array(
      'start_nid' => 'Integer start nid.',
    ),      
  );


  $items['highwire-article-rawdata'] = array(
    'callback'    => 'intstrux_highwire_migrate_drush_rawdata',
    'aliases' => array('hw-article-rawdata'),
    'description' => dt('Importing rawdata.'),
    'arguments' => array(
      'start_nid' => 'Integer start nid.',
    ),      
  );

  $items['highwire-article-keywords'] = array(
    'callback'    => 'intstrux_highwire_migrate_drush_keywords',
    'aliases' => array('hw-article-keywords'),
    'description' => dt('Importing keywords.'),
    'arguments' => array(
      'start_nid' => 'Integer start nid.',
    ),      
  );

  $items['highwire-article-cleanup'] = array(
    'callback'    => 'intstrux_highwire_migrate_drush_article_cleanup',
    'aliases' => array('hw-article-cleanup'),
    'description' => dt('Cleanup articles (remove learning objectives).'),
    'arguments' => array(
      'start_nid' => 'Integer start nid.',
    ),      
  );
  
  $items['highwire-corresp'] = array(
    'callback'    => 'intstrux_highwire_migrate_drush_correspondence',
    'aliases' => array('hw-article-aff'),
    'description' => dt('Importing correspondence.'),
    'arguments' => array(
      'start_nid' => 'Integer start nid.',
    ),      
  );
  
  return $items;
}
 
function intstrux_highwire_migrate_drush_help($section) {
  switch ($section) {
    case 'drush:highwire-body-migrate':
      return dt('HighWire Migrate command');
    case 'drush:highwire-import':
      return dt('HighWire Import command');
    case 'drush:highwire-remove-article':
      return dt('HighWire remove Article command');    
    case 'drush:highwire-reindex-node':
      return dt('Reindex Nodes command');   
    case 'drush:highwire-country-select':
      return dt('HighWire Country Select command');    
  }
}

function _file_create_url($uri) {
  
  $url = file_create_url($uri);
  
  $status_table = _core_site_status_table(drush_get_option('project', ''));
  
  if($status_table['Database name'] == 'projectalpha_staging') {
    $url = str_replace('//default', '//stage.onchd.alpha.intstrux.com', $url);  
  } elseif($status_table['Database name'] == 'drupal7_amp') {
    $url = str_replace('//default', '//localhost/ampserver', $url);
  }

  return $url;
}

function _node_title_encode($title) {
  /*
  $pos = strpos($title, '/');

  if($pos !== FALSE) {
    if(isset($title[$pos])) {
      $title[$pos] = '';
    }
    
    if(isset($title[$pos - 1])) {
      $title[$pos - 1] = '';
    }
  }

  
  $pos = strpos($title, '?');
  
  if($pos !== FALSE) {
    if(isset($title[$pos])) {
      $title[$pos] = '';
    }
  }
   * 
   */
  
  $title = preg_replace('/\(.*\)/', '', $title);
  
  $title = str_replace('/', ' ', $title);
  $title = str_replace('?', '', $title);
  $title = str_replace('.', '', $title);
  $title = str_replace(':', '', $title);
  
  $title = strip_tags($title);
  
  $title = str_replace('>', '', $title);
  $title = str_replace('<', '', $title);

  return $title;
}