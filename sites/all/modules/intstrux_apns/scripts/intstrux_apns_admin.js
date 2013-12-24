(function ($) {

  function updateFilter(){
     if($("#edit-step1-mode-test").is(':checked')){
        $("#edit-filter-dev").show();
       }
      else{
        $("#edit-filter-dev").hide();
       }

      if($("#edit-filter-byedition").is(':checked')){
        $("#edit-filter-edition").parent().show();
      }
      else{
        $("#edit-filter-edition").parent().hide();
      }

      if($("#edit-filter-bysection").is(':checked')){
        $("#edit-filter-section").parent().show();
      }
      else{
        $("#edit-filter-section").parent().hide();
      }

  }

  $(document).ready(function(){
   
    $("#edit-step1-mode-test").change(function() {
       updateFilter();
    });

    $("#edit-step1-mode-full").change(function() {
       updateFilter();
    });

    $("#edit-filter-byedition").change(function() {
       updateFilter();
    });
    
     $("#edit-filter-bysection").change(function() {
       updateFilter();
    });

    $( "#intstrux-apns-mass-push-form" ).submit(function( event ) {
      
      var r=confirm("Are you want to send this APNS?");
      if (!r){
        event.preventDefault();
      }
    });

    updateFilter();

  });  
})(jQuery);