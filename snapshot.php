<?php

// Register our shutdown function so that no other shutdown functions run before this one.

// This shutdown function calls exit(), immediately short-circuiting any other shutdown functions,

// such as those registered by the devel.module for statistics.

define('DRUPAL_ROOT', getcwd());



register_shutdown_function('status_shutdown');

function status_shutdown() {

  exit();

}

// Drupal bootstrap.

require_once './includes/bootstrap.inc';

drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

$GLOBALS['base_url'] = "http://stage.onchd.alpha.intstrux.com";


function parse_menu($menu, $parentlink) {

  $result = array();

  foreach ($menu as $item_key => $item_value) {
    	
	if(!empty($item_value['link']['options']['menu_views']['view']['name'])){
		
		$viewdata = $item_value['link']['options']['menu_views']['view'];
		
		$view = views_get_view($viewdata['name']);
		$view->set_arguments(explode("/",$viewdata['arguments']));
		$view->pager["use_pager"] = false;
		$view->pager["items_per_page"] = 0;
		$view->build();
		$view->execute();
		$view_results = $view->result;
		
		foreach ($view_results as $key => $viewitem) {
					
			if(isset($viewitem->tid)){
				
				if(strpos($parentlink, "view_") !== FALSE)
					$result[] = $parentlink."/".$viewitem->tid;
				else
					$result[] = "taxonomy/term/".$viewitem->tid;
				
			}
			else{
				$result[] = "node/".$viewitem->nid;
			}
	    	
		}
		
		
	}	
	else{
	    	
		$below = array();	
	    if (isset($item_value['below']))
	      $below = parse_menu($item_value['below'], $item_value['link']['link_path']);
		
		if(count($below) > 0)
			$result = $result + $below;
		else
			$result[] = $item_value['link']['link_path'];
	 
	  }
  }

  return $result;
}

function create_snapshot($url, $filename){

	//Make sure we have a directory to work with
	$directory = 'sites/default/files/autosnapshots';
	file_prepare_directory($directory, FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS);
	$directory_orig = 'sites/default/files/autosnapshot_orig';
	file_prepare_directory($directory_orig, FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS);
	
	//Create the snapshot
	exec('xvfb-run --server-args="-screen 0, 768x980x24" cutycapt --url='.$url.' --out-format=jpeg --plugins=on --delay=0 --user-style-string="BODY{overflow:hidden;} #page{overflow:hidden;width:768px;height:980px;}" --out=sites/default/files/autosnapshot_orig/'.$filename);
			
	$filepath = drupal_realpath('sites/default/files/autosnapshot_orig/'.$filename);
	
	//check if the snapshot exits		
	if(file_exists($filepath)){
			
		// Create managed File object and associate with Image field.
	  	$file = (object) array(
	    	'uid' => 1,
	    	'uri' => $filepath,
	    	'filemime' => file_get_mimetype($filepath),
	    	'status' => 1,
	  	);
	
		// We save the file to the root of the files directory.
	 	$file = file_copy($file, 'public://autosnapshots/'.$filename, FILE_EXISTS_REPLACE);
		
		//Delete the old image
		unlink($filepath);
		
		//create the image style right away
		drupal_http_request(image_style_url("app_page_preview", $file->uri), array("method"=>"HEAD"));
		
	 	$result = db_select('snapshot_data', 's')
	    	->fields('s')
	    	->condition('url', $url)
	    	->execute()
	    	->fetchAssoc();
	
		if($result){
	
			db_update('snapshot_data')
		    ->fields(array('image_uri'=> $file->uri))
		    ->condition('url', $url)
		    ->execute();
	
			print "Snapshot updated:  ".file_create_url($file->uri)." ".image_style_url("app_page_preview", $file->uri);
	
		}
		else{
			db_insert('snapshot_data')
			->fields(array(
			  'url' => $url,
			  'image_uri' => $file->uri,
			))->execute();
	
			print "Snapshot created:  ".file_create_url($file->uri)." ".image_style_url("app_page_preview", $file->uri);
	
		}
		//'created' => REQUEST_TIME,
		
		
		
	
	}
	else{
		drupal_set_message("Snapshot could not be created. Is the link accessible? ".$url);		
	}
	
}

function getURL($url){
	
	$result = db_select('snapshot_data', 's')
	    	->fields('s', array("image_uri"))
	    	->condition('url', $url)
	    	->execute()
	    	->fetchAssoc();
	
	if($result){
		return file_create_url($result['image_uri']);
	}
	
	return "sites/default/files/placeholder.png";
}

function getURI($url){
	
	$result = db_select('snapshot_data', 's')
	    	->fields('s', array("image_uri"))
	    	->condition('url', $url)
	    	->execute()
	    	->fetchAssoc();
	
	if($result){
		return $result['image_uri'];
	}
	
	return "";
}

 




$data= array();
$data['progress'] = 0;
$data['current_pos'] = 0;
    	
$menus = array("menu-app-com-intstrux-onchd-us");
		
$urls = array();
		
foreach ($menus as $key => $menu_name) {
	$menu = (object) menu_build_tree($menu_name);
			
	$menu_urls = parse_menu($menu, "");
			
	foreach ($menu_urls as $key => $url) {
				
		//Find the views
		if(strpos($url, "view_") !== FALSE){
					
					
				//Load the views with arguments
				$url_array = explode("/",$url);
				
				$view = views_get_view($url_array[0]);
				
				$url_array = array_slice($url_array, 1);
				
				if(is_object($view)){
					$view->set_arguments($url_array);
					//$view->pager["use_pager"] = false;
					//$view->pager["items_per_page"] = 0;
					$view->build();
					$view->execute();
					
		
					for($i=0; $i < ceil($view->total_rows/$view->query->pager->options['items_per_page']); $i++){
			
						$urls[] = $url."/?page=".$i;
					}	
				}
				
			}
			
			else{
				
				$urls[] = $url;
			}
			
		}
			
	}
		
	$data['urls'] = $urls;
		
	$data['max'] = count($urls);
		
	// Inform the batch engine that we are not finished,
  	// and provide an estimation of the completion level we reached.
  	for ($data['progress'] = 0; $data['progress'] < $data['max']; $data['progress']++) {
  		print "Now processing: ".$data['urls'][$data['progress']]."\n";
	
	
		$url = "http://stage.onchd.alpha.intstrux.com/".$data['urls'][$data['progress']];
		$filename = strtr ($data['urls'][$data['progress']], array ('/' => '_', '?' => '_', '=' => '_')).".jpg";
	
		create_snapshot($url, $filename);
	
	
	
		$data['current_pos']++;
	
  
	
    	print "\n MENU: ".round($data['progress'] / $data['max']*100, 2)." %\n";
  	}
	
	
	
	//-----------
	
	
	
	$data['progress'] = 0;
    $data['current_pos'] = 0;
    	
    $data['max'] = db_select('node')
		->fields('nid')
		->condition('type', array('page_html', 'asset_video', 'asset_image', 'challenging_case', 'express', 'page_interactive_ad', 'perspective', 'portal'), 'IN')
		->orderBy('nid', 'ASC')
		->countQuery()->execute()->fetchField();
	
	for ($data['progress'] = 0; $data['progress'] < $data['max']; $data['progress']++) {
	
		$results = db_select('node', 'n')
			->fields('n', array("nid", "type"))
			->condition('n.type', array('page_html', 'asset_video', 'asset_image', 'challenging_case', 'express', 'page_interactive_ad', 'perspective', 'portal'), 'IN')
			->orderBy('n.nid', 'ASC')
			->range($data['progress'] , 1)
			->execute();
	
		while ($result = $results->fetchAssoc()) {
			print "Now processing: ".check_plain($result['nid'])."\n";
			
			$node = new stdClass();
			$node->nid = $result['nid'];
			//$node->type = $result['type'];
			
			$url = "http://stage.onchd.alpha.intstrux.com/node/".$node->nid;
			$filename = "node_".$node->nid.".jpg";
			create_snapshot($url, $filename);
			
		}
	
	
		$data['current_pos']++;
	
  
	
    	print "\n NODE: ".round($data['progress'] / $data['max']*100, 2)." %\n";
  	}
	
	print "\n Flusing images\n";
	image_style_flush("app_page_preview");