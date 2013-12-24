

<?php

	//Enable for debugging
    //print print_r($row);

	//Cleanup the long View varibale names
	//print("<pre>");
	//print_r($row->_field_data[nid][entity]->field_perspective_htmlfile[und][0][uri]);
	//print("</pre>");
	//exit;
	$nid = $row->nid;
	$title = $row->node_title;
	$author_image = $row->_field_data["nid"]["entity"]->field_perspective_author_picture["und"][0]["uri"];
	$author = $row->_field_data["nid"]["entity"]->field_perspective_author["und"][0]["value"];
	$abstract = $row->_field_data["nid"]["entity"]->body["und"][0]["summary"];
	$fulltext = $row->_field_data["nid"]["entity"]->field_perspective_fulltext["und"][0]["value"];
	$thumnail = $row->_field_data["nid"]["entity"]->field_perspective_author_picture["und"][0]["uri"];
	$article = !empty($row->_field_data["nid"]["entity"]->field_perspective_htmlfile["und"][0]["uri"]) ? $row->_field_data["nid"]["entity"]->field_perspective_htmlfile["und"][0]["uri"] : "";
	
	

	//Check if we are rendering a list or just an item

	//Item -------------------------------------------------------------------------
	if(!empty($argument)):
		
		//print '<div class="btn-bckgrnd" id="btn-bckgrnd-2">';

		//print '<div id="btn-back" class="ep-button">';
		
			//print l(t("Back"), "view_european_perspective", array("attributes"=>array("onclick"=>"loadPerspective('')")));
		
		//print '</div>';

		//print '</div>'

	
		?>
		     <nav id="tabs">
					<div class="buttons"><a class="selected" id="perspective_btn" href="#perspective" onclick="return showtab('perspective');">Perspective</a></div>
					<div class="buttons"><a id="discussion_btn" href="#discussion" onclick="return showtab('discussion');">Discussion</a></div>
		</nav>

			<div class="eup_panels" id="perspective">
				
				<div class="eup_panel_intro">
					<div class="perspective_row_title" ><?php print $title;?></div>

					<?php //print theme('imagecache', "perspective_square_100x100", $author_image, "perspecitve author", "",  "");
					
						  print theme_image_style(array(
 					      'style_name' => 'perspective_square_100x100',
 				          'path' => $author_image,
  				          'alt' => $title,
  				          'attributes' => array('class' => 'perspecitve author"'),
				
					));
					?>
					
					<div class="perspective_row_author" ><?php print $author;?></div>
			
					<div class="perspective_row_abstract" ><?php print $abstract;?></div>
				</div><!-- END Top Content -->

				<video width="640" height="480" class="perspective_row_video" poster="/
				
				<?php 
				
				//print imagecache_create_path("zoom",$thumnail);
				print theme_image_style(array(
 				'style_name' => 'zoom',
 				'path' => $thumnail,
  				'alt' => $title,
				
				));
				
				?>
				" controls="controls">
				
					<source src="<?php print $streaming; ?>"></source>
				</video>
				
				<div class="perspective_row_title" ><?php print $title; ?></div>
				<div class="perspective_row_fulltext" ><?php print $fulltext; ?></div>
				
			</div>
			exit;
			<div class="eup_panels" id="discussion" style="display: none;">
			<div id="discussion-top">
				<?php
					//Load the comments
					$my_content_view = views_get_view('cc_comments');
					$my_content_view->set_arguments(array($nid));
					$my_content_view->pager["use_pager"] = false;
					$my_content_view->pager["items_per_page"] = 0;
					$my_content_view->build();
					$my_content_view->execute();
					$comments = $my_content_view->result;
				
					//Set some variables
					global $user;
					profile_load_profile($user);
					$uid = $user->uid;
					$first = $user->profile_first_name;
					$last = $user->profile_last_name;
					
					//Print the comments
				?>
				
				
					<div>
						<?php print '<b>'.$title.'</b><br><br>'; ?>
					</div>
					<div>
						<?php if($uid >0):?>
						<form name="myform" action="javascript:submitClicked(<?php print $row->nid; ?>, <?php print $uid; ?>)" method="post">
							<textarea name="new_comment" id="eu_new_comment" rows="10" cols="30"></textarea>
						</form>
						<?php endif;?>
					</div>
					<div class="eu_post_new" onclick="submitClicked(<?php print $row->nid; ?>, <?php print $uid; ?>)">
						
							Post New Comment
	
					</div>
				</div>
			
					<div class="eu_comments">
						<?php print onchdtheme_perspective_createComments($comments,$nid); ?>
					</div>
			</div>
		
		
		<?php
	//List -------------------------------------------------------------------------
	else:
		
		print '<div id="cc_row_'.$nid.'" class="cc_row" >';

		print '<div class="cc_row_main" >';
		print '<div class="cc_row_title" >'.$title.'</div>';
		

		//print theme('imagecache', "perspective_square_100x100", $author_image, "perspecitve author", "",  "");
		
		print theme_image_style(array(
 				'style_name' => 'perspective_square_100x100',
 				'path' => $author_image,
  				'alt' => $title,
  				'attributes' => array('class' => 'perspecitve author"'),
				
		));
		
		print '<div class="perspective_row_author" >'.$author.'</div>';
		
		print '<div class="perspective_row_abstract" >'.$abstract.'</div>';

		print '<div class="btn-bckgrnd" id="btn-bckgrnd-1">';

		if($article != ""):
			print '<div id="btn-article" class="ep-button">';

			print l(t("View Article"), "node/".$nid, array('query' => array('page' => "article")));
		
			print '</div>';
			
		endif;


		print '<div id="btn-persp" class="ep-button">';

		print l(t("View Perspective"), "node/".$nid);
		
		print '</div>';
		
		
		
		

		print '</div>';

		print '</div></div>'; //end main

	endif;

//--------------------------------------------------------------------
//JS FOR COMMENTING BELOW --- JUST KEEP DO NOT CHANGE OR DELETE
if(empty($argument)):
?>
<script type="text/javascript">

function loadPerspective(id){
	$.address.value("view_european_perspective/"+id);	
	
}

</script>
<?php


else:
?>
<script type="text/javascript">

var uid = <?php print $uid; ?>;


$("#eu_new_comment").click(function(event){setFocus(event.target.id);});
$(".eu_new_reply").click(function(event){setFocus(event.target.id);});

function setFocus(id){
	
	 $("#"+id).focus();
}


function submitClicked(nid, uid){
	var isiPad = (navigator.userAgent.match(/iPad/i) != null);
	var isSafari = navigator.userAgent.match(/Safari/i) != null;
	if(isSafari || user.online){
	
		//We need to check for anon users here uid==0
		if(uid ==0){
			
			
			if(isiPad && !isSafari){
				NativeBridge.call("loadNativeUserSettings", {});
				
			}
			else{
				alert("You must be logged in to comment.");

				
			}
		}
		else{
	
			if(document.myform.new_comment.value != ''){
				//submitComment(nid, document.myform.new_comment.value, uservote);
			
				document.myform.new_comment.value = "";
				$("#eu_new_comment").blur();
			}
		}
		
	}
	
	else{
		alert("You must be connected to the internet to submit your comment. Please connect via WIFI or 3G and try again.");
	}
	
}

function replyClicked(nid,cid,uid){
		
	if(user.online){
		
		//We need to check for anon users here uid==0
		if(uid ==0){
			var isiPad = (navigator.userAgent.match(/iPad/i) != null);
			var isSafari = navigator.userAgent.match(/Safari/i) != null;
			
			if(isiPad && !isSafari){
				NativeBridge.call("loadNativeUserSettings", {});
				
			}
			else{
				alert("You must be logged in to reply.");

				
			}
		}
		else{
		
			if($('#eu_new_reply_'+cid).attr("value") != ""){
				submitReply(nid, cid, $('#eu_new_reply_'+cid).attr("value"), uservote);
				
				
				$('#reply_'+cid).show();
				$('#field_'+cid).hide();
			}
		}
	
	}
	
	else{
		alert("You must be connected to the internet to submit your comment. Please connect via WIFI or 3G and try again.");
	}
}










$('.eu_reply_btn').click(function(event){
	
	if(user.online){
	
		var cid = event.target.id;
		cid = cid.replace("reply_","");
		
		$('#reply_'+cid).hide();
		$('#field_'+cid).show();	
	}
	else{
		alert("You must be connected to the internet to submit your comment. Please connect via WIFI or 3G and try again.");
	}
	
});


function reloadComments(result){
	
	console.log("relaodComments : "+result[0].cid);
	
	$('.eu_comments').html(createComments(result, result[0].comments_nid));
	
	$('.eu_reply_btn').click(function(event){
	
		var cid = event.target.id;
		cid = cid.replace("reply_","");
		
		$('#reply_'+cid).hide();
		$('#field_'+cid).show();	
		
	});


	$("#eu_new_comment").click(function(event){setFocus(event.target.id);});
	$(".eu_new_reply").click(function(event){setFocus(event.target.id);});
}



function createComments(result,nid){
		
	var html = '';
		
	
	for(var i=0; i < result.length; i++){
		
		var comment = result[i];
		
		if(comment.comments_pid == 0){
		
			html+= '<div class="eu_comment_main" id="comment_'+comment.cid+'">';
			
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
			
			
			html+= '<div class="eu_comment_container" style="border-color:'+color+';">';
			html+= '<div class="eu_comment_text">';
			
			if(color == '#000000')
				color = '#ffffff';
			
			html+= '<div class="eu_comment_yourvote" style="color:'+color+'">'+vote;
			html+= '</div>';
			
			html+= '<div>';
			html+= comment.comments_name+'<br><br>';
			
			//var commentdecoded = decodeURIComponent(comment.comments_comment);
			
			html+= comment.comments_comment;
			html+= '</div>';
			
			
			
			html+= '</div>';
			
			
			
			html+= '</div>';
			
			
			
			html+= '<div class="eu_reply_bar">';
			html+= '<div id="reply_'+comment.cid+'" class="eu_reply_btn">';
			html+= '</div>';
			
			html+= '<div id="field_'+comment.cid+'" class="eu_reply_field" style="display:none">';
			html+= '<div>';
			html+= '<form id="form_'+comment.cid+'" name="replyform" action="javascript:replyClicked('+nid+','+comment.cid+','+uid+')" method="post">';
			html+= '<textarea name="new_reply" class="eu_new_reply" id="eu_new_reply_'+comment.cid+'" rows="5" cols="30"></textarea>';
			
			html+= '</form>';
			html+= '</div>';
			html+= '<div class="eu_cancel_reply" onclick="cancelClicked('+nid+','+comment.cid+')"></div>';
			html+= '<div class="eu_submit_reply" onclick="replyClicked('+nid+','+comment.cid+','+uid+')"></div>';

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
			html+= '<div class="eu_comment_reply" id="comment_'+comment.cid+'">';
			
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
			
			
			html+= '<div class="eu_comment_container" style="border-color:'+color+';">';
			html+= '<div class="eu_comment_text">';
			
			if(color == '#000000')
				color = '#ffffff';
			
			html+= '<div class="eu_comment_reply_yourvote" style="color:'+color+'">'+vote;
			html+= '</div>';
			
			html+= '<div>';
			html+= comment.comments_name+'<br><br>';
			
			//var commentdecoded = decodeURIComponent(comment.comments_comment);
			
			html+= comment.comments_comment;
			html+= '</div>';
			
			html+= '</div>';	
			
			html+= '</div>';	
			html+= '</div>';	
		}
		
	}
	
	return html;
}


</script>


<?php
endif;	