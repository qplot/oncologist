<?php
//print_r($node->taxonomy_vocabulary_5['und'][0]['taxonomy_term']);
$lang = LANGUAGE_NONE;
$nid = $node->nid;
$title = $node->title;
$speaker = $node->field_video_speaker[$lang][0]['value'];
$thumb = $node->field_video_thumbimage[$lang][0]['uri'];
$bcid = $node->field_bcexport[$lang][0]["video_id"];
$m3u8url = $node->field_video_remotevideo[$lang][0]["value"];
$mp4url = $node->field_video_mp4video[$lang][0]["value"];

$thumburl = getBCData($bcid,$read_token);

$description = $node->body[$lang][0]['value'];
$description_trunc = truncate_utf8($description,120,TRUE,TRUE,2);
$disclaimer_required = $node->field_asset_disclaimer_required[$lang][0]['value'];
$disclaimer = isset($node->field_asset_disclaimer_text[$lang][0]['value']) ? $node->field_asset_disclaimer_text[$lang][0]['value'] : "";

$searchArray = array("'",'"');
$replaceArray = array("&#39;","&#34;");
$title = str_replace($searchArray, $replaceArray,$title);
$description_str = str_replace($searchArray, $replaceArray, $description);
$data = array("nid"=> $nid, "title"=>truncate_utf8($title,100,TRUE,TRUE,2), "description"=>truncate_utf8($description_str,300,TRUE,TRUE,2), "type" => "Video Library");

$section_old = taxonomy_term_load($node->taxonomy_vocabulary_4[$lang][0]["tid"])->name;

//SECTION
	//For teaser we default to the type if section is empty as fallback
	$section = ($view_mode == "teaser" || $view_mode == "featured")? "Video" :"";
	
	//Check for tid
	if(!empty($node->field_tax_section[$lang][0]["tid"])){
		
		$term = taxonomy_term_load($node->field_tax_section[$lang][0]["tid"]);
		
		//check if tid still exists
		if(!empty($term)){
			$section = $term->name;
		}
	}

	//DATE 
	//default date 
	$date = date("F Y", $node->created);

	if (!empty($node->field_published[$lang][0]['value'])) {

		//Note: the publlished date is stored in ISO format
		$date = date("F Y", strtotime($node->field_published[$lang][0]['value']));
	}

	/* Removed in favour of the published date above
	//check for tid
	if (!empty($node->field_tax_article[$lang][0]['tid'])) {

		$term = taxonomy_term_load($node->field_tax_article[$lang][0]['tid']);

		//check if tid still exists
		if(!empty($term)){
			
			//See if date is set
			if(!empty($term->field_term_date[$lang][0]['value'])){
				//Full month in letters and Year with 4 digits
				$date = date("F Y", strtotime($term->field_term_date[$lang][0]['value']));
			}
		}
	}
	*/

if ($view_mode == "teaser" || $view_mode == "featured"):
?>

<div onclick="showDisclaimer({nid:<?php print $nid?>,disclaimer:'<?php print $disclaimer?>',required:<?php print $disclaimer_required;?>});">

<script language="JavaScript">
	
	
	function callback_<?php print $nid;?>(event){
		
		event.stopPropagation()
		
		var isiPad = (navigator.userAgent.match(/iPad/i) != null);
		var isSafari = navigator.userAgent.match(/Safari/i) != null;
		
		if(isiPad && !isSafari){
			nativeFunction('app://setFavorite/<?php print json_encode($data);?>');
		}
		else{
			$("#favorite_<?php print $nid;?>").toggleClass("active");
		}
		
		return false;
	}
	
</script>

	<div class="video-teaser date">
		<?php print $date;?>
	</div>
	

<?php

	print '<div id="videolibrary_row_'.$nid.'" class="videolibrary_row item_thumb_row" >';
			print '<div class="videolibrary_thumb item_thumb" id="thumb_'.$nid.'_2">';
				print theme('imagecache_external', array('style_name' => 'podcast_preview', 'path' => $thumburl[6]));
			print '</div>'; //end img

			print '<div class="videolibrary_info_wrap item_thumb_info_wrap">';
				print '<div class="videolibrary_row_title item_thumb_title" >'.$title.'</div>';
			print '</div>';

			print '<div class="videolibrary_row_speaker item_thumb_speaker" >'.$speaker.'</div>';
			print '<div class="videolibrary_row_abstract item_thumb_abstract" >'.$node->body[$lang][0]['value'].'</div>';
			
			// print '<div class="imageborder" id="thumb_'.$nid.'">';
			// print '</div>'; //end img border

			// print '<div style="clear:both;"></div>';

	print '</div>'; //end row
?>

<div id="favorite_<?php print $nid;?>" class="favorite" onclick='return callback_<?php print $nid;?>(event);'>
	FAV
</div>


	<div class="section">
		<?php print $section;?>
	</div>


</div>



<?php

else:

	//$thumburl = getBCData($bcid,$read_token);
	$bcthumb = theme('imagecache_external', array('style_name' => 'bc_thumbnail', 'path' => $thumburl[6]));

	drupal_add_js(array('properties' => array('contenttype' => $node->type)), 'setting');
	drupal_add_js(array('assetvideo' => array('mp4url' => $mp4url, 'm3u8url' => $m3u8url,'bcid' => $bcid, 'bcthumb' => $bcthumb)), 'setting');

?>

<script language="JavaScript">

	function _setFavorite(){

		window.location = 'app://setFavorite/<?php print json_encode($data);?>';
	}

</script>

	<div class="section">
		<?php print $section;?>
	</div>

<?php
print '<div class="bridge-content">';
print '<div class="assetvideo_page">';
print '<div class="assetvideo_title">'.$title.'</div>';
print '<div class="assetvideo_speaker" >'.$speaker.'</div>';
print '<div class="assetvideo_video" id="overlayvideo">'.$bcthumb.'<div id="vid_play_btn"></div><div id="vid_play_offline">Video Is Not Available When Offline</div></div>';
print '<div class="assetvideo_description" >'.$description.'</div>';
print '</div>';
print '<div class="assetvideo-background">';
print '</div>';
print '</div>';

?>

<?php
	endif;
?>
