
<?php


//print "<pre>".print_r($row,true)."</pre>";

$nid = $row->nid;
$title = $row->_field_data[nid][entity]->field_article_title[und][0][value];
$abstract = $row->_field_data[nid][entity]->field_abstract[und][0][value];


?>

<div class="sidebarBox" id="featured-article">	

	<h4> <?php print $title; ?> </h4>
	<div class="abstract">
		<?php print $abstract; ?> 
	</div>
	
	<div class="btn-learnMore">
		<?php print l("view more", "node/".$nid); ?>
	</div>
	


</div>