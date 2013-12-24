<?php

/**
 * @file
 * Link general menu functionalities to services module.
 */
include_once 'intstrux_services_app_menu.vo.inc';

/**
 * Callback for retrieving menu resources.
 *
 * @param $menu_name
 *   Machine name of menu that is to be retrieved
 *
 * @return object
 *   ServicesMenu object
 */
function _intstrux_services_app_menu_retrieve($menu_name, $appversion = 'default', $appmode = 'default', $args = array()) {

  	if ($cache = cache_get('_intstrux_services_app_menu_retrieve_'.$menu_name.'_'.$appversion.'_'.$appmode)) {

		$result = $cache->data;

  	}
 	else{

		  $result = new AppServicesMenu($menu_name, $appmode, $appversion);

		  $unid = variable_get('intstrux_services_app_application_onchd_hard_upgrade_nid', '');
		  	//---------- Hard upgrade?
		  	//check the appversion to be valid
			if(	intstrux_services_app_validate_version($appversion) && 
				intstrux_services_app_versioncompare_version($appversion, variable_get('intstrux_services_app_application_onchd_hard_upgrade_version', '1.0.0')) < 0 &&
				!empty($unid)){
				
					$ref_node = node_load(variable_get('intstrux_services_app_application_onchd_hard_upgrade_nid', ''));

					$item = new AppServicesMenuItem();

					$item->level = 0;
					$item->children = array();
					
					$item->link->mlid = 10000;
					$item->link->plid = 0;
					$item->link->weight = 1;
					$item->link->external = 0;
					$item->link->description = "";
					$item->link->title = $ref_node->title;
					$item->link->path = "view_page/".variable_get('intstrux_services_app_application_onchd_hard_upgrade_nid', '');
					$item->link->href = $item->link->path;


					$result->tree = array($item);

				
			}
			else{
				
				$menu = (object) menu_build_tree($menu_name);
		  
		  		$result->tree = _intstrux_services_app_menu_serialize_data($menu, $appmode, $appversion);
			}


		  if(count($result->tree) == 1){
		  	$result->default_url =  $result->tree[0]->link->path;
		  }
		  else{
		  	$result->default_url =  $result->tree[1]->link->path;
		  }

		  //Cache the menu for 12h
		  cache_set('_intstrux_services_app_menu_retrieve_'.$menu_name.'_'.$appversion.'_'.$appmode, $result, 'cache', 60*60*12);

	}
  

  return $result;
}

/**
 * Serializes the menu tree data.
 *
 * @param $data
 *   A fully built menu tree
 *
 * @return
 *   Serialized menu array
 */
function _intstrux_services_app_menu_serialize_data($data, $appmode, $appversion, $plid=0, $parentitem) {
  $result = array();


  foreach ($data as $item_key => $item_value) {
    	
	
	// watchdog('amp', $item_key);
	// if (($item_key == '49957 Archived Issues 14504') || ($item_key == '49951 14647')) 
		// watchdog('amp', var_export($item_value, TRUE));

		// drupal_set_message(print_r($item_value,true));
  	//If we are using a view to generate the menu items
	if(!empty($item_value['link']['options']['menu_views']['view']['name'])){
		
		$viewdata = $item_value['link']['options']['menu_views']['view'];

		if (($viewdata['name'] == 'amp_articles_alt') || ($viewdata['name'] == 'amp_current_issues_menu'))
			$view_results = views_get_view_result($viewdata['name'], '');
		else {
			$view = views_get_view($viewdata['name']);
			if (!empty ($viewdata['arguments']))
			$view->set_arguments(explode("/",$viewdata['arguments']));
			$view->pager["use_pager"] = false;
			$view->pager["items_per_page"] = 0;
			$view->build();
			$view->execute();
			$view_results = $view->result;
		}

			watchdog('amp', $viewdata['name']);
			watchdog('amp', count($view_results));
			watchdog('amp', $viewdata['arguments']);
		
		foreach ($view_results as $key => $viewitem) {

			$item = new AppServicesMenuItem();
			
			
			$item->link->mlid = $plid."_".$key;
			$item->link->plid = $plid;
			
			if($viewdata['name'] == "amp_articles_alt"){

				watchdog('amp', var_export($item, TRUE));

				$item->link->title = $viewitem->field_field_issue_label[0]['raw']['value'];
				$item->link->description = "The Oncologist ".date('F', mktime(0, 0, 0, $viewitem->field_field_article_month[0]['raw']['value'], 10))." ".$viewitem->field_field_article_year_int[0]['raw']['value'];
				$item->link->path = 'view_articles/'.$viewitem->field_field_article_type[0]['rendered']['#title']."/".$viewitem->field_field_article_year_int[0]['raw']['value']."/".$viewitem->field_field_article_month[0]['raw']['value'];


			} elseif ($viewdata['name'] == "amp_current_issues_menu") {

				$item->link->title = $viewitem->node_title;
				$item->link->description = $viewitem->field_field_tax_section[0]['rendered']['#title'];
				//create 3 new fields in view and exclude
				$item->link->path = 'view_articles/Journal/' . $viewitem->field_field_article_year_int[0]['raw']['value']."/".$viewitem->field_field_article_month[0]['raw']['value'] . '/view_items_articles/Journal/' . $viewitem->field_field_article_year_int[0]['raw']['value']."/".$viewitem->field_field_article_month[0]['raw']['value'] . '?page=node/' . $viewitem->nid;
				// OLD --> $item->link->path = 'node/'. $viewitem->nid;
				// $item->link->path_alias = "node/". $viewitem->nid;
				//$view->set_display('block_2');



			} elseif ($viewdata['name'] == "menu_articles") {

				$item->link->title = $viewitem->field_field_term_title[0]['raw']['safe_value'];
				$item->link->description = '';
				$item->link->path = "view_pagehtml/". $viewitem->tid;
				//conference perspectives

			}
			else if(isset($viewitem->tid)){
				
				//drupal_set_message(print_r($viewitem,true));
				//drupal_set_message($viewitem->field_field_term_title[0]['raw']['safe_value']);
				
				$item->link->title = isset($viewitem->field_field_term_title[0]['raw']['safe_value'])? $viewitem->field_field_term_title[0]['raw']['safe_value'] : $viewitem->taxonomy_term_data_name;
				if(isset($viewitem->field_field_term_date))
					$item->link->description = date("F Y", strtotime($viewitem->field_field_term_date[0]['raw']['value']));
				
				
				if(strpos($parentitem->link->path, "view_") !== FALSE)
					$item->link->path = $parentitem->link->path."/".$viewitem->tid;
				else
					$item->link->path = "taxonomy/term/".$viewitem->tid;
				
			}
			else{
				$item->link->title = $viewitem->node_title;
				$item->link->path = "node/".$viewitem->nid;
			}
	    	
	    	// $item->link->path_alias = drupal_lookup_path('alias', $item->link->path);
		
			$item->level = $plid > 0 ? 1 : 0;
			
			//$result[$item->link->title . ' | ' . $item->link->mlid] = $item;
			$result[] = $item;
		}
		
		
	}	
	else{	
	    $item = new AppServicesMenuItem();
	
	    foreach ($item->link as $link_key => $link_value) {
	      if (isset($item_value['link'][$link_key]))
	        $item->link->$link_key = $item_value['link'][$link_key];
	    }
	
	    $item->link->path = $item_value['link']['link_path'];
	    //unused therefore not needed for now
	    //$item->link->path_alias = drupal_lookup_path('alias', $item->link->path);
	
		//check if the item is a native item and if the path needs to be rewritten
		if(	isset($item_value['link']['options']['attributes']['class']) &&
			isset($item_value['link']['options']['attributes']['rel']) &&
			in_array("menu-native", $item_value['link']['options']['attributes']['class'])){
			$item->link->native	= 1;
			$item->link->path 	= $item_value['link']['options']['attributes']['rel'];
		}
	
	
		//There are children of this menu item
	    if (isset($item_value['below'])){
	      	$item->children = _intstrux_services_app_menu_serialize_data($item_value['below'],$appmode, $appversion, $item->link->mlid, $item);
			
			if(isset($item_value['link']['options']['attributes']['class'])){
				
				
				//child-menu-wide
				if(in_array("child-menu-wide", $item_value['link']['options']['attributes']['class'])){
					$item->link->child_menu_width = "WIDE";
				}
				//child-menu-narrow
				else{
					$item->link->child_menu_width = "NARROW";
				}
				
			}
			
		}
	
		if(isset($item_value['link']['options']['attributes']['class'])){
			
			//menu-level-0
			if(in_array("menu-level-0", $item_value['link']['options']['attributes']['class'])){	
				$item->level = 0;
			}
			else if(in_array("menu-level-1", $item_value['link']['options']['attributes']['class'])){	
				$item->level = 1;
			}
			else{
				$item->level = $plid > 0 ? 1 : 0;
			}
			
		}
		else{
			$item->level = $plid > 0 ? 1 : 0;
		}
		
		//Update-item check here!
		$remove_item = FALSE;
		if(isset($item_value['link']['options']['attributes']['class'])){
			
			//IS THIS AN UPDATE ITEM
			if(in_array("update-item", $item_value['link']['options']['attributes']['class'])){	
				
				//check the appversion to be valid
				if(intstrux_services_app_validate_version($appversion)){

					if(intstrux_services_app_versioncompare_version($appversion, variable_get('intstrux_services_app_application_onchd_version', '1.0.0')) >= 0){
						$remove_item = TRUE;
					}
					else if(intstrux_services_app_versioncompare_version($appversion, variable_get('intstrux_services_app_application_onchd_soft_upgrade_version', '1.0.0')) >= 0){
						$remove_item = TRUE;
					}
					//soft enforcemnt
					else if(intstrux_services_app_versioncompare_version($appversion, variable_get('intstrux_services_app_application_onchd_hard_upgrade_version', '1.0.0')) >= 0){
						$remove_item = FALSE;
					}
					//hard enforcement (not used anymore here)

				}

			}

		}


	    //$result[$item->link->title . ' | ' . $item->link->mlid] = $item;
	    if(!$remove_item)
	   		$result[] = $item;
	  }
  }

  return $result;
}

