<?php

function intstrux_highwire_migrate_cleanup_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Cleanup articles') . '</p>',
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

function intstrux_highwire_migrate_cleanup_form_submit(&$form, &$form_state, $start_nid = 0) {
  $operations = array();
  
  $query = db_select('node', 'n')
      ->fields('n', array('nid'))
      ->condition('n.nid', $start_nid, '>')
      ->condition('n.type', 'article')
      ->orderBy('n.nid', 'ASC');

  $total = $query->countQuery()->execute()->fetchField();
  
  $nids = $query->execute();
  
  $i=0;
  while($record = $nids->fetchAssoc()) { 
    $operations[] = array('intstrux_highwire_migrate_batch_start_cleanup', array($record['nid'], array('total' => $total, 'progress' => $i++)));
  }
    
  $batch = array(
    'title' => t('Cleanup articles'),
    'operations' => $operations,
    'finished' => 'intstrux_highwire_migrate_batch_finish_cleanup',
    'init_message' => t('Setting page is starting.'),
    'error_message' => t('Setting page has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.cleanup.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_cleanup($nid, $details, &$context) {
  
  
  $dnode = node_load($nid);

  if(is_object($dnode) && $dnode->nid) {
    
    drush_print("============================================================================");
    drush_print("");

    usleep(3999999);
    
    //Cleanup the abstract HTML
    $abstract = $dnode->field_abstract[$dnode->language][0]['value'];  

    if(empty($abstract)){
      drush_print("NO ABSTRACT");
    }
    else{
      //loading the abstract
      $d = new DOMDocument;
      @$d->loadHTML($abstract);


      //Remvoal of learning objectives which hides within a h2 without ID or classname
      $h2s = @$d->getElementsByTagName('h2');
    
      foreach ($h2s as $h2){
            
        $value = strtolower(strip_tags($h2->nodeValue));
            
        if($value == "learning objectives"){
          $h2->parentNode->parentNode->removeChild($h2->parentNode);
          
          drush_print("learning objectives removed from abstract node");
        }
      }

      //Removal of class or id based items
      $elements = $d->getElementsByTagName("*");

      $attr = array();

      foreach($elements as $node)
      {
          if( ! $node -> hasAttributes())
              continue;

          //DUPLICATE removal
          //TODO: this seems to be an importer bug...
          $idAttribute = $node -> attributes -> getNamedItem('id');

          if( $idAttribute){

            //print $idAttribute->nodeValue;           

            if(in_array($idAttribute->nodeValue, $attr)){

              $node->parentNode->removeChild($node);

              drush_print("DUPLICATE removed from abstract node");
              continue;
            }

            $attr[] =  $idAttribute->nodeValue;

          }
        

          //Remove certain unwanted elements
          $classAttribute = $node -> attributes -> getNamedItem('class');

          if( ! $classAttribute)
              continue;

          $classes = explode(' ', $classAttribute -> nodeValue);

          //Contributers is a repeat of a different field
          //copyright statement is unwanted in abstract
          //Footnote is unwanted as well
         if(  in_array("contributors" , $classes) || 
              in_array("copyright-statement" , $classes) ||
              in_array("fn-group" , $classes)){
           
            drush_print("DIV with class: ". print_r($classes,true) ." removed from abstract node");

            $node->parentNode->removeChild($node);
          }
      }

      $h1s = @$d->getElementsByTagName('h1');
    
      foreach ($h1s as $h1){
        $h1->parentNode->removeChild($h1);
        drush_print("H1 removed from abstract node");
      }

      $h2s = @$d->getElementsByTagName('h2');
    
      foreach ($h2s as $h2){
        $h2->parentNode->removeChild($h2);
        drush_print("H2 removed from abstract node");
      }

      # remove <!DOCTYPE 
      $d->removeChild($d->firstChild);            

      # remove <html><body></body></html> 
      $html = @$d->getElementsByTagName('html');
      $html_tag = $html->item(0);
      $d->replaceChild($html_tag->firstChild->firstChild, $html_tag);

      $dnode->field_abstract[$dnode->language][0] = array('value' => @$d->saveHTML(), 'format' => '2'); 


      drush_print($dnode->field_abstract[$dnode->language][0]['value']);
    }


    


    $body = $dnode->field_article_body[$dnode->language][0]['safe_value'];

    $d = new DOMDocument;
    @$d->loadHTML($body);

    $h2s = @$d->getElementsByTagName('h2');
  
    foreach ($h2s as $h2){
          
      $value = strtolower(strip_tags($h2->nodeValue));
          
      if($value == "learning objectives"){
        $h2->parentNode->parentNode->removeChild($h2->parentNode);
        
        # remove <!DOCTYPE 
        $d->removeChild($d->firstChild);            

        # remove <html><body></body></html> 
        $html = @$d->getElementsByTagName('html');
        $html_tag = $html->item(0);
        $d->replaceChild($html_tag->firstChild->firstChild, $html_tag);

        $dnode->field_article_body[$dnode->language][0] = array('value' => @$d->saveHTML(), 'format' => '2');

        drush_print("-------> learning objectives removed from body node");

        drush_print($dnode->field_article_body[$dnode->language][0]['value']);
      }
    }


    field_attach_presave('node', $dnode);
    field_attach_update('node', $dnode);
    


    $context['message'] = t('Current progress: @progress | Current Node: @node | Total Nodes: @total | Title: @title', array(
      '@progress' => $details['progress'],  
      '@total' => $details['total'],
      '@node' => $dnode->nid,    
      '@title' => $dnode->title,
    ));     
  }
}

function intstrux_highwire_migrate_batch_finish_cleanup($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Cleanup Successfull');
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}