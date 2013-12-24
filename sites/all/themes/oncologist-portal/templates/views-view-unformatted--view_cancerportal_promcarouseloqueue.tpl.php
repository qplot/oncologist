<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<ul class="royalSlidesContainer">
                        
  <?php foreach ($rows as $id => $row): ?>
  <li class="royalSlide <?php print $classes[$id]; ?>">
    <?php print $row; ?>
  </li>
<?php endforeach;?>                 
                        
</ul>


              



