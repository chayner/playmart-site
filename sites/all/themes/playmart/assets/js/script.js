(function() {
  (function($) {
    return $(function() {
      var $window, checkWidth, drop_nav, standard_message;
      checkWidth = function() {
        var windowsize;
        windowsize = $window.width();
        if (windowsize > 769) {
          $(".mobileNav").hide();
          $(".mainNav").show();
        } else {
          $(".mainNav").hide();
          $(".quick_links ul").hide();
        }
        if (windowsize > 605) {
          $(".feature_left").removeClass("omega").remove().insertBefore($(".feature_right"));
          $(".footer_bottom .copyright").addClass("omega").remove().insertBefore($(".footer_bottom .social"));
          $(".quick_links ul").show();
        } else {
          $(".feature_left").removeClass("omega").remove().insertAfter($(".feature_right"));
          $(".footer_bottom .copyright").removeClass("omega").remove().insertAfter($(".footer_bottom .social"));
        }
      };
      $(".mainNav ul:first-child").clone().appendTo(".mobileNav");
      $(".navTrigger").click(function() {
        $(".mobileNav").slideToggle(600);
        $(this).toggleClass("navTrigger_close");
        return false;
      });
      $(".mobileNav ul li").has("ul").addClass("mobile_drop");
      $(".mobile_drop > a:first-child").append("<span class=\"more\"></span>");
      $(".mobileNav ul li").has("ul").click(function(event) {
        $(this).toggleClass("subnav_click");
        $("ul", this).slideToggle(500);
        $(".more").toggleClass("less");
        event.preventDefault();
      });
      $(".mainNav ul li").has("ul").hover(function() {
        $(this).toggleClass("nav_roll");
        $("ul", this).slideToggle("fast");
        return false;
      });
      drop_nav = $(".mainNav ul li").has("ul");
      drop_nav.find("> a").click(function(event) {
        event.preventDefault();
      });
      $("#contactTrigger").click(function(event) {
        $(".get_started .contact_form").slideToggle(500);
        event.preventDefault();
      });
      $("input, textarea").each(function() {
        var set_value;
        set_value = $(this).val();
        $(this).focus(function() {
          if ($(this).val() === set_value) {
            $(this).val("");
          }
        });
        $(this).blur(function() {
          if ($(this).val() === "") {
            $(this).val(set_value);
          }
        });
      });
      standard_message = "MESSAGE*";
      $("textarea#comment").focus(function() {
        if ($(this).val() === standard_message) {
          $(this).val("");
        }
      });
      $("textarea#comment").blur(function() {
        if ($(this).val() === "") {
          $(this).val(standard_message);
        }
      });
      $(".to_top a").click(function() {
        $("html, body").animate({
          scrollTop: 0
        }, 500);
        event.preventDefault();
      });
      $window = $(window);
      checkWidth();
      $(window).resize(checkWidth);
      $(".quickTrigger").click(function(event) {
        $(".quick_links ul").slideToggle(500);
        event.preventDefault();
      });
    });
  })(jQuery);

}).call(this);
