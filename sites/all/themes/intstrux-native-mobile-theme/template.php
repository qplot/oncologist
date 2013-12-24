<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * A QUICK OVERVIEW OF DRUPAL THEMING
 *
 *   The default HTML for all of Drupal's markup is specified by its modules.
 *   For example, the comment.module provides the default HTML markup and CSS
 *   styling that is wrapped around each comment. Fortunately, each piece of
 *   markup can optionally be overridden by the theme.
 *
 *   Drupal deals with each chunk of content using a "theme hook". The raw
 *   content is placed in PHP variables and passed through the theme hook, which
 *   can either be a template file (which you should already be familiary with)
 *   or a theme function. For example, the "comment" theme hook is implemented
 *   with a comment.tpl.php template file, but the "breadcrumb" theme hooks is
 *   implemented with a theme_breadcrumb() theme function. Regardless if the
 *   theme hook uses a template file or theme function, the template or function
 *   does the same kind of work; it takes the PHP variables passed to it and
 *   wraps the raw content with the desired HTML markup.
 *
 *   Most theme hooks are implemented with template files. Theme hooks that use
 *   theme functions do so for performance reasons - theme_field() is faster
 *   than a field.tpl.php - or for legacy reasons - theme_breadcrumb() has "been
 *   that way forever."
 *
 *   The variables used by theme functions or template files come from a handful
 *   of sources:
 *   - the contents of other theme hooks that have already been rendered into
 *     HTML. For example, the HTML from theme_breadcrumb() is put into the
 *     $breadcrumb variable of the page.tpl.php template file.
 *   - raw data provided directly by a module (often pulled from a database)
 *   - a "render element" provided directly by a module. A render element is a
 *     nested PHP array which contains both content and meta data with hints on
 *     how the content should be rendered. If a variable in a template file is a
 *     render element, it needs to be rendered with the render() function and
 *     then printed using:
 *       <?php print render($variable); ?>
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. With this file you can do three things:
 *   - Modify any theme hooks variables or add your own variables, using
 *     preprocess or process functions.
 *   - Override any theme function. That is, replace a module's default theme
 *     function with one you write.
 *   - Call hook_*_alter() functions which allow you to alter various parts of
 *     Drupal's internals, including the render elements in forms. The most
 *     useful of which include hook_form_alter(), hook_form_FORM_ID_alter(),
 *     and hook_page_alter(). See api.drupal.org for more information about
 *     _alter functions.
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   If a theme hook uses a theme function, Drupal will use the default theme
 *   function unless your theme overrides it. To override a theme function, you
 *   have to first find the theme function that generates the output. (The
 *   api.drupal.org website is a good place to find which file contains which
 *   function.) Then you can copy the original function in its entirety and
 *   paste it in this template.php file, changing the prefix from theme_ to
 *   intstrux_native_mobile_theme_. For example:
 *
 *     original, found in modules/field/field.module: theme_field()
 *     theme override, found in template.php: intstrux_native_mobile_theme_field()
 *
 *   where intstrux_native_mobile_theme is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_field() function.
 *
 *   Note that base themes can also override theme functions. And those
 *   overrides will be used by sub-themes unless the sub-theme chooses to
 *   override again.
 *
 *   Zen core only overrides one theme function. If you wish to override it, you
 *   should first look at how Zen core implements this function:
 *     theme_breadcrumbs()      in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called theme hook suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node--forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and theme hook suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440 and http://drupal.org/node/1089656
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function intstrux_native_mobile_theme_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  intstrux_native_mobile_theme_preprocess_html($variables, $hook);
  intstrux_native_mobile_theme_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */

function intstrux_native_mobile_theme_preprocess_html(&$variables, $hook) {


	//Gets the mobile detection framework
	if(module_exists("intstrux_services_app")){
		$detect = intstrux_services_app_detect_mobile();

		if($detect->isMobile())
  			$variables['classes_array'][] = "mobile";

		if($detect->isiPad())
  			$variables['classes_array'][] = "mobile-ipad";

  	}

    if ($node = menu_get_object()) {

      if($node->type == 'page_interactive_ad_alt'){
      
        $pinchandzoom = isset($node->field_enable_pinch_and_zoom[LANGUAGE_NONE][0]['value']) ? $node->field_enable_pinch_and_zoom[LANGUAGE_NONE][0]['value'] : 0;
      
      $variables['pinchandzoom'] = $pinchandzoom;
      
      drupal_add_js(array('properties' => array('pinchandzoom' => $pinchandzoom)), 'setting');
    }
    }
}


/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function intstrux_native_mobile_theme_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
function intstrux_native_mobile_theme_preprocess_node(&$variables, $hook) {
  
  drupal_add_js(array('intstrux_native_mobile_theme' => array('pathAlias' => drupal_get_path_alias("node/".$variables['node']->nid))), array('type' => 'setting'));

  if ($variables['node']->type == 'page_interactive_ad_alt' && $variables['view_mode'] == 'full') {
      //dpr($variables);
    
    //get the filename from the variable
    $js_lookup_file = basename($variables['node']->field_active_ad_js_url['und'][0]['value'], ".js");
    
    //Check if we have multiple versions
    if(strpos($js_lookup_file, "_") !== FALSE){
      $js_lookup_file = substr($js_lookup_file, 0, strpos($js_lookup_file, "_"));
    }

    foreach ($variables['node']->field_active_ad_embedded_files[LANGUAGE_NONE] as $key => $file) {
      
      $file = (object)$file;

      //print_r($file);
      
      //Filter section for unwanted files
      if($file->filemime == "application/x-javascript"){
        
        $basename_js = basename($file->uri, ".js");

        if( $basename_js == "bridge" ||
          $basename_js == "zepto.min"||
          strpos($basename_js, $js_lookup_file) !== FALSE||
          strpos($basename_js, "lookup_"))
        {
          //Do nothing    
          
        }
        else{

          drupal_add_js($file->uri, array('group' => JS_THEME, 'every_page' => FALSE));
        }
      
      }
      else if($file->filemime == "text/css")
      {
        drupal_add_css($file->uri, array('group' => CSS_THEME, 'every_page' => FALSE));
        //print "adding CSS". $file->uri; 
      }
      
    }

    global $base_url;
        
    //Remove the domain name form the js file
    $fileinfo = parse_url($variables['node']->field_active_ad_js_url['und'][0]['value']);

    $script = file_get_contents(getcwd().$fileinfo['path']);

    //print $script;

    $script = str_replace($fileinfo['scheme']."://".$fileinfo['host']."/", $base_url."/", $script);

    drupal_add_js($script, 'inline');
    
    }
}

function intstrux_native_mobile_theme_link($variables) {
  $variables['options']['html'] = TRUE;
  return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . drupal_attributes($variables['options']['attributes']) . '>' . ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
}

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function intstrux_native_mobile_theme_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function intstrux_native_mobile_theme_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function intstrux_native_mobile_theme_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */

function intstrux_native_mobile_theme_js_alter(&$javascript) {
    //dpr($javascript);
  foreach ($javascript as $key => $value) {
    if( strpos($key, "sites/all/themes/intstrux-native-mobile-theme") === FALSE && 
      strpos($key, "interactive_ads") === FALSE && 
      $key != "settings"){
      
      
    

      $exceptions = array("sites/all/modules/facetapi/facetapi.js");

      if(!in_array($javascript[$key]['data'], $exceptions))
        unset($javascript[$key]);
      else{
        $javascript[$key]['group'] += 100;
        $javascript[$key]['weight'] +=1;
      }
    }

    //print "<pre>".print_r($javascript[$key],1)."</pre>";
  }
  
  
}

function intstrux_native_mobile_theme_css_alter(&$css) {
  foreach ($css as $key => $value) {
    if( strpos($key, "sites/all/themes/intstrux-native-mobile-theme") === FALSE &&
      strpos($key, "interactive_ads") === FALSE)
      unset($css[$key]);
  }
}

function intstrux_native_mobile_theme_strip_selected_tags($str){
          
    //TODO: repalce warning suppression [@] with: http://stackoverflow.com/questions/1148928/disable-warnings-when-loading-non-well-formed-html-by-domdocument-php  
        $d = new DOMDocument;
    $mock = new DOMDocument;
    @$d->loadHTML('<?xml encoding="UTF-8">'.$str);
    $body = @$d->getElementsByTagName('body')->item(0);
    foreach (@$body->childNodes as $child){
        @$mock->appendChild($mock->importNode($child, true));
    }
    
    return  @$mock->saveHTML();
    }
       

function xmltree_dump(DOMNode $node)
{
    $iterator = new DOMRecursiveIterator($node);
    $decorated = new DOMRecursiveDecoratorStringAsCurrent($iterator);
    $tree = new RecursiveTreeIterator($decorated);
    foreach($tree as $key => $value)
    {
        echo $value . "\n";
    }
}

function xml_dump($elements) {
 if (!is_null($elements)) {
  foreach ($elements as $element) {
    echo "<br/>[". $element->nodeName. "]";

    $nodes = $element->childNodes;
    foreach ($nodes as $node) {
      echo $node->nodeValue. "\n";
    }
  }
} 
}

/**
 * filter app article
 */
// function amp_filter_article($abstract) {

//   $d = new DOMDocument;
//   $d->loadHTML($abstract);

//   $xpath = new DomXPath($d);

//   $elements = $xpath->query("*/ul[@class='kwd-group']");
//   $node = $elements->item(0);
//   $node->parentNode->removeChild($node);

//   $elements = $xpath->query("*/div[@id='abstract-2']");
//   // find parent of the place you want to insert
//   $parent = $elements->item(0);
//   // find the first child of this parent
//   $firstChild = $parent->firstChild;
//   // append the node before first child of the parent
//   $parent->insertBefore($node, $firstChild);
  
//   $abc = @$d->saveHTML();
 
//   return $abc;
// }   

function intstrux_native_mobile_theme_filter_abstract($abstract)
{

  $d = new DOMDocument;
  @$d->loadHTML('<?xml encoding="UTF-8">'.$abstract.'');
  
    $elements = $d->getElementsByTagName("*");

   

    $attr = array();

    foreach($elements as $node)
    {
        if( ! $node -> hasAttributes())
            continue;

        $idAttribute = $node -> attributes -> getNamedItem('id');

        if( $idAttribute){

          //print $idAttribute->nodeValue;           

          if(in_array($idAttribute->nodeValue, $attr)){

            $node->parentNode->removeChild($node);

            //print "DUPLICATE";
            continue;
          }

          $attr[] =  $idAttribute->nodeValue;

        }
      

        $classAttribute = $node -> attributes -> getNamedItem('class');

        if( ! $classAttribute)
            continue;

        $classes = explode(' ', $classAttribute -> nodeValue);

        
       if(  in_array("contributors" , $classes) || 
          in_array("copyright-statement" , $classes) ||
          in_array("fn-group" , $classes)){
         
          $node->parentNode->removeChild($node);
        }
    }

    $h1s = @$d->getElementsByTagName('h1');
  
  foreach ($h1s as $h1){
    $h1->parentNode->removeChild($h1);
  }

  $h2s = @$d->getElementsByTagName('h2');
  
  foreach ($h2s as $h2){
    $h2->parentNode->removeChild($h2);
  }


    return @$d->saveHTML();
}

    
 function intstrux_native_mobile_theme_form_search_form_alter(&$form, &$form_state) {
  if ($form['module']['#value'] == 'apachesolr_search') { //Will change all searches otherwise.
    if (apachesolr_has_searched() && ($response = apachesolr_static_response_cache())) {
      $query = apachesolr_current_query();
      $keywords = $query->get_query_basic();
      $num_found = $response->response->numFound;
 
      $form['num_found'] = array(
        '#prefix' => '<div class="number-found">',
        '#suffix' => '</div>',
        '#value' => t('There are @number results for "@keywords"', array(
          '@number' => $num_found,
          '@keywords' => $keywords)
        ),
        '#weight' => -1,
      );
    }
  }
}  
   
   
   
    
    
 function intstrux_native_mobile_theme_theme() {
  $items = array();
  
  $items['search_result__apachesolr_search__node'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'intstrux_native_mobile_theme') . '/templates',
    'template' => 'ass-node',
  );
  
  return $items;
 }
 
 

function intstrux_native_mobile_theme_intstrux_solr_support_related_block($vars){
 	
  //Only execute this code if the Mobile Detection framework is available
  if(module_exists("intstrux_services_app")){


  	$detect = intstrux_services_app_detect_mobile();
  
    $docs = $vars['docs'];	
  		
   	$arr = array();
   	$html = '<ul class="related">';
  	foreach ($docs as $result) {
  		
  		
  		$title = $result->label;

      if(strpos(strtolower($result->bundle_name), "article")!==FALSE)
        $description = "Article";
      else      
        $description = $result->bundle_name;


  		$nid = $result->entity_id;
  		$path = "node/".$nid;
  		
  		$arr[] = array("title"=>$title, "description"=>$description, "path"=>$path, "nid"=>$nid );

  		$node = node_load($nid);

  		$keywords = "";
  		//Performance optimization - Gather Debug info on the web (admin) version
  		if(!$detect->isMobile()){
	  		$keywords = "<ol>";
	  		foreach ($node->field_keywords[$node->language] as $key => $value) {
	  			$value = taxonomy_term_load($value['tid']);
	  			$keywords .= '<li>'.$value->name.' ['.$value->tid.']</li>';
	  		}
	  		$keywords .= "</ol>";
  		}

  		$html .= '<li class="related-row">'.l($title." [".$result->score."]", $path).'<br>'.$keywords.'</li>';
      }
  	$html .= '</ul>';

  	$str= "";
  	if(count($arr) > 0){
  	
      if($detect->isMobile()){

    		$json = json_encode($arr);
    		


    		$str = <<<EOD
    		  <script language="JavaScript">
    			
    			var isiPad = (navigator.userAgent.match(/iPad/i) != null);
    			var isSafari = navigator.userAgent.match(/Safari/i) != null;
    		
    		
    			$(document).ready(function() {
    		
    				if(isiPad && !isSafari){
    					window.location = 'app://setRelated/{$json}';
    				}
    			});
    			
    			
    			</script>

EOD;

      }//end of isMobile
      else{
        $str = $html;
      }

    }
  }
  
  return $str;
 }

 
 function intstrux_native_mobile_theme_shorten_url_or_text($url) {
  if (strlen($url) > 36) {
    $matches = array();
    if (preg_match('#^(https?://[^/]*).*#', $url, $matches)) {
      // Shorten as for URLS
      return $matches[1] . '/...';
    }
    else {
      // Trim to a given length
      return substr($url, 0, 36-3) . '...';
    }
  }
  else {
    return $url;
  }
}

function intstrux_native_mobile_theme_shorten_a_text($matches) {
  $text = intstrux_native_mobile_theme_shorten_url_or_text($matches[2]);
  return $matches[1] . $text . $matches[3];
}


function intstrux_native_mobile_theme_form_comment_form_alter(&$form, &$form_state) {
    
  //dpm($form);  //shows original $form array
  
  $form['html'] = array(
  '#type' => 'markup',
  '#markup' => '<div class="form-preface triangle"><div class="form-preface triangle-inner"></div></div>',
   '#weight' => -20,
);

  
  //$form['author']['#type'] = 'fieldset';
  //$form['author']['#title'] = 'Your Information';
  $form['author']['#prefix'] = '<div class="author-form">';
  $form['author']['#suffix'] = '</div>'; 
  $form['author']['#collapsible'] = FALSE;
  //unset($form['author']);


  $form['your_comment'] = array(
    '#type' => 'fieldset',
    '#collapsible' => FALSE,
    '#weight' => 2,
  );

  //Subject
  $form['your_comment']['subject'] = $form['subject'];
  unset($form['subject']);
  $form['your_comment']['subject']['#weight'] = -10;

  //Comment
  $form['your_comment']['comment_body'] = $form['comment_body'];
  unset($form['comment_body']);

  $form['author']['homepage']['#access'] = FALSE;

  $form['author']['mail']['#required'] = TRUE;
  
  $form['actions']['html'] = array(
  '#type' => 'markup',
  '#markup' => '<div class="comment-cancel">'.l("Cancel", "")."</div>",
   '#weight' => 500,
);

  //dpm($form);  //shows $form array after our changes

}




function intstrux_native_mobile_theme_apachesolr_search_noresults() {
    return t('<div class="page-search-no-result">
    <h3>Your search criteria matched no articles or videos</h3>
    <i>Consider the following:</i>
    <ul>
      <li>Check if your spelling is correct, or try removing filters.</li>
      <li>Remove quotes around phrases to match each word individually: <em>"blue drop"</em> will match less than <em>blue drop</em>.</li>
      <li>You can require or exclude terms using + and -: <em>big +blue drop</em> will require a match on <em>blue</em> while <em>big blue -drop</em> will exclude results that contain <em>drop</em>.</li>
    </ul></div>');
}
