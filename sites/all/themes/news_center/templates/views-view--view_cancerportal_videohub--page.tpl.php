<div class="view-content">
	<?php
		$meeting = taxonomy_get_tree(5);
		$meeting_taxonomy = views_get_view_result('view_cancerportal_videohub_meetings_taxonomy');
		$category_taxonomy = views_get_view_result('view_cancerportal_videohub_category_taxonomy');

		$meeting_dropdown = module_invoke('intstrux_solr_support', 'block_view', 'video_asset_solr_meeting');
  		print $meeting_dropdown['content'];

  		$category_dropdown = module_invoke('intstrux_solr_support', 'block_view', 'video_asset_solr_category');
  		print $category_dropdown['content'];
		
		$search_block = module_invoke('intstrux_solr_support', 'block_view', 'video_asset_solr_search');
  		print $search_block['content'];
	?>

	<div id="videohub-meeting1" class="royalSlider minimal">
		<div class="meeting-title"> <?php print l(($meeting[1]->name),'taxonomy/term/' . $meeting[1]->tid, array('html' => TRUE)); ?> </div>
		<?php print views_embed_view('view_cancerportal_videohub','block_1');?> 
	</div>
	<div id="videohub-meeting2" class="royalSlider minimal">
		<div class="meeting-title"> <?php print l(($meeting[2]->name),'taxonomy/term/' . $meeting[2]->tid, array('html' => TRUE)); ?> </div>
		<?php print views_embed_view('view_cancerportal_videohub','block_2');?> 
	</div> 
	<div id="videohub-meeting3" class="royalSlider minimal">
		<div class="meeting-title"> <?php print l(($meeting[3]->name),'taxonomy/term/' . $meeting[3]->tid, array('html' => TRUE)); ?> </div>
		<?php print views_embed_view('view_cancerportal_videohub','block_3');?> 
	</div>
	<div id="videohub-meeting4" class="royalSlider minimal">
		<div class="meeting-title"> <?php print l(($meeting[4]->name),'taxonomy/term/' . $meeting[4]->tid, array('html' => TRUE)); ?> </div>
		<?php print views_embed_view('view_cancerportal_videohub','block_4');?> 
	</div> 
	<div id="videohub-meeting5" class="royalSlider minimal">
		<div class="meeting-title"> <?php print l(($meeting[5]->name),'taxonomy/term/' . $meeting[5]->tid, array('html' => TRUE)); ?> </div>
		<?php print views_embed_view('view_cancerportal_videohub','block_5');?> 
	</div>	            
</div>