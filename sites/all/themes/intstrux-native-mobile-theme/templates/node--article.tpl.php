<?php
	$nid = $node->nid;
	$lang = LANGUAGE_NONE;
	$searchArray = array("'",'"');
	$replaceArray = array("&#39;","&#34;"); 
	$title = preg_replace("/\<a([^>]*)\>([^<]*)\<\/a\>/i", "$2", str_replace($searchArray,$replaceArray, $node->title));
	$description_trunc = str_replace($searchArray, $replaceArray, strip_tags($node->field_abstract[$lang][0]['value']));
	$description = isset($description_trunc) ? $description_trunc : "";
	$data = array("nid"=>$nid, "title"=>truncate_utf8($title,100,TRUE,TRUE,2), "description"=>truncate_utf8($description,300,TRUE,TRUE,2), "type" => "Article");
	$issue = taxonomy_term_load($node->field_article_issue[$lang][0]["tid"])->name;
	$volume = taxonomy_term_load($node->field_article_volume[$lang][0]["tid"])->name;

	$abstract = $node->field_abstract[$lang][0]['value'];

	
	if(!empty($abstract))
	$abstract = intstrux_native_mobile_theme_filter_abstract($abstract);
	 //   $abstract = amp_filter_article($abstract);

	//print_r($abstract);


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
	if (!empty($node->field_article_month[$lang][0]["value"]) && !empty($node->field_article_year[$lang][0]["tid"]) ){

		$term = taxonomy_term_load($node->field_article_year[$lang][0]["tid"]);

		//check if tid still exists
		if(!empty($term)){
			
			//Full month in letters and Year with 4 digits
			$month = date("F", mktime(0, 0, 0, $node->field_article_month[$lang][0]["value"], 1)) ;
			$year = $term->name;
			$date = $month." ".$year;
			
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

<div onclick="loadPage('node/<?php print $nid;?>');" class="item-article item-pagehtml">

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
		<?php

			$count = count($node->field_article_author[$lang]);
			$lastitem = end((array_keys($node->field_article_author[$lang])));
				
			foreach ($node->field_article_author[$lang] as $key => $value){

				$term = taxonomy_term_load($value["tid"]);
				print($term->name);

				if($count > 0 && $key != $lastitem){
					print(", ");			
				}
			}

		?>
		
	</div>
	
	<div class="abstract">
		<?php empty($abstract) ? print strip_tags($node->field_article_body[$lang][0]['safe_value']) : print strip_tags(str_replace("Background.", "", str_replace("Introduction.", "", $abstract)));?>
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

<?php
		/* Enable for Keyword debugging

		$keywords = "<ol class='keywords'>";
		foreach ($node->field_keywords[$node->language] as $key => $value) {
			$value = taxonomy_term_load($value['tid']);
			$keywords .= '<li>'.$value->name.' ['.$value->tid.']</li>';
		}
		$keywords .= "</ol>";

		print $keywords;

		*/
?>	
	
	<div class="format-cadmus format-highwire">
	
		<div class="section">
			<?php print $section;?>
		</div>

		<div class="issue">
			VOL. <?php print $volume?>, NO. <?php print $issue?>, <?php print $month?> <?php print $year?> 
		</div>

		<?php
		if(empty($node->field_article_full[$lang][0]['value'])):

					//Fallback
			

					?>

					<div class="title">
                    	<?php 
                            print $title;
                    	?>
            		</div>

              		<?php
                       	if(empty($node->field_article_affiliations[$lang][0]['safe_value'])):
               		?>

	                    <div class="author">
	                        <?php

	                            $count = count($node->field_article_author[$lang]);
	                            $lastitem = end((array_keys($node->field_article_author[$lang])));
	                                                
	                            foreach ($node->field_article_author[$lang] as $key => $value){

	                                $term = taxonomy_term_load($value["tid"]);
	                                print($term->name);

	                                if($count > 0 && $key != $lastitem){
	                                    print(", ");                        
	                                }
	                            }

	                        ?>
	                
	                    </div>

                	<?php
                        else:
                	?>

                        <div class="author">
                                <?php print $node->field_authors[$lang][0]['safe_value'];?>
                        </div>

                        <div class="affiliation">
                                <?php print $node->field_article_affiliations[$lang][0]['safe_value'];?>
                        </div>

                	<?php
                        endif;
                	?>
                	<?php if(!empty($abstract)): ?>

                        <div class="abstract">
                                
                                <h2>A<span class="sc">bstract</span>:</h2>
                                <?php print preg_replace_callback('@(<a[^>]*>)([^<]*)(</a>)@i', 'intstrux_native_mobile_theme_shorten_a_text', $abstract);?>
                        </div>

                	<?php endif; ?>

                <?php
                //End of fallback
				

		endif;

		?>


		<div class="body">

			<?php
				
				$body = $node->field_article_body[$lang][0]['safe_value'];

				if(!empty($node->field_article_full[$lang][0]['value'])){
					$body = $node->field_article_full[$lang][0]['value'];
				}


				$shortened = preg_replace_callback('@(<a[^>]*>)([^<]*)(</a>)@i', 'intstrux_native_mobile_theme_shorten_a_text', $body);

				$baseurl_cleaned = str_replace('http://127.0.0.1', $GLOBALS['base_url'], $shortened);

				$imagecached = str_replace('/sites/default/files', '/sites/default/files/styles/article/public', $baseurl_cleaned);

        		$imagecached = str_replace('http://stage.onchd.alpha.intstrux.com', $GLOBALS['base_url'], $imagecached);

				preg_match_all('/<img [^>]*src=["|\']([^"|\']+)/i', $imagecached, $matches);

				foreach ($matches[1] as $key => $value){

					$img = str_replace('/sites/default/files/styles/article/public', '/sites/default/files', $value);
	        	    
					$width = 0;
					$height = 0;

	        	    //Find out if the file exists
	        	    $uri = DRUPAL_ROOT.$img;
					if (file_exists($uri)) {
  						// Do something
						//print('<span fileexists '. $uri.'></span>');

  						list($width, $height) = getimagesize($uri);
					}
					else{
						$uri = DRUPAL_ROOT.'/sites/default/files/styles/article/public/'.str_replace("/sites/default/files/", "", $img);


						if (file_exists($uri)) {

							//print('<span fileexists '. $uri.'></span>');

							list($width, $height) = getimagesize($uri);
						}
						else{
							//print('<span files not found '. $uri.'></span>');
						}
					}

					//Broken image?
					if($height <=0){
						$imagecached = str_replace($value, '/imageNotFound400.jpg', $imagecached);
					}
					else{
						
						$image_ratio = $width/$height;

	        	    	if($image_ratio < 0.80){

	        	    		$imagecached = str_replace($value, '/sites/default/files/styles/portrait_image'.str_replace("/sites/default/files/", "/public/", $img), $imagecached);
	        	    	}
	        		}
	        

				}

				print $imagecached;

			?>

		</div>
	
	
	</div>
	
	
<?php
endif;
?>

