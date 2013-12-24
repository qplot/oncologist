<?php
$lang = LANGUAGE_NONE;

if ($view_mode == "teaser" || $view_mode == "featured"):
	
	$link = $node->field_portal_url[$lang][0]['value'];
	$banner = $node->field_portal_banner[$lang][0]['uri'];
	$nid = $node->nid;
	$title = $node->title;
	

?>

<?php
	
	print '<div id="cancerportal_row_'.$nid.'" class="cancerportal_row" >';

	print '<div class="cancerportal_main" >';
	print '<div class="perspective_row_image" >';
	
	if(isset($link)){		
		print '<a href="'.$link.'" target="_blank">';
		print theme('image_style', array('style_name' => 'portal_banner', 'path' => $banner));
		print '</a>';
	}else{
		print '<div class="cancerportal_nolink" >';
		print theme('image_style', array('style_name' => 'portal_banner', 'path' => $banner));
		print '</div>';
	}
	
	print '</div>';
	
	print '</div>'; //end main
	
	print '</div>'; //end row
		
?>

<?php
	endif;
?>