// Compile __main__.as instead
package  {
	import haxe.Log;
	public class HelloWorld {
		static public function main() : void {
			(haxe.Log._trace)("Hello World",{ fileName : "HelloWorld.hx", lineNumber : 3, className : "HelloWorld", methodName : "main"});
		}
		
	}
}
