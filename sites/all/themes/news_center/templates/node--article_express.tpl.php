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

if ($view_mode == "teaser" || $view_mode == "web_cancer_portal_express"):

?>

<a href="node/<?php print $nid;?>" class="item-express">
	
	<div class="item-express title">
		<?php 
			$title_cleaned = preg_replace("/\<a([^>]*)\>([^<]*)\<\/a\>/i", "$2", $node->field_article_title[$lang][0]['value']);
			print $title_cleaned;
		?>
	</div>
</a>

	<a href="taxonomy/term/<?php print $section_tid;?>" class="item-article section tid">

		<div class="item-express section">
			<?php print $section;?>
		</div>
	</a>
	
	
	<div class="item-express author">
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
	
	<div class="item-express abstract">
		<?php print strip_tags($node->field_abstract[$lang][0]['value']);?>
	</div>

<?php 

else:

?>
	
	<div class="format-cadmus format-highwire">

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
	
	</div>
	
	
<?php
endif;
?>
