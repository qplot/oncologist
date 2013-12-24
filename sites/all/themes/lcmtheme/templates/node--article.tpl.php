<?php

$nid = $node->nid;
$lang = LANGUAGE_NONE;
$searchArray = array("'",'"');
$replaceArray = array("&#39;","&#34;"); 
$title = str_replace($searchArray,$replaceArray,$title = $node->field_article_title[$lang][0]['safe_value']);
$description_trunc = str_replace($searchArray, $replaceArray, strip_tags($node->field_abstract[$lang][0]['value']));
$description = isset($description_trunc) ? $description_trunc : "";
$data = array("nid"=>$nid, "title"=>truncate_utf8($title,100,TRUE,TRUE,2), "description"=>truncate_utf8($description,300,TRUE,TRUE,2), "type" => "Article");
$section = taxonomy_term_load($node->field_tax_section[$lang][0]["tid"])->name;
$month = date("F", mktime(0, 0, 0, $node->field_article_month[$lang][0]["value"], 1));
$year = taxonomy_term_load($node->field_article_year[$lang][0]["tid"])->name;
$issue = taxonomy_term_load($node->field_article_issue[$lang][0]["tid"])->name;
$volume = taxonomy_term_load($node->field_article_volume[$lang][0]["tid"])->name;

$abstract = $node->field_abstract[$lang][0]['value'];
	
if(!empty($abstract))
		$abstract = lcmtheme_filter_abstract($abstract);

?>
	<?php 
		$title_cleaned = preg_replace("/\<a([^>]*)\>([^<]*)\<\/a\>/i", "$2", $node->field_article_title[$lang][0]['value']);
		print("<h1>".$title_cleaned."</h1>");
	?>

	<?php

			if(empty($node->field_article_affiliations[$lang][0]['safe_value'])):
		?>

			<div class="author">
				<?php

					$count = count($node->field_article_author[$lang]);
					$lastitem = end((array_keys($node->field_article_author[$lang])));

					print("<p>");
						
					foreach ($node->field_article_author[$lang] as $key => $value){

						$term = taxonomy_term_load($value["tid"]);
						print($term->name);

						if($count > 0 && $key != $lastitem){
							print(", ");			
						}
					}

					print("</p>");

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
	<?php print preg_replace_callback('@(<a[^>]*>)([^<]*)(</a>)@i', 'lcmtheme_shorten_a_text', $abstract);?>
	</div>

<?php endif; ?>

<?php

$body = $node->field_article_body[$lang][0]['safe_value'];

$d = new DOMDocument;
	@$d->loadHTML('<?xml encoding="UTF-8">'.$body.'');

	$h2s = @$d->getElementsByTagName('h2');

		foreach ($h2s as $h2){

			$value = strtolower(strip_tags($h2->nodeValue));

			if($value == "learning objectives"){
				$h2->parentNode->parentNode->removeChild($h2->parentNode);
				$body = @$d->saveHTML();
			}
		}

$shortened = preg_replace_callback('@(<a[^>]*>)([^<]*)(</a>)@i', 'lcmtheme_shorten_a_text', $body);

$baseurl_cleaned = str_replace('http://127.0.0.1', $GLOBALS['base_url'], $shortened);
$imagecached = str_replace('/sites/default/files', '/sites/default/files/styles/microsite_article/public', $baseurl_cleaned);
$imagecached = str_replace('http://stage.onchd.alpha.intstrux.com', $GLOBALS['base_url'], $imagecached);

print $imagecached;

?>
