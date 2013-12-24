<?php
$lang = LANGUAGE_NONE;
$nid = $node->nid;
$title = $node->title;
$author = $node->field_perspective_author[$lang][0]['value'];
$author_image = $node->field_perspective_author_picture[$lang][0]['uri'];
$abstract =  isset($node->body["und"][0]["value"]) ? $node->body["und"][0]["value"] : "";
$fulltext = $node->field_perspective_fulltext[$lang][0]['value'];
$thumbnail =  $node->field_bc_thumbnail[$lang][0]['value'];
$streaming = $node->field_perspective_murl_streamed[$lang][0]['value'];
$bcid = $node->field_bcexport[$lang][0]['video_id'];
$article = isset($node->field_perspective_htmlfile[$lang][0]["uri"]) ? $node->field_perspective_htmlfile[$lang][0]['uri'] : "";
$page =  isset($_GET['page']) ? strtolower($_GET['page']) : "perspective";
$thumburl = getBCData($bcid,$read_token);
$bcthumb = theme('imagecache_external', array('style_name' => 'bc_thumbnail', 'path' =>$thumburl[6]));

$searchArray = array("'",'"');
$replaceArray = array("&#39;","&#34;");
$title = str_replace($searchArray, $replaceArray,$title);
$description = str_replace($searchArray, $replaceArray, $abstract);
$data = array("nid"=> $nid, "title"=>truncate_utf8($title,100,TRUE,TRUE,2), "description"=>truncate_utf8($description,300,TRUE,TRUE,2), "type" => "Perspective");

$section = taxonomy_term_load($node->field_sections[$lang][0]["tid"])->name;

if ($view_mode == "web_cancer_portal_perspectives" || $view_mode == "teaser"):

?>

<?php
	print '<div id="perspective_row_'.$nid.'" class="perspective_row item_thumb_row" >';

		print '<div class="perspective_author item_thumb" id="thumb_'.$nid.'_2">';
			print theme('image_style', array('style_name' => 'perspective_square_100x100', 'path' => $author_image));
		print '</div>'; //end img

		print '<div class="videolibrary_info_wrap item_thumb_info_wrap">';
			print '<div class="perspective_row_title item_thumb_title" >'.$title.'</div>';
			print '<div class="perspective_row_author item_thumb_speaker" >'.$author.'</div>';
			print '<div class="perspective_row_abstract item_thumb_abstract" >'.$abstract.'</div>';
		print '</div>';

		print '<div class="perspective_viewlink"><a href="node/'.$nid.'">View Perspective</a></div>';

	print '</div>'; //end row

?>

<?php

else:

	$file_article = file_get_contents($article);

print '<div class="main-content">';
	print '<div class="perspective_bnts">';
	print '<div class="perspective_video_btn">Perspective</div>';

	if(isset($node->field_perspective_htmlfile[$lang][0]["uri"])){
		print '<div class="perspective_article_btn inactive">Article</div>';
	}else{
		print '<div style="display:none" class="perspective_article_btn inactive">Article</div>';
	}

	print '</div>';
	print '<div class="perspective_page">';
	print '<div class="perspective_title">'.$title.'</div>';
	print '<div class="perspective_speaker" >'.$author.'</div>';
	print '<div class="bridge-content">';
	?>

	<script type="text/javascript">
	//updateFilters(<?php //print '"'.$meetings.'","'.$categories.'","'.$audio.'"';?>);
</script>

<!-- Start of Brightcove Player -->

<div style="display:none">

</div>

<!--
By use of this code snippet, I agree to the Brightcove Publisher T and C 
found at https://accounts.brightcove.com/en/terms-and-conditions/. 
-->

<script language="JavaScript" type="text/javascript" src="https://sadmin.brightcove.com/js/BrightcoveExperiences.js"></script>

<object id="myExperience<?php print $bc_id?>" class="BrightcoveExperience">
  <param name="bgcolor" value="#FFFFFF" />
  <param name="width" value="990" />
  <param name="height" value="525" />
  <param name="playerID" value="2210701528001" />
  <param name="playerKey" value="AQ~~,AAABygfs89k~,Glyk08Otwu3eRqbfnMOULWodrOQ1UHDL" />
  <param name="isVid" value="true" />
  <param name="isUI" value="true" />
  <param name="dynamicStreaming" value="true" />
  <param name="@videoPlayer" value="<?php print $bcid?>" />
  <param name="secureConnections" value="true" /> 
  <!-- smart player api params -->
  <param name="includeAPI" value="true" />
  <param name="templateLoadHandler" value="BCL.onTemplateLoad" />
  <param name="templateReadyHandler" value="BCL.onTemplateReady" /> 
</object>

<!-- 
This script tag will cause the Brightcove Players defined above it to be created as soon
as the line is read by the browser. If you wish to have the player instantiated only after
the rest of the HTML is processed and the page load is complete, remove the line.
-->
<script type="text/javascript">brightcove.createExperiences();</script>

<!-- End of Brightcove Player -->

	<?php
	print '<div class="assetvideo_abstract" >'.$abstract.'</div>';
	print '</div>';
	print '</div>';
	print '<div class="perspective_background">';
	print '</div>';
	print '<div class="perspective_article active">';
	print '<div class="assetvideo_article" >';
	print str_replace("SRC=\"", 'SRC="/sites/default/files/uploads/perspective/'.$node->nid.'/', str_replace("src=\"", 'src="/sites/default/files/uploads/perspective/'.$node->nid.'/', $file_article));
	print '</div>';
	print '</div>';

print '</div>';

?>

<?php
	endif;
?>
