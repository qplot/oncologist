<?php
// $Id: views-view.tpl.php,v 1.13.2.2 2010/03/25 20:25:28 merlinofchaos Exp $
/**
 * @file views-view.tpl.php
 * Main view template
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 * - $admin_links: A rendered list of administrative links
 * - $admin_links_raw: A list of administrative links suitable for theme('links')
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">
  <?php if ($admin_links): ?>
    <div class="views-admin-links views-hide">
      <?php print $admin_links; ?>
    </div>
  <?php endif; ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

 <div class="video_sidebar">
 	<button id="video-tab" class="mytab tab-inactive">Video</button>
 	<button id="audio-tab" class="mytab tab-inactive">Audio</button>
 	
 <div id="seperator_line"></div>
 <div id="seperator_line2"></div>
 	
  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>
  </div>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content">
    

		<div id="results">
			<?php print $view->total_rows;
		    if($view->total_rows == 1){
				print ' result';
			}
			else 
				print ' results';
			?>
		</div>
    
      <?php print $rows; ?>
    </div>
  <?php else: ?>
    <div class="view-content">
	     <div id="podcasts-list">
	     
			<div id="title_bar">Media Library</div>
			<!-- 
			<ul id="media_library_button_wrapper">
				<li class="button">Featured Media</li>
				<li class="button">View as: Thumbnail | List </li>
				<li class="button"> Sort by: Most Recent | Alphabetical</li>
			</ul>
			 -->
			 <div id="podcasts-list-not-found"">No matching results found.</div>
			 
		</div>
	</div>
    
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div> <?php /* class view */ ?>

<script type="text/javascript">
		setMediaTabs();
</script>
