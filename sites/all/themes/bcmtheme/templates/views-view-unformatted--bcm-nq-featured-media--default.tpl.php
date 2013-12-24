
<?php
// $Id: views-view-unformatted.tpl.php,v 1.6 2008/10/01 20:52:11 merlinofchaos Exp $
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<ul class="royalSlidesContainer">
                        
  <?php foreach ($rows as $id => $row): ?>
  <li class="royalSlide royalslide_<?php print $id; ?>">
    <?php print $row; ?>
  </li>
<?php endforeach;?>                 
                        
</ul>


              



      	