/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

	 $(document).ready( function () {
		
	 	$("#perspective_btn").click(function(){
	 		$("#perspective").show();
	 		$("#article").hide();
	 		$("#perspective_btn").addClass("selected");
	 		$("#article_btn").removeClass("selected");
	 	});
	 	
	 	$("#article_btn").click(function(){
	 		$("#article").show();
	 		$("#perspective").hide();
  			$("#article_btn").addClass("selected");
  			$("#perspective_btn").removeClass("selected");
	 	});
	 });    
})(jQuery, Drupal, this, this.document);