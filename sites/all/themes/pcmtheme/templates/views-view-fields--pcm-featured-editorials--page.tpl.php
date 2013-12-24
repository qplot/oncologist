
<?php


//print "<pre>".print_r($row->_field_data[nid][entity]->field_article_title[und][0][value],true)."</pre>";

$nid = $row->nid;
$title = $row->_field_data[nid][entity]->field_article_title[und][0][value];
$abstract = $row->_field_data[nid][entity]->field_abstract[und][0][value];

if(!empty($abstract))
		$abstract = pcmtheme_filter_abstract($abstract);

?>

<div class="sidebarBox" id="featured-article">	
	<h4> <?php print $title; ?> </h4>
	<div class="abstract">
		<?php empty($abstract) ? print strip_tags($row->_field_data['nid']['entity']->field_article_body['und'][0]['value']) : print strip_tags(str_replace("Background.", "", str_replace("Introduction.", "", $abstract)));?>
	</div>
	
	<div class="btn-learnMore">
		<?php print l("view more", "node/".$nid); ?>
	</div>
	


</div>
