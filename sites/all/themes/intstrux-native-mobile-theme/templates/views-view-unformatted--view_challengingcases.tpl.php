<?php
$link =  "/".$_GET[q]."/view_items_challengingcases/";

foreach ($view->args as $key => $value) {
	
	$link .= $value ."/";
}

?>

<script language="JavaScript">
	
	function loadPage(page){
		
		var isiPad = (navigator.userAgent.match(/iPad/i) != null);
		var isSafari = navigator.userAgent.match(/Safari/i) != null;

		if(isiPad && !isSafari){
			nativeFunction('app://navigateTo/{"path":"<?php print $link;?>?page='+page+'"}');
		}
		else{
			window.location = "/"+page;
		}
	
	};
	
</script>


<?php

$page 	= $_GET['page'];

?>

<?php
	//-------  PAGE p --------------------------------------------
	// if ((mt_rand(0, 32767)/32767 < 0.33) && ($page > 1)):
	if ($page == 2):
?>

<?php

  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')->entityCondition('bundle', 'page_interactive_ad_alt')->execute();

  $keys = array_keys($result['node']);
  $total = count($keys);
  if ($total > 1) {
    $rand = rand(0,$total-1);
    $ads_id = $keys[$rand];  

	print '<div class="interactive_ad_main" >';
	$node = node_load($ads_id);
	$lang = 'und';
	$cover_image = isset($node->field_cover_image_alt[$lang][0]['uri']) ? $node->field_cover_image_alt[$lang][0]['uri'] : $node->field_cover_image[$lang][0]['uri'];
	print theme('image_style', array('style_name' => 'interactive_ad_image', 'path' => $cover_image));
	// print theme('image', array('path' => $cover_image));
	print '</div>';

  }
?>

<?php else: ?>


<?
	if ($page > 2) $page = $page -1;
	//-------  PAGE 0 --------------------------------------------
	if($page == 0):
?>

<div class="view-container menu-active">

<?php	foreach ($rows as $id => $row): ?>
 
	<div id class="item">
     

 		<?php print $row; ?>
        
 	</div>

<?php endforeach; ?>


</div>



<?php 
	//-------  EVEN --------------------------------------------
	//This is for every even page except page 0
	elseif($page>0 && $page%2 == 0):

?>

<div class="view-container menu-active">

<?php	foreach ($rows as $id => $row): ?>
 
	<div id class="item">
     

 		<?php print $row; ?>
        
 	</div>

<?php endforeach; ?>


</div>




<?php 
	//-------  UNEVEN --------------------------------------------
	//This is for every uneven page except page 0
	elseif($page>0 && $page%2 == 1):

?>

<div class="view-container menu-active">

<?php	foreach ($rows as $id => $row): ?>
 
	<div id class="item">
     

 		<?php print $row; ?>
        
 	</div>

<?php endforeach; ?>


</div>

<?php 
	endif;	// page 0
?>

<?php 
	endif;	// page ads
?>