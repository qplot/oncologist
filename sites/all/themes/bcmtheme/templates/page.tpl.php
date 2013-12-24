<?php
/**
 * @file
 * Zen theme's implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['header']: Items for the header region.
 * - $page['navigation']: Items for the navigation region, below the main menu (if any).
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['footer']: Items for the footer region.
 * - $page['bottom']: Items to appear at the bottom of the page below the footer.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see zen_preprocess_page()
 * @see template_process()
 */
?>
  <?php if ($primary_links): ?>
    <div id="skip-link"><a href="#main-menu"><?php print t('Jump to Navigation'); ?></a></div>
  <?php endif; ?>

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
	
	<?php
		$slot = "/21688575/BreastCancer.TheOncologist.com_728x90_Top_HomePage";
		$adpage = arg(0);
	
		switch($adpage){
			case "bcmhome": $slot 				= "/21688575/BreastCancer.TheOncologist.com_728x90_Top_HomePage"; break;
			case "bcmarticles": $slot 			= "/21688575/BreastCancer.TheOncologist.com_728x90_Top_Articles"; break;
			case "bcminterviews": $slot 		= "/21688575/BreastCancer.TheOncologist.com_728x90_Top_Interviews"; break;
			case "bcmchallengingcases": $slot 	= "/21688575/BreastCancer.TheOncologist.com_728x90_Top_Challenging_Cases"; break;
			case "bcmmedialibrary": $slot 		= "/21688575/BreastCancer.TheOncologist.com_728x90_Top_Media_Library"; break;
			case "node":
							if(strpos($classes, 'node-type-page-html') !== false){
								$slot 			= "/21688575/BreastCancer.TheOncologist.com_728x90_Top_Articles";
							}
							else if(strpos($classes, 'node-type-challenging-case') !== false){
								$slot 			= "/21688575/BreastCancer.TheOncologist.com_728x90_Top_Challenging_Cases";
							}
							else if(strpos($classes, 'node-type-asset-video') !== false || strpos($classes, 'node-type-asset-audio') !== false){
								$slot 			= "/21688575/BreastCancer.TheOncologist.com_728x90_Top_Media_Library";
							}
							break;
					
		}
	?>
		
	googletag.defineSlot('<?php print $slot;?>', [728, 90], 'div-gpt-ad-1354213473760-0').addService(googletag.pubads());
	googletag.pubads().enableSingleRequest();
	googletag.enableServices();
	});
  </script>
  
 	<!-- BreastCancer.TheOncologist.com_728x90_Top_HomePage
	<div id='div-gpt-ad-1354213473760-0' style='width:728px; height:90px; margin:0 auto 5px auto;'>
	<script type='text/javascript'>
	googletag.cmd.push(function() { googletag.display('div-gpt-ad-1354213473760-0'); });
	</script>
	</div>-->

<div id="page-wrapper"><div id="page">

  <header id="header" role="banner">
  	
  	<body class="<?php print $classes; ?>">


    <div id="header"><div class="section clearfix">
        <div class="spr-onc-logo" id="mainLogo">
        <a href="http://theoncologist.com" target="_blank" style="display:block; height:100%; width:100%;"></a>
        </div>
       
        <a href="https://www.sanofioncology.com/" target="_blank"><div class="spr-logo-sanofi" id="sponsoredLogo"></div></a>

    <?php if ($secondary_menu): ?>
      <nav id="secondary-menu" role="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </nav>
    <?php endif; ?>

    <?php print render($page['header']); ?>

  </header>

  <div id="main-wrapper"><div id="main" class="clearfix">
  	
      <div id="content-area"><?php print render($page['content']); ?></div>

    <div id="navigation">

      <?php if ($main_menu): ?>
        <nav id="main-menu" role="navigation">
          <?php
          // This code snippet is hard to modify. We recommend turning off the
          // "Main menu" on your sub-theme's settings form, deleting this PHP
          // code block, and, instead, using the "Menu block" module.
          // @see http://drupal.org/project/menu_block
          print theme('links__system_main_menu', array(
            'links' => $main_menu,
            'attributes' => array(
              'class' => array('links', 'inline', 'clearfix'),
            ),
            'heading' => array(
              'text' => t('Main menu'),
              'level' => 'h2',
              'class' => array('element-invisible'),
            ),
          )); ?>
        </nav>
      <?php endif; ?>

      <?php print render($page['navigation']); ?>

    </div><!-- /#navigation -->

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside><!-- /.sidebars -->
    <?php endif; ?>

  </div></div><!-- /#main -->
  
    <div id="footer"><div class="section">
        <a href="http://sto-online.org/" target="_blank"><div class="spr-logo-sanofi" id="sto-logo"></div></a>  
		<div id="bcm-footer">
    		<div class="spr-oncApp-logo" id="oncappLogo"></div>
    		
			<?php
				print l("", "http://itunes.apple.com/us/app/the-oncologist/id373991768?mt=8", array("attributes"=>array("target"=>"_blank", "id"=>"app-ios", "class"=>"apps spr-icn-apple")));
				print l("", "https://play.google.com/store/apps/details?id=com.intstrux.oncologistSD&hl=en", array("attributes"=>array("target"=>"_blank", "id"=>"app-android", "class"=>"apps spr-icn-android")));
				print l("", "http://www.amazon.com/Intstrux-llc-The-Oncologist/dp/B006IXUXRI", array("attributes"=>array("target"=>"_blank", "id"=>"app-kindle", "class"=>"apps spr-icn-kindle")));
			
			?>
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
			</div>
		</div>
	</div>
		<?php print render($page['footer']); ?>
	</div>
</div><!-- /#page -->
<?php print render($page['bottom']); ?>
