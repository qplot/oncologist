<?php
$link =  "/".$_GET[q]."/view_items_sections_china/";

foreach ($view->args as $key => $value) {
	
	$link .= $value ."/";
}

?>

<script language="JavaScript">
	
	var isiPad = (navigator.userAgent.match(/iPad/i) != null);
	var isSafari = navigator.userAgent.match(/Safari/i) != null;
	
	function loadPage(page){
		
		if(isiPad && !isSafari){
			nativeFunction('app://navigateTo/{"path":"<?php print $link;?>?page='+page+'"}');
		}
		else{
			window.location = "/"+page;
		}
	
	};
	
	$(document).ready(function() {
   
   		var favs = [];
   
   		$( ".favorite" ).each(function( index ) {
  			
  			favs.push($(this).attr("id"));
		});
		
		if(isiPad && !isSafari){
			window.location = 'app://registerFavorites/'+JSON.stringify(favs);
		}
		else{
			console.log( JSON.stringify(favs));
		}
		
   
 	});
	
	
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

<div class="view-container menu-inactive">


	<div class="view-container-inner view-container-left-even">
		
		<?php if(!empty($rows[0])): ?>
		
		<div id class="view-item">
       
	
	 		<?php print $rows[0]; ?>
	 	
	 	</div>
	 	<?php endif; ?>
	 	
	 	<?php if(!empty($rows[1])): ?>
	 	
	 	<div id class="view-item">
	
	 		<?php print $rows[1]; ?>
	 	
	 	</div>
        <?php endif; ?>
       
		
	</div>
	
	<?php if(!empty($rows[2])): ?>
	
	<div class="view-container-inner view-container-right-even">
    
     	<div id class="view-item">
	
	 		<?php print $rows[2]; ?>
	 	 
	 	</div>
		
		
		<?php if(!empty($rows[3])): ?>
		
		<div id class="view-item">
	
	 		<?php print $rows[3]; ?>
	 	 
	 	</div>
	 	
	 	<?php endif; ?>
	 	
	 	<?php if(!empty($rows[4])): ?>
	 	
	 	<div id class="view-item">
	
	 		<?php print $rows[4]; ?>
	 	 
	 	</div>
	 	
	 	<?php endif; ?>
		
	</div>
	
	<?php endif; ?>

</div>




<?php 
	//-------  UNEVEN --------------------------------------------
	//This is for every uneven page except page 0
	elseif($page>0 && $page%2 == 1):

?>

<div class="view-container menu-inactive">
	<div class="view-container-inner view-container-left">
		
		<?php if(!empty($rows[0])): ?>
		<div id class="view-item">
	
	 		<?php print $rows[0]; ?>
	 	 
	 	</div>
	 	<?php endif; ?>
	 	
	 	<?php if(!empty($rows[1])): ?>
	 	<div id class="view-item">
	
	 		<?php print $rows[1]; ?>
	 	 
	 	</div>
	 	<?php endif; ?>
	 	
	 	<?php if(!empty($rows[2])): ?>
	 	<div id class="view-item">
	
	 		<?php print $rows[2]; ?>
	 	 
	 	</div>
	 	<?php endif; ?>
		
	</div>
	
	<?php if(!empty($rows[3])): ?>
	<div class="view-container-inner view-container-right">
		
	 	<div id class="view-item">
	
	 		<?php print $rows[3]; ?>
	 	 
	 	</div>
	 	
	 	<?php if(!empty($rows[4])): ?>
	 	<div id class="view-item">
	
	 		<?php print $rows[4]; ?>
	 	 
	 	</div>
		<?php endif; ?>
	</div>
   <?php endif; ?>
</div>

<?php 
	endif;	// page 0
?>

<?php 
	endif;	// page ads
?>