<?php
$lang = LANGUAGE_NONE;
$nid = $row->nid;
$title = $row->_field_data['nid']['entity']->field_video_title[$lang][0]['value'];
$speaker = $row->_field_data['nid']['entity']->field_video_speaker[$lang][0]['value'];
$bcid = $row->_field_data['nid']['entity']->field_bcexport[$lang][0]['video_id'];
$thumb = getBCData($bcid,$read_token);
//$thumb = "sites/default/files/IMG_0741.JPG";

//print l(theme('imagecache', "pcm-landingpage-videooverlay", $thumb, "Thumbnail", "",  array("class"=>"royalImage")), "node/".$nid, array('html'=>true));
print theme('imagecache_external', array('style_name' => 'pcm-landingpage-videooverlay', 'path' => $thumb[6], 'alt' => $title, 'attributes' => array('class' => 'royalImage')));
?>
<div class="royalCaption">
 	<div class="royalCaptionItem" data-show-effect="fade">
   		<h3>
			<?php
				print $title;
			?>
		</h3>
       	<p class="royalCaptionItem" data-show-effect="fade">
			<?php
				print $speaker;
			?>
		</p>
	</div>
</div>
<div class="overlay" onClick="javascript:location.href='/node/<?php print $nid; ?>'"></div>
