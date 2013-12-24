<?php
//$vars = get_defined_vars();
//print "<pre>".print_r(array_keys($vars), true)."</pre>";
//print "<pre>".print_r($result, true)."</pre>";
//print "<pre>".print_r($result, true)."</pre>";
//print $result["fields"]["entity_id"];
?>

<div id="search-item-<?php print $result["fields"]["entity_id"];?>" class="search-item">
	

	<div class="section"><?php print_r(taxonomy_term_load($result["fields"]["im_vid_22"][0])->name); ?></div>

	<?php
		if($result["fields"]["bundle"] == "article"):
	?>
	
	<div class="search-volume">Vol. <?php print (taxonomy_term_load($result["fields"]["im_vid_12"][0])->name); ?></div>
	<div class="search-issue">No. <?php print (taxonomy_term_load($result["fields"]["im_vid_11"][0])->name); ?></div> 
	<div class="search-month"> <?php print date("F", mktime(0, 0, 0, taxonomy_term_load($result["fields"]["im_vid_11"][0])->name, 1)); ?></div> 
	<div class="search-year"> <?php print (taxonomy_term_load($result["fields"]["im_vid_13"][0])->name); ?></div>

	<?php
		endif;
	?>

	<div class="search-title"><?php print l($result["fields"]["label"], "node/".$result["fields"]["entity_id"]); ?></div>
	<div class="search-snippet"><?php print l($result["snippet"], "node/".$result["fields"]["entity_id"], array('html' => TRUE));?></div>

</div>

