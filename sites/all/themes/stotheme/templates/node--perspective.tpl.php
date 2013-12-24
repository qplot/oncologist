<?php 
	
	global $user;
	
	//Load the users profile
	
	//print "PROFILE: ".print_r($profile,1);
	
	$uid = $user->uid;
	$first = $profile->field_user_firstname['und'][0]['value'];
	$last = $profile->field_user_lastname['und'][0]['value'];
	
	//print "PROFILE2: ". $first;
	//print_r($node);
	//exit;
	$nid = $node->nid;
	$title = $node->title;
	$author_image = $node->field_perspective_author_picture['und'][0]['uri'];
	$author = $node->field_perspective_author['und'][0]['value'];
	$abstract = $node->teaser;
	$fulltext = $node->field_perspective_fulltext['und'][0]['value'];
	$thumnail =  $node->field_perspective_mediathumbnail['und'][0]['uri'];
	$streaming = $node->field_perspective_murl_streamed['und'][0]['value'];
	$direct = $node->field_perspective_direct['und'][0]['value'];
	$isaudio = $node->field_perspective_isaudio['und'][0]['value'];
	$bc_id = $node->field_bcexport['und'][0]['video_id'];
	
	$article = isset($node->field_perspective_htmlfile['und'][0]['uri']) ? $node->field_perspective_htmlfile['und'][0]['uri'] : "";
	
	$page =  isset($_GET['page']) ? strtolower($_GET['page']) : "perspective";
	
	global $user;
	$uid = $user->uid;
	
	function stotheme_createComments($comments,$nid){
		
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
				$html.= '<form style="" id="form_'.$comment->cid.'" name="replyform" action="javascript:replyClicked('.$nid.','.$comment->cid.',this)" method="post">';
				$html.= '<textarea name="new_reply" class="cc_new_reply" id="cc_new_reply_'.$comment->cid.'" rows="5" cols="30"></textarea>';
				
				$html.= '</form>';
				$html.= '</div>';
				$html.= '<div class="cc_cancel_reply" onclick="cancelClicked('.$nid.','.$comment->cid.')"></div>';
				$html.= '<div class="cc_submit_reply" onclick="replyClicked('.$nid.','.$comment->cid.',this)"></div>';
				
				$html.= '</div>';
			
				
				
				$html.= '</div>';
				
				$html.= '</div>';	
				
				$html.= stotheme_createReplies($comments,$comment->cid);
			}
		}
		
		return $html;
		
	}
	
	
	
	function stotheme_createReplies($comments, $cid){
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
	
	<div id="share-box">
		<!-- AddThis Button BEGIN -->
		<div class="addthis_toolbox addthis_default_style ">
		<a class="addthis_button_facebook_like" fb:like:layout="button_count"></a>
		<a class="addthis_button_tweet"></a>
		<a class="addthis_button_google_plusone" g:plusone:size="medium"></a>
		<a class="addthis_button_email"></a>
		</div>
		<script type="text/javascript" src="<?php echo ($_SERVER["HTTPS"] == "on") ? "https" : "http" ?>://s7.addthis.com/js/250/addthis_widget.js#pubid=xa-4f2f7af165ac1541"></script>
		<!-- AddThis Button END -->
	
	</div>

		
	     <div id="tabs" class="cc_tabs">
					
					<div class="cc_tab buttons"><a <?php print $page == "perspective" ? "class=\"selected\"" : "";?>  id="perspective_btn">Perspective</a></div>
					
					<?php
						if($article != ""):
					?>
					<div class="cc_tab buttons"><a <?php print $page == "article" ? "class=\"selected\"" : "";?>  id="article_btn">Article</a></div>
					<?php		
						endif;
					?>
					
					
		</div>

			<div class="eup_panels" id="perspective" <?php print $page != "perspective" ? "style=\"display: none;\"" : "";?>>
				
				<div class="eup_panel_intro">
					<div class="perspective_row_title" ><?php print $title;?></div>

					<?php //print theme('imagecache', "perspective_square_100x100", $author_image, "perspecitve author", "",  "");?>

					<div class="perspective_row_author" ><?php print $author;?></div>
			
		</div><!-- END Top Content -->

<?php if(!empty($bc_id)):?>

<!-- Start of Brightcove Player -->

<div style="display:none">

</div>

<!--
By use of this code snippet, I agree to the Brightcove Publisher T and C 
found at https://accounts.brightcove.com/en/terms-and-conditions/. 
-->

<script language="JavaScript" type="text/javascript" src="https://sadmin.brightcove.com/js/BrightcoveExperiences.js"></script>

<object id="myExperience<?php print $bc_id?>" class="BrightcoveExperience">
  <param name="bgcolor" value="#FFFFFF" />
  <param name="width" value="600" />
  <param name="height" value="338" />
  <param name="playerID" value="2190915195001" />
  <param name="playerKey" value="AQ~~,AAABygfs89k~,Glyk08Otwu2SPoqIbyqx6Gbru5IsPW3p" />
  <param name="isVid" value="true" />
  <param name="isUI" value="true" />
  <param name="dynamicStreaming" value="true" />
  <param name="@videoPlayer" value="<?php print $bc_id?>" />
  <param name="secureConnections" value="true" /> 
  <!-- smart player api params -->
  <param name="includeAPI" value="true" />
  <param name="templateLoadHandler" value="BCL.onTemplateLoad" />
  <param name="templateReadyHandler" value="BCL.onTemplateReady" /> 
</object>

<!-- 
This script tag will cause the Brightcove Players defined above it to be created as soon
as the line is read by the browser. If you wish to have the player instantiated only after
the rest of the HTML is processed and the page load is complete, remove the line.
-->
<script type="text/javascript">brightcove.createExperiences();</script>

<!-- End of Brightcove Player -->

<?php else:?>

				<?php
					$isiPad = (bool) strpos($_SERVER['HTTP_USER_AGENT'],'iPad');
					if($isiPad):
				?>
					<video width="600" height="338" class="perspective_row_video" poster="/<?php print imagecache_create_path("zoom",$thumnail); ?>" controls="controls">
						<source src="<?php print $streaming; ?>"></source>
					</video>
				<?php else:?>
				
				
				<script type="text/javascript">
	var flashvars = {};
	flashvars.title1 = "<?php //print  urlencode(check_plain(strip_tags($title))); ?>";
	flashvars.title2 = "<?php //print  urlencode(check_plain($author)); ?>";
  
  flashvars.share = 0;
  flashvars.rating = 0;
	
	flashvars.pictureurl 	= "<?php print file_create_url($thumnail);?>";
	flashvars.videourl 		= "<?php print $direct?>";
	flashvars.comment 		= 0 ;
	flashvars.expert 		= 0 ;	

	
	flashvars.videoheight 	= 338;	
	flashvars.videowidth 	= 600;	

  flashvars.previousrating = 0;
	
	var params = {};
	params.menu = "false";
	params.quality = "high";
	params.allowfullscreen = "true";
	params.allowscriptaccess = "always";
	params.bgcolor = "#000000";
	params.scale = "showall";
	params.salign = "tl";
	params.menu = false;

	var attributes = {};
	attributes.id = "videoplayer";
	swfobject.embedSWF("<?php echo(url(drupal_get_path('theme', 'stotheme')."/flash/videoplayer/videoplayer_as3.swf")); ?>", "media_player", "100%", "100%", "8", "<?php echo(url(drupal_get_path('theme', 'stotheme')."/files/js/swfobject/expressInstall.swf")); ?>", flashvars, params, attributes);
</script>
<div id="flashvideoplayer" style="width:600px; height:338px;">
<div id="media_player">
	<!--
	<div>
		<a href="http://www.adobe.com/go/getflashplayer">
			<img src="http://www.adobe.com/images/shared/download_buttons/get_flash_player.gif" alt="Get Adobe Flash player" />
		</a>
	</div>
	-->
</div>
</div>	
					
				<?php endif; ?>
				<?php endif; ?>
				
				<div class="perspective_row_title" ><?php print $title; ?></div>
				<div class="perspective_row_fulltext" ><?php print $fulltext; ?></div>
				
			</div>
			
			<div class="eup_panels" id="article" <?php print $page != "article" ? "style=\"display: none;\"" : "";?>>
				<?php 
					$file_article = file_get_contents($article);
					print str_replace("SRC=\"", 'SRC="/sites/default/files/uploads/perspective/'.$node->nid.'/', str_replace("src=\"", 'src="/sites/default/files/uploads/perspective/'.$node->nid.'/', $file_article));
				?>
			</div>
			
			

</div>