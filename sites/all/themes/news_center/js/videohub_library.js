(function ($, Drupal, window, document, undefined) { 
	Drupal.behaviors.VideoHub = {
		
		attach: function (context, settings) {
			   
		   if($("#videohub-meeting1, #videohub-meeting2, #videohub-meeting3, #videohub-meeting4, #videohub-meeting5").length >0 ){
			   
			   $("#videohub-meeting1, #videohub-meeting2, #videohub-meeting3, #videohub-meeting4, #videohub-meeting5").royalSlider({
						preloadNearbyImages:true,               // Preloads two nearby images, if they have lazy loading enabled
						imageScaleMode:"fit",                  // Scale mode of all images. Can be "fill", "fit" or "none"
						imageAlignCenter:false,                 // Aligns all images to slide center
						keyboardNavEnabled:true,               // Keyboard arrows navigation
						directionNavEnabled: false,  
						captionAnimationEnabled: true,          // Set to false if you want to remove all animations from captions  
						captionShowSpeed:800,                   // Default caption show speed in ms
						captionShowEasing:"easeOutCubic",
						slideshowEnabled: false,                // Autoslideshow enabled          
						slideshowDelay:5000,                    // Delay between slides in slideshow
						slideshowPauseOnHover: true,            // Pause slideshow on hover
						slideshowAutoStart:false,                // Auto start slideshow 
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
		
		}	
		
	};

})(jQuery, Drupal, this, this.document);