<?php
//kpr(get_defined_vars());
//kpr($theme_hook_suggestions);
//template naming
//page--[CONTENT TYPE].tpl.php
?>
<?php if( theme_get_setting('mothership_poorthemers_helper') ){ ?>
<!-- page.tpl.php-->
<?php } ?>

<?php print $mothership_poorthemers_helper; ?>

<div class="container">
  <?php include '_header.tpl.php' ?>

  <?php if ($page['top_feature']): ?>
    <section class="feature span_12 omega">
    <?php print render($page['top_feature']); ?>
    </section>
  <?php endif; ?>

  <?php if ($page['sidebar_left']): ?>

    <aside class="sidebar span_6">
      <?php print render($page['sidebar_left']); ?>
    </aside>
    <section class="content span_6 omega">
      <?php include '_content.tpl.php' ?>
    </section>

  <?php elseif ($page['sidebar_right']): ?>

    <section class="content span_6">
      <?php include '_content.tpl.php' ?>
    </section>
    <aside class="sidebar span_6 omega">
      <?php print render($page['sidebar_right']); ?>
    </aside>

  <?php else: ?>

    <section class="content span_12">
      <?php include '_content.tpl.php' ?>
    </section>

  <?php endif ?>

</div><!-- /container-->

<?php include '_footer.tpl.php' ?>