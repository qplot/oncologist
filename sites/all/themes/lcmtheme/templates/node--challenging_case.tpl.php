<?php 

	$lang = $node->language;
	
	
	$uid = $user->uid;
	
	//Need to padd node ID to JS for voting api
	drupal_add_js(array('challengingcase' => array('nid' => $node->nid)), 'setting');	
	
	$case_html = $node->field_cc_html[$lang][0]['value'];
	$pro_image = isset($node->field_cc_pro_kol_image[$lang][0]['uri']) ? $node->field_cc_pro_kol_image[$lang][0]['uri'] : "";
	$con_image = isset($node->field_cc_con_kol_image[$lang][0]['uri']) ? $node->field_cc_con_kol_image[$lang][0]['uri'] : "";
	$pro_name = $node->field_cc_pro_kol_name[$lang][0]['value'];
	$con_name = $node->field_cc_con_kol_name[$lang][0]['value'];;
	$pro_affiliation = $node->field_cc_pro_kol_affiliation[$lang][0]['value'];
	$con_affiliation = $node->field_cc_con_kol_affiliation[$lang][0]['value'];
	$pro_html = $node->field_cc_pro_html[$lang][0]['value'];
	$con_html = $node->field_cc_con_html[$lang][0]['value'];
	$title = $node->title;
	
	
	
	//The voting business ------------------------------------------------
	$my_voting_view = views_get_view('view_votingresults');
	$my_voting_view->set_arguments(array($node->nid));
	$my_voting_view->pager["use_pager"] = false;
	$my_voting_view->pager["items_per_page"] = 0;
	$my_voting_view->build();
	$my_voting_view->execute();
	$voting_results = $my_voting_view->result;
	
	$vote_avg = $voting_results[0]->votingapi_cache_node_percent_vote_average_value;
	$vote_count = $voting_results[0]->votingapi_cache_node_percent_vote_count_value;
	
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
	
	$criteria = array('entity_type' => 'node', 'entity_id' => $node->nid, 'uid' => $uid);

    $user_criteria = votingapi_current_user_identifier();
    $user_votes = votingapi_select_votes($criteria + $user_criteria);

	$vote = "";
	$color = "";
	
	if(count($user_votes) != 0){
	
		if($user_votes[0]['value'] == 1){
			$vote = "Pro";	
			$color_class = "pro";
		}
		else{
			$vote = "Con";
			$color_class = "con";	
		}
	}

	//end of voting business
	
?>

<div class="challenging_case">

	<div class="cc_tabs">
		<div id="tab1" class="cc_tab cc_tab_active tabactive">The Case</div>
		
		<div id="tab2" class="cc_tab cc_tab_active tabinactive">
		<div class="cc_tab_image"><?php print theme('image_style', array('style_name' => 'challenging_cases_kol_tab_image', 'path' => $pro_image))?></div>
		<div class="cc_tab_text">Pro</div>
		</div>
		
		<div id="tab3" class="cc_tab cc_tab_active tabinactive">
		<div class="cc_tab_image"><?php print theme('image_style', array('style_name' => 'challenging_cases_kol_tab_image', 'path' => $con_image))?></div>
		<div class="cc_tab_text">Con</div>
		</div>
	</div>
			
	<!--<div id="tab4" class="cc_tab inactive">Discussion</div>
	</div>-->
	
	<div class="cc_page" id="cc_page_tab1"><?php print '<b>'.$title.'</b><br><br>'; echo $case_html; ?>	
	</div>
	
    <div class="cc_page" id="cc_page_tab2" style="display:none">
    	
        <div class="cc_header cc_header_pro">
        	<div class="cc_header_thumb"><?php print theme('image_style', array('style_name' => 'challenging_cases_kol_image', 'path' => $pro_image))?></div>
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
			
			print '<div style="height:'.round(($pro_percent*100)).'%" class="cc_row_pro">Pro: '.round(($pro_percent*100)).'%</div>';
			print '<div style="height:'.round(($con_percent*100)).'%" class="cc_row_con">Con: '.round(($con_percent*100)).'%</div>';
			
			print '</div>'; // end chart
			
			print '</div>'; // end main
			
			print '<div class="cc_row_voting_yourvote" >You Voted: <font class="'.$color_class.'"><b>'.$vote.'</b></font></div>';
			
			print '</div>'; // end voting
			
			if($vote == ""){
				print '<div class="cc_vote_btn" id="cc_vote_pro">I Agree With Pro';	
			}
			else{
				print '<div class="cc_vote_btn" style="display:none">I Agree With Pro';	
			}
			
			print '</div>';	
				
				
	
			
            ?>
            
        </div>
        
        <div class="cc_kol_body">
        	
        	<?php print '<b>'.$title.'</b><br><br>'; 
        	print $pro_html;?></div>
    
    </div>
	  
    <div class="cc_page" id="cc_page_tab3" style="display:none">
    
    	<div class="cc_header cc_header_con">
        	<div class="cc_header_thumb"><?php print theme('image_style', array('style_name' => 'challenging_cases_kol_image', 'path' => $con_image))?></div>
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
			
			print '<div style="height:'.round(($pro_percent*100)).'%" class="cc_row_pro">Pro: '.round(($pro_percent*100)).'%</div>';
			print '<div style="height:'.round(($con_percent*100)).'%" class="cc_row_con">Con: '.round(($con_percent*100)).'%</div>';
			
			print '</div>'; // end chart
			
			print '<div class="cc_row_voting_yourvote" >You Voted: <font class="'.$color_class.'"><b>'.$vote.'</b></font></div>';
			
			print '</div>'; // end voting
			
			print '</div>'; // end main
			
			if($vote == ""){
				print '<div class="cc_vote_btn" id="cc_vote_con">I Agree With Con';	
			}
			else{
				print '<div class="cc_vote_btn" style="display:none">I Agree With Con';	
			}
			
			print '</div>';	
				
				
	
			
            ?>

        </div>
        
        <div class="cc_kol_body"><?php print '<b>'.$title.'</b><br><br>'; print $con_html;?></div>
    
    </div>
    
    
	<div class="cc_page" id="cc_page_tab4" style="display:none">
		<div class="title">
			<?php print '<b>'.$title.'</b><br><br>'; ?>
		</div>
		<div class="comments">
			<div class="comment-header">
				<h2 class="title"><?php print t('Comments'); ?></h2>
			
				<?php if($comment_count > 0):?>
					<div class="comment-count">
							<span class="text">Comments: </span>
							<?php print $comment_count ;?>
						</div>
				<?php endif;?>
				
					
					
				<?php 
						
					
					if(!$uid)
						print render($content['links']['comment']);
					else{
				?>
						<div class="comment-add first last active">
							<a href="#comment-form" title="Share your thoughts and opinions related to this posting." class="active">Add new comment??</a>
						</div>
				
				
				<?php
							
					}
				?>
			</div>
			<div class="comment-section">
				<?php
					
					if($comment_count <= 0){
						print "<div id=\"comments\" class=\"comment-wrapper\"><div class='comment no-result'>Be the first to post a comment.</div></div>";
					}
					else
					{
						print render($content['comments']);
					}	
				?>
			</div>
	  	</div>
		
		
	</div>

</div>

