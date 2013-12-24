<?php

//print "<pre>".print_r($row,true)."</pre>";

$nid = $row->_field_data["nid"]["entity"]->nid;
$title = $row->_field_data["nid"]["entity"]->title;
$promo_link = $row->_field_data["nid"]["entity"]->field_cancerportal_promo_link["und"][0]["value"];
$promo_image = $row->_field_data["nid"]["entity"]->field_cancerportal_promo_image["und"][0]["uri"];
$promo_text = $row->_field_data["nid"]["entity"]->field_promo_overlay_text["und"][0]["value"];
?>

<div class="overlay" onClick="javascript:location.href='<?php print $promo_link; ?>'">
	<?php
		print theme_image_style(array(
		  'style_name' => 'cancerportal_promoimage',
		  'path' => $promo_image,
		  'alt' => $title,
		  "height" => NULL,
		  "width" => NULL,
		  'attributes' => array('class' => 'royalImage'),
		));
	?>
	<div class="royalCaption">
	 	<div class="royalCaptionItem" data-show-effect="fade">
	   		<h3>
				<?php
					print $title;
				?>
			</h3>
	       	<p class="royalCaptionItem" data-show-effect="fade">
				<?php
					print $promo_text;
				?>
			</p>
		</div>
	</div>
</div>

