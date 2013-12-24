
<?php


//print "<pre>".print_r($row,true)."</pre>";

$nid = $row->nid;
$title = $row->node_title;
$pro_image =  $row->_field_data[nid][entity]->field_cc_pro_kol_image[und][0][uri];
$con_image =  $row->_field_data[nid][entity]->field_cc_con_kol_image[und][0][uri];
$pro_authors =  $row->_field_data[nid][entity]->field_cc_pro_kol_name[und][0][value];
$con_authors =  $row->_field_data[nid][entity]->field_cc_con_kol_name[und][0][value];

//$pro_image = "sites/default/files/IMG_0741.JPG";
//$con_image = "sites/default/files/IMG_0741.JPG";

//print theme('imagecache', "pcm-landingpage-cc", $pro_image, "Thumbnail", "",  array("id"=>"proimage", "class"=>"image")); 
print theme_image_style(array(
  'style_name' => 'pcm-landingpage-cc',
  'path' => $pro_image,
  'alt' => $title,
  'attributes' => array('id' => 'proimage', 'class' => 'image'),
));
?>

<div class="cc-image-title">Pro</div>

<?php
//print theme('imagecache', "pcm-landingpage-cc", $con_image, "Thumbnail", "",  array("id"=>"conimage", "class"=>"image")); 
print theme_image_style(array(
  'style_name' => 'pcm-landingpage-cc',
  'path' => $con_image,
  'alt' => $title,
  'attributes' => array('id' => 'conimage', 'class' => 'image'),
));
?>

<div class="cc-image-title">Con</div>

<h4>
	<?php print $title; ?>
</h4>	
	
<div class="cc-names">
	 <?php print $pro_authors; ?> 

	, &nbsp; <?php print $con_authors; ?> 
</div>

<div class="btn-learnMore">
	<?php print l("view more", "node/".$nid); ?>
</div>

