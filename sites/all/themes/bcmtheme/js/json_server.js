//$Id: json_server.js,v 1.2.4.2 2010/05/04 20:04:26 skyredwang Exp $
var Drupal = Drupal || {};

/**
 * Set the variable that indicates if JavaScript behaviors should be applied
 */
Drupal.jsEnabled = document.getElementsByTagName && document.createElement && document.createTextNode && document.documentElement && document.getElementById;

/**
 * Extends the current object with the parameter. Works recursively.
 */
Drupal.extend = function(obj) {
  for (var i in obj) {
    if (this[i]) {
      Drupal.extend.apply(this[i], [obj[i]]);
    }
    else {
      this[i] = obj[i];
    }
  }
};


/**
 *  Convert a variable to a json string.
 */
Drupal.toJson = function(v) {
  
  var type = typeof v;
  if (type == 'object')
    type = v.constructor.toString().indexOf("Array") == -1 ? 'object' : 'array';
  
  switch (type) {
    case 'boolean':
      return v == true ? 'TRUE' : 'FALSE';
    case 'number':
      return v;
    case 'string':
      return '"'+ v.replace(/["]/g,'&quot;').replace(/[\n]/g,'<br>').replace(/[\\]/g,'') +'"';
    case 'object':
      var output = "{";
      for(i in v) {
        output = output + "\""+i + "\":" + Drupal.toJson(v[i]) + ",";
      }
      if (output[output.length - 1] == ',') {
            output = output.substring(0, output.length - 1);
          }
      output = output + "}";
      return output;
  case 'array':
      var output = '';
      items = new Array();
      for(i in v) {
        items[i] = Drupal.toJson(v[i]);        
      }
      output = "[" + items.join(",") + "]";
       return output;
    default:
      return 'null';
  }
};

Drupal.parseJson = function (data) {
	  if ((data.substring(0, 1) != '{') && (data.substring(0, 1) != '[')) {
	    return { status: 0, data: data.length ? data : 'Unspecified error' };
	  }
	  
	  return eval('(' + data + ');');
	};

/**
 *  A JavaScript implementation for interacting with services.
 */
Drupal.service = function(service_method, args, success) {
  args = $.extend({method: service_method}, args);
  args_done = {};
  for(i in args) {
    args_done[i] = Drupal.toJson(args[i]);
  }
  
  var url = window.location.href
  var arr = url.split("/");
  
  var server = arr[0] + "//" + arr[2] + "?q=services/json";
  
  $.post(server, args_done, function(unparsed_data) {
    parsed_data = Drupal.parseJson(unparsed_data);
    success(!parsed_data['#error'], parsed_data['#data']);
  });
};

