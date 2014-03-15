<?php print render($title_prefix); ?>
<?php if ($title): ?>
  <h1><?php print $title; ?></h1>
<?php endif; ?>
<?php print render($title_suffix); ?>

<?php if ($action_links): ?>
  <ul class="action-links"><?php print render($action_links); ?></ul>
<?php endif; ?>

<?php if (isset($tabs['#primary'][0]) || isset($tabs['#secondary'][0])): ?>
  <nav class="tabs"><?php print render($tabs); ?></nav>
<?php endif; ?>

<?php if($page['highlighted'] OR $messages){ ?>
  <div class="drupal-messages">
    <?php print render($page['highlighted']); ?>
    <?php print $messages; ?>
  </div>
<?php } ?>

<?php print render($page['content_pre']); ?>

<?php print render($page['content']); ?>

<?php print render($page['content_post']); ?>