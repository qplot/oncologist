<?php
/**
 * @file
 * Theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $css: An array of CSS files for the current page.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page. Used to toggle the mission statement.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Page metadata:
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $head_title: A modified version of the page title, for use in the TITLE tag.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It should be placed within the <body> tag. When selecting through CSS
 *   it's recommended that you use the body tag, e.g., "body.front". It can be
 *   manipulated through the variable $classes_array from preprocess functions.
 *   The default values can be one or more of the following:
 *   - front: Page is the home page.
 *   - not-front: Page is not the home page.
 *   - logged-in: The current viewer is logged in.
 *   - not-logged-in: The current viewer is not logged in.
 *   - node-type-[node type]: When viewing a single node, the type of that node.
 *     For example, if the node is a "Blog entry" it would result in "node-type-blog".
 *     Note that the machine name will often be in a short form of the human readable label.
 *   - page-views: Page content is generated from Views. Note: a Views block
 *     will not cause this class to appear.
 *   - page-panels: Page content is generated from Panels. Note: a Panels block
 *     will not cause this class to appear.
 *   The following only apply with the default 'sidebar_first' and 'sidebar_second' block regions:
 *     - two-sidebars: When both sidebars have content.
 *     - no-sidebars: When no sidebar content exists.
 *     - one-sidebar and sidebar-first or sidebar-second: A combination of the
 *       two classes when only one of the two sidebars have content.
 * - $node: Full node object. Contains data that may not be safe. This is only
 *   available if the current page is on the node's primary url.
 * - $menu_item: (array) A page's menu item. This is only available if the
 *   current page is in the menu.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * - $mission: The text of the site mission, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $search_box: HTML to display the search box, empty if search has been disabled.
 * - $primary_links (array): An array containing the Primary menu links for the
 *   site, if they have been configured.
 * - $secondary_links (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title: The page title, for use in the actual HTML content.
 * - $messages: HTML for status and error messages. Should be displayed prominently.
 * - $tabs: Tabs linking to any sub-pages beneath the current page (e.g., the
 *   view and edit tabs when displaying a node).
 * - $help: Dynamic help text, mostly for admin pages.
 * - $content: The main content of the current page.
 * - $feed_icons: A string of all feed icons for the current page.
 *
 * Footer/closing data:
 * - $footer_message: The footer message as defined in the admin settings.
 * - $closure: Final closing markup from any modules that have altered the page.
 *   This variable should always be output last, after all other dynamic content.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * Regions:
 * - $content_top: Items to appear above the main content of the current page.
 * - $content_bottom: Items to appear below the main content of the current page.
 * - $navigation: Items for the navigation bar.
 * - $sidebar_first: Items for the first sidebar.
 * - $sidebar_second: Items for the second sidebar.
 * - $header: Items for the header region.
 * - $footer: Items for the footer region.
 * - $page_closure: Items to appear below the footer.
 *
 * The following variables are deprecated and will be removed in Drupal 7:
 * - $body_classes: This variable has been renamed $classes in Drupal 7.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see zen_preprocess()
 * @see zen_process()
 */
?>
  <!-- Ad Preparation here -->
  <script type='text/javascript'>
	var googletag = googletag || {};
	googletag.cmd = googletag.cmd || [];
	(function() {
	var gads = document.createElement('script');
	gads.async = true;
	gads.type = 'text/javascript';
	var useSSL = 'https:' == document.location.protocol;
	gads.src = 'https://www.googletagservices.com/tag/js/gpt.js';
	var node = document.getElementsByTagName('script')[0];
	node.parentNode.insertBefore(gads, node);
	})();
  </script>

  <script type='text/javascript'>
	googletag.cmd.push(function() {
	googletag.defineSlot('/21688575/STO.com_160x600', [160, 600], 'div-gpt-ad-1328652213212-0').addService(googletag.pubads());
	googletag.defineSlot('/21688575/STO.com_300x250', [300, 250], 'div-gpt-ad-1328652213212-1').addService(googletag.pubads());
	googletag.defineSlot('/21688575/STO.com_728x90', [728, 90], 'div-gpt-ad-1328652213212-2').addService(googletag.pubads());
	googletag.pubads().enableSingleRequest();
	googletag.enableServices();
	});
  </script>	
  
</head>
<body class="<?php print $classes; ?>">

  <div id="page-wrapper">
  <div id="disclaimer-wrapper">
		<div id="disclaimer-bg"></div>
		<div id="disclaimer-box">
			<div id="disclaimer-text"></div>
			<div id="ok-btn" class="disclaimer-btn">OK</div>
			<div id="cancel-btn" class="disclaimer-btn">Cancel</div>
		</div>
	</div>
  <div id="page">
	
	<div id="sign-in">
		<div id="close-btn">close</div>
		
		<br>You must be signed in to use this feature.<br><br><a href="/user?target=<?php print drupal_get_path_alias($_GET['q']);?>">SIGN IN</a> or <a href="/user/register?target=<?php print drupal_get_path_alias($_GET['q']);?>"">REGISTER</a>
		<!-- <form>
		Email: <input type="text" name="firstname" /><br />
		Password: <input type="password" name="password" />
		<div id="submit-btn">Submit</div>
		</form> -->
	</div>
	
	<div id="banner-area">
		<!-- STO.com_728x90 -->
		<div id='div-gpt-ad-1328652213212-2' class="banner-area-inner" style='width:728px; height:90px;'>
			<script type='text/javascript'>
				googletag.cmd.push(function() { googletag.display('div-gpt-ad-1328652213212-2'); });
			</script>
		</div>
	</div>
    <div id="header">
    	
    	
    	
    	<div id="link_wrapper">
    	<div id="logo_link">
    	<?php
    		print l("Home", "");
    	?>
    	</div>	
    	<div id="onc_link">
    		<a href="http://theoncologist.alphamedpress.org/" target="_blank">Home</a>
    	</div>
		</div>
    	<div class="section clearfix">
   
      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
      <?php endif; ?>

		<div id="header-right-click-btn"></div>
		
		<div id="search-bar"><form onsubmit="javascript:doSearch(); return false;"><input type="text" name="search" value="Search"/></form></div>
       	
	 <?php if($user->uid == 0):?>
	 <div id="header-sign-in">
      		<?php $dest = drupal_get_destination(); print l(t('Login'),'user/login', array('query' => $dest))?>&nbsp;or
 			<?php print l(t("Register"), "user/register");?>
     </div>
     <?php else:?>
    
     <div id="header-sign-in">
     <?php	 	
	 $profile = user_load($user->uid);
	 print "Welcome, ". l($profile->field_user_firstname['und'][0]['value']." ".$profile->field_user_lastname[0]['value'], "user/".$user->uid); 
	 ?>
	 </div>
	 <?php endif; ?>

      <?php print render($page['header']); ?>
     	
      <?php if (false && ($primary_links || $navigation)): ?>
        <div id="navigation"><div class="section clearfix">
			
          <?php print theme(array('links__system_main_menu', 'links'), $primary_links,
            array(
              'id' => 'main-menu',
              'class' => 'links clearfix',
            ),
            array(
              'text' => t('Main menu'),
              'level' => 'h2',
              'class' => 'element-invisible',
            ));
          ?>

          <?php print $navigation; ?>

        </div></div><!-- /.section, /#navigation -->
      <?php endif; ?>

    	
    	
    </div></div><!-- /.section, /#header -->

    <div id="main-wrapper"><div id="main" class="clearfix">
		
		
      <div id="content" class="column"><div class="section">
	      
	      <div id="content-area"><?php print render($page['content']); ?></div>
	
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
	
	    </div></div><!-- /.section, /#content -->

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
        <!-- /.sidebars -->
    <?php endif; ?>

    </div></div><!-- /#main, /#main-wrapper -->

  </div></div><!-- /#page, /#page-wrapper -->


<div id="footer-message"><?php print render($page['footer']); ?></div>


</div></div><!-- /.section, /#footer -->
<?php print render($page['bottom']); ?>
</div></div>