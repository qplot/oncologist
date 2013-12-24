<?php
$link =  "/".$_GET[q]."/view_items_interactive_ad_alt/";

foreach ($view->args as $key => $value) {

	$link .= $value ."/";
}

?>

<script language="JavaScript">

	function loadPage(page){

		var isiPad = (navigator.userAgent.match(/iPad/i) != null);
		var isSafari = navigator.userAgent.match(/Safari/i) != null;

		if(isiPad && !isSafari){
			nativeFunction('app://navigateTo/{"path":"<?php print $link;?>?page='+page+'"}');
		}
		else{
			window.location = "/"+page;
		}

	};

</script>


<?php

$page 	= $_GET['page'];

if($page == 0):
?>

<div class="view-container menu-active">

<?php
elseif($page>0):
?>

<div class="view-container menu-inactive">

<?php
	endif;
?>

<?php foreach ($rows as $id => $row): ?>

	<div id="item-<?php print_r($view->result[$id]->_field_data['nid']['entity']->nid); ?>" class="item">

 		<?php print $row; ?>

 	</div>

<?php endforeach; ?>
 
 </div>