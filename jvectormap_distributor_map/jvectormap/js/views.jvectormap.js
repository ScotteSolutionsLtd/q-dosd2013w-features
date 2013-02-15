/*
* Format the vector map.
*
*/

(function ($) {
  Drupal.behaviors.addGMapMultiLocation = {
    attach: function (context, settings) {

      function getMapColors(mapId){
        return Drupal.settings.Jvectormap.colormap;
      }
    
      $(document).ready(function() {
          

        //                onRegionClick: function(event, code){
        //                    
        //                    if (!(code in cmapColordata)){
        //                        
        //                    } else {
        //                        if (!(haltClick)){
        //                            window.location.href = 'partners/' + code;
        //                        } else {
        //                            haltClick = false
        //                        }
        //                        
        //                    }
        //                    haltClick = false;
        //                }
        //            });
        //        
        //            // Click the zoom, once enabled
        //            $('.jvectormap-zoomin').click();
        //            
        //            // Disable the context menu
                    $('#cmap').bind("contextmenu",function(e){
                        return false;
                    });
					pathArray = window.location.href.split( '/' );
 host = 'usa-distributors';
 testin = jQuery.inArray(host, pathArray);
		if (testin > 0) {
		  usemap = 'us_en';
		} else {
		  usemap = 'world_en';
		}
        $('[id^=jvectormap]').vectorMap({
          map: usemap,
          colors: Drupal.settings.Jvectormap.colormap,
          color: Drupal.settings.Jvectormap.map.color, 
          backgroundColor: Drupal.settings.Jvectormap.map.backgroundColor,
          //values: gdpData,
          //scaleColors: ['#C8EEFF', '#0071A4'],
          normalizeFunction: 'linear',
          hoverOpacity: 0.5,
          hoverColor: false,
          onLabelShow: function(event, label, code){
            if (!(code in Drupal.settings.Jvectormap.colormap)){
              var country = label.text();
              label.text(Drupal.settings.Jvectormap.map.emptyHover);
            } else {
              console.log(label);
            }
          },
          onRegionOver: function(event, code){
            if (!(code in Drupal.settings.Jvectormap.colormap)){
              event.preventDefault();
            }
          },
          onRegionClick: function(event, code){
					haltClick = false;
						if (!(code in Drupal.settings.Jvectormap.colormap)){
                               
            } else {
              if (!(haltClick)){
						
							country = code.substr(0,2);
							state = code.substr(3,4);

			  if ((country == 'US') && (state.length < 1)) {
			    window.location.href = 'usa-distributors';
              } else {

				  $('html, body').animate({scrollTop:240}, 1100);
				  document.getElementById('block-block-21').innerHTML = '<div id="dealer-wrapper"><div class="dealer-heading">GEOBLASTER&reg; Distributor</div><h2 class="dealers">' + Drupal.settings.Jvectormap.data[code].cLink + '</h2></div>' + Drupal.settings.Jvectormap.data[code].cTitle;
				  $("div.col-1").fadeIn(700);
			  }
              } else {
                haltClick = false;
              }
                                
            }
            haltClick = false;
          }  
        });
        $('[id^=jvectormap]').bind("contextmenu",function(e){
          return false;
        });
            
      });

    }
  }
})(jQuery);