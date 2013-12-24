function initPerspective(){

	var videourl = Drupal.settings.perspective.bcid;
	var showtab = Drupal.settings.perspective.showtab;

	loadBCOverlayVideo(videourl,false,89,150,640,360,1);

	$('.perspective_article').hide();
	
	if(showtab==1){
		$('.perspective_article').show();
		$(".perspective_article_btn").removeClass("inactive");
		$('.bridge-content').hide();
		$('.perspective_video_btn').hide();
		$('.perspective_article_btn').css({"pointer-events":"none"});
		$('.perspective_page').hide();
	}else if(showtab==2){
		$('.perspective_article').hide();
		$('.perspective_article_btn').hide();
		$('.perspective_video_btn').css({"pointer-events":"none"});
	}

	$(".perspective_article_btn").click(function(){
		
		if($(this).hasClass("inactive")){

			stopOverlayVideo();
			$('.perspective_article.active').css({opacity:100});
			$('.perspective_article').show();
			$('.assetvideo_abstract').hide();
			$('.bridge-content').hide();
			$('.perspective_title').hide();
			$('.perspective_speaker').hide();
			$(".perspective_video_btn").addClass("inactive");
			$(".perspective_article_btn").removeClass("inactive");
		}
	});

	$(".perspective_video_btn").click(function(){
		
		if($(this).hasClass("inactive")){

			loadBCOverlayVideo(videourl,false,81,170,640,360,1);
			$('.bridge-content').show();
			$('.perspective_title').show();
			$('.perspective_speaker').show();
			$('.assetvideo_abstract').show();
			$('.perspective_article').hide();
			$(".perspective_video_btn").removeClass("inactive");
			$(".perspective_article_btn").addClass("inactive");
		}
	});
}
