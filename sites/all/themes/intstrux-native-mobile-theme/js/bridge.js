/* OncHD Interactive Ads - bridge.js */
/* Created by Intstrux LLC */
/* Version 1.4 */

var isApp = false;

//load Brightcove thumbnail before pop-up video

window.loadBCOverlayVideo = function(videourl,local,x,y,width,height,fadeTime){

	$('.bridge-content #overlayvideo img').show();
	$('.bridge-content #vid_play_btn').show();
	$('.assetvideo_abstract').removeClass('active');
	$('.assetvideo_description').removeClass('active');
	
	$(".bridge-content #overlayvideo").click(function(){		
		$('.bridge-content #overlayvideo img').hide();
		$('.bridge-content #vid_play_btn').hide();
		startBCOverlayVideo(videourl,local,x,y,width,height,fadeTime);
		$('.assetvideo_abstract').addClass('active');
		$('.assetvideo_description').addClass('active');
	});
}

// offline dislay for Brightcove video player

window.offlineBCvideo = function(){
	stopOverlayVideo();
	$('.bridge-content #overlayvideo img').show();
	$('.bridge-content #vid_play_offline').show();
	$('.bridge-content #overlayvideo img').css({"opacity":0.3});
	$('.bridge-content #overlayvideo').css({"pointer-events":"none"});
}

window.onlineBCvideo = function(){
	$('.bridge-content #vid_play_offline').hide();
	$('.bridge-content #overlayvideo img').css({"opacity":1});
	$('.bridge-content #overlayvideo').css({"pointer-events":"auto"});
}

//------------------------------------
// functions to be used in the browser
//------------------------------------

if(!isApp){

//start Brightcove pop-up video
	
window.startBCOverlayVideo = function(videourl,local,x,y,width,height,fadeTime){
	
	//set default values	
			if(!local)
				var local = true;

			if(!width)
				var width = 960;

			if(!height)
				var height = 540;

			if(!x)
				var x = 0;

			if(!y)
				var y = 0;

		 	if(!fadeTime)
				var fadeTime = 500;

			//create HTML5 video player
	var videoHTML = '<object id="flashObj" width="'+width+'" height="'+height+'" classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000" codebase="http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,47,0">'; 
				videoHTML += '<param name="movie" value="https://secure.brightcove.com/services/viewer/federated_f9?isVid=1&isUI=1" />';
				videoHTML += '<param name="bgcolor" value="#000000" />';
				videoHTML += '<param name="flashVars" value="playerID=2219433630001&playerKey=AQ~~,AAABygfs89k~,Glyk08Otwu2vzLnUlMBdoW_PwG5HYd2O&domain=embed&dynamicStreaming=true&@videoPlayer='+videourl+'" />';
				videoHTML += '<param name="base" value="http://admin.brightcove.com" />';
				videoHTML += '<param name="seamlesstabbing" value="false" />';
				videoHTML += '<param name="allowFullScreen" value="true" />'; 
				videoHTML += '<param name="swLiveConnect" value="true" />'; 
				videoHTML += '<param name="allowScriptAccess" value="always" />';
				videoHTML += '<param name="secureConnections" value="true" /> ';
				videoHTML += '<embed src="https://secure.brightcove.com/services/viewer/federated_f9?isVid=1&isUI=1" bgcolor="#000000" flashVars="playerID=2219433630001&playerKey=AQ~~,AAABygfs89k~,Glyk08Otwu2vzLnUlMBdoW_PwG5HYd2O&domain=embed&dynamicStreaming=true&@videoPlayer='+videourl+'" base="http://admin.brightcove.com" name="flashObj" width="'+width+'" height="'+height+'" secureConnections="true" seamlesstabbing="false" type="application/x-shockwave-flash" allowFullScreen="true" allowScriptAccess="always" swLiveConnect="true" pluginspage="http://www.macromedia.com/shockwave/download/index.cgi?P1_Prod_Version=ShockwaveFlash"></embed>';
				videoHTML += '</object>';
	
	$('.bridge-content #overlayvideo').html(videoHTML);

			//set coordinates and include fade-in
	$('.bridge-content #overlayvideo').css({"opacity":0,"position":"absolute",left:x,top:y});
	$('.bridge-content #overlayvideo').animate({opacity:100}, fadeTime, 'ease-in');
	
	}

//start pop-up video
window.startOverlayVideo = function(videourl,local,x,y,width,height,fadeTime,fadeOutTime){
	
		//set default values	
		if(!local)
			var local = true;
		
		if(!width)
			var width = 960;
			
		if(!height)
			var height = 540;
		
		if(!x)
			var x = 0;
			
		if(!y)
			var y = 0;
			
	 	if(!fadeTime)
			var fadeTime = 500;

		if(!fadeOutTime)
			var fadeTime = 0;
		
		//create HTML5 video player
		var videobody = "<video width='"+width+"' height='"+height+"' autoplay controls>"; 
			videobody += "<source src='"+videourl+"' type='video/mp4'>";
			videobody += "</video>";
		$('.bridge-content #overlayvideo').html(videobody);
		
		$(".bridge-content #overlayvideo video").bind("ended", function() {
			$('.bridge-content #overlayvideo').animate({opacity:0}, fadeOutTime, 'ease-out');
			window._overlayVideoComplete();		
		});
		
		//set coordinates and include fade-in
		$('.bridge-content #overlayvideo').css({"z-index":1,"opacity":0,"position":"absolute",left:x,top:y});
		$('.bridge-content #overlayvideo').animate({opacity:100}, fadeTime, 'ease-in');		
}

//stop pop-up video
window.stopOverlayVideo = function (fadeOutTime){
	
	//set default values
	if(!fadeOutTime)
		var fadeOutTime = 0;
	
	//check that video is running, then stop, and fade-out	
	if($('.bridge-content #overlayvideo video').length != 0) {
		$('.bridge-content #overlayvideo video')[0].pause();
		$('.bridge-content #overlayvideo').animate({opacity:0}, fadeOutTime, 'ease-out');
	}
}

//set background video
window.startBGVideo = function(video,local,shouldLoop,delay,fadeIn,fadeOnFinish,pauseOnFinish){
	
	//set default values
	if(!shouldLoop){
		var shouldLoop = '';
	}else{ 
		var shouldLoop = 'loop';
	}
		
 	if(!fadeOnFinish)
		var fadeOnFinish = 0;

	if(!delay)
		var delay = 0;

	//create HTML5 video player
	var videobody = "<video width='768' height='974' autoplay "+shouldLoop+">"; 
		videobody += "<source src='"+video+"' type='video/mp4'>";
		videobody += "</video>";
	//set dela sxx
	setTimeout(function(){
		$('.bridge-content #bgvideo').html(videobody);
		$('.bridge-content #bgvideo').css({"z-index":0,"opacity":0,"position":"absolute",left:0,top:0});
		$('.bridge-content #bgvideo').animate({opacity:100}, fadeIn, 'ease-in');
		
		window._onPlayBackStarted();

		$(".bridge-content #bgvideo video").bind("ended", function() {

			window._onPlayBackDidFinish();

			if(!fadeOnFinish){
				$('.bridge-content #bgvideo').animate({"opacity":100}, 0, 'ease-out');
			}else{
				$('.bridge-content #bgvideo').animate({"opacity":0}, fadeOnFinish, 'ease-out');
			}	
			
			if(!pauseOnFinish){
				$('.bridge-content #bgvideo video')[0].pause();
			}
		});
	},delay);
}

//stop background video
window.stopBGVideo = function (fadeOutTime){
	
//set default values
	if(!fadeOutTime)
		var fadeOutTime = 0;
	
	//check that video is running, then stop, and fade-out	
	$('.bridge-content #bgvideo video')[0].pause();
	$('.bridge-content #bgvideo').animate({opacity:0}, fadeOutTime, 'ease-out');
}

//set background image
window.setBGImage = function (imagepath){
	var bgimage = "<div style='background:url("+imagepath+");z-index:-1;color:white;height:974px;width:768px;position:absolute;left:0px;top:0px;margin:0px;'></div>";
	$('.bridge-content #bgimage').html(bgimage);
}

//show a UI alert example
window.showUIAlert = function (title,message,okBtnMsg,cancelBtnMsg) {
	 var uialert =  "<div style='background-color:black;color:white;height:50px;width:200px;margin:auto;margin-top:200px;'>"+title+"</div>";
		 uialert += "<div style='background-color:fff;border-color:black;color:black;blackborder:1px;height:50px;width:200px;margin:auto;'>"+message+"</div>";
		 uialert += "<div style ='width:100px;margin:auto'>";
		 uialert += "<div style='background-color:black;color:white;blackborder:1px;height:50px;width:50px;margin:auto;float:left;' onclick='closeUIalert()'>"+okBtnMsg+"</div>";
		 uialert += "<div style='background-color:fff;color:blackborder:1px;height:50px;width:50px;margin-:auto;float:right;' onclick='closeUIalert()'>"+cancelBtnMsg+"</div>";
		 uialert += "<br style='clear: left;' />";
		 uialert += "</div>";
	
	$('.bridge-content #uialert').css({"opacity":100});
	$('.bridge-content #uialert').html(uialert);
}

//close UI alert
window.closeUIalert = function (){
	$('.bridge-content #uialert').animate({"opacity":0}, 500, 'ease-out');
}

//show a tracking event example
window.trackIntraPageEvent = function (event,parameters){
	console.log("Tracking event activated for "+event);
}

//Link to external website
window.goToWebsite = function (url){
	stopOverlayVideo();
	window.open(url, "_blank");	
}

//show a mocked webview for previewing PDFs and internal documents
window.showPopupWebview = function (file,image,local,xpos,ypos,width,height,closex,closey,closewidth,closeheight){
	
//set default values
	if(!xpos)
		var xpos = 20;
	if(!ypos)
		var ypos = 20;
	if(!width)
		var width = 730;
	if(!height)
		var height = 940;
	if(!closex)
		var closex = 705;
	if(!closey)
		var closey = 25;
	if(!closewidth)
		var closewidth = 40;
	if(!closeheight)
		var closeheight = 40;
	
	if(!closeimage)
		var closeimage = "close.png";

	if(!file){
		var file = "";
	}else{
		var file = "The PDF or internal document "+file+" will appear here.";
	}
		
	var popupwebview = "<div style='z-index:2;height:"+closeheight+"px;width:"+closewidth+"px;background:url("+closeimage+");position:absolute;left:"+closex+"px;top:"+closey+"px;' onclick='closePopupWebview()'></div>";
		popupwebview += "<div style='z-index:1;background-color:#ccc;color:black;height:"+height+"px;width:"+width+"px;position:absolute;left:"+xpos+"px;top:"+ypos+"px;'>"+file+"</div>";
	$('.bridge-content #popupwebview').html(popupwebview);
	$('.bridge-content #popupwebview').show();
}

//close webview
window.closePopupWebview = function (){
	$('.bridge-content #popupwebview').hide();
}


//------------------------------------
// callback functions
//------------------------------------


/*

//background video started
window._onPlayBackStarted = function(){
}

//Fire event on end of background video
window._onPlayBackDidFinish = function(){
}

//if background video is looping, called at end of every loop
window._onLoopDidFinish = function(){
}

//called when overlay video is finished
window._overlayVideoComplete = function(){
}

//called when webview is closed
window._onPopupWebviewClosed = function(){
}

//function called which sets the version number of the app, needs to be updated, will currently always return 430
window._setVersionNumber = function(version){
}

//called when ok is clicked on an alert
window._onOkBtnClicked = function(){
}
*/
}
// END ELSE

//------------------------------------
// END - functions to be used in the browser
//------------------------------------






























//isApp == true
else{

//------------------------------------------------------------------------
//               functions to be used in the iOS app
//------------------------------------------------------------------------





window.startBCOverlayVideo = function(videourl,local,x,y,width,height,fadeTime){
                    
    // videourl:STRING is full URL "http:/cdn2.ampserver.intstrux.com/sites/default/files/uploads/page_interactive_ad/33437/file.mov"
    // local:BOOL set to true if the video is downloaded locally, false for streaming
    // fadeTime:INT time in seconds for the video to fade in
    
	//setting default values
    if(!fadeTime)
		var fadeTime = 1;
	

    var options = { url: videourl, local:local, x:x, y:y, width:width, height:height, fadeTime:fadeTime };
    
    nativeFunction("app://startBCOverlayVideo/"+JSON.stringify(options));
    
}







window.startOverlayVideo = function(videourl,local,x,y,width,height,fadeTime,fadeOutTime,controls){
                    
    // videourl:STRING is full URL "http:/cdn2.ampserver.intstrux.com/sites/default/files/uploads/page_interactive_ad/33437/file.mov"
    // local:BOOL set to true if the video is downloaded locally, false for streaming
    // fadeTime:INT time in seconds for the video to fade in
    
	//setting default values
    if(!fadeTime)
		var fadeTime = 1000;

	if(!fadeOutTime)
		var fadeOutTime = 0;

	if (!controls) {
		var controls = {enabled:0, playPause:1, slider: 1, timecode:1};
	}
	

    var options = { url: videourl, local:local, x:x, y:y, width:width, height:height, fadeTime:fadeTime/1000, fadeOutTime:fadeOutTime/1000, customControls:controls };
    

    nativeFunction("app://startOverlayVideo/"+JSON.stringify(options));
}







window.stopOverlayVideo = function (fadeOutTime){

	if(!fadeOutTime)
		var fadeOutTime = 0;
	
	var options = {fadeOutTime:fadeOutTime/1000};
	
	nativeFunction("app://stopOverlayVideo/"+JSON.stringify(options));
}




window.startBGVideo = function (video, local, shouldLoop, delay, fadeIn, fadeOnFinish, pauseOnFinish){

	//video:STRING is full URL "http:/cdn2.ampserver.intstrux.com/sites/default/files/uploads/page_interactive_ad/33437/intro.mov"
	// local:BOOL set to true if the video is downloaded locally, false for streaming
	// shouldLoop:BOOL if set to true, will loop the video continuously
	// delay:INT seconds to delay the video before playing
	// fadeIn:INT seconds for the fade in of the video
	// fadeOnFinish:INT seconds for the fade out of the video
	// pauseOnFinish:BOOL set to true to pause the video at the end and keep it on screen
	
	//setting default values
	if(!local)
		var local = true;
	if(!shouldLoop)
		var shouldLoop = false;
	if(!delay)
		var delay = 0;
	if(!fadeIn)
		var fadeIn = 0;
	if(!fadeOnFinish)
		var fadeOnFinish = 0;
	if(!pauseOnFinish)
		var pauseOnFinish = true;
	


	var options = {
		url : video,
		local : local,
		shouldLoop : false,
		delay : delay,
		fadeIn : fadeIn,
		fadeOnFinish: fadeOnFinish,
		pauseOnFinish: pauseOnFinish
	};
				
	nativeFunction("app://startBGVideo/"+JSON.stringify(options));
}

window.stopBGVideo = function(fadeOutTime){ 

	if(!fadeOutTime) 
		var fadeOutTime = 0; 

	fadeOutTime = fadeOutTime/1000; 

	var options = {fadeOutTime:fadeOutTime.toString()}; 

	nativeFunction("app://stopBGVideo/"+JSON.stringify(options)); 
}

window.setBGImage = function(imagepath, doFade, duration){

	//imagepath:STRING this is just the filename of the image "filename.png"
	// doFade:BOOL whether or not to do a crossfade transition
	// duration:INT duration of the crossfade, will default to 1 Apply

	var options = {
		imagepath : imagepath,
		doFade : doFade,
		duration : duration
		
	};


	nativeFunction("app://setBGImage/"+JSON.stringify(options));
}




window.showUIAlert = function(title, message, okBtn, cancelBtn){
	//title:STRING title of the alert
	//message:STRING message for the alert
	//okBtn:STRING text title for the 'ok' button
	//cancelBtn:STRING text title for the 'cancel' button

	var options = {
		title:title,
		message:message,
		okBtn:okBtn,
		cancelBtn:cancelBtn
	}

	nativeFunction("app://showUIAlert/"+JSON.stringify(options));
}






window.trackIntraPageEvent = function(event, parameters){
	//sends events to tracker
	//event:STRING name of event to be tracked
	//parameters:OBJ optional parameters to send to the tracker

	var options = {
		event:event,
		parameters:parameters
	}

	
	nativeFunction("app://trackIntraPageEvent/"+JSON.stringify(options));
	
}




window.goToWebsite = function (myurl){
	stopOverlayVideo();
	var options = {url:myurl};
	
	nativeFunction("app://goToWebsite/"+JSON.stringify(options));
}





window.showPopupWebview = function(file, image, local, xpos, ypos, width, height, closex, closey, closewidth, closeheight){

	//file:STRING is full URL "http://cdn2.ampserver.intstrux.com/sites/default/files/uploads/page_interactive_ad/33437/file.pdf"
	// image:STRING is full URL "http://cdn2.ampserver.intstrux.com/sites/default/files/uploads/page_interactive_ad/33437/pi_close.png"
	// local:BOOL set to true if the video is downloaded locally, false for streaming
	// closex:INT x position of the close button
	// closey:INT y position of the close button
	// closewidth:INT width of the close button
	// closeheight:INT heigth of the close button
	
	//setting default values
	if(!local)
		var local = true;
	if(!xpos)
		var xpos = 20;
	if(!ypos)
		var ypos = 20;
	if(!width)
		var width = 730;
	if(!height)
		var height = 940;
	if(!closex)
		var closex = 705;
	if(!closey)
		var closey = 25;
	if(!closewidth)
		var closewidth = 40;
	if(!closeheight)
		var closeheight = 40;

	var options = {
		fileURL: file,
		closeimage: image,
		local:local,
        xpos: xpos,
        ypos: ypos,
        width: width,
        height:height,
        closex: closex,
        closey:closey,
        closewidth:closewidth,
        closeheight:closeheight
        

    };

	nativeFunction("app://showPopupWebview/"+JSON.stringify(options));
}



window.enablePinchZoom = function (){
	
	var options = {};
	
	nativeFunction("app://enablePinchZoom/"+JSON.stringify(options));
}


}

//Native function queue

var queueActive = false;
var queue = [];
var queueInterval;

function nativeFunction(appURL){
	if(!queueActive){
		queueActive = true;
		windowLocation(appURL);
		queueInterval = setInterval(function(){
			checkQueue();
		},10);
	}

	queue.push(appURL);
}

function checkQueue(){
	queue.shift();

	if (queue.length > 0) {
		windowLocation(queue[0]);
	}
	else{
		queueInterval = clearInterval(queueInterval);
		queueActive = false;
	}
}


function windowLocation(appURL){
	window.location = appURL;
}



//------------------------------------
// callback functions
//------------------------------------

/*
//background video started
_onPlayBackStarted()

//Fire event on end of background video
_onPlayBackDidFinish()

//if background video is looping, called at end of every loop
_onLoopDidFinish()

//called when overlay video is finished
_overlayVideoComplete()
	
//called when webview is closed
_onPopupWebviewClosed()
	
//function called which sets the version number of the app, needs to be updated, will currently always return 430
_setVersionNumber()

//called when ok is clicked on an alert
_onOkBtnClicked()
	*/

//------------------------------------
// END - functions to be used in the iOS app
//------------------------------------



