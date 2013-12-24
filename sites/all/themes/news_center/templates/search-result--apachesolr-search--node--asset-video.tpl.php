<?php

global $read_token;

//$vars = get_defined_vars();
//print "<pre>".print_r(array_keys($vars), true)."</pre>";
//print "<pre>".print_r($result, true)."</pre>";
//print "<pre>".print_r($result, true)."</pre>";
//print $result["fields"]["entity_id"];

$nid = $result["fields"]["entity_id"];
$title = $result["fields"]["label"];
$meeting = $result["fields"]["sm_vid_Meetings"][0];
$speaker = $result["fields"]["ss_bc_speaker"];
$abstract = $result["fields"]["ss_bc_abstract"];
$is_bc_id = $result["fields"]["is_bc_id"];
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
			  'attributes' => array('class' => 'videohub_thumbnail'),
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

