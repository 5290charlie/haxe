class Client {
  static function main() {
    var cnx = haxe.remoting.HttpAsyncConnection.urlConnect("http://cmr1.com/haxe/");
    cnx.setErrorHandler( function(err) { trace('Error: $err'); } );
    cnx.Server.submit.call([1], function(data) { trace('Result: $data'); } );
    cnx.Server.submit.call([3], function(data) { trace('Result: $data'); } );
    cnx.Server.submit.call([2], function(data) { trace('Result: $data'); } );
    cnx.Server.submit.call([5], function(data) { trace('Result: $data'); } );
  }
}
