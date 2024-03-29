<?php

/**
 * @file
 * Holds a method to list all BC videos that are attachable to a field.
 */

/**
 * This function is a callback for modalframe window, providing an access to browse videos.
 *
 * @see brightcove_field_menu()
 *
 * @param none
 *
 * @return A list of available videos that can be attached to a field.
 *
 * TODO: Allow limiting videos by user (own videos only).
 * TODO: Interesting feature would be to detect multiple values allowed in the
 *       parent field and allow attaching all videos at once.
 */
function brightcove_field_browse() {
  global $pager_from_array, $pager_total, $pager_page_array;

  $items_per_page = 20;

  drupal_add_css(drupal_get_path('module', 'brightcove_field') . '/styles/browse.css');
  drupal_add_js(drupal_get_path('module', 'brightcove_field') . '/js/brightcove.js');
  // Issue a BC request to list videos
  // For all videos, get a thumbnail URL
  // Theme a table with videos and a button to attach.
  $bc = brightcove_initialize();
  $matches = array();

  $page = isset($_GET['page']) ? intval($_GET['page']) : '0';

  $params = array();
  if (isset($_SESSION['brightcove_field_filter'])) {
    switch ($_SESSION['brightcove_field_filter']['search']) {
      case 'tags':
        $method = 'find_videos_by_tags';
        $params = array('or_tags' => $_SESSION['brightcove_field_filter']['keywords']);
        break;
      case 'and_tags':
        $method = 'find_videos_by_tags';
        $params = array('and_tags' => $_SESSION['brightcove_field_filter']['keywords']);
        break;

      case 'name':
      default:
        $method = 'find_videos_by_text';
        $params = array('text' => join(' ', explode(',', $_SESSION['brightcove_field_filter']['keywords'])));
        break;
    }
  }
  else {
    $method = 'find_all_videos';
  }

  $result = NULL;
  try {
    $params['page_size'] = $items_per_page;
    $params['page_number'] = $page;

    $result = $bc->find($method, $params);
  } catch (Exception $error) {
    watchdog('brightcove', 'Finding videos in autocomplete failed.', array(), WATCHDOG_ERROR);
  }

  $pager_page_array = explode(',', $page);
  $pager_total[0] = ceil($bc->total_count / $items_per_page);
  $pager_page_array[0] =
    max(0, min(
      (int)$pager_page_array[0],
      ((int)$pager_total[0]) - 1)
    );

  $items = array();
  if (count($result)) {
    foreach ($result as $video) {
      $item = array();
      $item['title'] = check_plain($video->name);
      $item['video_id'] = $video->id;
      if (!empty($video->thumbnailURL)) {
        /* if (module_exists('imagecache')) {
          $item['thumbnail'] = theme('imagecache', 'brightcove_browser', brightcove_remote_image($video->thumbnailURL));
        } else {*/
          //$item['thumbnail'] = theme('image', $video->thumbnailURL, '', '', NULL, FALSE);
          $image_vars = array('path' => $video->thumbnailURL, 'alt' => '', 'title' => '', 'attrinutes' => '');
          $item['thumbnail'] = theme('image', $image_vars);
          //$image_uri = file_build_uri($video->thumbnailURL);
          //$item['thumbnail'] = theme('image_style', array('style_name' => 'thumbnail', 'path' => $image_uri));
        //}
      }
      else {
        //$item['thumbnail'] = theme('image', brightcove_get_default_image(), '', '', array('width' => 120, 'height' => 120), FALSE);
        //$image_uri = file_build_uri(brightcove_get_default_image());
        //$item['thumbnail'] = theme('image_style', array('style_name' => 'thumbnail', 'path' => $image_uri));
        $image_vars = array('path' => brightcove_get_default_image(), 'alt' => '', 'title' => '', 'attrinutes' => '');
        $item['thumbnail'] = theme('image', $image_vars);
      }
      $items[] = $item;
    }
  }

  $pager_vars = array(
    'tags' => NULL,
    'element' => 0,
    'parameters' => array(),
    'quantity' => $items_per_page,
  );

  $pager = theme_pager($pager_vars);
  $filter_form = drupal_get_form('brightcove_field_filter_form');
  $filter_form = drupal_render($filter_form);

  return '<div class="brightcove-browse-table">' . $filter_form . $pager . theme('brightcove_field_browse_items', array('items' => $items)) . $pager . '</div>';
}

/**
 * Menu callback for brightcove_field/autocomplete.
 *
 * @param $field_name
 *   Field name - field name that is requesting autocomplete. Unused, will be utilized to limit access to certain videos for certain fields.
 * @param $string
 *   String to search for - will match videos by this text.
 * @return
 *   JSON object with matched videos.
 */
function brightcove_field_autocomplete($field_name, $string = '') {
  $bc = brightcove_initialize();
  $matches = array();

  $result = array();
  try {
    $result = $bc->find('find_videos_by_text', array('text' => $string));
  } catch (Exception $error) {
    watchdog('brightcove', 'Finding videos in autocomplete failed.', array(), WATCHDOG_ERROR);
  }
  foreach ((array) $result as $video) {
    // Note: Video ID is autogenerated by Brightcove and thus doesn't require XSS protection.
    $matches[check_plain($video->name) . ' [id:' . $video->id . ']'] = check_plain($video->name) . ' [id: ' . $video->id . ']';
  }
  drupal_json_output($matches);
}

function brightcove_field_upload() {
  drupal_add_css(drupal_get_path('module', 'brightcove_field') . '/brightcove_field.upload.css');

  $form = drupal_get_form('brightcove_field_upload_form');
  return drupal_render($form);
}

