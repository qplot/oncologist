<?php 


	
	
	$my_content_view = views_get_view('cc_comments');	$my_content_view->set_arguments(array($row->nid));
	$my_content_view->pager["use_pager"] = false;
	$my_content_view->pager["items_per_page"] = 0;	$my_content_view->build();	$my_content_view->execute();
	$comments = $my_content_view->result;
	
	
	
	$case_html = $row->node_data_field_cc_con_kol_affiliation_field_cc_html_value;
	$pro_image = $row->files_node_data_field_cc_pro_kol_image_filepath;
	$con_image = $row->files_node_data_field_cc_con_kol_image_filepath;
	$pro_name = $row->node_data_field_cc_con_kol_affiliation_field_cc_pro_kol_name_value;
	$con_name = $row->node_data_field_cc_con_kol_affiliation_field_cc_con_kol_name_value;
	$pro_affiliation = $row->node_data_field_cc_con_kol_affiliation_field_cc_pro_kol_affiliation_value;
	$con_affiliation = $row->node_data_field_cc_con_kol_affiliation_field_cc_con_kol_affiliation_value;
	$pro_html = $row->node_data_field_cc_con_kol_affiliation_field_cc_pro_html_value;
	$con_html = $row->node_data_field_cc_con_kol_affiliation_field_cc_con_html_value;
	$title = $row->node_title;
	$vote_avg = $row->votingapi_cache_node_percent_vote_average_value;
	$vote_count = $row->votingapi_cache_node_percent_vote_count_value;
	
	if($vote_count == 0){
		$vote_count = 1;	
	}

	
	$pro_votes = $vote_avg/$vote_count;
	$con_votes = (1-$pro_votes)/$vote_count;
	$pro_percent = $vote_avg;
	$con_percent = 1 - $pro_percent;
	
		
	$bottom = 51;
	$height = 43;
	$pro_height = $height*$pro_percent;
	$con_height = $height*$con_percent;
	$pro_ypos = $bottom - $pro_height;
	$con_ypos = $bottom - $con_height;
	
	global $user;
	$uid = $user->uid;
		
	$criteria = array('content_type' => 'node', 'content_id' => $row->nid, 'uid' => $uid);

    $user_criteria = votingapi_current_user_identifier();
    $user_votes = votingapi_select_votes($criteria + $user_criteria);

    
	$vote = "";
	$color = "";


	if(count($user_votes) != 0){
	
		if($user_votes[0]['value'] == 1){
			$vote = "Pro";	
			$color = "#33abb0";
		}
		else{
			$vote = "Con";
			$color = "#ab613d";	
		}
	}
	

	print '<script type="text/javascript">var uservote = "'.$vote.'";</script>';
	
	function rootcandy_createComments($comments,$nid){
		
		$html = '';
			
		foreach($comments as $comment){
			
			if($comment->comments_pid == 0){
			
				$html.= '<div class="cc_comment_main" id="comment_'.$comment->cid.'">';
				
				$vote = $comment->comments_subject;
				
				if($vote == ""){
					//$vote = "N/A";
					$color = "#000000";
				}
				else if($vote == "Pro"){
					$color = "#33abb0";
				}
				else{
					$color = "#ab613d";
				}
				
				
				$html.= '<div class="cc_comment_container" style="border-color:'.$color.';">';
				$html.= '<div class="cc_comment_text">';
				
				if($color == '#000000')
					$color = '#ffffff';
				
				$html.= '<div class="cc_comment_yourvote" style="color:'.$color.'">'.$vote;
				$html.= '</div>';
				
				$html.= '<div>';
				$html.= $comment->comments_name.'<br><br>';
				$html.= rawurldecode($comment->comments_comment);
				$html.= '</div>';
				
				
				
				$html.= '</div>';
				
				
				
				$html.= '</div>';
				
				
				
				$html.= '<div class="cc_reply_bar">';
				$html.= '<div id="reply_'.$comment->cid.'" class="cc_reply_btn">';
				$html.= '</div>';
				
				$html.= '<div id="field_'.$comment->cid.'" class="cc_reply_field" style="display:none">';
				$html.= '<div>';
				$html.= '<form style="" id="form_'.$comment->cid.'" name="replyform" action="javascript:replyClicked('.$nid.','.$comment->cid.')" method="post">';
				$html.= '<textarea name="new_reply" class="cc_new_reply" id="cc_new_reply_'.$comment->cid.'" rows="5" cols="30"></textarea>';
				
				$html.= '</form>';
				$html.= '</div>';
				$html.= '<div class="cc_cancel_reply" onclick="cancelClicked('.$nid.','.$comment->cid.')"></div>';
				$html.= '<div class="cc_submit_reply" onclick="replyClicked('.$nid.','.$comment->cid.')"></div>';
				
				$html.= '</div>';
			
				
				
				$html.= '</div>';
				
				$html.= '</div>';	
				
				$html.= rootcandy_createReplies($comments,$comment->cid);
			}
		}
		
		return $html;
		
	}
	
	
	
	function rootcandy_createReplies($comments, $cid){
		$html = "";
		
		//$commentsrev = array_reverse($comments);
		
		foreach($comments as $comment){
			
			if($comment->comments_pid == $cid){
				$html.= '<div class="cc_comment_reply" id="comment_'.$comment->cid.'">';
				
				$vote = $comment->comments_subject;
				
				if($vote == ""){
					//$vote = "N/A";
					$color = "#000000";
				}
				else if($vote == "Pro"){
					$color = "#33abb0";
				}
				else{
					$color = "#ab613d";
				}
				
				
				$html.= '<div class="cc_comment_container" style="border-color:'.$color.';">';
				$html.= '<div class="cc_comment_text">';
				
				if($color == '#000000')
					$color = '#ffffff';
				
				$html.= '<div class="cc_comment_reply_yourvote" style="color:'.$color.'">'.$vote;
				$html.= '</div>';
				
				$html.= '<div>';
				$html.= $comment->comments_name.'<br><br>';
				$html.= rawurldecode($comment->comments_comment);
				$html.= '</div>';
				
				$html.= '</div>';	
				
				$html.= '</div>';	
				$html.= '</div>';	
			}
			
		}
		
		return $html;
	}

?>


<div class="challenging_case">

	<div class="cc_tabs">
		<div onclick="tabClick('tab1','<?php print $vote ?>')" class="cc_tab cc_tab_active tabactive" id="tab1">The Case</div>
		
		<div onclick="tabClick('tab2','<?php print $vote ?>')" class="cc_tab cc_tab_with_image tabinactive cc_tab_inactive_with_image" id="tab2">
		<div class="cc_tab_image"><?php print theme('imagecache', "challenging_cases_kol_tab_image", $pro_image, "cc preview", "",  "");?></div>
		<div class="cc_tab_text">Pro</div>
		</div>
		
		<div onclick="tabClick('tab3','<?php print $vote ?>')" class="cc_tab_with_image cc_tab_inactive_with_image tabinactive" id="tab3">
		<div class="cc_tab_image"><?php print theme('imagecache', "challenging_cases_kol_tab_image", $con_image, "cc preview", "",  "");?></div>
		<div class="cc_tab_text">Con</div>
		</div>
		
		
		<div onclick="tabClick('tab4','<?php print $vote ?>')" class="cc_tab cc_tab_inactive tabinactive" id="tab4">Discussion</div>
	</div>
	
	<div class="cc_page" id="cc_case"><?php print '<b>'.$title.'</b><br><br>'; echo $case_html; ?>
		
	</div>
	
    <div class="cc_page" id="cc_pro" style="display:none">
    	
        <div class="cc_header cc_header_pro">
        	<div class="cc_header_thumb"><?php print theme('imagecache', "challenging_cases_kol_image", $pro_image, "cc preview", "",  "");?></div>
            <div class="cc_kol_info">
               	<div class="cc_kol_name">By <?php print $pro_name; ?></div>
            	<div class="cc_kol_affiliation"><?php print $pro_affiliation; ?></div>
            </div>
            
            
			<?php
			
			if($vote != ""){
				print '<div class="cc_kol_voting" >';
			}
			else{
				print '<div class="cc_kol_voting" style="display:none" >';
			}
			
			print '<div class="cc_row_voting_main" >';
			print '<div class="cc_row_currentvotes">Current Votes</div>';
			print '<div class="cc_row_voting_chart" >';
			
			print '<div style="top:'.$pro_ypos.'px; height:'.$pro_height.'px" class="cc_row_bar_pro"></div>';
			print '<div style="top:'.$con_ypos.'px; height:'.$con_height.'px" class="cc_row_bar_con"></div>';
			
			print '<div class="cc_chart_line"></div>';
			
			print '<div class="cc_row_pro_percent">'.round(($pro_percent*100)).'%</div>';
			print '<div class="cc_row_con_percent">'.round(($con_percent*100)).'%</div>';
			
			print '</div>'; // end chart
			
			print '<div class="cc_row_labels">';
			print '<div class="cc_pro_label">Pro</div>';
			print '<div class="cc_con_label">Con</div>';
			print '</div>';
			
			print '</div>'; // end main
			
			print '<div class="cc_row_voting_yourvote" >You Voted: <font color="'.$color.'"><b>'.$vote.'</b></font></div>';
			print '<div class="cc_row_voting_changevote" onclick="changeVoteClicked('.$row->nid.','.$uid.')"></div>';
				
				
				//onClick="caseClick(self)
				
			print '</div>'; // end voting
			
			if($vote == ""){
				print '<div onclick="voteClicked('.$row->nid.', 1, '.$uid.')" class="cc_vote_btn" >I Agree With Pro';	
			}
			else{
				
				print '<div onclick="voteClicked('.$row->nid.', 1, '.$uid.')" class="cc_vote_btn" style="display:none">I Agree With Pro';	
			}
			
			print '</div>';	
				
				
			
			
            ?>
            
        </div>
        
        <div class="cc_kol_body"><?php print '<b>'.$title.'</b><br><br>'; print $pro_html;?></div>
    
    </div>
	
    
    <div class="cc_page" id="cc_con" style="display:none">
    
    	<div class="cc_header cc_header_con">
        	<div class="cc_header_thumb"><?php print theme('imagecache', "challenging_cases_kol_image", $con_image, "cc preview", "",  "");?></div>
            <div class="cc_kol_info">
            	<div class="cc_kol_name">By <?php print $con_name; ?></div>
            	<div class="cc_kol_affiliation"><?php print $con_affiliation; ?></div>
            </div>
            
            
            <?php
            
            if($vote != ""){
				print '<div class="cc_kol_voting" >';
			}
			else{
				print '<div class="cc_kol_voting" style="display:none" >';
			}
            
			
			print '<div class="cc_row_voting_main" >';
			print '<div class="cc_row_currentvotes">Current Votes</div>';
			print '<div class="cc_row_voting_chart" >';
			
			print '<div style="top:'.$pro_ypos.'px; height:'.$pro_height.'px" class="cc_row_bar_pro"></div>';
			print '<div style="top:'.$con_ypos.'px; height:'.$con_height.'px" class="cc_row_bar_con"></div>';
			
			print '<div class="cc_chart_line"></div>';
			
			print '<div class="cc_row_pro_percent">'.round(($pro_percent*100)).'%</div>';
			print '<div class="cc_row_con_percent">'.round(($con_percent*100)).'%</div>';
			
			print '</div>'; // end chart
			print '<div class="cc_row_labels">';
			print '<div class="cc_pro_label">Pro</div>';
			print '<div class="cc_con_label">Con</div>';
			print '</div>';
			print '</div>'; // end main
			
			print '<div class="cc_row_voting_yourvote" >You Voted: <font color="'.$color.'"><b>'.$vote.'</b></font></div>';
			print '<div class="cc_row_voting_changevote" onclick="changeVoteClicked('.$row->nid.','.$uid.')"></div>';
			
			
			//onClick="caseClick(self)
			
			print '</div>'; // end voting
		
            
            if($vote == ""){
            	print '<div onclick="voteClicked('.$row->nid.', 0, '.$uid.')" class="cc_vote_btn" >I Agree With Con';
            }
            else{
            	print '<div onclick="voteClicked('.$row->nid.', 0, '.$uid.')" class="cc_vote_btn" style="display:none">I Agree With Con';	
            }
            	
			print '</div>';	
            
            ?>

        </div>
        
        <div class="cc_kol_body"><?php print '<b>'.$title.'</b><br><br>'; print $con_html;?></div>
    
    </div>
    
    
	<div class="cc_page" id="cc_discussion" style="display:none">
		<div style="color:#ffffff">
			<?php print '<b>'.$title.'</b><br><br>'; ?>
		</div>
		<div>
			<!--<form action="javascript:setFocus()" method="post">			  <input type="textarea" rows=4 name="cc_new_comment" id="cc_new_comment" /><br />			  <input type="submit" id="cc_post_new" value="Post New Comment" />			</form>-->
			<form name="myform" action="javascript:submitClicked(<?php print $row->nid; ?>)" method="post">
				<textarea name="new_comment" id="cc_new_comment" rows="10" cols="30"></textarea>
			</form>
		</div>
		<div class="cc_post_new" onclick="submitClicked(<?php print $row->nid; ?>)">
			
		</div>
		
		<div class="cc_comments">
			<?php print rootcandy_createComments($comments,$row->nid); ?>
		</div>
		
	</div>

</div>






<script type="text/javascript">




$("#cc_new_comment").click(function(event){setFocus(event.target.id);});
$(".cc_new_reply").click(function(event){setFocus(event.target.id);});

function setFocus(id){
	
	 $("#"+id).focus();
}


function submitClicked(nid){
	
	if(user.online){
	
		if(document.myform.new_comment.value != ''){
			submitComment(nid, document.myform.new_comment.value, uservote);
		
			document.myform.new_comment.value = "";
			$("#cc_new_comment").blur();
		}
		
	}
	
	else{
		alert("You must be connected to the internet to submit your comment. Please connect via WIFI or 3G and try again.");
	}
	
}

function replyClicked(nid,cid){
		
	if(user.online){
		
		if($('#cc_new_reply_'+cid).attr("value") != ""){
			submitReply(nid, cid, $('#cc_new_reply_'+cid).attr("value"), uservote);
			
			
			$('#reply_'+cid).show();
			$('#field_'+cid).hide();
		}
	
	}
	
	else{
		alert("You must be connected to the internet to submit your comment. Please connect via WIFI or 3G and try again.");
	}
}

function cancelClicked(nid,cid){
	$('#reply_'+cid).show();
	$('#field_'+cid).hide();
	$('#cc_new_reply_'+cid).val('');
	$('#cc_new_reply_'+cid).blur();
}


function voteClicked(nid, vote, uid){
	
	if(user.online){
			
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
		alert("You must be connected to the internet to submit your vote. Please connect via WIFI or 3G and try again.");
	}
}


function changeVoteClicked(nid, uid){
	
	if(user.online){
	
		
		changeVote(nid, uid);
		
		uservote = "";
		
		$('.cc_kol_voting').hide();
		$('.cc_vote_btn').show();
		
	}
	
	else{
		alert("You must be connected to the internet to change your vote. Please connect via WIFI or 3G and try again.");
	}
}


if(activetab == undefined)
 var activetab = "tab1";

if(activepage == undefined) 
 var activepage = "cc_case";




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
	
	myScroll.refresh();
	
}




$('.cc_reply_btn').click(function(event){
	
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
	
	//console.log("relaodComments : "+result[0].cid);
	
	$('.cc_comments').html(createComments(result, result[0].comments_nid));
	
	$('.cc_reply_btn').click(function(event){
	
		var cid = event.target.id;
		cid = cid.replace("reply_","");
		
		$('#reply_'+cid).hide();
		$('#field_'+cid).show();	
		
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
			
			//var commentdecoded = decodeURIComponent(comment.comments_comment);
			
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
			html+= '<div class="cc_cancel_reply" onclick="cancelClicked('+nid+','+comment.cid+')"></div>';
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

<?php global $user;
	profile_load_profile($user);
	$uid = $user->uid;
	$first = $user->profile_first_name;
	$last = $user->profile_last_name;
	print 'createUser('.$uid.',"'.$first.'","'.$last.'")';

?>
</script>

