<?php
$lang = LANGUAGE_NONE;
$nid = $row->nid;
$title = $row->_field_data['nid']['entity']->field_video_title[$lang][0]['value'];
$speaker = $row->_field_data['nid']['entity']->field_video_speaker[$lang][0]['value'];
$bcid = $row->_field_data['nid']['entity']->field_bcexport[$lang][0]['video_id'];
$thumb = getBCData($bcid,$read_token);
//$thumb = "sites/default/files/IMG_0741.JPG";

print("<a href='node/".$nid."'>");
print theme('imagecache_external', array('style_name' => 'sto_podcasts', 'path' => $thumb[6]));
print("</a>");
?>

<div class="podcast_info">
	<div class="podcast_title">
	 	<?php
			print l($title, "node/".$nid);
		?>
	</div>
	<div class="podcast_speaker">
	 	<?php
			print l($speaker, "node/".$nid);
		?>
	</div>
</div>
