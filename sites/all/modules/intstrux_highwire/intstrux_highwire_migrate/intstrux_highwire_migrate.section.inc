<?php

function intstrux_highwire_migrate_section_form($form, &$form_state) {
  $form = array();
  
  $form['description'] = array(
    '#type' => 'markup',
    '#markup' => '<p>' . t('Replace Article Section Taxonomy') . '</p>',
  );
  
  $form['actions'] = array(
    '#type' => 'actions'
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Replace Section'),
  );
  
  return $form;
}

function intstrux_highwire_migrate_section_form_submit(&$form, &$form_state) {
  $operations = array();
  
  //$temps = array(63680, 63662, 63661, 63634, 63620, 63614, 63604, 63572, 63569, 63552, 63513, 63494, 63486, 63480, 63472, 63470, 63464, 63458, 63443,  63372, 63360, 63359, 63348, 63343, 63175, 63053, 63046, 63003, 62986, 62972, 62925, 62909, 62790, 62784, 63722, 63818, 63827, 63831, 63845, 63846, 63852, 63860, 63865, 63866, 63888, 63894, 63936, 64086, 64088, 64098, 64115, 64147, 64148, 64156, 64285, 64472, 64473, 64479, 64491, 64499, 64516, 64517, 64537, 64538, 64539, 64547, 64553, 64557, 64569, 64574, 64610, 64620, 64624, 64639, 64657, 64659, 64660, 64666, 64669, 64673, 64733, 64755, 64758, 64759, 64799, 64903, 64966, 64973, 65003, 65004, 65020, 65032, 65053, 65096, 65151, 65176, 65199, 65206, 65266);
  
  //$query = db_select('node', 'n')->fields('n', array('nid'))->condition('n.nid', $temps, 'iN');
  
  $query = db_select('node', 'n')->fields('n', array('nid'))->condition('n.type', 'article');
  
  $total = $query->countQuery()->execute()->fetchField();
  
  $nids = $query->execute()->fetchAll();
  
  foreach($nids as $delta => $nid) { 
    $operations[] = array('intstrux_highwire_migrate_batch_start_section', array($nid, array('total' => $total, 'progress' => $delta)));
  }
    
  $batch = array(
    'title' => t('Processing HighWire Article Section Replace'),
    'operations' => $operations,
    'finished' => 'intstrux_highwire_migrate_batch_finish_section',
    'init_message' => t('HighWire section replace is starting.'),
    'error_message' => t('HighWire section replace has encountered an error.'),
    'progress_message' => t('Current: @current | Remaining: @remaining | Total: @total | Percentage: @percentage | Estimate: @estimate | Elapsed: @elapsed'),
    'file' => drupal_get_path('module', 'intstrux_highwire_migrate') . '/intstrux_highwire_migrate.section.inc',
  );

  batch_set($batch);  
}

function intstrux_highwire_migrate_batch_start_section($nid, $details, &$context) {
  $node = node_load($nid->nid);
  
  if($node) {
    
    if(isset($node->field_tax_section[$node->language])){
      $tid = $node->field_tax_section[$node->language][0]['tid'];
      
      if($term = taxonomy_term_load($tid)) {
        $replace_with = array(
          'Academia–Pharma Intersect' => 'Academia-Pharma Intersect',
          'Cancer Diagnostics' => 'Cancer Diagnostics and Molecular Pathology',
          'COMMENTARY' => 'Commentaries',
          'COMMENTARY: BREAST CANCER' => 'Commentaries',
          'COMMENTARY: LUNG CANCER' => 'Commentaries',
          'EDITORIALS' => 'Editorial',
          'EDITORIAL: LUNG CANCER' => 'Editorial',
          'EDITORIAL: BREAST CANCER' => 'Editorial',
          'Genitourinary Cancer' => 'Genitourinary Cancer: Prostate',
          'Head and Neck Cancer' => 'Head and Neck Cancers',
          'Lymphomas' => 'Lymphoma',
          'Lymphoma Series: Variants of Large-Cell Lymphoma' => 'Lymphoma',
          'Medical Ethics: Schwartz Center Rounds' => 'Medical Ethics',
          'Outcomes Research: Case Reports' => 'Outcomes Research',
          'Reflection' => 'Reflections',
          'REFLECTIONS: ON SEPTEMBER 11, 2001: ITS IMPACT ON THE PRACTICE OF MEDICINE' => 'Reflections',
          'Regulatory Issues: EMA' => 'Regulatory Issues',
          'Regulatory Issues: FDA' => 'Regulatory Issues',
          'Symptom Management' => 'Symptom Management and Supportive Care',
        );

        if(array_key_exists($term->name, $replace_with)) {
          $replace_with_term = $replace_with[$term->name];

          drupal_set_message($replace_with_term . ' was ' . $term->name);
          
          if(!empty($replace_with_term)) {
            if($tid = _intstrux_highwire_taxonomy($replace_with_term, 'sections')) {

              $entity = new stdClass();
              $entity->nid = $node->nid;
              $entity->vid = $node->vid;
              $entity->type  = $node->type;

              $entity->field_tax_section[$node->language][0]['tid'] = $tid;

              field_attach_presave('node', $entity);
              field_attach_update('node', $entity);

              // remove unused terms manually after batch complete

              $context['results']['nodes'][] = t('Node ID: @nid | Node Title: @title', array('@nid' => $node->nid, '@title'=> $node->title));
            }
          }
        }
      }
    }
    
    $context['message'] = t('Current progress: @progress | Current Node: @node | Total Articles: @total | Title: @title', array(
      '@progress' => $details['progress'],  
      '@total' => $details['total'],
      '@node' => $node->nid,    
      '@title' => $node->title,
    ));     
  }
}

function intstrux_highwire_migrate_batch_finish_section($success, $results, $operations) {
  if ($success) {
    drupal_set_message('Migrated Successfully');
    drupal_set_message(t('The final result !result', array('!result' => print_r($results, true))));
  } else {
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0], '@args' => print_r($error_operation[0], TRUE))));
  }
}

