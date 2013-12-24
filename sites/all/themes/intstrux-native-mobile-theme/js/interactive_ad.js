(function ($, Drupal, window, document, undefined) {


	$(document).ready( function () {

		//1st level view of the interactive Ad
		if($("BODY").hasClass("page-view-interactive-ad-alt")){	

			//alert("2.2");
			//console.log("interactive ad view");


			checkNidsAvailableOffline();

			$(".ad-reviewer").click(function(e){
				e.preventDefault();
   				e.stopPropagation();
   				e.stopImmediatePropagation();
				
				$(this).parent().parent().removeClass("active");
				

				var isiPad = (navigator.userAgent.match(/iPad/i) != null);
				var isSafari = navigator.userAgent.match(/Safari/i) != null;

				if(isiPad && !isSafari){

					$(this).parent().parent().attr("id")
					var str = ($(this).parent().parent().attr("id"));
					var n=str.replace("item-","");

					$("#item-"+n+" .ad-mask").html("Updating");

					$("#item-"+n+" .ad-mask").height("100%");

					nativeFunction('app://refreshNode/'+ '{"nid":"'+n+'"}');
				}
				else{
					alert("refresh: "+$(this).parent().parent().attr("id"));
				}

				return false;
			});

			interactivead_updateConnection();
	
		}


	});

	function checkNidsAvailableOffline(){
		var isiPad = (navigator.userAgent.match(/iPad/i) != null);
		var isSafari = navigator.userAgent.match(/Safari/i) != null;
		var nid = [];

		$( ".item" ).each(function( index ) {
		var str = ($(this).attr("id"));
		var n=str.replace("item-","");
		nid.push(n);
		});

		if(isiPad && !isSafari){
			nativeFunction('app://checkNidsAvailableOffline/'+JSON.stringify(nid));
		}
		else{
			//console.log(JSON.stringify(nid));
		}
	}

})(Zepto, Drupal, this, this.document);


//iOS callback
/*setAdStatus(json) - Passes a json object when a new ad either starts downloading, updating, or has a download error.

Parameters:
json(string)
- nid(string)
- status(string) - Values sent : "download", "update", "error"
*/

var last_percentage = 0;

function setAdStatus(jsonobj){

	//$(".view-content").html($(".view-content").html()+"-----------: setAdStatus :-------------"+JSON.stringify(jsonobj));

	
	
	if(jsonobj.status == "download"){
		last_percentage = 0;
		$("#item-"+jsonobj.nid+" .ad-mask").html("Preparing");
	}
	else if(jsonobj.status == "error"){
		$("#item-"+jsonobj.nid+" .ad-mask").html("Cannot be downloaded at this time.");
	}
	else if(jsonobj.status == "update"){
		$("#item-"+jsonobj.nid+" .ad-mask").html("Updating.");
	}
} 


/*
updateProgress(percent) - Passes a string with the percent value. Note: this doesn't pass in the nid as well for performance reasons. It gets called too often for me to create a json string every second. You should be able to save the nid from the setAdStatus. Let me know if its an issue.

Parameters:
percent(string)
*/

function updateProgress(nid, percent) {

	percent = Math.round(percent*100);

	if(percent <= last_percentage)
		return;

	

	//$(".view-content").html($(".view-content").html()+"   "+interactivead_nid+" "+(percent*100));

	$("#item-"+nid+" .ad-mask").html(percent+"%");

	$("#item-"+nid+" .ad-mask").height((100-percent)+"%");

	last_percentage = percent;
}

function _nidAvailableOffline(nid){

	//document.writeln(nid + ": OFFLINE AVAILABLE");

	$("#item-"+nid).addClass("active");
}

function interactivead_enableRefresh(roles){
	if($("BODY").hasClass("page-view-interactive-ad-alt")){	

		if(typeof roles != 'undefined' && roles !=""){

			var roles_array = roles.split(",");

			if(roles_array.indexOf("2")>=0){
				//alert("ad reviewr: ");
				$( ".item" ).addClass("is-reviewer");

			}
			else{
				//alert("not an ad reviewr: ");
				$( ".item" ).removeClass("is-reviewer");
			}

		}
		else{
			//alert("anon user: "+roles);
			$( ".item" ).removeClass("is-reviewer");
		}
	}

}

function interactivead_updateConnection(){
	if($("BODY").hasClass("page-view-interactive-ad-alt")){	

		$( ".item" ).removeClass("connection-offline");
		$( ".item" ).removeClass("connection-3g");
		$( ".item" ).removeClass("connection-wifi");

		if(Drupal.settings.application.isConnected  == 0){
			$( ".item" ).addClass("connection-offline");
		}
		if(Drupal.settings.application.isConnected  == 1){
			$( ".item" ).addClass("connection-3g");
		}
		if(Drupal.settings.application.isConnected  == 2){
			$( ".item" ).addClass("connection-wifi");
		}

	}
}

