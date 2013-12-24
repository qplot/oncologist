function initAssetVideo(){

	var videourl = Drupal.settings.assetvideo.bcid;
	loadBCOverlayVideo(videourl,false,89,100,640,360,1);
}

function showDisclaimer(params){

	var nid = params.nid;
	var disclaimer = params.disclaimer;
	var required = params.required;

	var	disclaimerbox = "<div class='disclaimer_message_wrap'><h1>Disclaimer</h1><div class='disclaimer_message'>"+disclaimer+"</div>";
		disclaimerbox += "<label><input type='checkbox' id ='disclaimer_checkbox' class='disclaimer_checkbox'>I'm a European Practitioner</label>";
		disclaimerbox += "<div class='disclaimer_cancelbtn'>Cancel</div>";
		disclaimerbox += "<div class='disclaimer_okbtn disabled'>Watch now</div></div>";

	if(required==1){
			$('.disclaimer_box').html(disclaimerbox);
			$('.disclaimer_box').show();
			$('.disclaimer_message_wrap').addClass('fadeInUp');
		}else{
			loadPage("node/"+nid);
		}

	$(".disclaimer_okbtn").click(function(){
		loadPage("node/"+nid);
	});

	$(".disclaimer_cancelbtn").click(function(){
		$('.disclaimer_box').hide();
	});

	function checkOn() { $(".disclaimer_okbtn").toggleClass("disabled"); }

	$( "#disclaimer_checkbox" ).on( "click", checkOn );
}







