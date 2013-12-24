/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */


var jQuery = Zepto;

var Drupal = Drupal || { 'settings': {}, 'behaviors': {}, 'locale': {} };

Drupal.settings.application = {"uid":0, "isConnected":1};


Drupal.attachBehaviors = function (context, settings) {
  context = context || document;
  settings = settings || Drupal.settings;
  // Execute all of them.
  $.each(Drupal.behaviors, function () {
    if ($.isFunction(this.attach)) {
      this.attach(context, settings);
    }
  });
};

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

	$(document).ready( function () {

		Drupal.attachBehaviors(document, Drupal.settings);

		if(!isApp){
			initFromApp({"uid":2, "isConnected":1, "appVersion":"5.0.3"});
		}
	});

})(Zepto, Drupal, this, this.document);

function _onWindowLoad(){
	if($('BODY.node-type-perspective').length > 0){
		initPerspective();
	}

	if($('BODY.node-type-asset-video').length > 0){
		initAssetVideo();
	}
}

function initFromApp(environment){

		Drupal.settings.application = environment;
		Drupal.settings.application.appversion = (environment.appVersion).replace(/\D/g,'');

		//interactivead_enableRefresh(Drupal.settings.application.roles);

		var isiPad = (navigator.userAgent.match(/iPad/i) != null);
		var isSafari = navigator.userAgent.match(/Safari/i) != null;
		var favs = [];
		var hidePageControl = false;
		var hideBGImage = false;
		var contentType = "default";
		var sidebar = null;

		//var properties = [];

		$( ".favorite" ).each(function( index ) {

		favs.push($(this).attr("id"));
		});

		if(isiPad && !isSafari){
			nativeFunction('app://registerFavorites/'+JSON.stringify(favs));
		}
			else{
				console.log(JSON.stringify(favs));
	}

	/*if(!isiPad){
		window.onload = function() {
			if($('BODY.node-type-article').length > 0){
				resizeArticleimgs();
			}
		}
	}*/

	if($('BODY.node-type-page-interactive-ad-alt').length > 0){

		if(Drupal.settings.properties.pinchandzoom == 1){
			enablePinchZoom();
		}
	}
	
	if($('BODY.page-node').length > 0){

		switch(Drupal.settings.properties.contenttype){
			case 'article':
			case 'page_html':
					contentType = 'Article';
					sidebar = {"back":"1","saved": "1", "share":"1", "zoom":"1"};
					hideBGImage = true;
					break;
			case 'asset_image':
					contentType = 'Article';
					sidebar = {"back":"1","saved": "1", "share":"1", "zoom":"0"};
					hideBGImage = true;
					break;
			case 'perspective':
					contentType = 'Perspective';
					sidebar = {"back":"1","saved": "1", "share":"1", "zoom":"0"};
					hideBGImage = true;
					break;
			case 'challenging_case':
					contentType = 'Challenging Case';
					sidebar = {"back":"1","saved": "1", "share":"1", "zoom":"0"};
					hideBGImage = true;
					break;
			case 'asset_video':
					contentType = 'Video';
					sidebar = {"back":"1","saved": "1", "share":"1", "zoom":"0"};
					hideBGImage = true;
					break;
			case 'page_interactive_ad_alt':
					contentType = 'Interactive Ad';
					sidebar = null;
					hidePageControl = true;
					break;
			default:
					contentType = 'View';
					hideBGImage = true;
					sidebar = null;
			}
	}

	if($('BODY.page-views').length > 0 || $('BODY.page-view-customized').length > 0){
		hideBGImage = true;
		sidebar = null;
		contentType = 'View';
	}

	if($('BODY.section-search').length > 0){
		sidebar = {"back":"0","saved": "0", "share":"0", "zoom":"0"};
	}

	var properties = {"contentType":contentType,"favorites":favs, "sidebar":sidebar, "hidePageControl":hidePageControl, "hideBGImage":hideBGImage, "pathAlias":Drupal.settings.intstrux_native_mobile_theme.pathAlias};

	if(isiPad && !isSafari){
		nativeFunction('app://setProperties/'+JSON.stringify(properties));
	}
	else{
		console.log(JSON.stringify(properties));
	}

	interactivead_updateConnection();

}

function _connectionChanged(isConnected){

	Drupal.settings.application.isConnected = isConnected;


	if(isConnected==0){
		console.log(isConnected);
		offlineBCvideo();
	}else{
		console.log(isConnected);
		onlineBCvideo();
	}

	interactivead_updateConnection();
}

function _onLogin(user){

	Drupal.settings.application.uid = user.uid;
	Drupal.settings.application.firstName= user.firstName;
	Drupal.settings.application.lastName = user.lastName;
	Drupal.settings.application.roles = user.roles;

	interactivead_enableRefresh(Drupal.settings.application.roles);

}

function _deactivate(){
	initAssetVideo();
}

function resizeArticleimgs(){
    
    $('.fig-inline .large').each(function(){
        var img_height = $(this).height();
        var img_width = $(this).width();
        var image_ratio = img_width%img_height;
        
        console.log(img_width+"px");
        console.log(img_height+"px");
        console.log(image_ratio);

        if (image_ratio >= 600){
        	$(this).addClass('active');
        }
    });
}
