(function($){
  /**
   * Hide submit button in select widget facet.
   **/
  Drupal.behaviors.ChosenHideSubmit = {
  attach: function(context) {
    $('.chosen-select-facet input.ctools-auto-submit-click:not(.chosen-hide-submit-processed)', context)
    .addClass('chosen-hide-submit-processed').hide();
  }}

})(jQuery);
