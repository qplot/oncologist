/**
 * @author Boarder
 */
 
 //console.log('remoteproxy');
 // CacheManager class
function RemoteProxy(){
	
	
};


// public methods
RemoteProxy.prototype.remoteFunctionCall = function(remotefunctionname, args, callback, cached) {
	if(typeof cached=="undefined")
		cached = true;
		
	var _this = this;
	
	this.onRemoteFunctionCallCacheCheck(remotefunctionname, args, null, callback);
	
};

RemoteProxy.prototype.onRemoteFunctionCallCacheCheck = function(remotefunctionname, args, result, callback) {
	
	if(result != null) {

		//$.log('Cached version served', remotefunctionname, args);

		callback(remotefunctionname, args, result);


	} else {

		//$.log('Loading from server', remotefunctionname, args);

		var me = this;

		//TODO: check if the app is online

		Drupal.service(	remotefunctionname,
						args, 
						function(status, data) {

			if(status == false) {
				//error handling here
				//$.log('Loading from server ERROR', status, data);
				callback(remotefunctionname, args, {}, "Error in RPC call");
			} else {

				
				callback(remotefunctionname, args, data);
			}
		});
	}
	
}

