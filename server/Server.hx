class Server {
    static var high_score:Int = 0;

    function new() { }
    function foo(x, y) { return x + y; }
    function submit(score:Int):String {
      if (score > high_score) {
        high_score = score;
        return "New High Score!";
      } else {
        return "Keep Trying!";
      }
    }

    static function main() {
        var ctx = new haxe.remoting.Context();
        ctx.addObject("Server", new Server());

        if(haxe.remoting.HttpConnection.handleRequest(ctx))
        {
            return;
        }

        // handle normal request
        trace("This is a remoting server !");
    }
}
