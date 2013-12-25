<?php

/**
 * @file
 * Link general menu functionalities to services module.
 */
//include_once 'intstrux_services_app_menu.vo.inc';

/**
 * Callback for retrieving menu resources.
 *
 * @param $menu_name
 *   Machine name of menu that is to be retrieved
 *
 * @return object
 *   ServicesMenu object
 */
function _intstrux_services_app_pager_retrieve($view_id, $args = "") {
   	
	$result = array();

	if (!($view_id == "view_items_interactive_ad_alt" && empty($args)) && $cache = cache_get('_intstrux_services_app_pager_retrieve_'.$view_id.'_'.$args)) {

		$result = $cache->data;

  	}
  	else{


		global $base_url;

		if(strpos($view_id, "view_items")===FALSE){		

	   		//return array(array("path"=>"node/512"));

	   		if($view_id == "view_customized" || $view_id == "view_personalized"){
	   			
	   			$edition = $args;

	   			if(empty($_GET['user']))
					return $result; //"No customization information provided";
		
				$user = $_GET['user'];
		
				if($user[strlen($user)-1] == "?")
					$user = substr($user,0, -1);
		
		
				$user = json_decode(urldecode($user));

				$_SESSION['SOLR_USER'] = $user;
		
				$solr_result = intstrux_customized_search($edition, $user);
		
				$max = $solr_result[1]->response->numFound/5 > 10 ? 10 : $solr_result[1]->response->numFound/5;
		
				for ($i=0; $i < $max; $i++) {
					
					 $result[] = array(	"path"=>"view_customized/".$args."/?page=".$i."&user=".urlencode($_GET['user']), 
									"preview"=>"");
					
				}
		
				//1h
				cache_set('_intstrux_services_app_pager_retrieve_'.$view_id.'_'.$args, $result, 'cache', 60*60*1);
				return $result;
				
	   		}


	   		
			$view = views_get_view($view_id);
			$view->set_arguments(explode("/",$args));
			//$view->pager["use_pager"] = false;
			//$view->pager["items_per_page"] = 0;
			$view->build();
			$view->execute();
			$view_results = $view->result;
			
			
			
			for($i=0; $i < ceil($view->total_rows/$view->query->pager->options['items_per_page']); $i++){
				
				$path= $view_id."/".$args."/?page=".$i;
				
				$uri = "";
				
				//** git issue #524
				//** hotfix remove the preview picture

				/*if(module_exists("intstrux_snapshot"))
					$uri = intstrux_snapshot_getURI($base_url."/".$path);
				
				if(!empty($uri)){
					
					$url = image_style_url("app_page_preview", $uri);
					$result[] = array("path"=>$path, "preview"=>$url);
				}
				else{
				*/
					$result[] = array("path"=>$path, "preview"=>"");
				//}

				//** end of hotfix
				
				
			}
			
			//12h
			cache_set('_intstrux_services_app_pager_retrieve_'.$view_id.'_'.$args, $result, 'cache', 60*60*12);

			return $result;
			
			//return array($view->query->pager->current_page, $view->query->pager->options['items_per_page'] , $view->total_rows);
			
			//foreach ($view_results as $key => $viewitem) {
		}
		else{
			$result = array();
			
			if($view_id == "view_items_customized" || $view_id == "view_items_personalized"){
				
				$edition = $args;

				if(empty($_GET['user']))
					return $result; //"No customization information provided";
		
				$user = $_GET['user'];
		
				if($user[strlen($user)-1] == "?")
					$user = substr($user,0, -1);
		
		
				$user = json_decode(urldecode($user));

				$_SESSION['SOLR_USER'] = $user;
		
				$solr_result = intstrux_customized_search($edition, $user, 0, 50);
		
				foreach ($solr_result[1]->response->docs as $id => $row){
					
					/** git issue #524
					//** hotfix remove the preview picture

					/*if(module_exists("intstrux_snapshot")){
						$uri = intstrux_snapshot_getURI($base_url."/".$row->entity_id);
					}
				
					if(!empty($uri)){
						
						$url = image_style_url("app_page_preview", $uri);
						$result[] = array("path"=>"node/".$row->entity_id, "preview"=>$url);
					}
					else{
					*/
						$result[] = array("path"=>"node/".$row->entity_id, "preview"=>"");
					//}
					
					//** end of hotfix
				}
		
				//1h
				cache_set('_intstrux_services_app_pager_retrieve_'.$view_id.'_'.$args, $result, 'cache', 60*60*1);
				return $result;
				
			}
		
			//EXCEPTION: ADs need to be filter by edtion
			if($view_id == "view_items_interactive_ad_alt"){

				if(empty($args) && isset($_GET['user'])){

					$user = $_GET['user'];
		
					if($user[strlen($user)-1] == "?")
						$user = substr($user,0, -1);
		
		
					$user = json_decode(urldecode($user));
				
					$_SESSION['SOLR_USER'] = $user;

					$eu_edtion_array = array("AL", //Albania
								"AD", //Andorra
								"AT", //austria
								"BY", //belarus
								"BE", //belgium
								"BA", //Bosnia
								"BG", //Bulgaria
								"HR", //Croatia
								"CY", //Cyprus
								"CZ", //Czeck REp
								"DK", //denmark
								"EE", //Estonia
								"FO", //Faroe Island
								"FI", //finland
								"FR", //France
								"DE", //Germany
								"GI", //Gibraltar
								"GR", //greece
								"GL", //Greenland
								"HU", //Hungary
								"IS", //icleand
								"IE", //Ireland
								"IM", //isle of man
								"IT", //italy
								"KZ", //Kazakhstan
								"LV", //Lativia
								"LI", //lichtenstein
								"LT", //Lithuania
								"LU", //luxemburg
								"MK", //Macedonia
								"MT", //Malta
								"MD", //Moldova
								"MC", //Monaco
								"ME", //Montenegro
								"NL", //netherlands
								"NO", //Norway
								"PL", //poland
								"PT", //portugal
								"RO", //Romania
								"RU", //Russia
								"SM", //San Marino
								"RS", //Serbia
								"SK", //Slovakia
								"SI", //Slovenia
								"ES", //Spain
								"SE", //sweden
								"CH", //switzerland
								"TR", //Turkey
								"UA", //Ukrain
								"GB", //united Kingdom
								"VA" //Vatican
								);

					$zh_edtion_array = array(	"CN", //China
												"TW" //Taiwan;
												);

					//default
					$args = "US";

					if(in_array($user->c, $eu_edtion_array))
						$args = "EU";
					else if(in_array($user->c, $zh_edtion_array))
						$args = "ZH";

					
				}
			}

			$view = views_get_view($view_id);
			$view->set_arguments(explode("/",$args));
			$view->build();
			$view->execute();
			$view_results = $view->result;
		
			
			$i=0;

			foreach ($view_results as $key => $viewitem) {
				
				$i++;	
					
				$uri = "";
				
				//EXCEPTION: ADs have their own preview image
				//** git issue #524
				//** Note: hotfix remove the preview picture does not affect Ad previews
				
				if($view_id == "view_items_interactive_ad_alt"){
					
					$size = $viewitem->field_field_ad_size[0]["raw"]["value"];
					$uri = $viewitem->field_field_cover_image[0]["raw"]["uri"];
					
					$priority = isset($viewitem->field_field_ad_priority[0]["raw"]["value"]) ? $viewitem->field_field_ad_priority[0]["raw"]["value"] : "3";
					$group = isset($viewitem->field_field_ad_group[0]["raw"]["taxonomy_term"]->name) ? $viewitem->field_field_ad_group[0]["raw"]["taxonomy_term"]->name : "";

					$state = $viewitem->node_status;

					if(empty($size))
							$size = 10000000;

					//8MB max for 3G connections
					$adConnectionType = $size<8000000 ? "3G" : "WIFI";
					$adSized = $size;
					
					
					if(!empty($uri)){
						
						$url = image_style_url("app_page_preview", $uri);
						$result[] = array("path"=>"node/".$viewitem->nid, "preview"=>$url, "connectionType"=>$adConnectionType, "size"=>$adSized, "priority"=> $priority, "group"=>$group, "state"=> $state);
					}
					else{
						$result[] = array("path"=>"node/".$viewitem->nid, "preview"=>"", "connectionType"=>$adConnectionType, "size"=>$adSized, "priority"=> $priority, "group"=>$group, "state"=> $state);
					}




				}
				else{
					
					/** git issue #524
					//** hotfix remove the preview picture


					/*
					if(module_exists("intstrux_snapshot"))
						$uri = intstrux_snapshot_getURI($base_url."/".$viewitem->nid);
				
				
					if(!empty($uri)){
						
						$url = image_style_url("app_page_preview", $uri);
						$result[] = array("path"=>"node/".$viewitem->nid, "preview"=>$url);
					}
					else{
					*/
						$result[] = array("path"=>"node/".$viewitem->nid, "preview"=>"");
					//}

					//** end of hotfix
				}
			}
			
			
		}
		//12h
		cache_set('_intstrux_services_app_pager_retrieve_'.$view_id.'_'.$args, $result, 'cache', 60*60*1);
	}

	
	return $result;

}



