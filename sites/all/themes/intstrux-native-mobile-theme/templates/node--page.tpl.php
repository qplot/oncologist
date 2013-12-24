<?php
$lang = LANGUAGE_NONE;

if ($view_mode == "teaser" || $view_mode == "featured"):
	
	$nid = $node->nid;
	//$title = $node->title[$lang][0]['safe_value'];
	$title = $node->title;
	$static_content = $node->body['und'][0]['safe_value'];
	//print_r($node);
	
?>

<?php
    
	print '<div id="staticpage_'.$nid.'" class="staticpage_row" >';

	print '<div class="staticpage_main" >';
	print '<div class="staticpage_row_body" >';
	
	print($static_content);
	
	print '</div>';
	
	print '</div>'; //end main
	
	print '</div>'; //end row
		
?>

<?php
	endif;
?>
