<?php
//dpr($node->field_collection_video_mp4videos);

	global $base_url;
	global $base_path;
	$lang = LANGUAGE_NONE;

	$path = file_create_url($node->field_ad_html_file[$lang][0]['uri']);
	$path = $_SERVER['DOCUMENT_ROOT'] .str_replace($base_url, "", $path);

	if (file_exists($path)) {
		$content = file_get_contents($path);
		print $content;
	}
	else{
		print "not found: ".$path;

	}


	foreach ($node->field_embeddedfiles[$lang] as $key => $value) {


		$mime = file_get_mimetype($value['uri']);

		if(strpos($mime, "video/") === FALSE){

			$path = drupal_realpath($value['uri']);

			if (file_exists($path)) {
				print "EMBED file found<br>";

			}
			else{
				print "Embed file missing: ".$value['uri'] ." path: ".$path."<br>";

			}
		}

	}


	if(!empty($node->field_video_mp4background[$lang][0]['value'])){

		print "Brightcove background video: ".$node->field_video_mp4background[$lang][0]['value']."<br>";


	}


	//field_ad_background_image

	//

	foreach ($node->field_collection_video_mp4videos[$lang] as $key => $value) {




		$item = field_collection_item_load($value['value']);



		print "Brightcove embed video: ".$item->field_videos_mp4videos[$lang][0]['value']."<br>";
	}
