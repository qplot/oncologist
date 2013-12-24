<?php
$lang = LANGUAGE_NONE;
$nid = $node->nid;
$title = $node->title;
$author = $node->field_perspective_author[$lang][0]['value'];
$author_image = $node->field_perspective_author_picture[$lang][0]['uri'];
$abstract =  isset($node->body[$lang][0]["value"]) ? $node->body[$lang][0]["value"] : "";
$fulltext = $node->field_perspective_fulltext[$lang][0]['value'];
$thumbnail =  $node->field_bc_thumbnail[$lang][0]['value'];
$streaming = $node->field_perspective_murl_streamed[$lang][0]['value'];
$bcid = $node->field_bcexport[$lang][0]['video_id'];
$article = isset($node->field_perspective_htmlfile[$lang][0]["uri"]) ? $node->field_perspective_htmlfile[$lang][0]['uri'] : "";
$page =  isset($_GET['page']) ? strtolower($_GET['page']) : "perspective";

$searchArray = array("'",'"');
$replaceArray = array("&#39;","&#34;");
$title = str_replace($searchArray, $replaceArray,$title);

$abstract = preg_replace_callback('@(<a[^>]*>)([^<]*)(</a>)@i', 'intstrux_native_mobile_theme_shorten_a_text', $abstract);

$description = str_replace($searchArray, $replaceArray, $abstract);
$data = array("nid"=> $nid, "title"=>truncate_utf8($title,100,TRUE,TRUE,2), "description"=>truncate_utf8($description,300,TRUE,TRUE,2), "type" => "Perspective");

$section = taxonomy_term_load($node->field_sections[$lang][0]["tid"])->name;

if ($view_mode == "teaser" || $view_mode == "featured"):

?>

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

<div onclick="loadPage('node/<?php print $nid;?>');" class="perspective">

<?php
	print '<div id="perspective_row_'.$nid.'" class="perspective_row item_thumb_row" >';
		print '<div class="contenttype">Perspectives</div>';

		print '<div class="perspective_author item_thumb" id="thumb_'.$nid.'_2">';
			print theme('image_style', array('style_name' => 'perspective_square_100x100', 'path' => $author_image));
		print '</div>'; //end img

		print '<div class="videolibrary_info_wrap item_thumb_info_wrap">';
			print '<div class="perspective_row_title item_thumb_title" >'.$title.'</div>';
		print '</div>';
		print '<div class="perspective_row_author item_thumb_speaker" >'.$author.'</div>';
		print '<div class="perspective_row_abstract item_thumb_abstract" >'.$abstract.'</div>';
		print '<div class="section">'.$section.'</div>';
		

	print '</div>'; //end row

?>

<div id="favorite_<?php print $nid;?>" class="favorite" onclick='return callback_<?php print $nid;?>(event);'>
	FAV
</div>

</div>

<?php

else:

	$thumburl = getBCData($bcid,$read_token);
	$bcthumb = theme('imagecache_external', array('style_name' => 'bc_thumbnail', 'path' =>$thumburl[6]));

	drupal_add_js(array('properties' => array('contenttype' => $node->type)), 'setting');

?>

<script language="JavaScript">

	function _setFavorite(){

		window.location = 'app://setFavorite/<?php print json_encode($data);?>';
	}

</script>

<?php

$file_article = file_get_contents($article);

	if(empty($bcid)){
		$showtab=1;
	}else if(empty($file_article)){
		 $showtab=2;
	}

	drupal_add_js(array('perspective' => array('m3u8url' => $streaming,'bcid' => $bcid,'bcthumb' => $bcthumb,'showtab' => $showtab)), 'setting');

	print '<div class="main-content">';
	print '<div class="perspective_bnts">';
	print '<div class="perspective_video_btn">Perspective</div>';
	print '<div class="perspective_article_btn inactive">Article</div>';
	print '</div>';
	print '<div class="perspective_page">';
	print '<div class="perspective_title">'.$title.'</div>';
	print '<div class="perspective_speaker" >'.$author.'</div>';
	print '<div class="bridge-content">';
	print '<div class="assetvideo_video" id="overlayvideo">'.$bcthumb.'<div id="vid_play_btn"></div><div id="vid_play_offline">Video Is Not Available When Offline</div></div>';
	print '<div class="assetvideo_abstract" >'.$abstract.'</div>';
	print '</div>';
	print '</div>';
	print '<div class="perspective_background">';
	print '</div>';
	print '<div class="perspective_article">';
	print '<div class="assetvideo_article" >';
	//print str_replace("SRC=\"", 'SRC="/sites/default/files/uploads/perspective/'.$node->nid.'/', str_replace("src=\"", 'src="/sites/default/files/uploads/perspective/'.$node->nid.'/', $file_article));
	//Hotfix for perspective image issue
	print preg_replace_callback('@(<a[^>]*>)([^<]*)(</a>)@i', 'intstrux_native_mobile_theme_shorten_a_text', str_replace("SRC=\"", 'SRC="/sites/default/files/', str_replace("src=\"", 'src="/sites/default/files/', $file_article)));
	
	print '</div>';
	print '</div>';

print '</div>';

?>

<?php
	endif;
?>
