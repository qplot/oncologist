/**
 * @author Boarder
 */
var mediaLibraryArgs = null;
 var user = new Object();
 var activetab = "tab1";
 var activepage = "cc_case";
 var uservote = "n/a";
 user.uid = "0";
 user.firstname = "First";
 user.lastname = "Last";
 user.title = "";
 user.mail = "";
 user.online = true;
 var disclaimer_agreed = new Array();
 var commentsActive = false;
 var disclaimerURL = "";
 var isMostViewed = false;
 var videoTab = "";
 
 
(function ($, Drupal, window, document, undefined) { 
	Drupal.behaviors.adminTheme = {
		
		attach: function (context, settings) {
			   
		   if($("#mySlider").length >0 ){
			   
			   $("#mySlider").royalSlider({
						preloadNearbyImages:true,               // Preloads two nearby images, if they have lazy loading enabled
						imageScaleMode:"fit",                  // Scale mode of all images. Can be "fill", "fit" or "none"
						imageAlignCenter:false,                 // Aligns all images to slide center
						keyboardNavEnabled:true,               // Keyboard arrows navigation
						directionNavEnabled: false,  
						captionAnimationEnabled: true,          // Set to false if you want to remove all animations from captions  
						captionShowSpeed:800,                   // Default caption show speed in ms
						captionShowEasing:"easeOutCubic",
						slideshowEnabled: true,                // Autoslideshow enabled          
						slideshowDelay:5000,                    // Delay between slides in slideshow
						slideshowPauseOnHover: true,            // Pause slideshow on hover
						slideshowAutoStart:true,                // Auto start slideshow 
						directionNavAutoHide: true         
				});  
			}
		
			if($("#banner-rotator").length >0 ){
				$('#banner-rotator').royalSlider({			
					imageAlignCenter:true,
					hideArrowOnLastSlide:true,
					slideshowEnabled: true,                // Autoslideshow enabled          
					slideshowDelay:5000,                    // Delay between slides in slideshow
					slideshowPauseOnHover: true,            // Pause slideshow on hover
					slideshowAutoStart:true,
					controlNavEnabled: true,
					directionNavEnabled: false,
					autoScaleSlider: false  
				});		
			}
		
		if ($.browser.msie && $.browser.version < 9) $('#edit-tid')
		.bind('focus mouseover', function() { $(this).addClass('expand').removeClass('clicked'); })
		.bind('click', function() { $(this).toggleClass('clicked'); })
		.bind('mouseout', function() { if (!$(this).hasClass('clicked')) { $(this).removeClass('expand'); }})
		.bind('blur', function() { $(this).removeClass('expand clicked'); });
		
		init();
		}	
		
	};





function init(){
	
	/*var updateLayout = function() {
	  if (window.innerWidth != currentWidth) {
	    currentWidth = window.innerWidth;
	    var orient = (currentWidth == 768) ? "profile" : "landscape";
	    document.body.setAttribute("orient", orient);
	    window.scrollTo(150, 1);
	  }
	};
	
	iPhone.DomLoad(updateLayout);
	setInterval(updateLayout, 400);
	*/
	
	$("#audio-close").click(function(){
				$("#audioplayer").hide();
				$("#audio-player").html("");
				$("#audio-title").html("");
				$("#audio-speaker").html("");
			});
			
	$('#ok-btn').click(function(){
		showPodcast(disclaimerURL,isMostViewed);
	});
	
	$('#cancel-btn').click(function(){
		$('#disclaimer-wrapper').hide();
	});
	
	$('#search-bar input').focus(function() {
		if($('#search-bar input').val() == 'Search'){
	  		$('#search-bar input').val('');
	  		$('#search-bar input').css("color", "#000000");
	  	}
	});
	
	$('#search-bar input').blur(function() {
		if($('#search-bar input').val() == ''){
	  		$('#search-bar input').val('Search');
	  		$('#search-bar input').css("color", "#777777");
	  	}
	});
	
	
	
	$('#video-tab').click(
		function(){
			filterVideo();
		}
	);
	$('#audio-tab').click(
		function(){
			filterAudio();
		}
	);
	
	$('#video-tab').mouseover(
		function(){
			if(videoTab != 'video'){
				$('#video-tab').removeClass('tab-inactive');
				$('#video-tab').removeClass('tab-active');
				$('#video-tab').addClass('tab-hover');
			}
			
		}
	);
	$('#audio-tab').mouseover(
		function(){
			
			if (videoTab != 'audio') {
				$('#audio-tab').removeClass('tab-inactive');
				$('#audio-tab').removeClass('tab-active');
				$('#audio-tab').addClass('tab-hover');
			}
		}
	);
	
	$('#video-tab').mouseout(
		function(){
			$('#video-tab').removeClass('tab-hover');
			if (videoTab == 'video') {
				
				$('#video-tab').addClass('tab-active');
			}
			else{
				$('#video-tab').addClass('tab-inactive');
			}
		}
	);
	$('#audio-tab').mouseout(
		function(){
			$('#audio-tab').removeClass('tab-hover');
			if (videoTab == 'audio') {
				
				$('#audio-tab').addClass('tab-active');
			}
			else{
				$('#audio-tab').addClass('tab-inactive');
			}
		}
	);
	
	
	
	$('#header-right-click-btn').click(
		function(){
			headerRightClick();
		}
	);
	
	$('#sign-in #close-btn').click(
		function(event){
			hideSignIn();
		}
	);

	$('#disclaimer-text').click(
		function(){
			$('#disclaimer').show();
			$('#disclaimer-close-btn').show();
		}
	);
	
	$('#disclaimer-close-btn').click(
		function(){
			$('#disclaimer').hide();
			$('#disclaimer-close-btn').hide();
		}
	);
	
	
	/*$('#sign-in #submit-btn').click(
		function (){
			submitLogin();
		}
	);*/
	
	/*
	$(".cc_row_voting_viewcase").click(
          function(event){
            console.log('hello');
            var date = new Date();
            
			window.location.href = $(this).attr('link');
			
        }
      );
      */
	
	$("#cc_new_comment").click(function(event){setFocus(event.target.id);});
	$(".cc_new_reply").click(function(event){setFocus(event.target.id);});
	
	$('.cc_reply_btn').click(function(event){
		
		if(user.uid != 0){
		
			var cid = event.target.id;
			cid = cid.replace("reply_","");
			
			$('#reply_'+cid).hide();
			$('#field_'+cid).show();	
		}
		
		else{
			
			showSignIn(event);
		}
	});
	
	
	activetab = "tab1";
 	activepage = "cc_case";
	
	
	
	//var numberOfViews = $('#number-of-views span').html().replace("reads","VIEWS");	
	//$('#number-of-views span').html(numberOfViews);
	
	
	$('#view_comments').click(
		function(){
			toggleComments();
		}
	);
	
	
	
	//registration
	
	
	
	$("#user-register .listitem").addClass('inactive');
	$("#user-register .listitemsubmit").addClass('inactive');
	$("#user-register .listitem INPUT").attr('disabled', 'disabled');
	$("#user-register .listitemsubmit INPUT").attr('disabled', 'disabled');
	$("#user-register .listitem SELECT").attr('disabled', 'disabled');
	        
	$("#user-register .listitem.listitemstandalone").removeClass('inactive');
	$("#user-register .listitem.listitemstandalone INPUT").removeAttr('disabled');


	$("#user-register").submit(function(e){ 
		
		//Reset
		$("#edit-name").removeClass("error");
		$("#edit-mail").removeClass("error");
		$("#edit-pass-pass1").removeClass("error");
		$("#edit-pass-pass2").removeClass("error");
		
		$("#edit-field-user-firstname-0-value").removeClass("error");
		$("#edit-field-user-lastname-0-value").removeClass("error");
		
		$("#edit-field-user-location-value").removeClass("error");
		$("#edit-field-user-principal-select").removeClass("error");
		$("#edit-field-user-principal-other").removeClass("error");
		$("#edit-field-user-degree-value").removeClass("error");
		$("#edit-field-user-degree-other-select").removeClass("error");
		$("#edit-field-user-degree-other-other").removeClass("error");
		$("#edit-field-user-worksetting-select").removeClass("error");
		$("#edit-field-user-worksetting-other").removeClass("error");
		$("#messages-block").html("");
		$("#messages-block").hide();
		
		
		//validation
		var ret = true;
		var message = "";
		
		//Email
		var filter=/^([\w-]+(?:\.[\w-]+)*)@((?:[\w-]+\.)*\w[\w-]{0,66})\.([a-z]{2,6}(?:\.[a-z]{2})?)$/i
		if($("#edit-mail").val() == ''){
			ret = false;
            $("#edit-mail").addClass("error");
            message += "<li>Email is required.</li>";
		}
		else if(!filter.test($("#edit-mail").val())){
			ret = false;
            $("#edit-mail").addClass("error");
            message += "<li>Email is not valid.</li>";
		}
		
		//Pass
		if($("#edit-pass-pass1").val() == '' || $("#edit-pass-pass2").val() == ''){
			ret = false;
            $("#edit-pass-pass1").addClass("error");
            $("#edit-pass-pass2").addClass("error");
            message += "<li>Password is required.</li>";
		}
		else if($("#edit-pass-pass1").val().length < 8 || $("#edit-pass-pass2").val().length < 8){
			ret = false;
            $("#edit-pass-pass1").addClass("error");
            $("#edit-pass-pass2").addClass("error");
            message += "<li>Password needs to be at least 8 characters.</li>";
		}
		else if($("#edit-pass-pass1").val() != $("#edit-pass-pass2").val()){
			ret = false;
            $("#edit-pass-pass1").addClass("error");
            $("#edit-pass-pass2").addClass("error");
            message += "<li>Passwords don't match.</li>";
		}
		else if($("#edit-pass-pass1").val() == $("#edit-mail").val()){
			ret = false;
            $("#edit-pass-pass1").addClass("error");
            $("#edit-pass-pass2").addClass("error");
            message += "<li>Password can't be your email address.</li>";
		}
		
		//firstname
		if($("#edit-field-user-firstname-0-value").val() == ''){
			ret = false;
            $("#edit-field-user-firstname-0-value").addClass("error");
            message += "<li>First name is required.</li>";
		}
		
		//lastname
		if($("#edit-field-user-lastname-0-value").val() == ''){
			ret = false;
            $("#edit-field-user-lastname-0-value").addClass("error");
            message += "<li>Last name is required.</li>";
		}
		
		//username
		/*
		if($("#edit-name").val() == ''){
			ret = false;
            $("#edit-name").addClass("error");
            message += "<li>Username is required.</li>";
		}
		*/
		
		//Country
		$("#edit-field-user-location-value option:selected").each(function () {
            if($(this).val()=='' || $(this).text() == "- None -"){
            	
            	ret = false;
                $("#edit-field-user-location-value").addClass("error");
                message += "<li>Country is required.</li>";
            }
            
           
          
        });
		
		//Principal
		$("#edit-field-user-principal-select option:selected").each(function () {
            if($(this).val()=='' || $(this).text() == "- None -"){
            	
            	ret = false;
                $("#edit-field-user-principal-select").addClass("error");
                message += "<li>Specialty is required.</li>";
            }
             else if($(this).val().indexOf('section_')==0){
            	ret = false;
                $("#edit-field-user-principal-select").addClass("error");
                message += "<li>Please select a valid Specialty.</li>";
            	
            }
          
          	else if($(this).text() == "Other" ){
            	
            	if($("#edit-field-user-principal-other").val() == ''){
					ret = false;
           			 $("#edit-field-user-principal-other").addClass("error");
            		message += "<li>Specialty \"Other\" selected but not specified.</li>";
				}
		
            	
            }
          
        });
		
		//Degree
		$("#edit-field-user-degree-value option:selected").each(function () {
            if($(this).val()=='' || $(this).text() == "- None -"){
            	
            	ret = false;
                $("#edit-field-user-degree-value").addClass("error");
                message += "<li>Degree is required.</li>";
            }
            else if($(this).val()==15){
            	
            	
               	$("#edit-field-user-degree-other-select option:selected").each(function () {
                
                
                	if($(this).val()=="" || $(this).val()==-1){
                		
                		ret = false;
                		$("#edit-field-user-degree-other-select").addClass("error");
                		message += "<li>Degree other is required.</li>";
                	}
                	else if($(this).text() == "Other" ){
            	
            			if($("#edit-field-user-degree-other-other").val() == ''){
							ret = false;
           			 		$("#edit-field-user-degree-other-other").addClass("error");
            				message += "<li>Degree \"Other\" selected but not specified.</li>";
							}
            		}
                
             	});  	
             }
        });
		
		//Place of work
		$("#edit-field-user-worksetting-select option:selected").each(function () {
            if($(this).val()=='' || $(this).text() == "- None -"){
            	
            	ret = false;
                $("#edit-field-user-worksetting-select").addClass("error");
                message += "<li>Place of work or study is required.</li>";
            }
           else if($(this).text()== "Other" ){
            	
            	if($("#edit-field-user-worksetting-other").val() == ''){
					ret = false;
           			 $("#edit-field-user-worksetting-other").addClass("error");
            		message += "<li>Place of work \"Other\" selected but not specified.</li>";
				}
		
            	
            }
          
        });
		
		
		if(!ret){
			
			showErrorMessage(message);
		}
		else{
			
			$("#edit-name").val($("#edit-mail").val());
			
			NativeBridge.call("userTmpPassword", {'pass':$("#edit-pass-pass1").val()});
		}
		
		return ret;
		//alert("Here we go "+$("#edit-pass-pass1").val());
		
		
	});
	
	$("#user-pass").submit(function(e){ 
		
		$("#edit-name").removeClass("error");
		
		$("#messages-block").html("");
		$("#messages-block").hide();
		
		var ret = true;
		
		var name = $("#edit-name").val();
		
		$("#edit-name-wrapper").removeClass("error");
		
		var error = "";
		
		//validation
		var filter=/^([\w-]+(?:\.[\w-]+)*)@((?:[\w-]+\.)*\w[\w-]{0,66})\.([a-z]{2,6}(?:\.[a-z]{2})?)$/i
		if(name == ""){
			ret = false;
			$("#edit-name").addClass("error");	
			error += "<li>Email required.</li>";
		}
		else if(!filter.test($("#edit-name").val())){
			ret = false;
			$("#edit-name").addClass("error");	
			error += "<li>Email not valid.</li>";
		}
		
		
		if(!ret){
			
			showErrorMessage(error);
		}
		
		return ret;
	});
	
	$("#user-login").submit(function(e){ 
		
		$("#edit-name").removeClass("error");
		$("#edit-pass").removeClass("error");

		$("#messages-block").html("");
		$("#messages-block").hide();
		
		var ret = true;
		
		var name = $("#edit-name").val();
		var pass = $("#edit-pass").val();
		
		$("#edit-name-wrapper").removeClass("error");
		$("#edit-pass-wrapper").removeClass("error");
		
		var error = "";
		
		//validation
		var filter=/^([\w-]+(?:\.[\w-]+)*)@((?:[\w-]+\.)*\w[\w-]{0,66})\.([a-z]{2,6}(?:\.[a-z]{2})?)$/i
		if(name == ""){
			ret = false;
			$("#edit-name").addClass("error");	
			error += "<li>Email required.</li>";
		}
		else if(!filter.test($("#edit-name").val())){
			ret = false;
			$("#edit-name").addClass("error");	
			error += "<li>Email not valid.</li>";
		}
		if(pass == ""){
			ret = false;
			$("#edit-pass").addClass("error");
			error += "<li>Password required.</li>";	
		}
		else if(pass.length < 6){
			ret = false;
			error += "<li>Passwords are at least 8 characters long.</li>";
			
			$("#edit-pass-wrapper").addClass("error");	
		}
		
		if(ret){
			
			if(name == pass){
				ret = false;
				$("#edit-name").addClass("error");	
				error += "Sorry, unrecognized email or password. <a href=\"user/password\">Have you forgotten your password?</a>";
			}
		}
		
		
		if(ret){
			//alert("Here we go "+pass);
		
			NativeBridge.call("userTmpPassword", {'pass':pass});
		}
		else{
			showErrorMessage(error);
		
		}
		
		return ret;
		
	});
	
	
	
	$("#user-done").click(function(e){ 
		
		//alert("Dismiss");
		
		NativeBridge.call("userDismiss", {});
		
		e.stopPropagation();
		
		return false;
	});
	
	$("#user-logout").click(function(e){ 
		
		if(!offline)
			$("#logout-overlay").show();
		
		e.stopPropagation();
		
		return false;
	});
	
	$("#user-edit").click(function(e){ 
		
		if(offline){
			e.stopPropagation();
			return false;
		}
	});
	
	$("#contact-button").click(function(e){ 
		
		if(offline){
			e.stopPropagation();
			return false;
		}
	});
	
	
	$("#logout-overlay-confirm").click(function(e){ 
		
		
		$("#loading-overlay").show();
		$("#logout-overlay").hide();
		
		//alert("Logout");
		
		NativeBridge.call("userLogout", {});
		
	});
	
	$("#logout-overlay-cancel").click(function(e){ 
		
		$("#logout-overlay").hide();
		
		e.stopPropagation();
		
		return false;
		
	});
	
	
	//For the registration form
	$("#edit-field-user-degree-value option:selected").each(function () {
                if($(this).val()==15){
                	$("#edit-field-user-degree-other-select-wrapper").show();
                }
                else{
                	$("#edit-field-user-degree-other-select-wrapper").hide();
                	$("#edit-field-user-degree-other-other-wrapper").hide();
                }
              });
	
	$("#edit-field-user-degree-value").change(function () {
          
          $("#edit-field-user-degree-value option:selected").each(function () {
                if($(this).val()==15){
                	$("#edit-field-user-degree-other-select-wrapper").show();
                }
                else{
                	$("#edit-field-user-degree-other-select-wrapper").hide();
                	$("#edit-field-user-degree-other-other-wrapper").hide();
                	
                }
              });
        });
      /*
     $("BODY.page-user-register #edit-name").addClass("generated");
   
    //To create the username 
    $("#edit-field-user-firstname-0-value").keyup(function () {
          
         $("#edit-name.generated").val($("#edit-field-user-firstname-0-value").val()+"."+$("#edit-field-user-lastname-0-value").val()) ;
    });
    
    //To create the username 
    $("#edit-field-user-lastname-0-value").keyup(function () {
          
         $("#edit-name.generated").val($("#edit-field-user-firstname-0-value").val()+"."+$("#edit-field-user-lastname-0-value").val());
    });
    
    $("#edit-name").focus(function(e){
    	
    	$("#edit-name").removeClass("generated");
    });
    */
        
    //For password editing
    
    //only show the password if we are not resetting
    if(!$(".listitemstandalone").hasClass("listitemhidden")){
	    if(typeof Drupal.settings.oncologisthdtheme !== 'undefined' && (typeof Drupal.settings.oncologisthdtheme.force_password === 'undefined' || !Drupal.settings.oncologisthdtheme.force_password)){
	    	$("#node-form #edit-pass-pass1").val("FAKEFAKE");
	    	$("#node-form #edit-pass-pass2").val("FAKEFAKE");
	    }
	    else{
	    	
	    	if($("BODY").hasClass("logged-in")){	
	    	NativeBridge.call("getPassword", {}, function(password){
				$("#node-form #edit-pass-pass1").val(password);
	    		$("#node-form #edit-pass-pass2").val(password);
				//alert(password);
				usersubmitted_pass = password;
			});
			}
	    	
	    }
    }
    
    $("#node-form  #edit-pass-pass1").focus(function(e){
        e.preventDefault();
        
        if($("#edit-pass-pass1").val()=="FAKEFAKE" || $("#edit-pass-pass1").val()==usersubmitted_pass){
        	$("#edit-pass-pass1").val("");
        	$("#edit-pass-pass2").val("");
        }
   });
   
   $("#node-form #edit-pass-pass2").focus(function(e){
        e.preventDefault();
        
        if($("#edit-pass-pass1").val()=="FAKEFAKE" || $("#edit-pass-pass1").val()==usersubmitted_pass){
        	$("#edit-pass-pass1").val("");
        	$("#edit-pass-pass2").val("");
        }
   });
   
   $("#node-form").submit(function(e){ 
		
		//Reset
		$("#edit-name").removeClass("error");
		$("#edit-mail").removeClass("error");
		$("#edit-pass-pass1").removeClass("error");
		$("#edit-pass-pass2").removeClass("error");
		
		$("#edit-field-user-firstname-0-value").removeClass("error");
		$("#edit-field-user-lastname-0-value").removeClass("error");
		
		$("#edit-field-user-location-value").removeClass("error");
		$("#edit-field-user-principal-select").removeClass("error");
		$("#edit-field-user-principal-other").removeClass("error");
		$("#edit-field-user-degree-value").removeClass("error");
		$("#edit-field-user-degree-other-select").removeClass("error");
		$("#edit-field-user-degree-other-other").removeClass("error");
		$("#edit-field-user-worksetting-select").removeClass("error");
		$("#edit-field-user-worksetting-other").removeClass("error");
		$("#messages-block").html("");
		$("#messages-block").hide();
		
		
		//Cleanup
		if($("#edit-pass-pass1").val()=="FAKEFAKE"){
        	$("#edit-pass-pass1").val("");
        	$("#edit-pass-pass2").val("");
        }
        else if(!$(".listitemstandalone").hasClass("listitemhidden") && $("#edit-pass-pass1").val()=="" && usersubmitted_pass !="FAKEFAKE"){
        	$("#edit-pass-pass1").val(usersubmitted_pass);
        	$("#edit-pass-pass2").val(usersubmitted_pass);
        	
        }
		
		
		
		//validation
		var ret = true;
		var message = "";
		
		//Email
		var filter=/^([\w-]+(?:\.[\w-]+)*)@((?:[\w-]+\.)*\w[\w-]{0,66})\.([a-z]{2,6}(?:\.[a-z]{2})?)$/i
		if($("#edit-mail").val() == ''){
			ret = false;
            $("#edit-mail").addClass("error");
            message += "<li>Email is required.</li>";
		}
		if(!filter.test($("#edit-mail").val())){
			ret = false;
            $("#edit-mail").addClass("error");
            message += "<li>Email is not valid.</li>";
		}
		
		//Pass
		
		if($(".listitemstandalone").hasClass("listitemhidden") && $("#edit-pass-pass1").val()== ""){
			ret = false;
            $("#edit-pass-pass1").addClass("error");
            $("#edit-pass-pass2").addClass("error");
            message += "<li>Passwords can't be empty.</li>";
		
		}
		else if($(".listitemstandalone").hasClass("listitemhidden") && $("#edit-pass-pass1").val().length <8){
			ret = false;
            $("#edit-pass-pass1").addClass("error");
            $("#edit-pass-pass2").addClass("error");
            message += "<li>Passwords need to have at least 8 characters.</li>";
		
		}
		else if($("#edit-pass-pass1").val() != $("#edit-pass-pass2").val()){
			ret = false;
            $("#edit-pass-pass1").addClass("error");
            $("#edit-pass-pass2").addClass("error");
            message += "<li>Passwords don't match.</li>";
		}
		else if($("#edit-pass-pass1").val() == $("#edit-mail").val()){
			ret = false;
            $("#edit-pass-pass1").addClass("error");
            $("#edit-pass-pass2").addClass("error");
            message += "<li>Password can't be your email address.</li>";
		}
		
		
		//firstname
		if($("#edit-field-user-firstname-0-value").val() == ''){
			ret = false;
            $("#edit-field-user-firstname-0-value").addClass("error");
            message += "<li>First name is required.</li>";
		}
		
		//lastname
		if($("#edit-field-user-lastname-0-value").val() == ''){
			ret = false;
            $("#edit-field-user-lastname-0-value").addClass("error");
            message += "<li>Last name is required.</li>";
		}
		/*
		//username
		if($("#edit-name").val() == ''){
			ret = false;
            $("#edit-name").addClass("error");
            message += "<li>Username is required.</li>";
		}
		*/
		//Country
		$("#edit-field-user-location-value option:selected").each(function () {
            if($(this).val()=='' || $(this).text() == "- None -"){
            	
            	ret = false;
                $("#edit-field-user-location-value").addClass("error");
                message += "<li>Country is required.</li>";
            }
            
           
          
        });
		
		//Principal
		$("#edit-field-user-principal-select option:selected").each(function () {
            if($(this).val()=='' || $(this).text() == "- None -"){
            	
            	ret = false;
                $("#edit-field-user-principal-select").addClass("error");
                message += "<li>Specialty is required.</li>";
            }
             else if($(this).val().indexOf('section_')==0){
            	ret = false;
                $("#edit-field-user-principal-select").addClass("error");
                message += "<li>Please select a valid Specialty.</li>";
            	
            }
          
          	else if($(this).text() == "Other" ){
            	
            	if($("#edit-field-user-principal-other").val() == ''){
					ret = false;
           			 $("#edit-field-user-principal-other").addClass("error");
            		message += "<li>Specialty other selected but not specified.</li>";
				}
		
            	
            }
          
        });
		
		//Degree
		$("#edit-field-user-degree-value option:selected").each(function () {
            if($(this).val()=='' || $(this).text() == "- None -"){
            	
            	ret = false;
                $("#edit-field-user-degree-value").addClass("error");
                message += "<li>Degree is required.</li>";
            }
            else if($(this).val()==15){
            	
            	
               	$("#edit-field-user-degree-other-select option:selected").each(function () {
                
                
                	if($(this).val()=="" || $(this).val()==-1){
                		
                		ret = false;
                		$("#edit-field-user-degree-other-select").addClass("error");
                		message += "<li>Degree other is required.</li>";
                	}
                	else if($(this).text() == "Other" ){
            	
            			if($("#edit-field-user-degree-other-other").val() == ''){
							ret = false;
           			 		$("#edit-field-user-degree-other-other").addClass("error");
            				message += "<li>Degree other selected but not specified.</li>";
							}
            		}
                
             	});  	
             }
        });
		
		//Place of work
		$("#edit-field-user-worksetting-select option:selected").each(function () {
            if($(this).val()=='' || $(this).text() == "- None -"){
            	
            	ret = false;
                $("#edit-field-user-worksetting-select").addClass("error");
                message += "<li>Place of work or study is required.</li>";
            }
           else if($(this).text()== "Other" ){
            	
            	if($("#edit-field-user-worksetting-other").val() == ''){
					ret = false;
           			 $("#edit-field-user-worksetting-other").addClass("error");
            		message += "<li>Place of work other selected but not specified.</li>";
				}
		
            	
            }
          
        });
		
		
		if(!ret){
			
			showErrorMessage(message);
			if(!$(".listitemstandalone").hasClass("listitemhidden") && $("#edit-pass-pass1").val()=="" && usersubmitted_pass =="FAKEFAKE"){
				$("#node-form #edit-pass-pass1").val("FAKEFAKE");
    			$("#node-form #edit-pass-pass2").val("FAKEFAKE");
    		}
		}
		else if($("#edit-pass-pass1").val() != ""){
		
			//alert("Here we go "+$("#edit-pass-pass1").val());
			$("#edit-name").val($("#edit-mail").val());
			NativeBridge.call("userTmpPassword", {'pass':$("#edit-pass-pass1").val()});
		}
		
		return ret;
		
	});
	
	$(".page-contact A.back").click(function(e){ 
		
		history.back();
		
		e.stopPropagation();
		
		return false;
	});
   

}





function submitPodcastComment(nid, comment, uid){
	//console.log('submitComment');
	var commentsHtml = $('.node-type-asset-video #comments').html();
	
	if (commentsHtml == null) {
		$("<div id='comments' class='comment_wrapper' style='display:none;'></div>").insertAfter("#new-comment-area");
		$('#view_comments').show();
		toggleComments();
		
	}
	
	
	var jsonObj = {"comment":{'nid':nid, 'comment':comment, 'uid':uid}};
	
	var remoteproxy = new RemoteProxy();
		remoteproxy.remoteFunctionCall("comment.save", jsonObj, function(remotefunctionname, args, result, error){onSubmitPodcastComment(remotefunctionname, args, result, error);});
	

}


function onSubmitPodcastComment(remotefunctionname, args, result, error){
	
	$('.node-type-asset-video #comments .title').remove();
	var commentsHtml = $('.node-type-asset-video #comments').html();
	
	var newcomment = '<h2 class="title">Comments</h2><div class="comment first odd comment-by-viewer clearfix"><div class="submitted">';
  	newcomment += 'By <span id="thmr_130" class="thmr_call">'+user.firstname+" "+user.lastname+'</span>';
    var date = new Date();
	
  	newcomment += ' on '+dateFormat(date, "ddd, mm/dd/yyyy - h:MMtt")+'</div>';
    newcomment += '<div class="content"><p>'+args.comment.comment+'</p></div><span id="thmr_131" class="thmr_call"></span></div>';
  
	//console.log("new date="+$.datepicker.formatDate('yy-mm-dd', mydate));
	//console.log('commentsHtml='+commentsHtml);
	if(commentsHtml == null){
		//console.log('add div comments');

		
		
	}
	
	$('.node-type-asset-video #comments').html(newcomment+commentsHtml);
}






function showPodcast(url,isMostViewed){
	//console.log('media args = '+mediaLibraryArgs);
	//console.log('meetings = '+$('.views-exposed-widgets .form-item #edit-tid').val());
	
	var args;
	
	if(isMostViewed){
		args = 'tid_op=or&tid='+$('.views-exposed-widgets .form-item #edit-tid').val()+"&mostviewed=1";
	}
	else{
		args = 'tid_op=or&tid='+$('.views-exposed-widgets .form-item #edit-tid').val();
	}
	
	 
	args += '&tid_1_op=or&tid_1='+$('.views-exposed-widgets .form-item #edit-tid-1').val();
	args += '&tid_2_op='+$('.views-exposed-widgets .form-item #edit-tid-2-op').val()+'&tid_2=141';
	args += '&field_asset_search_value_op=contains&field_asset_search_value='+$('.views-exposed-widgets .form-item #edit-field-asset-search-value').val();
	
	window.location.href = url+'?'+args;
}

function showDisclaimer(url,mostViewed, disclaimerTxt, elementID){
	var curleft = curtop = 0;
	
	disclaimerURL = url;
	isMostViewed = mostViewed;
	
	if (elementID.offsetParent) {
	
		do {
			curleft += elementID.offsetLeft;
			curtop += elementID.offsetTop;
			
		}
		while (elementID = elementID.offsetParent);
		
		var xpos = curleft;
		var ypos = curtop;
		
	}
	
	$('#disclaimer-wrapper').show();
	
	//$('#disclaimer-text').html(disclaimerTxt);
	
	$('#disclaimer-text').html("Intended for European Practitioners Only; by clicking this link, you confirm that are a European Practitioner.");
	
	$('#disclaimer-box').css("left", xpos + "px");
	$('#disclaimer-box').css("top", ypos + "px");
}


function updateFilters(meetings,categories,audio,search){
	var delay = function(){doUpdateFilters(meetings,categories, audio);};
	//var timeout = setTimeout(delay,6000);
}

function doUpdateFilters(meetings,categories,audio,search){
	//console.log('updateFilters '+meetings+" - "+categories+" - "+audio+" dropdown="+$('.views-exposed-widgets .form-item #edit-tid'));
	$('.views-exposed-widgets .form-item #edit-tid').val(meetings);
	$('.views-exposed-widgets .form-item #edit-tid-1').val(categories);
	$('.views-exposed-widgets .form-item #edit-tid-2').val(audio);
	$('.views-exposed-widgets .form-item #edit-field-asset-search-value').val(search)
	
}


function filterVideo(){
	$('#video-tab').addClass('tab-active');
		$('#video-tab').removeClass('tab-inactive');
		$('#audio-tab').removeClass('tab-active');
		$('#audio-tab').addClass('tab-inactive');
	
	$('.views-exposed-widgets .form-item #edit-tid-2-op').val('not');
	$('.views-exposed-widgets .form-item #edit-tid-2').val('141');
	$('.views-exposed-widgets .form-submit').submit();
	//$('#edit-submit-sto-podcasts').click();
	
	videoTab = 'video';
}

function filterAudio(){
	$('#video-tab').addClass('tab-inactive');
		$('#audio-tab').addClass('tab-active');
		$('#audio-tab').removeClass('tab-inactive');
		$('#video-tab').removeClass('tab-active');
	
	$('.views-exposed-widgets .form-item #edit-tid-2-op').val('or');
	$('.views-exposed-widgets .form-item #edit-tid-2').val('141');
	
	if ($('.views-exposed-widgets .form-item #edit-created-value').val() != '') {
		$('.views-exposed-widgets .form-item #edit-created-value').val('-24 months');
	}
	
	$('.views-exposed-widgets .form-submit').submit();
	//window.location.href = "http://sto.ampserver.com/views/ajax?field_asset_search_value_op=contains&field_asset_search_value=&tid_op=or&tid=All&tid_1_op=or&tid_1=All&tid_2_op=or&tid_2=141&created_op=%3E%3D&created%5Bvalue%5D=&created%5Bmin%5D=&created%5Bmax%5D=&totalcount_op=%3E%3D&totalcount%5Bvalue%5D=&totalcount%5Bmin%5D=&totalcount%5Bmax%5D=&view_name=sto_podcasts&view_display_id=page_1&view_args=&view_path=medialibrary&view_base_path=medialibrary&view_dom_id=sto-podcasts-page-1-1&pager_element=0";
	videoTab = 'audio';
}

function setMediaTabs(){
	var timer = setTimeout('doSetMediaTabs()',100);
}

function doSetMediaTabs(){
	//console.log('setTabs '+$('.views-exposed-widgets .form-item #edit-tid-2').val());
	
	$('.views-exposed-form').show();
	
	if($('.views-exposed-widgets .form-item #edit-tid-2-op').val() == 'not'){
		$('#video-tab').addClass('tab-active');
		$('#video-tab').removeClass('tab-inactive');
		$('#audio-tab').removeClass('tab-active');
		$('#audio-tab').addClass('tab-inactive');
		videoTab = 'video';
	}
	else if($('.views-exposed-widgets .form-item #edit-tid-2-op').val() == 'or'){
		
		$('#video-tab').addClass('tab-inactive');
		$('#audio-tab').addClass('tab-active');
		$('#audio-tab').removeClass('tab-inactive');
		$('#video-tab').removeClass('tab-active');
		videoTab = 'audio';
	}
	if($('.views-exposed-widgets .form-item #edit-tid-2').val() == 'All'){
		$('#audio-tab').removeClass('tab-active');
		$('#audio-tab').addClass('tab-inactive');
		videoTab = '';
	}
	
}


function tabClick(id, vote){
	
	NativeBridge.call("trackIntraPageEvent", [id,{"vote":vote}], function(){});
	
	$("#"+activetab).removeClass("cc_tab_active");
	
	if(activetab != "tab2" && activetab != "tab3"){
		$("#"+activetab).addClass("cc_tab_inactive");
	}
	
	$("#"+activetab).removeClass("tabactive");
	$("#"+activetab).addClass("tabinactive");
				
	activetab = id;
	
	
	$("#"+activetab).removeClass("cc_tab_inactive");
	$("#"+activetab).addClass("cc_tab_active");
	$("#"+activetab).addClass("tabactive");
	$("#"+activetab).removeClass("tabinactive");
				
	if(uservote == "n/a"){
		uservote = vote;	
	}
	
	loadCCSection();	
}



function setFocus(id){
	
	 $("#"+id).focus();
}


function submitClicked(nid, elementId){
	//console.log(elementId.offsetLeft);
	
	
	
	if(user.uid != 0){
	
		if(document.myform.new_comment.value != ''){
			submitComment(nid, document.myform.new_comment.value, uservote);
		
			document.myform.new_comment.value = "";
			$("#cc_new_comment").blur();
		}
		
	}
	 
	else{
		showSignInCustom(elementId);
		
	}
	
}

function replyClicked(nid,cid,elementId){
	//console.log(user.uid);
		
	if(user.uid != 0){
		
		if($('#cc_new_reply_'+cid).attr("value") != ""){
			submitReply(nid, cid, $('#cc_new_reply_'+cid).attr("value"), uservote);
			
			
			$('#reply_'+cid).show();
			$('#field_'+cid).hide();
		}
	
	}
	
	else{
		//alert("You must be connected to the internet to submit your comment. Please connect via WIFI or 3G and try again.");
		showSignInCustom(elementId);
	}
}

function cancelClicked(nid,cid){
	$('#reply_'+cid).show();
	$('#field_'+cid).hide();
	$('#cc_new_reply_'+cid).val('');
	$('#cc_new_reply_'+cid).blur();
}


function voteClicked(nid, vote, uid, elementId){
	//console.log('uid='+uid);
	if(uid != 0){
			
		submitVote(nid, vote, uid);	
		$('.cc_kol_voting').show();
		$('.cc_vote_btn').hide();
		
		var color = "";
			
		if(vote){
			uservote = "Pro";
			color = "#ab613d";
		}
		else{
			uservote = "Con";
			color = "#33abb0";
		}
		
	
		
		$('.cc_row_voting_yourvote').html('You Voted: <font color="'+color+'"><b>'+uservote+'</b></font>');
		
	}
	
	else{
		showSignInCustom(elementId);
	}
}


function changeVoteClicked(nid, uid, elementId){
	
	if(uid != 0){
	
		
		changeVote(nid, uid);
		
		uservote = "";
		
		$('.cc_kol_voting').hide();
		$('.cc_vote_btn').show();
		
	}
	
	else{
		showSignInCustom(elementId);
	}
}



function setUserConnection(hasInternet){
	if(hasInternet){
		user.online = true;	
	}
	else{
		user.online = false;	
	}
}



function loadCCSection(){
	

	
	switch(activetab){
		case "tab1": 
			$("#"+activepage).hide();
			
			activepage = "cc_case";
			//console.log($("#"+activepage));
			$("#"+activepage).show();		
		break;
		
		case "tab2": 
			$("#"+activepage).hide();
			
			activepage = "cc_pro";
			//console.log($("#"+activepage));
			$("#"+activepage).show();		
		break;
		
		case "tab3": 
			$("#"+activepage).hide();
			
			activepage = "cc_con";
			//console.log($("#"+activepage));
			$("#"+activepage).show();		
		break;
		
		case "tab4": 
			$("#"+activepage).hide();
			
			activepage = "cc_discussion";
			//console.log($("#"+activepage));
			
			
			$("#"+activepage).show();		
		break;
	}
	
	//myScroll.refresh();
	
}





function reloadComments(result){
	
	//console.log("relaodComments : "+result[0].cid);
	
	$('.cc_comments').html(createComments(result, result[0].comments_nid));
	
	$('.cc_reply_btn').click(function(event){
	
		if(user.uid != 0){
		
			var cid = event.target.id;
			cid = cid.replace("reply_","");
			
			$('#reply_'+cid).hide();
			$('#field_'+cid).show();	
		}
		else{
			showSignIn(event);
		}
		
	});


	$("#cc_new_comment").click(function(event){setFocus(event.target.id);});
	$(".cc_new_reply").click(function(event){setFocus(event.target.id);});
}



function createComments(result,nid){
		
	var html = '';
		
	
	for(var i=0; i < result.length; i++){
		
		var comment = result[i];
		
		if(comment.comments_pid == 0){
		
			html+= '<div class="cc_comment_main" id="comment_'+comment.cid+'">';
			
			var vote = comment.comments_subject;
			var color = "";
			
			if(vote == ""){
				//vote = "N/A";
				color = "#000000";
			}
			else if(vote == "Pro"){
				color = "#33abb0";
			}
			else{
				color = "#ab613d";
			}
			
			
			html+= '<div class="cc_comment_container" style="border-color:'+color+';">';
			html+= '<div class="cc_comment_text">';
			
			if(color == '#000000')
				color = '#ffffff';
			
			html+= '<div class="cc_comment_yourvote" style="color:'+color+'">'+vote;
			html+= '</div>';
			
			html+= '<div>';
			html+= comment.comments_name+'<br><br>';
			html+= comment.comments_comment;
			html+= '</div>';
			
			
			
			html+= '</div>';
			
			
			
			html+= '</div>';
			
			
			
			html+= '<div class="cc_reply_bar">';
			html+= '<div id="reply_'+comment.cid+'" class="cc_reply_btn">';
			html+= '</div>';
			
			html+= '<div id="field_'+comment.cid+'" class="cc_reply_field" style="display:none">';
			html+= '<div>';
			html+= '<form id="form_'+comment.cid+'" name="replyform" action="javascript:replyClicked('+nid+','+comment.cid+')" method="post">';
			html+= '<textarea name="new_reply" class="cc_new_reply" id="cc_new_reply_'+comment.cid+'" rows="5" cols="30"></textarea>';
			
			html+= '</form>';
			html+= '</div>';
			html+= '<div class="cc_submit_reply" onclick="replyClicked('+nid+','+comment.cid+')"></div>';

			html+= '</div>';
			
			
			
			html+= '</div>';
			
			html+= '</div>';	
			
			html+= createReplies(result,comment.cid);
		}
	}
	
	return html;
		
}


function createReplies(result, cid){
	var html = "";
	
	//var resultrev = result.reverse();
	
	for(var i=0; i < result.length; i++){
		
		var comment = result[i];
		
		if(comment.comments_pid == cid){
			html+= '<div class="cc_comment_reply" id="comment_'+comment.cid+'">';
			
			var vote = comment.comments_subject;
			var color = "";
			
			if(vote == ""){
				//vote = "N/A";
				color = "#000000";
			}
			else if(vote == "Pro"){
				color = "#33abb0";
			}
			else{
				color = "#ab613d";
			}
			
			
			html+= '<div class="cc_comment_container" style="border-color:'+color+';">';
			html+= '<div class="cc_comment_text">';
			
			if(color == '#000000')
				color = '#ffffff';
			
			html+= '<div class="cc_comment_reply_yourvote" style="color:'+color+'">'+vote;
			html+= '</div>';
			
			html+= '<div>';
			html+= comment.comments_name+'<br><br>';
			html+= comment.comments_comment;
			html+= '</div>';
			
			html+= '</div>';	
			
			html+= '</div>';	
			html+= '</div>';	
		}
		
	}
	
	return html;
}



function submitComment(nid, comment, vote){
	//alert('user.firstname: '+user.firstname +" user.mail: "+user.mail);
	var jsonObj = {"comment":{'nid':nid, 'comment':comment, 'name':user.firstname+" "+user.lastname, 'mail':user.mail, 'subject':vote}};
	
	var remoteproxy = new RemoteProxy();
		remoteproxy.remoteFunctionCall("comment.save", jsonObj, function(remotefunctionname, args, result, error){onSubmitComment(remotefunctionname, args, result, error);});
	

}

function onSubmitComment(remotefunctionname, args, result, error){
	
	var args = [args.comment.nid];
	
	var remoteproxy = new RemoteProxy();
		remoteproxy.remoteFunctionCall("views.get", {"view_name":"cc_comments", "args":args}, function(remotefunctionname, args, result, error){onGetComments(remotefunctionname, args, result, error);});
}

function onGetComments(remotefunctionname, args, result, error){
	
	reloadComments(result);
	//myScroll.refresh();
}


function submitReply(nid, pid, comment, vote){
	
	var jsonObj = {"comment":{'nid':nid, 'pid':pid,'comment':comment, 'name':user.firstname+" "+user.lastname, 'mail':user.mail, 'subject':vote}};
	
	var remoteproxy = new RemoteProxy();
		remoteproxy.remoteFunctionCall("comment.save", jsonObj, function(remotefunctionname, args, result, error){onSubmitComment(remotefunctionname, args, result, error);});
	
}



function submitVote(nid, vote, uid){
	
	
	var jsonObj = {"content_id":nid,"vote":vote, "uid":uid};
	
	var remoteproxy = new RemoteProxy();
		remoteproxy.remoteFunctionCall("votingapi.setVote", jsonObj, function(remotefunctionname, args, result, error){onSubmitVote(remotefunctionname, args, result, error, nid);});
	
}


function onSubmitVote(remotefunctionname, args, result, error, nid){
		
	
	var args = [nid];
	
	var remoteproxy = new RemoteProxy();
		remoteproxy.remoteFunctionCall("views.get", {"view_name":"view_votingresults", "args":args}, function(remotefunctionname, args, result, error){onGetVotingResults(remotefunctionname, args, result, error, nid);});
		
}


function onGetVotingResults(remotefunctionname, args, result, error, nid){
	//console.log("voting results: "+result[0].nid);
	updateVoteChart(result[0].votingapi_cache_node_percent_vote_average_value , result[0].votingapi_cache_node_percent_vote_count_value);
}


function changeVote(nid, uid){
	
	
	var jsonObj = {"content_type":"node","content_id":nid, "uid":uid};
	
	var remoteproxy = new RemoteProxy();
		remoteproxy.remoteFunctionCall("votingapi.unsetVote", jsonObj, function(remotefunctionname, args, result, error){});
	
}


function updateVoteChart(percent, totalvotes){
	
	
	if(totalvotes == 0){
		totalvotes = 1;	
	}

	
	var pro_votes = percent/totalvotes;
	var con_votes = (1-pro_votes)/totalvotes;
	var pro_percent = percent;
	var con_percent = 1 - pro_percent;
	
		
	var bottom = 51;
	var height = 43;
	var pro_height = height*pro_percent;
	var con_height = height*con_percent;
	var pro_ypos = bottom - pro_height;
	var con_ypos = bottom - con_height;
	
	
	var html = '<div style="top:'+pro_ypos+'px; height:'+pro_height+'px" class="cc_row_bar_pro"></div>';
	html+= '<div style="top:'+con_ypos+'px; height:'+con_height+'px" class="cc_row_bar_con"></div>';
	
	html+= '<div class="cc_chart_line"></div>';
	
	html+= '<div class="cc_row_pro_percent">'+Math.round((pro_percent*100))+'%</div>';
	html+= '<div class="cc_row_con_percent">'+Math.round((con_percent*100))+'%</div>';
	
	$('.cc_row_voting_chart').html(html);
}


function createUser(uid, first, last, email){
	
	//console.log("createuser "+uid+" "+first+" "+last);
	
	user.uid = uid;
 	user.firstname = first;
	user.lastname = last;
 	user.title = "";
 	user.mail = email;
 	
}


function usermailCheck(loginField) {
  clearTimeout(Drupal.usermailCheckTimer);
  Drupal.usermailCheckusermail = loginField.val();
  
  $("#usermail-check-informer")
	        .removeClass('usermail-check-informer-accepted')
	        .removeClass('usermail-check-informer-rejected')
	        .addClass('usermail-check-informer-progress');
  
  if(Drupal.usermailCheckusermail != ""){
  
  	var filter=/^([\w-]+(?:\.[\w-]+)*)@((?:[\w-]+\.)*\w[\w-]{0,66})\.([a-z]{2,6}(?:\.[a-z]{2})?)$/i
  	if(!filter.test(Drupal.usermailCheckusermail)){
  		 $("#usermail-check-informer")
	          .removeClass('usermail-check-informer-progress')
	          .addClass('usermail-check-informer-rejected');
  		$("#usermail-check-message")
	          .addClass('usermail-check-message-rejected')
	          .html("Invalid Email address.")
	          .show();
  		
  		$(".listitem").addClass('inactive');
  		$(".listitemsubmit").addClass('inactive');
  		$(".listitem INPUT").attr('disabled', 'disabled');
  		$(".listitemsubmit INPUT").attr('disabled', 'disabled');
	  	$(".listitem SELECT").attr('disabled', 'disabled');
  		 
  		$(".listitem.listitemstandalone").removeClass('inactive');
  		$(".listitem.listitemstandalone INPUT").removeAttr('disabled');
  	}
   else{
  
	  $.ajax({
	    url: Drupal.settings.usermailCheck.ajaxUrl,
	    data: {usermail: Drupal.usermailCheckusermail},
	    dataType: 'json',
	    beforeSend: function() {
	      $("#usermail-check-informer")
	        .removeClass('usermail-check-informer-accepted')
	        .removeClass('usermail-check-informer-rejected')
	        .addClass('usermail-check-informer-progress');
	        
	        
	    },
	    success: function(ret){
	      if(ret['allowed']){
	        $("#usermail-check-informer")
	          .removeClass('usermail-check-informer-progress')
	          .addClass('usermail-check-informer-accepted');
	        
	        loginField
	          .removeClass('error');
	          
	         $(".listitem").removeClass('inactive');
	         $(".listitemsubmit").removeClass('inactive');
	         $(".listitem INPUT").removeAttr('disabled');
	         $(".listitem SELECT").removeAttr('disabled');
	       	 $(".listitemsubmit INPUT").removeAttr('disabled');
	      }
	      else {
	        $("#usermail-check-informer")
	          .removeClass('usermail-check-informer-progress')
	          .addClass('usermail-check-informer-rejected');
	        
	        $("BODY.not-logged-in #usermail-check-message")
	          .addClass('usermail-check-message-rejected')
	          .html("There's already an AlphaMed Press Account associated with this email address. Please <a href=\"/user/login?usermail="+escape(Drupal.usermailCheckusermail)+"\">Sign In</a> or, if you forgot your password, <a href=\"/user/password?usermail="+escape(Drupal.usermailCheckusermail)+"\">Reset Password</a> now.<br/><br/><div class=\"alphamed-logos\">AlphaMed Press Accounts</div><div class=\"sctm-logo\">SCTM App</div><div class=\"stemcells-logo\">Stem Cells HD</div>")
	          .show();
	        
	        $("BODY.logged-in #usermail-check-message")
	          .addClass('usermail-check-message-rejected')
	          .html("This email address is already registered for an AlphaMed Press Account.")
	          .show();
	          
	        $(".listitem").addClass('inactive');
	        $(".listitemsubmit").addClass('inactive');
	        $(".listitem INPUT").attr('disabled', 'disabled');
	        $(".listitemsubmit INPUT").attr('disabled', 'disabled');
	  	    $(".listitem SELECT").attr('disabled', 'disabled');
	        
	        $(".listitem.listitemstandalone").removeClass('inactive');
	        $(".listitem.listitemstandalone INPUT").removeAttr('disabled');
	      }
	    }
	   });
	  }
 	}
}


function showErrorMessage(message){
	
	$("#messages-block").html(message);
	$("#messages-block").show();
	
	window.scrollTo(0,1);
}

function showSignIn(e){

	$('#sign-in').show();
	
	$('#sign-in').css("left", e.pageX - ($('#sign-in').width() / 2) + "px");
	$('#sign-in').css("top", e.pageY + 10 + "px");
	
	//$('#sign-in').addClass('sign-in-top');
} 

function showSignInCustom(elementID){

	var curleft = curtop = 0;
	if (elementID.offsetParent) {
	
		do {
			curleft += elementID.offsetLeft;
			curtop += elementID.offsetTop;
			
		}
		while (elementID = elementID.offsetParent);
		
		var xpos = curleft;
		var ypos = curtop;
		
	}
			
	$('#sign-in').show();
	
	$('#sign-in').css("left", xpos + "px");
	$('#sign-in').css("top", ypos + "px");
	
	//$('#sign-in').addClass('sign-in-top');
} 

function hideSignIn(){
	$('#sign-in').hide();
}

function submitLogin(){
	var username = $('input[name$="firstname"]').val();
	var pass = $('input[name$="password"]').val();
	var jsonObj = {'username':username, 'password':pass};
	
	var remoteproxy = new RemoteProxy();
		remoteproxy.remoteFunctionCall("user.login", jsonObj, function(remotefunctionname, args, result, error){onSubmitLogin(remotefunctionname, args, result, error);});
	
}

function onSubmitLogin(remotefunctionname, args, result, error){
	//console.log('logged in');
	
	if (result != undefined) {
	
		if (result['#error']) {
			//console.log("ERROR: " + result['#message']);
		}
		else {
			location.reload();
		}
		
	}
	else {
			location.reload();
		}
	 
}

function headerRightClick(){
	
}


function doSearch(){
	//console.log('doSEarch');
	window.location.href = "/medialibrary?tid_2_op=or&tid_2=All&field_asset_search_value_op=contains&field_asset_search_value="+$('#header #search-bar input').val();
}

function toggleComments(){
	if(commentsActive){
		$('#view_comments p').html('VIEW COMMENTS');
		$('#comments').hide();
		commentsActive = false;
	}
	else{
		$('#view_comments p').html('HIDE COMMENTS');
		$('#comments').show();
		commentsActive = true;
	}
}


function audioClick(title,speaker,description,videoURL,audiopath,parentdiv){
	var deviceAgent = navigator.userAgent.toLowerCase();
	var iOS = deviceAgent.match(/(iphone|ipod|ipad)/);
	
	if(!iOS){
		showAudioPlayer(audiopath, title, speaker, description,parentdiv);
	}
	else{
		openAudioiPad(title,speaker,description, videoURL, parentdiv);
	}
}

function openAudioiPad(title,speaker,description,videoURL,parentdiv){
	var ypos = parentdiv.offsetTop;
	
	if(ypos > 2095-500){
		ypos = 2095-500;
	}
	
	document.getElementById('iPadVideoplayer').style.display = "block";
	var html = '<video width="640" height="360" controls="controls">';
		html += '<source src="'+videoURL+'" type="audio/mp3"/>';
	html += '</video>';
	document.getElementById('video-player').innerHTML = html;
	document.getElementById('video-area').style.marginTop = ypos+"px";
	document.getElementById('video-info').innerHTML = "<b>"+title+"</b><br><font size=1>"+speaker+"</font>";
}


function goToURL(url){
	window.location.href = url;
}

function showAudioPlayer(filepath, title, speaker, description,parentdiv){
	//alert("Show Audio Player : "+filepath+" , "+title+" , "+speaker);
	
	//console.log($(parentdiv.parentNode).width());

	var xpos = $(parentdiv.parentNode).width()/2 - $("#audioplayer").width()/2 + 10;
	var ypos = parentdiv.offsetTop+25;

	
	
	

	var audioplayer_html = '<object type="application/x-shockwave-flash" data="http://www.theoncologistcommunity.com/plugins/content/1pixelout/player.swf" id="audioplayer1" height="24" width="290">'; 
	audioplayer_html += '<param name="movie" value="http://www.theoncologistcommunity.com/plugins/content/1pixelout/player.swf" />'; 
	audioplayer_html += '<param name="FlashVars" value="bg=0xf8f8f8&amp;leftbg=0xeeeeee&amp;lefticon=0x666666&amp;rightbg=0xcccccc&amp;rightbghover=0x999999&amp;righticon=0x666666&amp;righticonhover=0xffffff&amp;text=0x666666&amp;slider=0x666666&amp;track=0xFFFFFF&amp;border=0x666666&amp;loader=0x9FFFB8&amp;loop=no&amp;playerID=1&amp;soundFile='+filepath+'" />';
	audioplayer_html += '<param name="quality" value="high" />';
	audioplayer_html += '<param name="menu" value="false" />';
	audioplayer_html += '<param name="wmode" value="transparent" /></object>';	
	
	

	$("#audio-player").html(audioplayer_html);
	$("#audio-title").html(title);
	$("#audio-speaker").html(speaker);
	$("#audio-description").html(description);

	
	$("#audioplayer").show();

	var myheight = $("#audio-description").height() + $("#audio-title").height() + $("#audio-player").height() + $("#audio-speaker").height() + 100;
	
	$("#audio-bg-image").css({"height":myheight+"px","width":"459px"});
	//$("#audioplayer").css({"left":xpos+"px","top":ypos+"px"});
}


















/*
 * Date Format 1.2.3
 * (c) 2007-2009 Steven Levithan <stevenlevithan.com>
 * MIT license
 *
 * Includes enhancements by Scott Trenda <scott.trenda.net>
 * and Kris Kowal <cixar.com/~kris.kowal/>
 *
 * Accepts a date, a mask, or a date and a mask.
 * Returns a formatted version of the given date.
 * The date defaults to the current date/time.
 * The mask defaults to dateFormat.masks.default.
 */

var dateFormat = function () {
	var	token = /d{1,4}|m{1,4}|yy(?:yy)?|([HhMsTt])\1?|[LloSZ]|"[^"]*"|'[^']*'/g,
		timezone = /\b(?:[PMCEA][SDP]T|(?:Pacific|Mountain|Central|Eastern|Atlantic) (?:Standard|Daylight|Prevailing) Time|(?:GMT|UTC)(?:[-+]\d{4})?)\b/g,
		timezoneClip = /[^-+\dA-Z]/g,
		pad = function (val, len) {
			val = String(val);
			len = len || 2;
			while (val.length < len) val = "0" + val;
			return val;
		};

	// Regexes and supporting functions are cached through closure
	return function (date, mask, utc) {
		var dF = dateFormat;

		// You can't provide utc if you skip other args (use the "UTC:" mask prefix)
		if (arguments.length == 1 && Object.prototype.toString.call(date) == "[object String]" && !/\d/.test(date)) {
			mask = date;
			date = undefined;
		}

		// Passing date through Date applies Date.parse, if necessary
		date = date ? new Date(date) : new Date;
		if (isNaN(date)) throw SyntaxError("invalid date");

		mask = String(dF.masks[mask] || mask || dF.masks["default"]);

		// Allow setting the utc argument via the mask
		if (mask.slice(0, 4) == "UTC:") {
			mask = mask.slice(4);
			utc = true;
		}

		var	_ = utc ? "getUTC" : "get",
			d = date[_ + "Date"](),
			D = date[_ + "Day"](),
			m = date[_ + "Month"](),
			y = date[_ + "FullYear"](),
			H = date[_ + "Hours"](),
			M = date[_ + "Minutes"](),
			s = date[_ + "Seconds"](),
			L = date[_ + "Milliseconds"](),
			o = utc ? 0 : date.getTimezoneOffset(),
			flags = {
				d:    d,
				dd:   pad(d),
				ddd:  dF.i18n.dayNames[D],
				dddd: dF.i18n.dayNames[D + 7],
				m:    m + 1,
				mm:   pad(m + 1),
				mmm:  dF.i18n.monthNames[m],
				mmmm: dF.i18n.monthNames[m + 12],
				yy:   String(y).slice(2),
				yyyy: y,
				h:    H % 12 || 12,
				hh:   pad(H % 12 || 12),
				H:    H,
				HH:   pad(H),
				M:    M,
				MM:   pad(M),
				s:    s,
				ss:   pad(s),
				l:    pad(L, 3),
				L:    pad(L > 99 ? Math.round(L / 10) : L),
				t:    H < 12 ? "a"  : "p",
				tt:   H < 12 ? "am" : "pm",
				T:    H < 12 ? "A"  : "P",
				TT:   H < 12 ? "AM" : "PM",
				Z:    utc ? "UTC" : (String(date).match(timezone) || [""]).pop().replace(timezoneClip, ""),
				o:    (o > 0 ? "-" : "+") + pad(Math.floor(Math.abs(o) / 60) * 100 + Math.abs(o) % 60, 4),
				S:    ["th", "st", "nd", "rd"][d % 10 > 3 ? 0 : (d % 100 - d % 10 != 10) * d % 10]
			};

		return mask.replace(token, function ($0) {
			return $0 in flags ? flags[$0] : $0.slice(1, $0.length - 1);
		});
	};
}();

// Some common format strings
dateFormat.masks = {
	"default":      "ddd mmm dd yyyy HH:MM:ss",
	shortDate:      "m/d/yy",
	mediumDate:     "mmm d, yyyy",
	longDate:       "mmmm d, yyyy",
	fullDate:       "dddd, mmmm d, yyyy",
	shortTime:      "h:MM TT",
	mediumTime:     "h:MM:ss TT",
	longTime:       "h:MM:ss TT Z",
	isoDate:        "yyyy-mm-dd",
	isoTime:        "HH:MM:ss",
	isoDateTime:    "yyyy-mm-dd'T'HH:MM:ss",
	isoUtcDateTime: "UTC:yyyy-mm-dd'T'HH:MM:ss'Z'"
};

// Internationalization strings
dateFormat.i18n = {
	dayNames: [
		"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat",
		"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
	],
	monthNames: [
		"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec",
		"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
	]
};

// For convenience...
Date.prototype.format = function (mask, utc) {
	return dateFormat(this, mask, utc);
};

})(jQuery, Drupal, this, this.document);