<?php
$link =  "/view_customized/".$edition."/view_items_customized/".$edition."/";
$struser = "user=".urlencode(json_encode($user));
?>

<script language="JavaScript">
	
	function loadPage(page){
		
		var isiPad = (navigator.userAgent.match(/iPad/i) != null);
		var isSafari = navigator.userAgent.match(/Safari/i) != null;

		if(isiPad && !isSafari){
			//nativeFunction('app://navigateTo/{"path":"<?php print $link;?>?page='+page+'&<?php print $struser;?>"}');
			nativeFunction('app://navigateTo/{"path":"<?php print $link;?>?page='+page+'"}');
		}
		else{
			window.location = "/"+page;
		}
	
	};
	
</script>


<?php
//print "RESULT: <pre>".print_r($result, true)."</pre>";

?>


<div class="view-container <?php print ($page ==0)  ? "menu-active" : "menu-inactive";?>">

<?php foreach ($result->docs as $id => $row): ?>
 
	<div id class="item">
     
		<?php
		drupal_add_js(array('properties' => array('contenttype' => $row->bundle_name)), 'setting');
		?>
	
	<?php 
		print render(node_view(node_load($row->entity_id), 'teaser'));
	?>
	    
 	</div>

<?php endforeach; ?>


</div>