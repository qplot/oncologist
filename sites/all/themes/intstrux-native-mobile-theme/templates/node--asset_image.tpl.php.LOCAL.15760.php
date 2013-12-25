<?php
$lang = LANGUAGE_NONE;
$nid = $node->nid;
$searchArray = array("'",'"');
$replaceArray = array("&#39;","&#34;"); 
$title = preg_replace("/\<a([^>]*)\>([^<]*)\<\/a\>/i", "$2", str_replace($searchArray,$replaceArray, $node->title));
$description_trunc = str_replace($searchArray, $replaceArray, $node->field_abstract[$lang][0]['value']);
$description = isset($description_trunc) ? $description_trunc : "";
$data = array("nid"=>$nid, "title"=>truncate_utf8($title,100,TRUE,TRUE,2), "description"=>truncate_utf8($description,300,TRUE,TRUE,2), "type" => "Article");


//SECTION
	//For teaser we default to the type if section is empty as fallback
	$section = ($view_mode == "teaser" || $view_mode == "featured")? "Article" :"";
	
	//Check for tid
	if(!empty($node->field_tax_section[$lang][0]["tid"])){
		
		$term = taxonomy_term_load($node->field_tax_section[$lang][0]["tid"]);
		
		//check if tid still exists
		if(!empty($term)){
			$section = $term->name;
		}
	}

	//DATE 
	//Date needs to be loaded from the associated taxonmy term of a journal, currently there is no fallback if that is missing
	$date = "";

	//check for tid
	if (!empty($node->field_tax_article[$lang][0]['tid'])) {

		$term = taxonomy_term_load($node->field_tax_article[$lang][0]['tid']);

		//check if tid still exists
		if(!empty($term)){
			
			//See if date is set
			if(!empty($term->field_term_date[$lang][0]['value'])){
				//Full month in letters and Year with 4 digits
				$date = date("F Y", strtotime($term->field_term_date[$lang][0]['value']));
			}
		}
	}


if ($view_mode == "teaser" || $view_mode == "featured"):
	
?>

	<script language="JavaScript">


	function callback_<?php print $nid;?>(event){
		
		event.stopPropagation()
		
		var isiPad = (navigator.userAgent.match(/iPad/i) != null);
		var isSafari = navigator.userAgent.match(/Safari/i) != null;
		
		if(isiPad && !isSafari){
			nativeFunction('app://setFavorite/<?php print json_encode($data);?>');
		}
		else{
			$("#favorite_<?php print $nid;?>").toggleClass("active");
		}
		
		return false;
	}
	</script>

<div onclick="loadPage('node/<?php print $nid;?>');" class="item-pagehtml">

	<div id="favorite_<?php print $nid;?>" class="favorite" onclick='return callback_<?php print $nid;?>(event);'>
		FAV
	</div>

	<div class="date">
		<?php print $date;?>
	</div>
	
	<div class="title">
		<?php
			print $title;
		?>
	</div>
	
	<div class="author">
		<?php print $node->field_authors[$lang][0]['safe_value'];?>
	</div>
	
	<div class="abstract">
		<?php print strip_tags($node->field_abstract[$lang][0]['value']);?>
	</div>

	<div class="section">
		<?php print $section;?>
	</div>
	
</div>

<?php 
else:



	drupal_add_js(array('properties' => array('contenttype' => $node->type)), 'setting');
?>

	<script language="JavaScript">
		
		function _setFavorite(){
			
			window.location = 'app://setFavorite/<?php print json_encode($data);?>';
		}
		
	</script>

	<div class="format-cadmus">
	
	<div class="section">
		<?php print $section;?>
	</div>

	<div class="date">
		<?php print $date?>
	</div>

	<?php
		
	$asset_image = $node->field_image_image[$lang];
	drupal_add_js(array('properties' => array('contenttype' => $node->type)), 'setting');	
	
	foreach ($asset_image as $key => $value): ?>
     
     	<div id class="item">
     
 			<?php print theme('image_style', array('style_name' => 'asset_image', 'path' => $value["uri"]));?>

		</div>
		
	<?php endforeach; ?>

	<script language="JavaScript">
		
		function _setFavorite(){
			
			window.location = 'app://setFavorite/<?php print json_encode($data);?>';
		}
		
	</script>
	
<?php
endif;
?>