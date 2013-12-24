
<?php

print("<pre>");
print print_r($abstract = $row->_field_data["nid"]["entity"]->field_cc_abstract["und"][0]["value"]);
print("</pre>");
exit;

	$nid = $row->nid;
	$title = $row->node_title;
	$pro_image = $row->_field_data["nid"]["entity"]->field_cc_pro_kol_image["und"][0]["uri"];
	$pro_name = $row->_field_data["nid"]["entity"]->field_cc_pro_kol_name["und"][0]["value"];
	$con_image = $row->_field_data["nid"]["entity"]->field_cc_con_kol_image["und"][0]["uri"];
	$con_name = $row->_field_data["nid"]["entity"]->field_cc_con_kol_name["und"][0]["value"];
	$abstract = $row->_field_data["nid"]["entity"]->field_cc_abstract["und"][0]["value"];
	$vote_avg = $row->votingapi_cache_node_percent_vote_average_value;
	$vote_count = $row->votingapi_cache_node_percent_vote_count_value;
/*
	print 'nid = '.$nid;
	print $title;
	print $pro_image;
	print $pro_name;
	print $con_image;
	print $con_name;
	print $abstract ;
*/



print '<div id="cc_row_'.$nid.'" class="cc_row" >';


	print '<div class="cc_row_main" >';
		print '<div class="cc_row_title" >'.$title.'</div>';

		print '<div class="cc_row_pro" >';
			print '<div class="cc_row_thumb">';
				print '<div style="position:absolute">';
					print theme('imagecache', "challenging_cases_kol_image", $pro_image, "cc preview", "",  "");
				print '</div>'; //end img
				
				print '<div class="imageborder" id="thumb_'.$nid.'" style="position:absolute">';
					print '<img src="/sites/all/themes/stotheme/images/pro_border.png">';
				print '</div>'; //end img border

			print '</div>'; //end thumb

			print '<div class="cc_row_name" >'.$pro_name.'</div>';
		print '</div>'; //end pro

		print '<div class="cc_row_vs" >vs.</div>'; 

		print '<div class="cc_row_con" >';
			print '<div class="cc_row_thumb" id="thumb_'.$nid.'">';
				print '<div style="position:absolute">';
					print theme('imagecache', "challenging_cases_kol_image", $con_image, "cc preview", "",  "");
				print '</div>'; //end img
				print '<div class="imageborder" id="thumb_'.$nid.'" style="position:absolute">';
					print '<img src="/sites/all/themes/stotheme/images/con_border.png">';
				print '</div>'; //end img border

			print '</div>'; //end thumb
			print '<div class="cc_row_name" >'.$con_name.'</div>';
		print '</div>'; //end con



		print '<div class="cc_row_abstract" >'.$abstract.'</div>';


		print '<div style="clear:both;"></div>';

	print '</div>'; //end main

$pro_votes = $vote_avg/$vote_count;
$con_votes = (1-$pro_votes)/$vote_count;
$pro_percent = $vote_avg;
$con_percent = 1 - $pro_percent;

if($vote_count == 0){
	$con_percent = 0;	
}

$bottom = 51;
$height = 43;
$pro_height = $height*$pro_percent;
$con_height = $height*$con_percent;
$pro_ypos = $bottom - $pro_height;
$con_ypos = $bottom - $con_height;

user_load($user->uid);

$uid = $user->uid;
//$uid = 344;
	
$criteria = array('content_type' => 'node', 'content_id' => $row->nid, 'uid' => $uid);

//$user_criteria = votingapi_current_user_identifier();
//$user_votes = votingapi_select_votes($criteria);

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


	print '<div class="cc_row_voting" >';


if($vote != ""){
	
		print '<div class="cc_row_voting_main" >';
	
			print '<div class="cc_row_currentvotes">Current Votes</div>';
			print '<div class="cc_row_voting_chart" >';
	
	
				print '<div class="cc_chart_bars">';
					print '<div style="top:'.$pro_ypos.'px; height:'.$pro_height.'px" class="cc_row_bar_pro"></div>';
					print '<div style="top:'.$con_ypos.'px; height:'.$con_height.'px" class="cc_row_bar_con"></div>';
				print '</div>';
	
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
		print '<div id="'.$nid.'" class="cc_row_voting_viewcase">'.l('View Case',"node/".$nid).'</div>';
}

else{
	
	if($vote_count == "")
		$vote_count = 0;
	
		print '<div class="cc_row_voting_main" style="margin-top:20px">';
	
			print '<div class="cc_number_votes">'.$vote_count.' votes</div>';
			print '<div id="'.$nid.'" class="cc_row_voting_viewcase" style="top:38px">'.l('View Case',"node/".$nid).'</div>';
		print '</div>'; // end voting
}



//onClick="caseClick(self)

	print '</div>'; // end voting

print '</div>'; //end row


?>


<script type="text/javascript">

	/*function caseClick(obj){
		alert("clicked "+obj.id);
	}*/
	/*
	$(document).ready(function(){
      $(".cc_row_voting_viewcase").click(
          function(event){
            
            //alert(event.target.id);
			$.address.value("challenging_cases/"+event.target.id);
        }
      );
      
      $(".imageborder").click(
		function(event){
			var date = new Date();
			
			var parent = $(event.target).parent();            
            var id = parent.attr('id').split("_")[1];

			$.address.value("challenging_cases/"+id+"/?"+date.getTime());
		}
	);
    });
    */
    
<?php global $user;
	$uid = $user->uid;
	$first = $user->profile_first_name;
	$last = $user->profile_last_name;
	print 'createUser('.$uid.',"'.$first.'","'.$last.'")';

?>

</script>