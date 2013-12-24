<?php

function intstrux_highwire_migrate_rawdata_form($form, &$form_state) {
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

function intstrux_highwire_migrate_rawdata_form_submit(&$form, &$form_state, $start_nid = 0) {
  $operations = array();
  
  $query = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('n.nid', $start_nid, '>')
      ->condition('n.type', 'article')
      ->orderBy('n.nid', 'ASC');

  $total = $query->countQuery()->execute()->fetchField();
  
  $nids = $query->execute()->fetchAll();
  
  foreach($nids as $delta => $nid) { 
    $operations[] = array('intstrux_highwire_migrate_batch_start_rawdata', array($nid, array('total' => $total, 'progress' => $delta)));
  }
    
  $batch = array(
    'title' => t('Importing rawdata'),
    'operations' => $operations,
    'finished' => 'intstrux_highwire_migrate_batch_finish_rawdata',
    'init_message' => t('Setting page is starting.'),
    'error_message' => t('Setting page has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.rawdata.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_rawdata($nid, $details, &$context) {
  
  
  drush_print(t('-->Loading: '.$nid));

  $node = node_load($nid->nid);

  if($node) {
    
    if(isset($node->field_article_id[$node->language])) {
      
      usleep(3999999);
      
      $doi = $node->field_article_id[$node->language][0]['doi'];
      
      if($article = intstrux_highwire_article_load($doi)) {
        
        if(isset($article['atom:entry']) && $entry = $article['atom:entry']) {

          if($html = intstrux_highwire_article_content_load_by_entry($entry, 'full')) {
            
              if(isset($node->field_embeddedimage) && isset($node->field_embeddedimage[$node->language])){
                
                drush_print(t('--> OLD $node->field_embeddedimage: '.print_r($node->field_embeddedimage, true)));

                foreach ($node->field_embeddedimage[$node->language] as $key => $value) {
                  if(empty($value['fid'])){
                    drush_print(t('--> WARNING EMPTY/BROKEN FILE @ POS: '.$key));

                    unset($node->field_embeddedimage[$node->language][$key]);
                  }
                }
              }
              //Repair the index
              $node->field_embeddedimage[$node->language] = array_values($node->field_embeddedimage[$node->language]);




              //-- Filter section here -----------------
              $dom = new DOMDocument();
              @$dom->loadHTML($html);

              // store image in dom and attach to node again.
              if(isset($dom)) {

                 
                //FIND MISSING FILES
                $embeddedimages = array();

                drush_print(t('-->Searching for new iamges'));
                $xpath = new DOMXPath($dom);
              
                
                /****************************************************************/
              
                $nfigures = array();

                // find all elements with fig-inline 
                $figures = $xpath->query('//*[contains(@class, "fig-inline")]');

                foreach($figures as $figure) {

                  drush_print(t('--> Figure?'));

                  if($figure->hasChildNodes()) {
                    $figure->removeChild($figure->childNodes->item(0));  
                  }

                  $figure_id = $figure->parentNode->getAttribute('id');

                  if($ffile = _intstrux_highwire_image($entry, $figure_id, 'atom', $figure, $nfigures)) {
                    $embeddedimages[] = $ffile;
                    drush_print(t('--> Figure!'));
                  }
                }
                
                /****************************************************************/
                
                $ntables = array();

                $tables = $xpath->query('//*[contains(@class, "table-inline")]');

                foreach($tables as $table) {

                  drush_print(t('--> table?'));

                  if($table->hasChildNodes()) {
                    $table->removeChild($table->childNodes->item(0));  
                  }

                  $table_id = $table->parentNode->getAttribute('id');

                  if($tfile = _intstrux_highwire_image($entry, $table_id, 'atom', $table, $ntables)) {
                    $embeddedimages[] = $tfile;
                    drush_print(t('--> table!'));
                  }
                }
                
                /****************************************************************/
                
                $ngraphics = array();

                $graphics = $xpath->query('//*[contains(@class, "graphic-inline")]');

                foreach($graphics as $graphic) {


                  drush_print(t('--> graphic?'));

                  if($graphic->hasChildNodes()) {
                    $graphic->removeChild($graphic->childNodes->item(0));  
                  }

                  $graphic_id = $graphic->parentNode->getAttribute('id');

                  if($gfile = _intstrux_highwire_image($entry, $graphic_id, 'gif', $graphic, $ngraphics)) {
                    $embeddedimages[] = $gfile;

                    drush_print(t('--> Graphic!'));
                  }
                }
                
                /****************************************************************/
                
                if($embeddedimages) {
                   drush_print(t('--> FOUND NEW FILES'));
                  $node->field_embeddedimage[$node->language] = $embeddedimages; 
                }
              

                drush_print(t('--> NEW $node->field_embeddedimage: '.print_r($node->field_embeddedimage, true)));

                 // remove blank lines
                $new_html = preg_replace("/(^[\r\n]*|[\r\n]+)[\s\t]*[\r\n]+/", '', $html);  

                //$node->field_article_body[$node->language][0] = array('value' => $new_html, 'format' => '2');  //2 = Full HTML 
                //-- The raw entry 1:1 ------------------
                $node->field_article_raw[$node->language][0] = array('value' => $new_html, 'format' => '2');




                
                foreach($nfigures as $fid => $figure) {
                  if($file = file_load($fid)) {
                    // append figure image to html dom 
                    $imgElement = $dom->createElement('img');
                    $imgElement->setAttribute('class', 'large');
                    $imgElement->setAttribute('alt', 'Figure');
                    $imgElement->setAttribute('src', _intstrux_highwire_uri_path($file->uri));                    
                    $figure->appendChild($imgElement);
                  }          
                }
                
                /**********************************/
                
                foreach($ntables as $fid => $table) {
                  if($file = file_load($fid)) {  
                    // append table image to html dom
                    $imgElement = $dom->createElement('img');
                    $imgElement->setAttribute('class', 'large');
                    $imgElement->setAttribute('alt', 'Table');
                    $imgElement->setAttribute('src', _intstrux_highwire_uri_path($file->uri));  
                    //$imgElement->setAttribute('style', 'width: 50%;');
                    $table->appendChild($imgElement);  
                  }
                }
                
                /**********************************/
                
                foreach($ngraphics as $fid => $graphic) {
                  if($file = file_load($fid)) {  
                    // append graphic image to html dom
                    $imgElement = $dom->createElement('img');
                    $imgElement->setAttribute('class', 'graphic');
                    $imgElement->setAttribute('alt', 'Graphic');
                    $imgElement->setAttribute('src', _intstrux_highwire_uri_path($file->uri));  
                    $graphic->appendChild($imgElement);  
                  }
                }
                
                /**********************************/

                


                /**********************************/
                //Removing Learning objectives
                $h2s = @$dom->getElementsByTagName('h2');
                foreach ($h2s as $h2){
                  
                  //Unfortunately the learning objectives don't use any distinctive ID or CLASS. We have to search by the title/value of the h2 tag
                  $value = strtolower(strip_tags($h2->nodeValue));
                  
                  if(strpos($value, "learning objectives") !== FALSE){
                    $h2->parentNode->parentNode->removeChild($h2->parentNode);
                    $html  = @$dom->saveHTML();

                     drush_print(t('--> Removed learning objective'));
                  }
                }

                $new_html = $dom->saveHTML();

                  // remove blank lines
                $new_html = preg_replace("/(^[\r\n]*|[\r\n]+)[\s\t]*[\r\n]+/", '', $new_html);  

                //The filterd entry 1:1
                $node->field_article_full[$node->language][0] = array('value' => $new_html, 'format' => '2');  //2 = Full HTML 

              } // end if(isset($dom))

              // save node
              if ($node = node_submit($node) ) {
              
                node_save($node);
                drush_print(t('--> Submitted node'));
              }


              //field_attach_presave('node', $node);
              //field_attach_update('node', $node);
               //drush_print(t('--> Saving node'));
            
          }
          else{
             drush_print(t('--> Couldn\'t load the entry'));
          }
        }
        else{
           drush_print(t('--> Missing atom:entry'));
        }
      }
      else{
         drush_print(t('--> Article ccould not be loaded'));
      }
    }
    else{
       drush_print(t('--> No DOI provided'));
    }

    $context['message'] = t('Current progress: @progress | Current Node: @node | Total Nodes: @total | Title: @title', array(
      '@progress' => $details['progress'],  
      '@total' => $details['total'],
      '@node' => $node->nid,    
      '@title' => $node->title,
    ));     
  }
}

function intstrux_highwire_migrate_batch_finish_rawdata($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Verified Successfully');
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}