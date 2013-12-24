/**
 * @file highwire.js
 * Creates actions - browse and remove for Article form fields.
 */
(function ($) {

  Drupal.ajax = Drupal.ajax || {};

  Drupal.intstrux_highwire_field = Drupal.intstrux_highwire_field || {};
  Drupal.intstrux_highwire_field.actions = Drupal.intstrux_highwire_field.actions || {};
  var intstrux_highwire_field_settings;
  Drupal.intstrux_highwire_field.dialog = null;
  Drupal.intstrux_highwire_field.dialog_field_rel = null;
  
  Drupal.behaviors.intstrux_highwire_field_buttons = {
    attach: function(context, settings) {
      intstrux_highwire_field_settings = settings;
      
      // article autocomplete field
      $('.form-text.highwire-article-field', context).change(Drupal.intstrux_highwire_field.actions.change);

      // browse button
      $('.highwire-field-browse-button', context).click(Drupal.intstrux_highwire_field.actions.browse);

      // remove button
      var remove_button = $('.highwire-field-remove-button', context);
      
      if ($('.' + remove_button.attr('rel')).val() != '') {
        remove_button.attr('disabled', '').removeClass('form-button-disabled');
      }

      remove_button.click(Drupal.intstrux_highwire_field.actions.remove);
    }
  };
  
  Drupal.intstrux_highwire_field.actions.change = function() {
    var filt = $(this).attr('rel');
    var button = $('.highwire-field-remove-button[rel*="' + filt + '"]');
    button.attr('disabled', '');
    button.removeClass('form-button-disabled');
  }
  
  Drupal.intstrux_highwire_field.actions.browse = function(event) {
    // nothing 
  }
  
  Drupal.intstrux_highwire_field.actions.remove = function(event) {
    event.preventDefault();
    $('.' + $(this).attr('rel')).val('');
    $(this).attr('disabled', '');
    $(this).addClass('form-button-disabled');
  };
  
  Drupal.intstrux_highwire_field.submit_browse = function(field_rel, data) {
    parent.jQuery("." + field_rel).val(data).triggerHandler('change');
    parent.jQuery('.highwire-field-remove-button[rel="' + field_rel + '"]').attr('disabled', '').removeClass('form-button-disabled');
  };

  Drupal.ajax.prototype.commands.intstrux_ui_dialog = function (ajax, response, status) {
    var wrapper = response.selector ? $(response.selector) : $(ajax.wrapper);
    var effect = ajax.getEffect(response);
    var new_content;
    var title = response.title;
    var loading;

    var settings = response.settings || ajax.settings || Drupal.settings;
    Drupal.intstrux_highwire_field.dialog_field_rel = response.field_rel;
    Drupal.detachBehaviors(wrapper, settings);

    if (Drupal.intstrux_highwire_field.dialog == null) {
      if (response.iframe) {
        loading = true;
        new_content = $('<iframe id="' + response.id + '-iframe"/>').attr('src', response.data);
        new_content.load(function() {
          try {
            Drupal.intstrux_highwire_field.dialog.dialog('option', 'title', title);
          } catch(e) {}
        });
      } else {
        loading = false;
        var new_content_wrapped = $('<div></div>').html(response.data);
        new_content = new_content_wrapped.contents();

        if (new_content.length != 1 || new_content.get(0).nodeType != 1) {
          new_content = new_content_wrapped;
        }
      }
      
      var content_height = settings.height ? settings.height : 600 - 75 ;
      var content_width = settings.width ? settings.width + 'px' : 100 + '%';
      var dialog_height = settings.height ? (parseInt(settings.height) + 70) : 600;
      var dialog_width = settings.width ? (parseInt(settings.width) + 30) : 950;

      // Add the new content to the page.
      // wrapper[method](new_content);
      Drupal.intstrux_highwire_field.dialog = wrapper.dialog({
        autoOpen: true,
        height: dialog_height,
        width: dialog_width,
        modal: true,
        resizable: false,
        show: 'fade',
        hide: 'fade',
        title: loading ? 'Loading...' : title,
        dialogClass: response.id,
        open: function() {
          $(this).html(new_content);
          $(this).attr('rel', Drupal.intstrux_highwire_field.dialog_field_rel);
          new_content.attr('height', content_height - (settings.height ? 0 : 5) + 'px');
          new_content.attr('width', content_width);
        },
        close: function() {
          Drupal.intstrux_highwire_field.dialog_field_rel = null;
          Drupal.intstrux_highwire_field.dialog = null;
          $(this).remove();
        }
      });

      // Immediately hide the new content if we're using any effects.
      if (effect.showEffect != 'show') {
        new_content.hide();
      }

      // Determine which effect to use and what content will receive the
      // effect, then show the new content.
      if ($('.ajax-new-content', new_content).length > 0) {
        $('.ajax-new-content', new_content).hide();
          new_content.show();
          $('.ajax-new-content', new_content)[effect.showEffect](effect.showSpeed);
      }
      else if (effect.showEffect != 'show') {
        new_content[effect.showEffect](effect.showSpeed);
      }
  
      // Attach all JavaScript behaviors to the new content, if it was successfully
      // added to the page, this if statement allows #ajax['wrapper'] to be
      // optional.
      if (new_content.parents('html').length > 0) {
        // Apply any settings from the returned JSON if available.
        settings = response.settings || ajax.settings || Drupal.settings;
        Drupal.attachBehaviors(new_content.contents(), settings);
      }
    }
  }
  
  Drupal.ajax.prototype.commands.intstrux_ui_close_dialog = function (ajax, response, status) {
    var dialog = parent.jQuery(response.selector);
    var dialog_type = response.dialog_type;

    switch (dialog_type) {
      case 'browse':
        Drupal.intstrux_highwire_field.submit_browse(dialog.attr('rel'), response.data);
        break;
    }

    dialog.dialog('close');
  }

  
})(jQuery);
