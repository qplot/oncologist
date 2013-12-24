<?php 

	$lang = LANGUAGE_NONE;
	
	$remote_video = $node->field_video_remotevideo[$lang][0]['value'];
	
	if ($node->field_video_mp4video[$lang][0]["value"] === NULL){
		$mp4_video = $base_url."/".$node->field_video_rvideoupload[$lang][0]['filepath']; 
	}else{
		$mp4_video = $node->field_video_mp4video[$lang][0]["value"]; 
	}
	$thumbnail = $node->field_video_thumbimage[$lang][0]['filepath'];
	$title = $node->field_video_title[$lang][0]['value'];
	$speaker = $node->field_video_speaker[$lang][0]['value'];
	$xml_file = $node->field_asset_xml_file[$lang][0]['value'];
	$swf_file = $node->field_asset_swf_file[$lang][0]['value'];
	$bcid = $node->field_bcexport[$lang][0]["video_id"];
	$bcmeta = getBCData($bcid,$read_token);
	
	$uid = $user->uid;
	$first = $profile->field_user_firstname[$lang][0]['value'];
	$last = $profile->field_user_lastname[$lang][0]['value'];
	$email = $user->mail;
	
	//print $remote_video.','.$title.','.$speaker.','.$xml_file;
	
	$most_viewed = $_GET['mostviewed'];
	
	//$isiPad = (bool) strpos($_SERVER['HTTP_USER_AGENT'],'iPad');
	$isiPad = false;
	if(strpos($_SERVER['HTTP_USER_AGENT'],'iPad') || strpos($_SERVER['HTTP_USER_AGENT'],'iPhone') || strpos($_SERVER['HTTP_USER_AGENT'],'iPod')){
		$isiPad = true;
	}

if ($view_mode == "web_cancer_portal_video_library" || $view_mode == "teaser"):

?>
		
<?php
		
		print '<div id="videolibrary_item_'.$nid.'" class="videolibrary_item item_thumb_row" >';
			print '<div class="videolibrary_event" >'.$bcmeta[2].'</div>';
			print '<a href="node/'.$nid.'"><div class="videolibrary_thumb item_thumb" id="thumb_'.$nid.'_2">';
				print theme('imagecache_external', array('style_name' => 'podcast_preview', 'path' => $bcmeta[6]));
			print '</div></a>'; //end img
			print '<a href="node/'.$nid.'"><div class="videolibrary_title" >'.$title.'</div></a>';
			print '<div class="videolibrary_speaker" >'.$speaker.'</div>';
			print '<div class="videolibrary_abstract" >'.$node->body[$lang][0]['value'].'</div>';
		print '</div>';

else:

print '<div class="videolibrary_event" >'.$bcmeta[2].'</div>';

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

<object id="myExperience<?php print $bcid?>" class="BrightcoveExperience">
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

	print '<div class="videolibrary_title" >'.$title.'</div>';
	print '<div class="videolibrary_speaker" >'.$speaker.'</div>';
	print '<div class="videolibrary_abstract" >'.$node->body[$lang][0]['value'].'</div>';

?>

<?php
	endif;
?>