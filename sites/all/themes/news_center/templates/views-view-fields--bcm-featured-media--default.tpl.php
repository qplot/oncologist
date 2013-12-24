
      
<?php


//print "<pre>".print_r($row,true)."</pre>";

$nid = $row->nid;
$title = $row->_field_data[nid][entity]->field_video_title[und][0][value];
$speaker = $row->_field_data[nid][entity]->field_video_speaker[und][0][value];
$thumb = $row->_field_data[nid][entity]->field_video_thumbimage[und][0][uri];
//$thumb = "sites/default/files/IMG_0741.JPG";

//print l(theme('imagecache', "pcm-landingpage-videooverlay", $thumb, "Thumbnail", "",  array("class"=>"royalImage")), "node/".$nid, array('html'=>true));
print theme_image_style(array(
  'style_name' => 'pcm-landingpage-videooverlay',
  'path' => $thumb,
  'alt' => $title,
  'attributes' => array('class' => 'royalImage'),
));
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
