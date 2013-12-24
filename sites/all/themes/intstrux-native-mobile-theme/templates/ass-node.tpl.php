<?php
//$vars = get_defined_vars();
//print "<pre>".print_r(array_keys($vars), true)."</pre>";
//print "<pre>".print_r($result, true)."</pre>";
//print $result["fields"]["entity_id"];
?>

<div onclick="popupPage('node/<?php print $result["fields"]["entity_id"];?>');" id="search-item-<?php print $result["fields"]["entity_id"];?>" class="search-item">
	<div class="type">
		<?php 

			if($result["fields"]["bundle"] == "article" || $result["fields"]["bundle"] == "page_html")
				print "Article";
			else
				print $result["fields"]["bundle_name"]; 
		?>

       </div>
	
	<div class="title"><?php print $result["fields"]["label"]; ?></div>
	<div class="snippet"><?php 
		/*
		$snippet = $result["snippet"];
		$label = $result["fields"]["label"];
		//Removes the title from the snippet to avoid doubling up
		if(strpos($snippet, $label) <= 2){

			$snippet = str_replace($label, "", $snippet, 1);
		}

		//Remove the xml tags
		$snippet = preg_replace('/<\?xml[^>]+\?>/im', '', $snippet);


		print $snippet; 
	*/
	?></div>
</div>

