<?php
//print print_r($row);
$disclaimer = "";

if($row->node_type == "asset_video"){
	$title = $row->node_data_field_video_speaker_field_video_title_value;
	$speaker = $row->node_data_field_video_speaker_field_video_speaker_value;
	$thumb = $row->files_node_data_field_video_thumbimage_filepath;
	$file = $row->node_data_field_video_speaker_field_video_remotevideo_value;
	$disclaimer = "";
	
	
	if(isset($row->node_data_field_video_speaker_field_asset_disclaimer_required_value) && $row->node_data_field_video_speaker_field_asset_disclaimer_required_value == 1){
		
		$disclaimer = $row->node_data_field_video_speaker_field_asset_disclaimer_text_value;
	}
	
}
else{
	$title = $row->node_data_field_audio_featured_field_audio_title_value;
	$speaker = $row->node_data_field_audio_featured_field_audio_speaker_value;
	$thumb = $row->files_node_data_field_audio_thumbimage_filepath;
	$file = $row->node_data_field_audio_featured_field_audio_remoteaudio_value;
	
}

print '<div id="podcast-'.$view->args[0].'-'.$row->nid.'" class="'.($disclaimer==""? "podcast": "podcast-disclaimer").'">';
print '<div class="views-field-field-image-portrait-fid">';
print theme('imagecache', "podcast_preview", $thumb, "podcast preview", "",  "");
print '<div class="podcast-item-upper-overlay"></div>';
print '</div>'; 
print '<div class="views-content-right">';
print '<div class="title">'.$title.'</div>';
print '<div class="speaker">'.$speaker.'</div>';
print '</div>';
print '<div class="disclaimer" style="display:none;">'.$disclaimer.'</div>';
print '</div>';

if($disclaimer==""):

?>

<script type="text/javascript">
 
 $("#podcast-<?php print $view->args[0].'-'.$row->nid;?>").click(function(){
 	
 	playbackVideo(	<?php print $row->nid?>, 
 					"<?php print $file;?>",  
 					"<?php print $thumb ?>",
 					"<?php print $title ?>",
 					"<?php print $speaker ?>");
 	
 });
 
 </script>
 
<?php
else:
?>

<script type="text/javascript">
 
 $("#podcast-<?php print $view->args[0].'-'.$row->nid;?>").click(function(){
 	
 	showDisclaimer(	<?php print $row->nid?>, 
 					"<?php print $file;?>",  
 					"<?php print $thumb ?>",
 					"<?php print $title ?>",
 					"<?php print $speaker ?>",
 					"<?php print $disclaimer;?>");
 	
 });
 
 </script>

<?php
endif;
?>