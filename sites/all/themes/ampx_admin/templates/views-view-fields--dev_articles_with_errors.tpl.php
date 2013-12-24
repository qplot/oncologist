 <?php

/**
 * @file
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
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

?>
<table>
<tr>
<td>
	<?php print $row->nid; ?>
</td>
<td>
	<?php print $row->node_title; ?>
</td>
<td>
	<?php 
		if(empty($row->field_field_article_full)){
			print "WARNING: The full body field of this article is empty";
		}

 	?>
</td>
<td>
	<?php 
		if(empty($row->field_field_article_year_int[0]['raw']['value']) || $row->field_field_article_year_int[0]['raw']['value'] <= 0){
			print "WARNING: The year was not computed correctly";
		}

 	?>
</td>
</tr>

<!--
<tr>
	<td cellspan="4">
		<?php
			//print "<pre>".print_r($row, true)."</pre>";
		?>
	</td>
</tr>
-->
</table>






