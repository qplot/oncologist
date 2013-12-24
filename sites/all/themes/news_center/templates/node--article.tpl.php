<?php
	$lang = LANGUAGE_NONE;
	$nid = $node->nid;
	$searchArray = array("'",'"');
	$replaceArray = array("&#39;","&#34;"); 
	$title = str_replace($searchArray,$replaceArray,$title = $node->field_article_title[$lang][0]['safe_value']);
	$description_trunc = str_replace($searchArray, $replaceArray, strip_tags($node->field_abstract[$lang][0]['value']));
	$description = isset($description_trunc) ? $description_trunc : "";
	$data = array("nid"=>$nid, "title"=>truncate_utf8($title,100,TRUE,TRUE,2), "description"=>truncate_utf8($description,300,TRUE,TRUE,2), "type" => "Article");
	$section = taxonomy_term_load($node->field_tax_section[$lang][0]["tid"])->name;
	$section_tid = $node->field_tax_section[$lang][0]["tid"];
	$month = date("F", mktime(0, 0, 0, $node->field_article_month[$lang][0]["value"], 1));
	$year = taxonomy_term_load($node->field_article_year[$lang][0]["tid"])->name;
	$issue = taxonomy_term_load($node->field_article_issue[$lang][0]["tid"])->name;
	$volume = taxonomy_term_load($node->field_article_volume[$lang][0]["tid"])->name;
	//print_r($node);

if ($view_mode == "teaser" || $view_mode == "web_cancer_portal_current_issue"):

?>

	<a href="taxonomy/term/<?php print $section_tid;?>" class="item-article section tid">

		<div class="item-article section">
			<?php print $section;?>
		</div>
	</a>

<a href="node/<?php print $nid;?>" class="item-article">
	
	<div class="item-article title">
		<?php 
			$title_cleaned = preg_replace("/\<a([^>]*)\>([^<]*)\<\/a\>/i", "$2", $node->field_article_title[$lang][0]['value']);
			print $title_cleaned;
		?>
	</div>
</a>

	<div class="item-article date">
		<?php print $month;?> <?php print $year;?>
	</div>
		
	<div class="item-article author">
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
		<?php print strip_tags($node->field_abstract[$lang][0]['value']);?>
	</div>

	<div class="read-more">
		<a href="node/<?php print $nid;?>" class="item-article">Read More</a>
	</div>

<?php 

else:

?>
	
	<div class="format-cadmus format-highwire">
	
		<div class="issue">
			VOL. <?php print $volume?>, NO. <?php print $issue?>, <?php print $month?> <?php print $year?> 
		</div>

		<div class="title">
			<?php 
				$title_cleaned = preg_replace("/\<a([^>]*)\>([^<]*)\<\/a\>/i", "$2", $node->field_article_title[$lang][0]['value']);
				print $title_cleaned;
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
		
		<div class="body">

			<?php

				$baseurl_cleaned = str_replace('http://127.0.0.1', $GLOBALS['base_url'], $node->field_article_body[$lang][0]['safe_value']);

				$imagecached = str_replace('/sites/default/files', '/sites/default/files/styles/article/public', $baseurl_cleaned);

        		$imagecached = str_replace('http://stage.onchd.alpha.intstrux.com', $GLOBALS['base_url'], $imagecached);

				print $imagecached;
			?>
		</div>
	
	
	</div>
	
	
<?php
endif;
?>
