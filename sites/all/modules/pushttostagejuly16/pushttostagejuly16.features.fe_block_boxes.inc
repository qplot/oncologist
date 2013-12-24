<?php
/**
 * @file
 * pushttostagejuly16.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pushttostagejuly16_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '728x90block';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = '728x90block';
  $fe_block_boxes->body = '<script type=\'text/javascript\'>
var googletag = googletag || {};
googletag.cmd = googletag.cmd || [];
(function() {
var gads = document.createElement(\'script\');
gads.async = true;
gads.type = \'text/javascript\';
var useSSL = \'https:\' == document.location.protocol;
gads.src = (useSSL ? \'https:\' : \'http:\') + 
\'//www.googletagservices.com/tag/js/gpt.js\';
var node = document.getElementsByTagName(\'script\')[0];
node.parentNode.insertBefore(gads, node);
})();
</script>

<script type=\'text/javascript\'>
googletag.cmd.push(function() {
googletag.defineSlot(\'/21688575/ProstateCancer.TheOncologist.com_728x90_Top_HomePage\', [728, 90], \'div-gpt-ad-1360785750424-0\').addService(googletag.pubads());
googletag.pubads().enableSingleRequest();
googletag.enableServices();
});
</script>

<!-- ProstateCancer.TheOncologist.com_728x90_Top_HomePage -->
<div id=\'div-gpt-ad-1360785750424-0\' style=\'width:728px; height:90px; margin:10px auto 10px auto; text-align:center; \'>
<script type=\'text/javascript\'>
googletag.cmd.push(function() { googletag.display(\'div-gpt-ad-1360785750424-0\'); });
</script>
</div>

<!-- <div style="width:728px; height:90px; margin:10px auto 10px auto; text-align:center; background:#999;">
This is an ad... 
</div>
-->';

  $export['728x90block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '728x90 bottom ad for homepage';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = '728x90bottom';
  $fe_block_boxes->body = '<br clear="both">

<script type=\'text/javascript\'>
googletag.cmd.push(function() {
googletag.defineSlot(\'/21688575/ProstateCancer.TheOncologist.com_728x90_Top_Media_Library\', [728, 90], \'div-gpt-ad-1360785798547-0\').addService(googletag.pubads());
googletag.pubads().enableSingleRequest();
googletag.enableServices();
});
</script>

<!-- ProstateCancer.TheOncologist.com_728x90_Top_Media_Library -->
<div id=\'div-gpt-ad-1360785798547-0\' style=\'width:728px; height:90px;\'>
<script type=\'text/javascript\'>
googletag.cmd.push(function() { googletag.display(\'div-gpt-ad-1360785798547-0\'); });
</script>
</div>

<!--
<div style="width:728px; height:90px; margin:0 auto 0 auto; text-align:center; background:#999;">
This is an ad... 
</div>
-->';

  $export['728x90bottom'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AD Block';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'adblock';
  $fe_block_boxes->body = '<div style="margin:0; text-align:center;">
<div style="width:300px; height:auto; margin:10px 0 10px 0; "><img src="http://oncologistportal.local/sites/default/files/AD1.jpg"/></div>
<div style="width:300px; height:auto; margin:10px 0 10px 0; "><img src="http://oncologistportal.local/sites/default/files/ad2.jpg"/></div>
<div style="width:300px; height:auto; margin:10px 0 10px 0; "><img src="http://oncologistportal.local/sites/default/files/ad3.jpg"/></div>
</div>';

  $export['adblock'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'CME block for homepage - AMP manually updates';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'cme_homepage_block';
  $fe_block_boxes->body = '<div class="cmeBlock">
  <img src="/sites/default/files/yarden-fancy.png" style="float:left;" /> 
 <h2 property="dc:title" datatype="" class="node-title"><a href="https://videocme.theoncologist.com/courses/27/view_disclosure">The Biological Framework: Translational Research From Bench to Clinic </a></h2>
  <div>Yosef Yarden, PhD</div>
</div>
<div class="cmeBlock">
	<img src="/sites/default/files/swain-fancy.png" style="float:left;" />
 	<h2 property="dc:title" datatype="" class="node-title"><a href="https://videocme.theoncologist.com/courses/22/view_disclosure">Chemotherapy: Updates and New Perspectives </a></h2>
	<div>Sandra M. Swain, M.D</div>
</div>
<div class="cmeBlock">
	<img src="/sites/default/files/piccart.png" style="float:left;" />
 <h2 property="dc:title" datatype="" class="node-title"><a href="https://videocme.theoncologist.com/courses/21/view_disclosure">Hormone Receptor Positive Disease: New Developments </a></h2>
	<div>Martine J. Piccart-Gebhart, M.D., Ph.D</div>
</div>
<div class="cmeBlock">
	<img src="/sites/default/files/harbeck.png" style="float:left;" />
	<h2 property="dc:title" datatype="" class="node-title"><a href="https://videocme.theoncologist.com/courses/25/view_disclosure">A New Look at Node-Negative Breast Cancer </a></h2>
    <div>Nadia Harbeck, M.D. </div>
</div>
';

  $export['cme_homepage_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'The Copyright of the page';
  $fe_block_boxes->format = '3';
  $fe_block_boxes->machine_name = 'copyright';
  $fe_block_boxes->body = '<p><a href="http://theoncologist.alphamedpress.org/site/misc/terms.xhtml" target="_blank"> Copyright &copy; <?php print date(Y); ?></a>  - Material published on this website is protected by copyright. You are expressly prohibited from electronically storing any material found here or republishing it by any means.</p>';

  $export['copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Featured Articles';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'featuredarticles';
  $fe_block_boxes->body = '<div style="max-width:470px; min-width:200px; max-height:520px; float:left; display:block; padding:6px;">
    <div style="width:98%; height:auto; padding:6px auto 12px auto; border-bottom:dashed 1px #999; margin-bottom:10px;">
          <h3 style="text-transform:uppercase; color:#666;">Prostate Cancer</h3>
               <h2 style="font-size:16px; margin-bottom:8px; color:#333; font-weight:normal;">Finasteride and Prostate Cancer: A Commentary</h2>
                     <p style="font-size:12px;">Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of "de Finibus Bonorum et Malorum" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, "Lorem ipsum dolor sit amet..", comes from a line in section 1.10.32.<br />
<br /> <a href="#" style="font-size:14px; color:#666; font-style:italic;">Read more... </a>
</p>
    </div>
<div style="max-width:470px; min-width:200px; max-height:520px; float:left; display:block; padding:6px;">
    <div style="width:98%; height:auto; padding:6px auto 12px auto; border-bottom:dashed 1px #999; margin-bottom:10px;">
          <h3 style="text-transform:uppercase; color:#666;">Prostate Cancer</h3>
               <h2 style="font-size:16px; margin-bottom:8px; color:#333; font-weight:normal;">Disease Progression Following Imatinib Failure in Gastrointestinal Stromal Tumors: Role of Surgical Therapy</h2>
                     <p style="font-size:12px;">Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, from a Lorem Ipsum passage, and going through the cites of the word in classical literature, discovered the undoubtable source. Lorem Ipsum comes from sections 1.10.32 and 1.10.33 of "de Finibus Bonorum et Malorum" (The Extremes of Good and Evil) by Cicero, written in 45 BC. This book is a treatise on the theory of ethics, very popular during the Renaissance. The first line of Lorem Ipsum, "Lorem ipsum dolor sit amet..", comes from a line in section 1.10.32.<br />
<br /> <a href="#" style="font-size:14px; color:#666; font-style:italic;">Read more... </a>
</p>
    </div>
</div>';

  $export['featuredarticles'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer block 1';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'footerblock1';
  $fe_block_boxes->body = '<div style="padding:6px; margin:10px;">
<a href="http://www.theoncologist.com" target="blank"><img src="http://oncologistportal.local/sites/all/themes/news_center/OncPortalWhiteLogo.png" border="0" style="margin-bottom:8px;"/></a>
<br /> 

<p style="color:#e2e2e2; font-size:10px;">It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters, as opposed to using \'Content here, content here\', making it look like readable English.</p>

</div>';

  $export['footerblock1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer block 2';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'footerblock2';
  $fe_block_boxes->body = '<div style="padding:6px; margin:10px;">
<h4 style="padding-bottom:10px; border-bottom:solid 1px#999;">Follow Us</h4>
<ul style="list-style-type:none;">
<li><img src="http://oncologistportal.local/sites/all/themes/news_center/images/follow_feed.png" style="margin:0 6px 0 6px; width:20px; height:20px; background:#666;" border="0"/><a href="#">Subscribe to our RSS feed</a></li><br /><br />
<li><img src="http://oncologistportal.local/sites/all/themes/news_center/images/follow_twitter.png" style="margin:0 6px 0 6px; width:20px; height:20px; background:#666;" border="0"/><a href="#">Follow us on Twitter</a></li><br /><br />
<li><img src="http://oncologistportal.local/sites/all/themes/news_center/images/follow_facebook.png" style="margin:0 6px 0 6px; width:20px; height:20px; background:#666;" border="0"/><a href="#">Be a fan on Facebook</a></li><br /><br />
<li><img src="http://oncologistportal.local/sites/all/themes/news_center/images/follow_email_32.png" style="margin:0 6px 0 6px; width:20px; height:20px; background:#666;" border="0"/><a href="#">Email us</a></li><br /><br />
</ul>
</div>';

  $export['footerblock2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer block 2b Webform';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'footerblock2bwebform';
  $fe_block_boxes->body = '<div style="padding:6px; margin:10px;">
<h4 style="padding-bottom:10px; border-bottom:solid 1px#999;">Weekly Newsletter</h4>
<p style="color:#e2e2e2; font-size:10px;">Subscribe to our email newsletter and stay informed on all the latest news!</p>
</div>';

  $export['footerblock2bwebform'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer block 3';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'footerblock3';
  $fe_block_boxes->body = '<div style="padding:6px; margin:10px;">
<h4 style="padding-bottom:10px; border-bottom:solid 1px#999;">Content</h4>
<ul style="list-style-type:none;">
<li style="font-size:10px; color:#e2e2e2;"><a href="/view_cancerportal_currentpage_us">Current Issue</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="/video-library">Media Library</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/content/by/year" target="_blank">Archive</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="https://cme.alphamedpress.org/" target="_blank">CME</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#">Supplements</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#">Virtual Issues</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#">Meeting Abstracts</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#">Cancer Portals</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#">European Perspectives</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#">Conference Perspectives</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#"><i>The Oncologist </i>Express</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#">Challenging Cases</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#">Clinical Trial Results</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/reports/most-read" target="_blank">Most Read</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/reports/most-cited" target="_blank">Most Cited</a></li>
</ul>
<h4 style="padding-bottom:10px; border-bottom:solid 1px#999;">Resources</h4>
<ul style="list-style-type:none;">
<li style="font-size:10px; color:#e2e2e2;"><a href="http://sto-online.org/" target="_blank">Society for Translational Oncology</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="https://itunes.apple.com/us/app/the-oncologist-hd-app/id388738631?mt=8" target="_blank"><i>The Oncologist</i> App</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#">News and Press</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://oncologystreet.com/" target="_blank">Oncology Street</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologistcommunity.com/the-journal/featured-artwork-reflections/" target="_blank">Reflections</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#">FAQ\'s</a></li>
</ul>
</div>';

  $export['footerblock3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer block 4';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'footerblock4';
  $fe_block_boxes->body = '<div style="padding:6px; margin:10px;">
<h4 style="padding-bottom:10px; border-bottom:solid 1px#999;">Information For</h4>
<ul style="list-style-type:none;">
<li style="font-size:10px; color:#e2e2e2;"><a href="http://authors.theoncologist.com/" target="_blank">Authors</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/site/subscriptions/" target="_blank">Subscribers</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/site/subscriptions/institutional-faq.xhtml" target="_blank">Librarians and Institutions</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist360.com/" target="_blank">Advertisers</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#" target="_blank">Reviewers</a></li>
</ul>
<h4 style="padding-bottom:10px; border-bottom:solid 1px#999;"><i>The Oncologist</i></h4>
<ul style="list-style-type:none;">
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/" target="_blank">Home</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/preview_site/misc/AboutTheOncologist.xhtml" target="_blank">About</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://authors.theoncologist.com/index.php/editorial-policy/editorial-board" target="_blank">Editorial Board</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/feedback" target="_blank">Contact Us</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/site/misc/terms.xhtml" target="_blank">Terms of Use / Copyright</a></li>
</ul>
<h4 style="padding-bottom:10px; border-bottom:solid 1px#999;">Services</h4>
<ul style="list-style-type:none;">
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/site/subscriptions/" target="_blank">Subscriptions</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="https://manuscriptsubmissions.theoncologist.com/" target="_blank">Submit a Manuscript</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/cgi/alerts" target="_blank">Alerts</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="#" target="_blank">Newsletter</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="http://theoncologist.alphamedpress.org/site/misc/customerservice.xhtml" target="_blank">Customer Service</a></li>
<li style="font-size:10px; color:#e2e2e2;"><a href="/rss.xml" target="_blank">RSS Feeds</a></li>
</ul>
</div>';

  $export['footerblock4'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Global Focus Placeholder';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'globalfocus';
  $fe_block_boxes->body = '<style>

.blockBody {
	width:220px; 
	min-height:460px; 
	margin:3px; 
	padding:6px; 
	background:#fff;
	float:left; 
	display:block;
}

.blockContent {
	width:100%;
	height:auto;
	margin:0 auto 0 auto;
	float:left;
	display:block;
}

.blockTopImage {
	width:97%;
	height:75px;
	margin:2px 4px 8px 2px;
	border:solid 1px #999;
	float:left;
}

.blockLgTitle {
	padding:4px;
	margin:0 auto 0 auto;
}

.blockBody h3 {
	font-size:1.5em;
	color:#333;
}

.blockBody p {
	font-size:.75em;
	color:#333;
	line-height:1.25;
}

.blockTopAbstract {
	float:left;
	width:95%;
	padding:4px;

}

.blockMidRow {
	width:98%;
	margin:0 auto 8px auto;	
	float:left;
	padding:6px 0 8px 3px;
border-radius:6px;
	overflow:hidden;
background:#e2e2e2;
}

.blockMidThumb {
	width:15%;
	height:30px; 
	padding:3px;
	border:solid 1px #999;
	margin:8px 8px 4px 4px;
	float:left;
	display:block;
background:#fff;
}

.blockMidSmTitleAbs {
	width:72%;
	float:left;
	display:block;
	margin-top:8px;
}

.line-clamp {
	display: -webkit-box;
  	-webkit-line-clamp: 3;
  	-webkit-box-orient: vertical; 
	overflow:hidden;
}

.line-clamp-2 {
	display: -webkit-box;
  	-webkit-line-clamp: 5;
  	-webkit-box-orient: vertical; 
	overflow:hidden;
}

</style>


<div class="blockBody"><!-- begin block body -->
<p style="font-size:1.25em; color:#666; text-transform:uppercase; margin:0; padding:0;">Current Issue</p>
	<div class="blockContent"><!-- begin block content -->
    	<div class="blockTopImage"><!-- begin blockTopImage -->
        </div><!-- end blockTopImage -->
        	<div class="blockLgTitle"><!-- begin block large title -->
           <h3> Large title for featured article goes here here here here</h3>
            </div><!-- end large block title -->
            	<div class="blockTopAbstract"><!-- begin block top abstract -->
                <p class="line-clamp-2">Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged.</p>
                </div><!-- end block top abstract -->
                
                
        
        <div class="blockMidRow"><!-- begin block mid row -->
        	<div class="blockMidThumb"><!-- begin block mid thumb -->
            </div><!-- end block mid thumb -->
            	<div class="blockMidSmTitleAbs"><!-- begin middle block title/abstract -->
               <p class="line-clamp"> Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged.</p>
                </div><!-- end title/abstract text -->
                </div><!--end block mid row -->
                
        <div class="blockMidRow"><!-- begin block mid row -->
        	<div class="blockMidThumb"><!-- begin block mid thumb -->
            </div><!-- end block mid thumb -->
            	<div class="blockMidSmTitleAbs"><!-- begin middle block title/abstract -->
              <p class="line-clamp">Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged.</p>
                </div><!-- end title/abstract text -->
                </div><!--end block mid row -->
                
        <div class="blockMidRow"><!-- begin block mid row -->
        	<div class="blockMidThumb"><!-- begin block mid thumb -->
            </div><!-- end block mid thumb -->
            	<div class="blockMidSmTitleAbs"><!-- begin middle block title/abstract -->
             <p class="line-clamp">Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged.</p>
                </div><!-- end title/abstract text -->
                </div><!--end block mid row -->
                
        <div class="blockMidRow"><!-- begin block mid row -->
        	<div class="blockMidThumb"><!-- begin block mid thumb -->
            </div><!-- end block mid thumb -->
            	<div class="blockMidSmTitleAbs"><!-- begin middle block title/abstract -->
             <p class="line-clamp">Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry\'s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged.</p>
                </div><!-- end title/abstract text -->
        
        </div><!--end block mid row -->
    </div><!-- end block content -->
</div><!-- end block body -->';

  $export['globalfocus'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'onc app sidebar block';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'oncappblock';
  $fe_block_boxes->body = '<div style=" margin:10px 0 10px 0;"><a href="https://itunes.apple.com/us/app/the-oncologist-hd-app/id388738631?mt=8" target="_blank"><img src="/sites/default/files/TO.Appsidebanner.jpg" border="0" style="padding:0; margin-left:-2px;"/></a></div>';

  $export['oncappblock'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'sto logo/link block for header';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'stoheaderblock';
  $fe_block_boxes->body = '<div style=" padding:0; margin:-7px 20px 10px 10px;"><a href="http://www.sto-online.org"><img src="/sites/all/themes/news_center/STO_Logo.png" border="0"/></a></div>';

  $export['stoheaderblock'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Holds social links at the top of the page. ';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'topsociallinks';
  $fe_block_boxes->body = '<div style="padding:6px;">
<ul style="list-style-type:none;">
<li><a href="#"><img src="http://oncologistportal.local/sites/all/themes/news_center/images/follow_feed.png" style="margin:0 6px 0 6px; width:20px; height:20px;" border="0"/></a></li><br /><br />
<li><a href="#"><img src="http://oncologistportal.local/sites/all/themes/news_center/images/follow_twitter.png" style="margin:0 6px 0 6px; width:20px; height:20px;" border="0"/></a></li><br /><br />
<li><a href="#"><img src="http://oncologistportal.local/sites/all/themes/news_center/images/follow_facebook.png" style="margin:0 6px 0 6px; width:20px; height:20px;" border="0"/></a></li><br /><br />
</ul>
</div>';

  $export['topsociallinks'] = $fe_block_boxes;

  return $export;
}
