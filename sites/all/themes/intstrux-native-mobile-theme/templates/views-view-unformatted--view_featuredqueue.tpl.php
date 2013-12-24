<?php

$link =  "/".$_GET[q]."/view_items_featuredqueue/";

foreach ($view->args as $key => $value) {

	$link .= $value ."/";
}

?>

<script language="JavaScript">

	var isiPad = (navigator.userAgent.match(/iPad/i) != null);
	var isSafari = navigator.userAgent.match(/Safari/i) != null;

	function loadPage(page){

		if(isiPad && !isSafari){
			nativeFunction('app://navigateTo/{"path":"<?php print $link;?>?page='+page+'"}');
		}
		else{
			window.location = "/"+page;
		}

	};

</script>

<?php

$page 	= isset($_GET['page']) ? $_GET['page'] : 0;


	//-------  EVEN --------------------------------------------
	//This is for every even page except page 0
	if($page==0):
?>

<div class="view-container view-container-firstpage menu-active">


	<div class="view-container-inner view-container-row">

		
		<div id="current-issue" class="view-item a">


	 		<?php ;
				$variables = array(
      				'path' => drupal_get_path('theme', 'intstrux_native_mobile_theme') .'/images/CurrentIssue.png', 
      			);

      			$amp_articles_alt_view = views_get_view_result('amp_articles_alt','page','all','Journal');
      			$menu_articles_view = views_get_view_result('menu_articles','page','The Oncologist','ZH','journal');
				$current_issue_month_highwire = $amp_articles_alt_view[0]->field_data_field_article_month_field_article_month_value;
				$current_issue_year_highwire = $amp_articles_alt_view[0]->field_data_field_article_year_int_field_article_year_int_val;

      			switch($view->args[0]){
					case "us_featured_queue":
	      				$latest_issue = "view_articles/Journal/".$current_issue_year_highwire."/".$current_issue_month_highwire;
	  					break;
	  				case "eu_featured_queue":
	  					$latest_issue = "view_articles/Journal/".$current_issue_year_highwire."/".$current_issue_month_highwire;
	  					break;
	  				case "zh_featured_queue":
	  					$latest_issue = "view_pagehtml/".$menu_articles_view[0]->tid;
						break;
				}

  				print l(theme('image', $variables), 'app://navigateTo/{"path":"'.$latest_issue.'"}',  array("html"=>true, 'attributes' => array('onclick' => 'nativeFunction(\'app://navigateTo/{"path":"'.$latest_issue.'"}\'); return false;')));

			?>

	 	</div>
	 	
	 	<?php if(!empty($rows[0])): ?>

	 	<div id class="view-item b">

	 		<?php print $rows[0]; ?>

	 	</div>
        <?php endif; ?>


	</div>

	<?php if(!empty($rows[1])): ?>

	<div class="view-container-inner view-container-row">

     	<div id class="view-item c">

	 		<?php print $rows[1]; ?>

	 	</div>


		<div id="asco-ad" class="view-item view-item-ad" style="border:none;">

			<?php;

				$variables = array(
	      		'path' => drupal_get_path('theme', 'intstrux_native_mobile_theme') .'/images/featured_lungcancer.png', 
	      		);

				switch($view->args[0]){
					case "us_featured_queue":
	      				print '<a href="/view_sections/3396" >';
	  					print theme('image', $variables);
	  					print '</a>';
	  					break;
	  				case "eu_featured_queue":
	      				print '<a href="/view_sections/3396" >';
	  					print theme('image', $variables);
	  					print '</a>';
	  					break;
	  				case "zh_featured_queue":
	  					print "<script type='text/javascript'>
						var googletag = googletag || {};
						googletag.cmd = googletag.cmd || [];
						(function() {
						var gads = document.createElement('script');
						gads.async = true;
						gads.type = 'text/javascript';
						var useSSL = 'https:' == document.location.protocol;
						gads.src = (useSSL ? 'https:' : 'http:') + 
						'//www.googletagservices.com/tag/js/gpt.js';
						var node = document.getElementsByTagName('script')[0];
						node.parentNode.insertBefore(gads, node);
						})();
						</script>

						<script type='text/javascript'>
						googletag.cmd.push(function() {
						googletag.defineSlot('/21688575/TONC_HD_App_China_Version_131x179', [131, 179], 'div-gpt-ad-1372790692196-0').addService(googletag.pubads());
						googletag.pubads().enableSingleRequest();
						googletag.enableServices();
						});
						</script>

						<div id='div-gpt-ad-1372790692196-0' style='width:131px; height:179px;'>
						<script type='text/javascript'>
						googletag.cmd.push(function() { googletag.display('div-gpt-ad-1372790692196-0'); });
						</script>
						</div>";
						break;
				}
			?>

			<?php
			/*
	 		<script type='text/javascript'>
			var googletag = googletag || {};
			googletag.cmd = googletag.cmd || [];
			(function() {
			var gads = document.createElement('script');
			gads.async = true;
			gads.type = 'text/javascript';
			var useSSL = 'https:' == document.location.protocol;
			gads.src = (useSSL ? 'https:' : 'http:') +
			'//www.googletagservices.com/tag/js/gpt.js';
			var node = document.getElementsByTagName('script')[0];
			node.parentNode.insertBefore(gads, node);
			})();
			</script>

			<script type='text/javascript'>
			googletag.cmd.push(function() {
			googletag.defineSlot('/21688575/TONC_HD_App_300x250', [[300, 250], [320, 240]], 'div-gpt-ad-1366999891989-0').addService(googletag.pubads());
			googletag.pubads().enableSingleRequest();
			googletag.enableServices();
			});
			</script>

			<!-- TONC_HD_App_300x250 -->
			<div id='div-gpt-ad-1366999891989-0'>
			<script type='text/javascript'>
			googletag.cmd.push(function() { googletag.display('div-gpt-ad-1366999891989-0'); });
			</script>
			</div>
			*/
			?>

	 	</div>

	</div>

	<?php endif; ?>

	<?php if(!empty($rows[2])): ?>

	<div class="view-container-inner view-container-row">

     	<div id class="view-item d">

	 		<?php print $rows[2]; ?>

	 	</div>


	</div>

	<?php endif; ?>

	<?php if(!empty($rows[3])): ?>

	<div class="view-container-inner view-container-row">

     	<div id class="view-item d">

	 		<?php print $rows[3]; ?>

	 	</div>


	</div>

	<?php endif; ?>

	<?php if(!empty($rows[4])): ?>

	<div class="view-container-inner view-container-row">

     	<div id class="view-item d">

	 		<?php print $rows[4]; ?>

	 	</div>


	</div>

	<?php endif; ?>

</div>

<?php
	elseif($page%2 == 0):
?>
<div class="view-container menu-inactive">


	<div class="view-container-inner view-container-left-even">
		
		<?php if(!empty($rows[0])): ?>
		
		<div id class="view-item">
       
	
	 		<?php print $rows[0]; ?>
	 	
	 	</div>
	 	<?php endif; ?>
	 	
	 	<?php if(!empty($rows[1])): ?>
	 	
	 	<div id class="view-item">
	
	 		<?php print $rows[1]; ?>
	 	
	 	</div>
        <?php endif; ?>
       
		
	</div>
	
	<?php if(!empty($rows[2])): ?>
	
	<div class="view-container-inner view-container-right-even">
    
     	<div id class="view-item">
	
	 		<?php print $rows[2]; ?>
	 	 
	 	</div>
		
		
		<?php if(!empty($rows[3])): ?>
		
		<div id class="view-item">
	
	 		<?php print $rows[3]; ?>
	 	 
	 	</div>
	 	
	 	<?php endif; ?>
	 	
	 	<?php if(!empty($rows[4])): ?>
	 	
	 	<div id class="view-item">
	
	 		<?php print $rows[4]; ?>
	 	 
	 	</div>
	 	
	 	<?php endif; ?>
		
	</div>
	
	<?php endif; ?>

</div>




<?php 
	//-------  UNEVEN --------------------------------------------
	//This is for every uneven page except page 0
	else:

?>

<div class="view-container menu-inactive">
	<div class="view-container-inner view-container-left">
		
		<?php if(!empty($rows[0])): ?>
		<div id class="view-item">
	
	 		<?php print $rows[0]; ?>
	 	 
	 	</div>
	 	<?php endif; ?>
	 	
	 	<?php if(!empty($rows[1])): ?>
	 	<div id class="view-item">
	
	 		<?php print $rows[1]; ?>
	 	 
	 	</div>
	 	<?php endif; ?>
	 	
	 	<?php if(!empty($rows[2])): ?>
	 	<div id class="view-item">
	
	 		<?php print $rows[2]; ?>
	 	 
	 	</div>
	 	<?php endif; ?>
		
	</div>
	
	<?php if(!empty($rows[3])): ?>
	<div class="view-container-inner view-container-right">
		
	 	<div id class="view-item">
	
	 		<?php print $rows[3]; ?>
	 	 
	 	</div>
	 	
	 	<?php if(!empty($rows[4])): ?>
	 	<div id class="view-item">
	
	 		<?php print $rows[4]; ?>
	 	 
	 	</div>
		<?php endif; ?>
	</div>
   <?php endif; ?>
</div>

<?php 

	endif;

?>




