<?php
$lang = LANGUAGE_NONE;

if ($view_mode == "teaser" || $view_mode == "featured"):

	$nid = $node->nid;
	$title = $node->title;
	$cover_image = isset($node->field_cover_image_alt[$lang][0]['uri']) ? $node->field_cover_image_alt[$lang][0]['uri'] : $node->field_cover_image[$lang][0]['uri'];
?>
	<?php print '<div class="interactive_ad_main" >';?>

		<?php print theme('image_style', array('style_name' => 'interactive_ad_cover_image', 'path' => $cover_image));?>
	
	<?php print '</div>';?>

<?php

else:

?>

	<?php
		//dpr($node);

		drupal_add_js(array('properties' => array('contenttype' => $node->type)), 'setting');

		$html_file = "";

		$js_lookup_file = basename($node->field_active_ad_js_url[0]['value']);

		$replacement_files = array();

		foreach ($node->field_active_ad_embedded_files[LANGUAGE_NONE] as $key => $file) {

			$file = (object)$file;

			//Filter section for unwanted files
			if($file->filemime == "application/x-javascript"){
				if( basename($file->uri) == "bridge.js" ||
					basename($file->uri) == "zepto.min.js" )
				{
					//Do nothing

				}
				//Filter the lookup file if any and attach the current via drupal js
				else if(basename($file->uri) == $js_lookup_file)
				{
					//global $base_url;

					//drupal_add_js(str_replace($base_url."/", "", $node->field_active_ad_js_url[0]['value']), array('group' => JS_THEME, 'every_page' => FALSE));

				}
				else{
					//drupal_add_js($file->uri, array('group' => JS_THEME, 'every_page' => FALSE));
				}

			}
			else if($file->filemime == "text/css")
			{
				//drupal_add_css($file->uri, array('group' => CSS_THEME, 'every_page' => FALSE));
				//drupal_add_css($file->uri);
				// "adding CSS";

			}
			else if($file->filemime == "text/html")
			{
				$html_file = drupal_realpath($file->uri);
				//print "HTML: ".$html_file."<br>";
			}

			else
			{
				//print "FILE: ".$file->uri."<br>";
				print '<meta file="'.file_create_url($file->uri).'"></meta>';
				$replacement_files[] = $file;
			}


		}


		foreach ($node->field_active_ad_video_ads[LANGUAGE_NONE] as $key => $video) {

			$video = (object)$video;

			//print "Video: ".$video->uri."<br>";
			print '<meta file="'.file_create_url($video->uri).'"></meta>';
		}

		$html_body = intstrux_native_mobile_theme_strip_selected_tags(file_get_contents($html_file));

		foreach ($replacement_files as $key => $file) {

			$html_body = str_replace(basename($file->uri), file_create_url($file->uri), $html_body);

		}

	print $html_body;

		//print str_replace('<IMG SRC="', '<IMG SRC="/sites/default/files/', intstrux_native_mobile_theme_strip_selected_tags(intstrux_native_mobile_theme_strip_selected_tags(file_get_contents(drupal_realpath($node->field_htmlfile[LANGUAGE_NONE][0]['uri'])),array("html", "head", "body"), array("title"), true)));
	?>

<?php
endif;
?>
