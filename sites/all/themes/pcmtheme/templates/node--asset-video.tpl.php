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

	$lang = LANGUAGE_NONE;//$node->language;
	
	$remote_video = $node->field_video_remotevideo[$lang][0]['value'];
	
	if ($node->field_video_mp4video[$lang][0]["value"] === NULL){
		$mp4_video = $base_url."/".$node->field_video_rvideoupload[$lang][0]['filepath']; 
	}else{
		$mp4_video = $node->field_video_mp4video[$lang][0]["value"]; 
	}
	$thumbnail = $node->field_video_thumbimage[$lang][0]['filepath'];
	$title = $node->field_video_title[$lang][0]['value'];
	$speaker = $node->field_video_speaker[$lang][0]['value'];
	$xml_file = $node->field_asset_xml_file[$lang][0]['value'];
	$swf_file = $node->field_asset_swf_file[$lang][0]['value'];
	$bc_id = $node->field_bcexport[$lang][0]["video_id"];
	
	$uid = $user->uid;
	$first = $profile->field_user_firstname[$lang][0]['value'];
	$last = $profile->field_user_lastname[$lang][0]['value'];
	$email = $user->mail;
	
	//print $remote_video.','.$title.','.$speaker.','.$xml_file;
	
	$most_viewed = $_GET['mostviewed'];
	
	//$isiPad = (bool) strpos($_SERVER['HTTP_USER_AGENT'],'iPad');
	$isiPad = false;
	if(strpos($_SERVER['HTTP_USER_AGENT'],'iPad') || strpos($_SERVER['HTTP_USER_AGENT'],'iPhone') || strpos($_SERVER['HTTP_USER_AGENT'],'iPod')){
		$isiPad = true;
	}
	//print 'mostviewed = '.$most_viewed;
?>



<script type="text/javascript">
	//updateFilters(<?php //print '"'.$meetings.'","'.$categories.'","'.$audio.'"';?>);
</script>

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
  <param name="width" value="990" />
  <param name="height" value="525" />
  <param name="playerID" value="2210701528001" />
  <param name="playerKey" value="AQ~~,AAABygfs89k~,Glyk08Otwu3eRqbfnMOULWodrOQ1UHDL" />
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

<script type="text/javascript">
<?php 
		
		print 'createUser('.$uid.',"'.$first.'","'.$last.'","'.$email.'")';

	?>
</script>

