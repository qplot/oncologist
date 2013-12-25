<?php
echo '12'; die;
$link =  "/".$_GET[q]."/view_items_sections/";
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

	endif;

?>