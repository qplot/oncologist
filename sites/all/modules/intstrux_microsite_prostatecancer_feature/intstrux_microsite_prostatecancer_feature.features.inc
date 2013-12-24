<?php
/**
 * @file
 * intstrux_microsite_prostatecancer_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function intstrux_microsite_prostatecancer_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function intstrux_microsite_prostatecancer_feature_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function intstrux_microsite_prostatecancer_feature_image_default_styles() {
  $styles = array();

  // Exported image style: challenging_cases_kol_image.
  $styles['challenging_cases_kol_image'] = array(
    'name' => 'challenging_cases_kol_image',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 102,
          'height' => 130,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: challenging_cases_kol_tab_image.
  $styles['challenging_cases_kol_tab_image'] = array(
    'name' => 'challenging_cases_kol_tab_image',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 24,
          'height' => 30,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: pcm-landingpage-cc.
  $styles['pcm-landingpage-cc'] = array(
    'name' => 'pcm-landingpage-cc',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 56,
          'height' => 73,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: pcm-landingpage-videooverlay.
  $styles['pcm-landingpage-videooverlay'] = array(
    'name' => 'pcm-landingpage-videooverlay',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 520,
          'height' => 390,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sto_podcasts.
  $styles['sto_podcasts'] = array(
    'name' => 'sto_podcasts',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
