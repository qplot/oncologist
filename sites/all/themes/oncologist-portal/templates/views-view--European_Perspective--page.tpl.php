<div class="view">
	<div class="ep">

	<?php 
	//$argument = $view->args[0];
	
	//List view?
	if (empty($argument)): 
		
	//@Jason: This is the header for the list view
	?>
    <div id="cc_title">
		<h2>European Perspectives</h2>	
	</div>
   
  <?php 
  else: 
  //@Jason: This is the header for the item view
  ?>  
  <div id="item">
   <div id="inside-header" class="view-header">
  
    </div>
  
    
  <?php endif; ?>
  
  
  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content">
      	<?php print $rows; ?>
    
      
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
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
</div>