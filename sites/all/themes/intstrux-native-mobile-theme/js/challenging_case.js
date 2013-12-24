(function ($, Drupal, window, document, undefined) {

	var activetab ="tab1";
	var ccuser_vote;
    var comments = [];
    var comment_count = 0;
	
	function getComments(nid){

		var object = {};
			$.ajax({
				type: "GET",
				url: "/rest/application/node/"+Drupal.settings.challengingcase.nid+"/comments",
				data: JSON.stringify(object),
				dataType: 'json',
				contentType: 'application/json',
				success: function(data){

					var arr = [];

					comments.length = 0;

					for( var name in data ) {
					    arr[name] = data[name];
					}
					var len = arr.length;

					while(len--) {

					    if( arr[len] !== undefined ) {
					        comments.push(arr[len]);
					    }
					}

					renderComments();
				} 
			});
	}

	function addComment(nid, uid, pid, subject, body){

		var object = {"nid":nid, "pid":pid ,"subject":(ccuser_vote =="" ? "Undecided" : (ccuser_vote == 1 ? "Pro" : "Con")), "comment_body":{"und":{"0":{"value":body}}}, "mail":"support@intstrux.com"};
			$.ajax({
				type: "POST",
				url: "/rest/application/comment",
				data: JSON.stringify(object),
				dataType: 'json',
				contentType: 'application/json',
				success: function ( data ) {
					//alert("addComment");
					//console.log(data);
					getComments(Drupal.settings.challengingcase.nid);

				}
			});
	}

	function vote(nid,uid,vote){

		var object = {"votes":{"entity_id":nid,"value":vote,"uid":uid}};

			$.ajax({
				type: "POST",
				url: "/rest/application/votingapi/set_votes",
				data: JSON.stringify(object),
				dataType: 'json',
				contentType: 'application/json',
				success: function ( data ) {

					getVoteResult(nid);
					getVoteResultForUser(nid,uid);
				}
			});
	}


	function getVoteResult(nid){

		var object = {"type":"results", "single":"0", "criteria":{"entity_id":nid}};

			$.ajax({
				type: "POST",
				url: "/rest/application/votingapi/select_votes",
				data: JSON.stringify(object),
				dataType: 'json',
				contentType: 'application/json',
				success: function ( data ) {
					
					if(data[0]["function"] == "average"){
						//console.log(data[0]["value"]);
						renderVotingResults(data[0]["value"], data[1]["value"]);
					}else if(data[0]["function"] == "count"){
						//console.log(data[1]["value"]);
						renderVotingResults(data[1]["value"], data[0]["value"]);
					}
				}
			});
	}

	function getVoteResultForUser(nid,uid){

		var object = {"type":"votes", "single":"0", "criteria":{"entity_type":"node", "entity_id":nid, "uid":uid}};

			$.ajax({
				type: "POST",
				url: "/rest/application/votingapi/select_votes",
				data: JSON.stringify(object),
				dataType: 'json',
				contentType: 'application/json',
				success: function ( data ) {
					//alert("ongetVoteResultForUser");
					//console.log(data);
					
					if(Drupal.settings.application.uid >= 1){

						if(typeof data[0] != "undefined" &&  (data[0].value == 0 || data[0].value == 1)){

								ccuser_vote = data[0].value;
								getVoteResult(Drupal.settings.challengingcase.nid);
						}else{

							$(".cc_header_con .votingarea").html('<div class="cc_vote_btn" id="cc_vote_con">I Agree With Con');
							$(".cc_header_pro .votingarea").html('<div class="cc_vote_btn" id="cc_vote_pro">I Agree With Pro');

							refreshVotingButtons();
						}
					
					}else{

						$(".cc_header_con .votingarea").html('<div class="cc_vote_btn" id="cc_vote_con">I Agree With Con');
						$(".cc_header_pro .votingarea").html('<div class="cc_vote_btn" id="cc_vote_pro">I Agree With Pro');

						refreshVotingButtons();
					}

				}
			});
	}

	function renderComments(){

		var html = "";
		
		html += renderCommentsForPid(0, 0);

		$("#comments-inner").html(html);
	}

	function renderCommentsForPid(pid, level){

		var html = "";
		var index;

		for (index = 0; index < comments.length; ++index) {

			if(typeof comments[index].comment_body != "undefined"){
				
				if(pid == comments[index].pid){

					var body = comments[index].comment_body.und[0].safe_value;
					html += '<div id="comment-wrapper-'+comments.cid+'">'+
						'<div class="comment comment-by-viewer first odd clearfix">'+
		    		
		  
		  				'<div class="cc_comment_yourvote">'+
		    			'<font class=""><b></b></font>  </div>'+

		 				 '<div class="submitted author">'+comments[index].name+'</div>'+
		  				 '<div class="suject">'+comments[index].subject+'</div>'+
		  				  
		  				  
		  

		  				'<div class="content">'+
		    			'<div class="field field-name-comment-body field-type-text-long field-label-hidden"><div class="field-items"><div class="field-item even">'+body+
						'</div></div></div>      </div>'+

		  				//'<ul class="links inline"><li class="comment-delete first"><a href="/ajax_comments/delete/1536" class="use-ajax">delete</a></li>'+
						//'<li class="comment-edit"><a href="/ajax_comments/edit/1536" class="use-ajax">edit</a></li>'+
						//'<li class="comment-reply last"><a href="/ajax_comments/reply/51235/1536" class="use-ajax">reply</a></li></ul>'+
						'</div>';


//REPLY if needed at some point
/*<form class="comment-form" action="/ajax_comments/reply/51235/1543" method="post" id="comment-form" accept-charset="UTF-8"><div><div class="form-preface triangle"><div class="form-preface triangle-inner"></div></div><div class="author-form"><div id="edit-author--2" class="form-item form-type-item">
  <label for="edit-author--2">Your name </label>
 <a href="/users/admin" title="View user profile." class="username">admin</a>
</div>
</div><input type="hidden" name="form_build_id" value="form-B-Ql_3wwMelJOxkenoNXE564Pb4_hoqvVKG9J0qRVHE">
<input type="hidden" name="form_token" value="LpYY8resSrpeqCaWiQ1WndD4Aka9D0TPOoKrJ63-yXg">
<input type="hidden" name="form_id" value="comment_node_challenging_case_form">
<fieldset class="form-wrapper" id="edit-your-comment"><div class="fieldset-wrapper"><div class="field-type-text-long field-name-comment-body field-widget-text-textarea form-wrapper" id="edit-comment-body"><div id="comment-body-add-more-wrapper"><div class="text-format-wrapper"><div class="form-item form-type-textarea form-item-comment-body-und-0-value">
  <label for="edit-comment-body-und-0-value">Comment <span class="form-required" title="This field is required.">*</span></label>
 <div class="form-textarea-wrapper resizable"><textarea class="text-full ckeditor-mod form-textarea required" id="edit-comment-body-und-0-value" name="comment_body[und][0][value]" cols="60" rows="5"></textarea></div>
</div>
<a class="ckeditor_links" style="display:none" href="javascript:void(0);" onclick="javascript:Drupal.ckeditorToggle(['edit-comment-body-und-0-value'],'Switch to plain text editor','Switch to rich text editor');" id="switch_edit-comment-body-und-0-value">Switch to rich text editor</a><fieldset class="filter-wrapper form-wrapper" id="edit-comment-body-und-0-format"><div class="fieldset-wrapper"><div class="filter-help form-wrapper" id="edit-comment-body-und-0-format-help"><p><a href="/filter/tips" target="_blank">More information about text formats</a></p></div><div class="form-item form-type-select form-item-comment-body-und-0-format">
  <label for="edit-comment-body-und-0-format--2">Text format </label>
 <select class="filter-list form-select" id="edit-comment-body-und-0-format--2" name="comment_body[und][0][format]"><option value="2" selected="selected">Full HTML</option><option value="1">Filtered HTML</option><option value="3">PHP code</option><option value="ckeditor">CKEditor</option><option value="4">Plain text</option></select>
</div>
<div class="filter-guidelines form-wrapper" id="edit-comment-body-und-0-format-guidelines"><div class="filter-guidelines-item filter-guidelines-2"><h3>Full HTML</h3><ul class="tips"><li>Web page addresses and e-mail addresses turn into links automatically.</li><li>Lines and paragraphs break automatically.</li></ul></div><div class="filter-guidelines-item filter-guidelines-1"><h3>Filtered HTML</h3><ul class="tips"><li>Web page addresses and e-mail addresses turn into links automatically.</li><li>Allowed HTML tags: &lt;a&gt; &lt;em&gt; &lt;strong&gt; &lt;cite&gt; &lt;blockquote&gt; &lt;code&gt; &lt;ul&gt; &lt;ol&gt; &lt;li&gt; &lt;dl&gt; &lt;dt&gt; &lt;dd&gt;</li><li>Lines and paragraphs break automatically.</li></ul></div><div class="filter-guidelines-item filter-guidelines-3"><h3>PHP code</h3><ul class="tips"><li>You may post PHP code. You should include &lt;?php ?&gt; tags.</li></ul></div><div class="filter-guidelines-item filter-guidelines-ckeditor"><h3>CKEditor</h3><ul class="tips"><li>HTML tags will be transformed to conform to HTML standards.</li><li>Non-latin text (e.g., å, ö, 漢) will be converted to US-ASCII equivalents (a, o, ?).</li></ul></div><div class="filter-guidelines-item filter-guidelines-4"><h3>Plain text</h3><ul class="tips"><li>No HTML tags allowed.</li><li>Web page addresses and e-mail addresses turn into links automatically.</li><li>Lines and paragraphs break automatically.</li></ul></div></div></div></fieldset>
</div>
</div></div></div></fieldset>
<div class="form-actions form-wrapper" id="edit-actions"><input type="submit" id="edit-submit" name="op" value="Save" class="form-submit"><div class="comment-cancel"><a href="/">Cancel</a></div></div></div></form>
*/


					html += renderCommentsForPid(comments[index].cid, level +1);
					html += '</div>';
				}
			}
		}

		return html;

	}

	function renderVotingResults(average, count){

		pro_percent = average;
		con_percent = 1-average;

		html =  '<div class="cc_kol_voting" >'+
				'<div class="cc_row_voting_main" >'+
			    '<div class="cc_row_currentvotes">Current Votes <span class="total">['+count+']</span></div>'+
			    '<div class="cc_row_voting_chart" >'+
				'<div class="cc_row_voting_chart_inner" >'+
				'<div style="height:'+Math.round(pro_percent*100)+'%" class="cc_row_bar_pro"></div>'+
				'<div style="height:'+Math.round(con_percent*100)+'%" class="cc_row_bar_con"></div>'+
				'</div>'+ // end inner chart

				'<div class="cc_row_labels">'+
				'<div class="cc_pro_label">Pro</div>'+
				'<div class="cc_row_pro_percent">'+Math.round(pro_percent*100)+'%</div>'+
				'<div class="cc_con_label">Con</div>'+
				'<div class="cc_row_con_percent">'+Math.round(con_percent*100)+'%</div>'+
				'</div>'+

				'<div class="cc_chart_line"></div>'+

				'</div>'+ // end chart



				'</div>'+ // end main

				'<div class="cc_row_voting_yourvote" >You Voted: <font class=""><b>'+(ccuser_vote==1?"Pro" :"Con")+'</b></font></div>'+
				'<div class="cc_row_voting_changevote">Change vote to '+(ccuser_vote==0?"Pro" :"Con")+'</div>'+


				'</div>'; // end voting


		$(".cc_header_con .votingarea").html(html);
		$(".cc_header_pro .votingarea").html(html);

		$(".cc_row_voting_changevote").click(function(){changeVoteClicked(Drupal.settings.challengingcase.nid,Drupal.settings.application.uid)});

	}


	function changeVoteClicked(nid,uid){

		vote(Drupal.settings.challengingcase.nid,Drupal.settings.application.uid,ccuser_vote==1?0:1);

		html =  '<div class="cc_kol_voting" >'+
				'<div class="cc_row_voting_main" >'+
			    '<div class="cc_row_currentvotes">Current Votes</div>'+
			    '<div class="cc_row_voting_chart" >'+
				'<div class="cc_row_voting_chart_inner" >'+
				'<div style="height:'+Math.round(pro_percent*100)+'%" class="cc_row_bar_pro"></div>'+
				'<div style="height:'+Math.round(con_percent*100)+'%" class="cc_row_bar_con"></div>'+
				'</div>'+ // end inner chart

				'<div class="cc_row_labels">'+
				'<div class="cc_pro_label">Pro</div>'+
				'<div class="cc_row_pro_percent">'+Math.round(pro_percent*100)+'%</div>'+
				'<div class="cc_con_label">Con</div>'+
				'<div class="cc_row_con_percent">'+Math.round(con_percent*100)+'%</div>'+
				'</div>'+

				'<div class="cc_chart_line"></div>'+

				'</div>'+ // end chart



				'</div>'+ // end main

				'<div class="cc_row_voting_yourvote" >You Voted: <font class=""><b>'+(ccuser_vote==1?"Pro" :"Con")+'</b></font></div>'+
				'<div class="cc_row_voting_changevote">Change vote to '+(ccuser_vote==0?"Pro" :"Con")+'</div>'+


				'</div>'; // end voting


		$(".cc_header_con .votingarea").html(html);
		$(".cc_header_pro .votingarea").html(html);
	}


	/*function getreply(url){

		var object = {"js":1};



			$.ajax({
				type: "POST",
				url: url,
				data: object,
				dataType: 'json',
				contentType: 'application/x-www-form-urlencoded',
				success: function ( data ) {

					for(key in data){

						if(data[key].command == "invoke")
						{
							if(data[key].method == "remove"){

									$(data[key].selector).remove(data[key].data);

								}
						}

						if(data[key].command == "insert")
						{
								if(data[key].method == "prepend"){

									$(data[key].selector).prepend(data[key].data);

								}
								if(data[key].method == "after"){
									$(data[key].selector).after(data[key].data);

								}
								if(data[key].method == "replaceWith"){

									$(data[key].selector).replaceWith(data[key].data);

								}

						}

					}

					if($(".comment-form input[type=submit]").length > 0){
						$(".comment-form input[type=submit]").each(function(index) { $(this).mousedown(function(){
							$(".comment-reply A, .comment-add A").show();
							$(".comment.no-result").hide();
						});
					});
					}

					if($(".comment-reply A").length > 0){


						$(".comment-reply A").click(function(){
							$(this).hide();
							var replylink = $(this).attr('href');

							getreply(replylink);

							return false;
						});
					}


					if($(".comment-cancel A").length > 0){
				  		$(".comment-cancel A").click(function(){
							$(".comment-reply A, .comment-add A").show();

							$(".comment-form").hide();

							return false;
						});
					}

				}
			});

	}

	function addcomment(form_build_id, form_token, form_id, comment){

		var object = {"form_build_id":form_build_id,
					  "form_token":form_token,
					  "form_id": form_id,
					  "comment_body":{"und":{"0":{"value":comment}}},
					  "_triggering_element_name":"op",
					  "_triggering_element_value":"Save"
					 };



			$.ajax({
				type: "POST",
				url: "/system/ajax",
				data: object,
				dataType: 'json',
				contentType: 'application/x-www-form-urlencoded',
				success: function ( data ) {

					for(key in data){

						if(data[key].command == "insert")
						{
								if(data[key].method == "prepend"){

									$(data[key].selector).prepend(data[key].data);

								}
								if(data[key].method == "replaceWith"){

									$(data[key].selector).replaceWith(data[key].data);

								}

						}

					}

					if($(".comment-form input[type=submit]").length > 0){
						$(".comment-form input[type=submit]").each(function(index) { $(this).mousedown(function(){
							$(".comment-reply A, .comment-add A").show();
							$(".comment.no-result").hide();
						});
					});
					}

					if($(".comment-reply A").length > 0){


						$(".comment-reply A").click(function(){
							$(this).hide();
							var replylink = $(this).attr('href');

							getreply(replylink);

							return false;
						});
					}


					if($(".comment-cancel A").length > 0){
				  		$(".comment-cancel A").click(function(){
							$(".comment-reply A, .comment-add A").show();

							$(".comment-form").hide();

							return false;
						});
					}


				}
			});
	}*/


	function refreshVotingButtons(){
		$("#cc_vote_pro").click(function(){

			if(Drupal.settings.application.isConnected <= 0){
				alert("You are currently in offline mode. Please connect to the internet and try again");

			}
			else if(Drupal.settings.application.uid <= 1){

				var isiPad = (navigator.userAgent.match(/iPad/i) != null);
				var isSafari = navigator.userAgent.match(/Safari/i) != null;

				if(isiPad && !isSafari){
					nativeFunction('app://showLogin');
				}
				else{
					alert("WEB ONLY: You need to login");
				}

			}
			else{

				vote(Drupal.settings.challengingcase.nid,Drupal.settings.application.uid,1);
				$(".cc_vote_btn").hide();
				$(".cc_kol_voting").show();

			}

			return false;
		});

		$("#cc_vote_con").click(function(){
			if(Drupal.settings.application.isConnected <= 0){
				alert("You are currently in offline mode. Please connect to the internet and try again");

			}
			else if(Drupal.settings.application.uid <= 1){

				var isiPad = (navigator.userAgent.match(/iPad/i) != null);
				var isSafari = navigator.userAgent.match(/Safari/i) != null;

				if(isiPad && !isSafari){
					nativeFunction('app://showLogin');
				}
				else{
					alert("WEB ONLY: You need to login");
				}

			}
			else{

				vote(Drupal.settings.challengingcase.nid,Drupal.settings.application.uid,0);
				$(".cc_vote_btn").hide();
				$(".cc_kol_voting").show();
			}

			return false;

		 });
	}


	$(document).ready( function () {

		if($("BODY").hasClass("node-type-challenging-case")){	

		//get the voting results
		getVoteResultForUser(Drupal.settings.challengingcase.nid,Drupal.settings.application.uid);

		getComments(Drupal.settings.challengingcase.nid);









			$(".indented .indented .indented .comment-reply A").hide();


			if($(".comment-cancel A").length > 0){
		  		$(".comment-cancel A").click(function(){
					$(".comment-reply A, .comment-add A").show();

					$(".comment-form").hide();

					return false;
				});
			}

			$(".comment-form").hide();

			

			if($('BODY.node-type-challenging-case').length > 0){

				$(".cc_tab").click(function(){

					var isiPad = (navigator.userAgent.match(/iPad/i) != null);
					var isSafari = navigator.userAgent.match(/Safari/i) != null;

					$(".cc_tab").removeClass("active");
					$(".cc_tab").addClass("inactive");

					$(this).addClass("active");

					activetab = $(this).attr("id");

					//alert(activetab);

					$(".cc_page").hide();
					$("#cc_page_"+activetab).show();


			if(isiPad && !isSafari){
				nativeFunction('app://refreshScrollHeight');
			}


				});
			}



			if($(".comment-form input[type=submit]").length > 0){
				$(".comment-form input[type=submit]").each(function(index) { $(this).mousedown(function(){

					if(Drupal.settings.application.isConnected <= 0){
						alert("You are currently in offline mode. Please connect to the internet and try again");

					}
					else if(Drupal.settings.application.uid <= 1){

						var isiPad = (navigator.userAgent.match(/iPad/i) != null);
						var isSafari = navigator.userAgent.match(/Safari/i) != null;

						if(isiPad && !isSafari){
							nativeFunction('app://showLogin');
						}
						else{
							alert("WEB ONLY: You need to login");
						}

					}
					else{
						$(".comment-reply A, .comment-add A").show();
						$(".comment.no-result").hide();
					}

					return false;
				});
			});
			}

			if($(".comment-reply A").length > 0){


				$(".comment-reply A").click(function(){

					//alert(Drupal.settings.application.isConnected);

					if(Drupal.settings.application.isConnected <= 0){
						alert("You are currently in offline mode. Please connect to the internet and try again");
					}
					else if(Drupal.settings.application.uid <= 1){
						var isiPad = (navigator.userAgent.match(/iPad/i) != null);
						var isSafari = navigator.userAgent.match(/Safari/i) != null;

						if(isiPad && !isSafari){
							nativeFunction('app://showLogin');
						}
						else{
							alert("WEB ONLY: You need to login");
						}

					}
					else{
						$(this).hide();
						var replylink = $(this).attr('href');

						getreply(replylink);
					}
					return false;

				});
			}


			if($(".comment-add A").length > 0){
				$(".comment-add A").click(function(){

					if(Drupal.settings.application.isConnected <= 0){
						alert("You are currently in offline mode. Please connect to the internet and try again");
					}
					else if(Drupal.settings.application.uid <= 1){
						var isiPad = (navigator.userAgent.match(/iPad/i) != null);
						var isSafari = navigator.userAgent.match(/Safari/i) != null;

						if(isiPad && !isSafari){
							nativeFunction('app://showLogin');
						}
						else{
							alert("WEB ONLY: You need to login");
						}

					}
					else{

						$(this).hide();

						$(".comment-form").hide();
						$("#comments > .comment-form").show();

						$("#comments > .comment-form input[type=submit]").mousedown(function(){
							var comment = $("#comments > .comment-form .form-textarea").val();
							
								$("#comments > .comment-form").hide();
								$("#comments > .comment-form .form-textarea").val("");

								addComment(Drupal.settings.challengingcase.nid,Drupal.settings.application.uid, 0, "",  comment);
							//alert(form_build_id+" "+form_token+" "+form_id+" "+comment);
						});
					}
					return false;


				});
			
			}
		}



	});


	function getValuePro() {

		var pro = $(".cc_row_pro_percent").text();
	}



})(Zepto, Drupal, this, this.document);
