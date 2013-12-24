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

	endif;

?>

