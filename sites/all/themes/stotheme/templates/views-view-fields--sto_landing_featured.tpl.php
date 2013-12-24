<?php
// $Id: views-view-fields.tpl.php,v 1.6 2008/09/24 22:48:21 merlinofchaos Exp $
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->separator: an optional separator that may appear before a field.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */


?>

<?php 
	
	$featured_image = $row->_field_data[nid][entity]->field_sto_featured_image[und][0][uri];
	$featured_link = $row->_field_data[nid][entity]->field_sto_featured_link[und][0][value];
	$title = $node->title;
	
	if($row->node_type == "asset_video"):?>
	
	<div id="podcast-image-<?php print $row->nid?>" class="podcast-image imageItem">
		<a href="node/<?php print $row->nid?>">
			<?php 
			//print theme('imagecache', 'sto_landing_featured', $row->files_node_data_field_sto_featured_image_filename);
			print theme_image_style(array(
 			'style_name' => 'sto_landing_featured',
 			'path' => $featured_image,
  			'alt' => $title,
  			'attributes' => array('class' => 'podcast_image'),
));
			?>
			</a>
	</div>
<?php endif;?>

<?php if($row->node_type == "sto_featured_item"):?>
	<div id="podcast-image-<?php print $row->nid?>" class="podcast-image imageItem">
		<a href="<?php print $featured_link?>">
		<?php 
		
			//print theme('imagecache', 'sto_landing_featured', $row->files_node_data_field_sto_featured_image_filename);
			print theme_image_style(array(
 			'style_name' => 'sto_landing_featured',
 			'path' => $featured_image,
  			'alt' => $title,
  			'attributes' => array('class' => 'podcast_image'),
));
		?>
			</a>
	</div>
<?php endif;?>
