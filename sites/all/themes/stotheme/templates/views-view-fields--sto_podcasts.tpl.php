<?php 

global $base_url;

$isiPad = (bool) strpos($_SERVER['HTTP_USER_AGENT'],'iPad');

if($row->node_type == "asset_video"){
	$filepath = $row->_field_data["nid"]["entity"]->field_video_thumbimage["und"][0]["uri"];
	$row->_field_data["nid"]["entity"]->field_video_title["und"][0]["value"];
	$speaker = $row->_field_data["nid"]["entity"]->field_video_speaker["und"][0]["value"];
	
	if($filepath == ''){
		$filepath = $row->files_node_data_field_audio_thumbimage_filepath;
	}
	
	if($title ==''){
		$title = $row->node_data_field_asset_search_field_video_title_value;
	}
	
	if($speaker == ''){
		$speaker = $row->node_data_field_asset_search_field_video_speaker_value;
	}
}
else{
	$filepath = $row->files_node_data_field_audio_thumbimage_filepath;
	$title = $row->node_data_field_audio_featured_field_audio_title_value;
	$speaker = $row->node_data_field_audio_featured_field_audio_speaker_value;
	
	if($filepath == ''){
		$filepath = $row->files_node_data_field_audio_thumbimage_filepath;
	}
	
	if($title ==''){
		$title = $row->node_data_field_asset_search_field_audio_title_value;
	}
	
	if($speaker == ''){
		$speaker = $row->node_data_field_asset_search_field_audio_speaker_value;
	}
}


//truncate the title if needed
$title = truncate_utf8($title,60,TRUE, TRUE);

//print print_r('type = '.$row->node_type);

?>

<?php if($row->node_type == "asset_video" && $row->node_data_field_video_speaker_field_asset_disclaimer_required_value == 0):?>
<div id="podcast-<?php print $row->nid?>" class="podcast-item" onclick="showPodcast('<?php print '/node/'.$row->nid;?>',false);">
<?php endif; ?>
<?php if($row->node_type == "asset_video" && $row->node_data_field_video_speaker_field_asset_disclaimer_required_value == 1): $disclaimer_text = $row->node_data_field_video_speaker_field_asset_disclaimer_text_value;?>
<div id="podcast-<?php print $row->nid?>" class="podcast-item" onclick="showDisclaimer('<?php print '/node/'.$row->nid;?>',false,'<?php print $disclaimer_text;?>',this);">
<?php endif; ?>
<?php if($row->node_type == "asset_audio" && !$isiPad): ?>
<?php
	$isremote = $row->node_data_field_audio_featured_field_audio_isremote_value;
	$remote_audio_value = $row->node_data_field_audio_featured_field_audio_remoteaudio_value;
	
	if($isremote == 1){
		$audiopath = $row->node_data_field_audio_featured_field_bcexport_audio_video_id;
	}
	else{
		$audiopath = $row->files_node_data_field_audio_localaudio_filepath;
	}
	$popuptitle = $row->node_data_field_audio_featured_field_audio_title_value;
	$popupspeaker = $row->node_data_field_audio_featured_field_audio_speaker_value;
	$popupdescription = $row->node_data_field_audio_featured_field_audio_description_value;
	$audioClick = 'audioClick(\''.$popuptitle.'\',\''.$popupspeaker.'\',\''.$popupdescription.'\',\''.$remote_audio_value.'\',\''.$audiopath.'\',this.parentNode.parentNode)';
?>
<div id="podcast-<?php print $row->nid?>" class="podcast-item" onclick="<?php print $audioClick;?>">
<?php endif; ?>
<?php if($row->node_type == "asset_audio" && $isiPad): ?>
<div id="podcast-<?php print $row->nid?>" class="podcast-item" onclick="goToURL('/node/<?php print $row->nid.'?tid_2_op=or&tid_2=141';?>');">
<?php endif; ?>

	<div class="podcast-thumb">
		<!--  <a href="<?php //print $base_url.'/node/'.$row->nid;?>"></a>-->
		<?php print theme('imagecache', 'sto_podcasts', $filepath);?> 
	</div>
	<div class="podcast-title"><?php print $title?></div>
	<div class="podcast-speaker"><?php print $speaker?></div>
</div>