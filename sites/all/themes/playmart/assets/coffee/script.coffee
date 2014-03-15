# namespace jQuery
(($) ->
  # Document.ready
  $ ->

    checkWidth = ->
      windowsize = $window.width()
      if windowsize > 769
        $(".mobileNav").hide()
        $(".mainNav").show()
      else
        $(".mainNav").hide()
        $(".quick_links ul").hide()

      # IF window is Wide
      if windowsize > 605
        $(".feature_left").removeClass("omega").remove().insertBefore $(".feature_right")
        $(".footer_bottom .copyright").addClass("omega").remove().insertBefore $(".footer_bottom .social")
        $(".quick_links ul").show()

      # IF Window is Narrow
      else
        $(".feature_left").removeClass("omega").remove().insertAfter $(".feature_right")
        $(".footer_bottom .copyright").removeClass("omega").remove().insertAfter $(".footer_bottom .social")
      return

    # Mobile Navigation

    $(".mainNav ul:first-child").clone().appendTo ".mobileNav"
    $(".navTrigger").click ->
      $(".mobileNav").slideToggle 600
      $(this).toggleClass "navTrigger_close"
      false

    # Mobile Nav Slide Down

    $(".mobileNav ul li").has("ul").addClass "mobile_drop"
    $(".mobile_drop > a:first-child").append "<span class=\"more\"></span>"
    $(".mobileNav ul li").has("ul").click (event) ->
      $(this).toggleClass "subnav_click"
      $("ul", this).slideToggle 500
      $(".more").toggleClass "less"
      event.preventDefault()
      return

    # Main Nav Rollover

    $(".mainNav ul li").has("ul").hover ->
      $(this).toggleClass "nav_roll"
      $("ul", this).slideToggle "fast"
      false

    drop_nav = $(".mainNav ul li").has("ul")
    drop_nav.find("> a").click (event) ->
      event.preventDefault()
      return

    # Contact Form Show...

    $("#contactTrigger").click (event) ->
      $(".get_started .contact_form").slideToggle 500
      event.preventDefault()
      return

    # Form Field Placeholders...

    $("input, textarea").each ->
      set_value = $(this).val()
      $(this).focus ->
        $(this).val ""  if $(this).val() is set_value
        return

      $(this).blur ->
        $(this).val set_value  if $(this).val() is ""
        return

      return

    standard_message = "MESSAGE*"
    $("textarea#comment").focus ->
      $(this).val ""  if $(this).val() is standard_message
      return

    $("textarea#comment").blur ->
      $(this).val standard_message  if $(this).val() is ""
      return

    # Semd to Top Mobile Function

    $(".to_top a").click ->
      $("html, body").animate
        scrollTop: 0
      , 500
      event.preventDefault()
      return

    $window = $(window)

    # Execute on load
    checkWidth()

    # Bind event listener
    $(window).resize checkWidth

    # Click Function for Footer Quick Links
    $(".quickTrigger").click (event) ->
      $(".quick_links ul").slideToggle 500
      event.preventDefault()
      return

    return

) jQuery
