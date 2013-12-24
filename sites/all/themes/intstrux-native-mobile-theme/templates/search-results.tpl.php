<?php
global $pager_page_array, $pager_total_items;
$count = variable_get('apachesolr_rows', 10);
$start = $pager_page_array[0] * $count + 1;
print t('Showing %start to %end of %total results found.', 
  array(
    '%start' => $start,
    '%end' => $start + $count - 1,
    '%total' => $pager_total_items[0]
  )
);

$pages = array();
$preview = "";

$max = ceil($pager_total_items[0]/$count) > 20 ? 20 : ceil($pager_total_items[0]/$count);

//replace %20 and spaces with + (plus) in the URL to prevent the app from decoding the spaces
$requestURIWithoutSpaces = str_replace("%20", "+", $_SERVER['REQUEST_URI']);
$requestURIWithoutSpaces = str_replace(" ", "+", $requestURIWithoutSpaces);

$requestURIWithoutSpaces = str_replace("%22", "%2522", $requestURIWithoutSpaces);


for($i=0; $i < $max; $i++){
    
    if($pager_page_array[0] == 0){
        
        if(strstr($_SERVER['REQUEST_URI'],"?")=== FALSE)
            $pages[] = array("path" => $requestURIWithoutSpaces."?page=".$i, "preview"=>$preview);
        else {
            $pages[] = array("path" => $requestURIWithoutSpaces."&page=".$i, "preview"=>$preview);
        }
    }
    else{
        $pages[] = array("path" => str_replace("page=".$pager_page_array[0], "page=".$i, $requestURIWithoutSpaces), "preview"=>$preview);
        
        
    }
    
}


?>

<script language="JavaScript">
	
	var isiPad = (navigator.userAgent.match(/iPad/i) != null);
	var isSafari = navigator.userAgent.match(/Safari/i) != null;
	
	function popupPage(page){
		
		if(isiPad && !isSafari){
			window.location = 'app://popupPage/{"path":"'+page+'"}';
		}
		else{
			window.location = "/"+page;
		}
	
	};
	
	$(document).ready(function() {
		if(isiPad && !isSafari){
			window.location = 'app://updateScrollView/<?php print json_encode($pages);?>';
		}
		else{
			alert('<?php print json_encode($pages); ?>');
		}
	});
	
	
	
</script>


<?php

/**
 * @file
 * Default theme implementation for displaying search results.
 *
 * This template collects each invocation of theme_search_result(). This and
 * the child template are dependent to one another sharing the markup for
 * definition lists.
 *
 * Note that modules may implement their own search type and theme function
 * completely bypassing this template.
 *
 * Available variables:
 * - $search_results: All results as it is rendered through
 *   search-result.tpl.php
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 *
 *
 * @see template_preprocess_search_results()
 *
 * @ingroup themeable
 */
?>
<?php if ($search_results): ?>
  <h2><?php print t('Search results');?></h2>
  <ol class="search-results <?php print $module; ?>-results">
    <?php print $search_results; ?>
  </ol>
  <?php print $pager; ?>
<?php else : ?>
  <h2><?php print t('Your search yielded no results');?></h2>
  <?php print search_help('search#noresults', drupal_help_arg()); ?>
<?php endif; ?>
