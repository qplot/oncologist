<?php
/**
 * @file
 * Theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: Node body or teaser depending on $teaser flag.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $display_submitted: whether submission information should be displayed.
 * - $submitted: Themed submission information output from
 *   theme_node_submitted().
 * - $links: Themed links like "Read more", "Add new comment", etc. output
 *   from theme_links().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 *   The following applies only to viewers who are registered users:
 *   - node-by-viewer: Node is authored by the user currently viewing the page.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $build_mode: Build mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $build_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * The following variable is deprecated and will be removed in Drupal 7:
 * - $picture: This variable has been renamed $user_picture in Drupal 7.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see zen_preprocess()
 * @see zen_preprocess_node()
 * @see zen_process()
 */


?>



<?php 
	//print "<pre>";
	//print print_r($node);
	//print "</pre>";
	global $base_url;
	$lang = $node->language;
	
	$title = $node->field_audio_title[$lang][0]['value'];
	$description = $node->field_audio_description[$lang][0]['value'];
	
	$profile = content_profile_load("profile", $user->uid);
	
	$uid = $user->uid;
	$first = $profile->field_user_firstname[$lang][0]['value'];
	$last = $profile->field_user_lastname[$lang][0]['value'];
	$email = $user->mail;
	
	//print $remote_video.','.$title.','.$speaker.','.$xml_file;
	
	$most_viewed = $_GET['mostviewed'];
	
	$isiPad = (bool) strpos($_SERVER['HTTP_USER_AGENT'],'iPad');
	//print 'mostviewed = '.$most_viewed;
?>
<script type="text/javascript">
	//updateFilters(<?php //print '"'.$meetings.'","'.$categories.'","'.$audio.'"';?>);
</script>

<?php if(false && !$isiPad):?>	
<!-- TODO: Maybe, add audio player here instead of popup in media library? -->

<?php else:
	$isremote = $node->field_audio_isremote[$lang][0]['value'];
	$remote_audio_value = $node->field_audio_remoteaudio[$lang][0]['value'];
	
	if($isremote == 1){
		$audiopath = $remote_audio_value;
	}
	else{
		$audiopath = $node->field_audio_localaudio[$lang][0]['value'];
	}
	
	
?>
	<div id="podcast-audio-player">
		<div id="audio-page-title"><?php print $title?></div>
		<video width='990' height='180' controls='controls'>
			<source src='<?php print $audiopath; ?>' type='audio/mp3'/>
		</video>
		<div id="audio-page-desc"><?php print $description?></div>
	</div>

<?php endif;?>




<div id="new-comment-area">

	<?php 
	//print 'node = '.$node->nid;
	
	$statistics = db_fetch_array(db_query('SELECT totalcount, daycount, timestamp FROM {node_counter} WHERE nid = %d', $nid));
	//print 'statistics = '.print_r($statistics);
	
?>

	<div id="number-of-comments"><?php print $comment_count." "; if($comment_count == 1) print "comment"; else print "comments";?></div>
	
	
	<div>
		<form action="form_action.asp" method="get" id="new-comment-form">
			<input type="text" id="new-comment-field" name="new-comment-field" /><br />
		</form>
	</div>
	<?php if($user->uid != 0):?>
	<div id="save-comment-btn" onclick="submitPodcastComment(<?php print $node->nid.', document.getElementById(\'new-comment-field\').value,'.$user->uid?>);">Save Comment</div>
	<?php else:?>
	<div id="signin-to-comment-btn" class="anon-user" onclick="showSignInCustom(this)">Sign in to comment</div>
	<?php endif;?>
	
	<div id="five-star-box">
		<?php
			if(function_exists('fivestar_widget_form')){
				print fivestar_widget_form($node);
			}
		?>
	</div>
<?php if($comment_count >0):?>
	<div id="view_comments"><p>View Comments</p></div>
<?php else:?>
	<div id="view_comments" style="display:none"><p>View Comments</p></div>
<?php endif;?>



<div id="share-box">
	<!-- AddThis Button BEGIN -->
	<div class="addthis_toolbox addthis_default_style ">
	<a class="addthis_button_facebook_like" fb:like:layout="button_count"></a>
	<a class="addthis_button_tweet"></a>
	<a class="addthis_button_google_plusone" g:plusone:size="medium"></a>
	<a class="addthis_button_email"></a>
	</div>
	<script type="text/javascript" src="http://s7.addthis.com/js/250/addthis_widget.js#pubid=xa-4f2f7af165ac1541"></script>
	<!-- AddThis Button END -->
	
</div>

</div>

<script type="text/javascript">
<?php 
		
		print 'createUser('.$uid.',"'.$first.'","'.$last.'","'.$email.'")';

	?>
</script>

