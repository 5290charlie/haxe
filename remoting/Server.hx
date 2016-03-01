// file Server.hx
class Server {
    static function main() {
        var s = new sys.net.Socket();
        s.bind(new sys.net.Host("localhost"),5000);
        s.listen(2);
        trace("Starting server...");
        while( true ) {
            var c : sys.net.Socket = s.accept();
            trace("Client connected...");
            c.write("hello\n");
            c.write("your IP is "+c.peer().host.toString()+"\n");
            c.write("your dumb\n");
            c.write("exit");
            c.close();
        }
    }
}
