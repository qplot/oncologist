<?php

$app_articles_alt_view = views_get_view_result('app_articles_alt','page','US','Journal');
$current_issue_volume_tid = $app_articles_alt_view[0]->_field_data['nid']['entity']->field_issue_label["und"][0]["value"];

print ($current_issue_volume_tid);

$page 	= $_GET['page'];



	//-------  PAGE 0 --------------------------------------------
	if($page == 0):
?>

<div class="view-container menu-active">

	<div class="currentissue header"></div>

<?php foreach ($rows as $id => $row): ?>
 
	<div id class="item">
     

 		<?php print $row; ?>
        
 	</div>

<?php endforeach; ?>

</div>

<?php 

	endif;

?>

