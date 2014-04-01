Playmart
=============

Drupal site for Playmart

[Grunt](http://gruntjs.com/) is used for compilation of [Sass](http://sass-lang.com) and [CoffeeScript](http://coffeescript.org).

### Prerequisites
If you do not have [Node.js](http://nodejs.org/) `>=0.10` installed, you must do that first:

- [Node.js](http://davidcalhoun.me/2013/12/16/developer-tools-homebrew/)

## To setup:

1. Clone repo to new directory, and set up your vhosts

2. Copy sites/default/default.settings.php to sites/default/settings.php and add your database information

3. Import the database SQL file (sent separately)

4. Go to sites/all/themes/playmart, and run ```npm install``` to install the node modules necessary for Sass / Coffee compilation.

## To run Grunt (during theming):

1. Go to sites/all/themes/playment and run ```grunt```. 
    * This will need to continue running during development.
    * As you save a Sass, Coffeescript, or HTML file, the files will recompile and refresh in your browser.
