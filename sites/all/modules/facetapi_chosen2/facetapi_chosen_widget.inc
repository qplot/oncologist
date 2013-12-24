<?php

/**
 * @file
 * Form builder for the Facet API Chosen widget.
 */

class ChosenFacetapiSelect extends FacetapiWidget {

  /**
   * Renders the form.
   */
  public function execute() {
    $element = &$this->build[$this->facet['field alias']];
    $name = array_pop(explode(':', $this->build['#settings']->name));
    $element = drupal_get_form('facetapi_chosen_facetapi_select_' .  $name, $element);
  }
}


/**
 * Generates form for the facet.
 */
function facetapi_chosen_facetapi_select($form, &$form_state, $elements) {

  // Build options from facet elements.
  $options = array('' => t('- Select -'));
  foreach ($elements as $element) {
    if ($element['#active']) {
      continue;
    }
    $options[serialize($element['#query'])] = $element['#markup'] . '(' . $element['#count'] . ')';
  }
  if (count($options) == 1) {
    return;
  }
  $form['select'] = array(
    '#type' => 'select',
    '#options' => $options,
    '#attributes' => array('class' => array('ctools-auto-submit')),
    'default_value' => '',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Filter'),
    '#attributes' => array('class' => array('ctools-use-ajax', 'ctools-auto-submit-click')),
    '#submit' => array('facetapi_chosen_facetapi_select_submit'),
  );

  $form['#attached']['js'][] = drupal_get_path('module', 'ctools') . '/js/auto-submit.js';
  $form['#attached']['js'][] = drupal_get_path('module', 'facetapi_chosen') . '/facetapi_chosen_hide_submit.js';
  $form['#attributes']['class'][] = 'chosen-select-facet';

  return $form;
}

/**
 * Provides submit handler for facet form.
 */
function facetapi_chosen_facetapi_select_submit($form, &$form_state) {
  $form_state['redirect'] = array($_GET['q'], array('query' => unserialize($form_state['values']['select'])));
}
