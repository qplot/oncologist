 <?php 

global $read_token;

//print_r($row);

$nid = $row->entity_id;
$title = $row->label;
$speaker = $row->ss_bc_speaker;
$abstract = $row->ss_bc_abstract;
$meeting = $row->sm_vid_Meetings[0];
$is_bc_id = $row->is_bc_id;
$thumburl = getBCData($is_bc_id,$read_token);
 ?>

<div class="videohub_entry" id="node-<?php print $nid; ?>">
	<div class="videohub_thumb">
		<?php
			print l(theme('imagecache_external',array(
			  'style_name' => 'podcast_preview',
			  'path' => $thumburl[6],
			  'alt' => $title,
			  "height" => NULL,
			  "width" => NULL,
			  'attributes' => array('class' => 'royalImage'),
			)),'node/' . $nid, array('html' => TRUE));
		?>
	</div>
	<div class="videohub_title"><?php print l(($title),'node/'. $nid, array('html' => TRUE)); ?></div>
	<div class="videohub_speaker"><?php print $speaker; ?></div>
</div>

<div class="videohub_popup">
	<div class="videohub_title"><?php print $title; ?></div>
	<div class="videohub_speaker"><?php print $speaker; ?></div>
	<div class="videohub_abstract"><?php print $abstract; ?></div>
</div>