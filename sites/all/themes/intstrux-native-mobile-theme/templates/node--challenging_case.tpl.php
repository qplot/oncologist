<?php
$lang = LANGUAGE_NONE;
$nid = $node->nid;
$title = $node->title;
$pro_image = isset($node->field_cc_pro_kol_image[$lang][0]['uri']) ? $node->field_cc_pro_kol_image[$lang][0]['uri'] : "";
$con_image = isset($node->field_cc_con_kol_image[$lang][0]['uri']) ? $node->field_cc_con_kol_image[$lang][0]['uri'] : "";
$pro_name = $node->field_cc_pro_kol_name[$lang][0]['value'];
$con_name = $node->field_cc_con_kol_name[$lang][0]['value'];
$abstract = isset($node->field_cc_abstract[$lang][0]['value']) ? $node->field_cc_abstract[$lang][0]['value'] : "";


$searchArray = array("'",'"');
$replaceArray = array("&#39;","&#34;");
$title_str = str_replace($searchArray, $replaceArray, $title);
$description = str_replace($searchArray, $replaceArray, $abstract);

$data = array("nid"=> $nid, "title"=>truncate_utf8($title_str,100,TRUE,TRUE,2), "description"=>truncate_utf8($description,300,TRUE,TRUE,2), "type" => "Challenging Case");

if ($view_mode == "teaser" || $view_mode == "featured"):


//$vote_avg = $row->votingapi_cache_node_percent_vote_average_value;
$my_voting_view = views_get_view('view_votingresults');
$my_voting_view->set_arguments(array($node->nid));
$my_voting_view->build();
$my_voting_view->execute();
$voting_results = $my_voting_view->result;
$vote_count = $voting_results[0]->votingapi_cache_node_percent_vote_count_value;
$section = taxonomy_term_load($node->field_tax_section[$lang][0]["tid"])->name;

?>
<div onclick="loadPage('node/<?php print $node->nid;?>');">

<script language="JavaScript">
	
	
	function callback_<?php print $nid;?>(event){
		
		event.stopPropagation()
		
		var isiPad = (navigator.userAgent.match(/iPad/i) != null);
		var isSafari = navigator.userAgent.match(/Safari/i) != null;
		
		if(isiPad && !isSafari){
			nativeFunction('app://setFavorite/<?php print json_encode($data);?>');
		}
		else{
			$("#favorite_<?php print $nid;?>").toggleClass("active");
		}
		
		return false;
	}
	
</script>

<?php
	print '<div id="cc_row_'.$nid.'" class="cc_row" >';

			print '<div class="contenttype" >Challenging Case</div>';

			print '<div class="cc_row_votecount" >';
				if(!isset($vote_count)){
					print '<script>$(".cc_row_votecount").css({"display":"none"})</script>';
				}else{
					print $vote_count;
				}
			print '</div>'; //end votecount

			print '<div class="cc_row_pro" >';
				print '<div class="cc_row_thumb" id="thumb_'.$nid.'_2">';
					print '<div class="cc_row_thumb_inner">';
						print theme('image_style', array('style_name' => 'challenging_cases_kol_image', 'path' => $pro_image));
					print '</div>'; //end img

					print '<div class="imageborder" id="thumb_'.$nid.'">';
					print '</div>'; //end img border

				print '</div>'; //end thumb
				print '<div class="cc_row_name" >'.$pro_name.'</div>';
			print '</div>'; //end pro


			// print '<div class="cc_row_vs" >vs.</div>';

			print '<div class="cc_row_con" >';
				print '<div class="cc_row_thumb" id="thumb_'.$nid.'_2">';
					print '<div class="cc_row_thumb_inner">';
						print theme('image_style', array('style_name' => 'challenging_cases_kol_image', 'path' => $con_image));
					print '</div>'; //end img
					print '<div class="imageborder" id="thumb_'.$nid.'">';
					print '</div>'; //end img border

				print '</div>'; //end thumb
				print '<div class="cc_row_name" >'.$con_name.'</div>';
			print '</div>'; //end con

			print '<div class="cc_row_title" >'.$title.'</div>';

			print '<div class="cc_row_abstract" >'.$abstract.'</div>';

			print '<div class="section">'.$section.'</div>';

	print '</div>'; //end main

?>

<div id="favorite_<?php print $nid;?>" class="favorite" onclick='return callback_<?php print $nid;?>(event);'>
	FAV
</div>

</div>





<?php
else:

	drupal_add_js(array('challengingcase' => array('nid' => $node->nid)), 'setting');
	drupal_add_js(array('properties' => array('contenttype' => $node->type)), 'setting');

	$uid = $user->uid;

	$case_html = $node->field_cc_html[$lang][0]['value'];
	$pro_image = isset($node->field_cc_pro_kol_image[$lang][0]['uri']) ? $node->field_cc_pro_kol_image[$lang][0]['uri'] : "";
	$con_image = isset($node->field_cc_con_kol_image[$lang][0]['uri']) ? $node->field_cc_con_kol_image[$lang][0]['uri'] : "";
	$pro_name = $node->field_cc_pro_kol_name[$lang][0]['value'];
	$con_name = $node->field_cc_con_kol_name[$lang][0]['value'];;
	$pro_affiliation = $node->field_cc_pro_kol_affiliation[$lang][0]['value'];
	$con_affiliation = $node->field_cc_con_kol_affiliation[$lang][0]['value'];
	$pro_html = $node->field_cc_pro_html[$lang][0]['value'];
	$con_html = $node->field_cc_con_html[$lang][0]['value'];
	$title = $node->title;

?>

<script language="JavaScript">

	function _setFavorite(){

		window.location = 'app://setFavorite/<?php print json_encode($data);?>';
	}

</script>

<div class="challenging_case">

	<div class="cc_tabs">
		<div id="tab1" class="cc_tab active" id="tab1">The Case</div>

		<div id="tab2" class="cc_tab cc_tab_with_image inactive">
		<div class="cc_tab_image"><?php print theme('image_style', array('style_name' => 'challenging_cases_kol_tab_image', 'path' => $pro_image))?></div>
		<div class="cc_tab_text">Pro</div>
		</div>

		<div id="tab3" class="cc_tab cc_tab_with_image inactive">
		<div class="cc_tab_image"><?php print theme('image_style', array('style_name' => 'challenging_cases_kol_tab_image', 'path' => $con_image))?></div>
		<div class="cc_tab_text">Con</div>
		</div>


		<div id="tab4" class="cc_tab inactive">Discussion</div>
	</div>

	<div class="cc_page" id="cc_page_tab1"><?php print '<b>'.$title.'</b><br><br>'; echo $case_html; ?>

	</div>

    <div class="cc_page" id="cc_page_tab2" style="display:none">

        <div class="cc_header cc_header_pro">
        	<div class="cc_header_thumb"><?php print theme('image_style', array('style_name' => 'challenging_cases_kol_image', 'path' => $pro_image))?></div>
            <div class="cc_kol_info">
               	<div class="cc_kol_name">By <?php print $pro_name; ?></div>
            	<div class="cc_kol_affiliation"><?php print $pro_affiliation; ?></div>
            </div>


            <div class="votingarea"></div>

		
        </div>

        <div class="cc_kol_body">

        	<?php print '<b>'.$title.'</b><br><br>';
        	print $pro_html;?></div>

    </div>

    <div class="cc_page" id="cc_page_tab3" style="display:none">

    	<div class="cc_header cc_header_con">
        	<div class="cc_header_thumb"><?php print theme('image_style', array('style_name' => 'challenging_cases_kol_image', 'path' => $con_image))?></div>
            <div class="cc_kol_info">
            	<div class="cc_kol_name">By <?php print $con_name; ?></div>
            	<div class="cc_kol_affiliation"><?php print $con_affiliation; ?></div>
            </div>

            <div class="cc_row_voting_main" ></div>


            <div class="votingarea"></div>

            
        </div>

        <div class="cc_kol_body"><?php print '<b>'.$title.'</b><br><br>'; print $con_html;?></div>

    </div>


	<div class="cc_page" id="cc_page_tab4" style="display:none">
		<div class="title">
			<?php print '<b>'.$title.'</b><br><br>'; ?>
		</div>
		<div class="comments">
			<div class="comment-header">
				<h2 class="title"><?php print t('Comments'); ?></h2>

					<div class="comment-count"></div>
				
					<div class="comment-add first last active">
						<a href="#comment-form" title="Post New Comment" class="active">Post New Comment</a>
					</div>

			</div>
			<div class="comment-section">
				


				<div id="comments" class="comment-wrapper">
					<form class="comment-form" action="/comment/reply/51235" method="post" id="comment-form" accept-charset="UTF-8" style="display: none; "><div><div class="form-preface triangle"><div class="form-preface triangle-inner"></div></div><div class="author-form"><div id="edit-author--2" class="form-item form-type-item">
					  <label for="edit-author--2">Your name </label>
					 <a href="/users/admin" title="View user profile." class="username">admin</a>
					</div>
					</div><input type="hidden" name="form_build_id" value="form-19Gbk9-BUbocFELqWntsNiGujUW3ekguu-OuwWK89W4">
					<input type="hidden" name="form_token" value="LpYY8resSrpeqCaWiQ1WndD4Aka9D0TPOoKrJ63-yXg">
					<input type="hidden" name="form_id" value="comment_node_challenging_case_form">
					<fieldset class="form-wrapper" id="edit-your-comment"><div class="fieldset-wrapper"><div class="field-type-text-long field-name-comment-body field-widget-text-textarea form-wrapper" id="edit-comment-body"><div id="comment-body-add-more-wrapper"><div class="text-format-wrapper"><div class="form-item form-type-textarea form-item-comment-body-und-0-value">
					  <!--<label for="edit-comment-body-und-0-value">Comment <span class="form-required" title="This field is required.">*</span></label>-->
					 <div class="form-textarea-wrapper resizable"><textarea class="text-full ckeditor-mod form-textarea required" id="edit-comment-body-und-0-value" name="comment_body[und][0][value]" cols="60" rows="5"></textarea></div>
					</div>
					<a class="ckeditor_links" style="display:none" href="javascript:void(0);" onclick="javascript:Drupal.ckeditorToggle(['edit-comment-body-und-0-value'],'Switch to plain text editor','Switch to rich text editor');" id="switch_edit-comment-body-und-0-value">Switch to rich text editor</a><fieldset class="filter-wrapper form-wrapper" id="edit-comment-body-und-0-format"><div class="fieldset-wrapper"><div class="filter-help form-wrapper" id="edit-comment-body-und-0-format-help"><p><a href="/filter/tips" target="_blank">More information about text formats</a></p></div><div class="form-item form-type-select form-item-comment-body-und-0-format">
					  <label for="edit-comment-body-und-0-format--2">Text format </label>
					 <select class="filter-list form-select" id="edit-comment-body-und-0-format--2" name="comment_body[und][0][format]"><option value="2" selected="selected">Full HTML</option><option value="1">Filtered HTML</option><option value="3">PHP code</option><option value="ckeditor">CKEditor</option><option value="4">Plain text</option></select>
					</div>
					<div class="filter-guidelines form-wrapper" id="edit-comment-body-und-0-format-guidelines"><div class="filter-guidelines-item filter-guidelines-2"><h3>Full HTML</h3><ul class="tips"><li>Web page addresses and e-mail addresses turn into links automatically.</li><li>Lines and paragraphs break automatically.</li></ul></div><div class="filter-guidelines-item filter-guidelines-1"><h3>Filtered HTML</h3><ul class="tips"><li>Web page addresses and e-mail addresses turn into links automatically.</li><li>Allowed HTML tags: &lt;a&gt; &lt;em&gt; &lt;strong&gt; &lt;cite&gt; &lt;blockquote&gt; &lt;code&gt; &lt;ul&gt; &lt;ol&gt; &lt;li&gt; &lt;dl&gt; &lt;dt&gt; &lt;dd&gt;</li><li>Lines and paragraphs break automatically.</li></ul></div><div class="filter-guidelines-item filter-guidelines-3"><h3>PHP code</h3><ul class="tips"><li>You may post PHP code. You should include &lt;?php ?&gt; tags.</li></ul></div><div class="filter-guidelines-item filter-guidelines-ckeditor"><h3>CKEditor</h3><ul class="tips"><li>HTML tags will be transformed to conform to HTML standards.</li><li>Non-latin text (e.g., å, ö, 漢) will be converted to US-ASCII equivalents (a, o, ?).</li></ul></div><div class="filter-guidelines-item filter-guidelines-4"><h3>Plain text</h3><ul class="tips"><li>No HTML tags allowed.</li><li>Web page addresses and e-mail addresses turn into links automatically.</li><li>Lines and paragraphs break automatically.</li></ul></div></div></div></fieldset>
					</div>
					</div></div></div></fieldset>
					<div class="form-actions form-wrapper" id="edit-actions"><input type="submit" id="edit-submit" name="op" value="Submit" class="form-submit"><div class="comment-cancel"><a href="/">Cancel</a></div></div></div></form>


					<div id="comments-inner" class="comment-wrapper">
					</div>
				</div>
					
					<?php
					//print render($content['comments']);
					?>
				
			</div>
	  	</div>


	</div>

</div>
<?php
	endif;
?>
