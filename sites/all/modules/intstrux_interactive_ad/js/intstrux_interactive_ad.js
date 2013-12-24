
(function ($) {
  Drupal.behaviors.intstruxInteractiveAd = {
    attach: function (context) {
      
      if($('#edit-field-active-ad-video-ads').length > 0) {
        $('#edit-field-active-ad-video-ads').hide();
        if($('#edit-field-active-ad-have-video-und:checked').length > 0) {
          $('#edit-field-active-ad-video-ads').show();
        }
      }
      
      if($('#edit-field-active-ad-have-video-und').length > 0) {
        $('#edit-field-active-ad-have-video-und').click(function(){
          if(this.checked) {
              $('#edit-field-active-ad-video-ads').show();
          } else {
            var con = window.confirm('All videos will be cleared. Are you sure you want to proceed?');
              
            if(con) {
              // hide video ad container
              $('#edit-field-active-ad-video-ads').hide();
              // remove table container
              $('#edit-field-active-ad-video-ads-und-table').remove();
            }
          }
        });
      }
      
    }
  };
})(jQuery);