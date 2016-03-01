class HelloWorld {
  static public function main() {
    trace("Hello World");
    trace(haxe.remoting.HttpAsyncConnection.urlConnect("http://localhost:3000/api/pipeline_deals/test"));
  }
}
