<?php

/**
 * @file
 * Services menu Value Object, returns menu
 * Filters out theming related values
 * Adds path alias values
 */

class AppServicesMenu {
  public $name;
  public $mode;
  public $version;
  
  public $default_url;
  
  public $ad_banner;
  
  public $tree = array();

  public function __construct($name, $mode, $version) {
      $this->name = $name;
	    $this->mode = $mode;
	    $this->version = $version;
    $htis->ad_banner =  variable_get('intstrux_services_app_application_onchd_menu_banner_ad', "/21688575/TONC_HD_App_300x250");
  }
}

class AppServicesMenuItem {
  public $level;
  public $link;
  public $children;
  
  public function __construct() {
    $this->link = new AppServicesMenuLink();
  }
}

class AppServicesMenuLink {
  public $mlid;
  public $plid;

  public $title;
  public $description;

  public $path;
  public $path_alias;
  public $href;

  public $external;
  public $child_menu_width = "none";
  public $has_children = 0;
  public $weight;
  
  public $native = 0;
  

 }