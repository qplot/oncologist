(function ($, Drupal, window, document, undefined) {

	var activetab ="tab1";

	
	function vote(nid,vote){
		
		var object = {"votes":{"entity_id":nid,"value":vote}};
		
			$.ajax({
	         type: "POST",
	         url: "http://oncologistportal.local/rest/application/votingapi/set_votes",
	         data: JSON.stringify(object),
	         dataType: 'json',
	         contentType: 'application/json',
	         success: function ( data ) {}
	       	});
	}
	  
	 $(document).ready( function () {
	 	
	 	$("#cc_vote_pro").click(function(){
	 		vote(Drupal.settings.challengingcase.nid, 0);
	 		$(".cc_vote_btn").hide();
	 		$(".cc_kol_voting").show();
	 	});
	 	
	 	$("#cc_vote_con").click(function(){
	 		vote(Drupal.settings.challengingcase.nid, 1);
	 		$(".cc_vote_btn").hide();
	 		$(".cc_kol_voting").show();
	 	});
	 	
		if($('BODY.node-type-challenging-case').length > 0){
		
			$(".cc_tab").click(function(){
				
				activetab = $(this).attr("id");
				
				//alert(activetab);
				
				$(".cc_page").hide();
				$("#cc_page_"+activetab).show();
				
				//alert(activetab);
				
				if(activetab == "tab3"){
					$("#tab1").removeClass("cc_tab cc_tab_active tabactive");
					$("#tab1").addClass("cc_tab cc_tab_active tabinactive");
					$("#tab2").removeClass("cc_tab cc_tab_active tabactive");
					$("#tab2").addClass("cc_tab cc_tab_active tabinactive");
					$(this).addClass("cc_tab cc_tab_active tabactive");
				}
				
				if(activetab == "tab2"){
					$("#tab1").removeClass("cc_tab cc_tab_active tabactive");
					$("#tab1").addClass("cc_tab cc_tab_active tabinactive");
					$("#tab3").removeClass("cc_tab cc_tab_active tabactive");
					$("#tab3").addClass("cc_tab cc_tab_active tabinactive");
					$(this).addClass("cc_tab cc_tab_active tabactive");
				}
				
				if(activetab == "tab1"){
					$("#tab1").removeClass("cc_tab cc_tab_active tabinactive");
					$("#tab1").addClass("cc_tab cc_tab_active tabactive");
					$("#tab2").removeClass("cc_tab cc_tab_active tabactive");
					$("#tab2").addClass("cc_tab cc_tab_active tabinactive");
					$("#tab3").removeClass("cc_tab cc_tab_active tabactive");
					$("#tab3").addClass("cc_tab cc_tab_active tabinactive");
				}
			});
		}
		
		//Tthis should go to general	
		if($(".comment-reply A").length > 0){
			$(".comment-reply A").click(function(){
				$(this).hide();
			});
		}
		
		if($(".comment-form input[type=submit]").length > 0){
			$(".comment-form input[type=submit]").each(function(index) { $(this).mousedown(function(){
				$(".comment-reply A, .comment-add A").show();
				$(".comment.no-result").hide();
			});
		});
		}
			
		
		if($(".comment-add A").length > 0){
			$(".comment-add A").click(function(){
				$(this).hide();
					
				$(".comment-form").hide();
				$("#comments > .comment-form").show();
				
			});
		}
		
		
		
		
	});
	
	
	Drupal.behaviors.commenting = {
		attach: function (context, settings) {
		
			$(".indented .indented .indented .comment-reply A").hide();
		
		
			if($(".comment-cancel A").length > 0){
	  			$(".comment-cancel A").click(function(){	
					$(".comment-reply A, .comment-add A").show();
			
					$(".comment-form").hide();
			
					return false;
				});
			}
		}
	}




})(jQuery, Drupal, this, this.document);