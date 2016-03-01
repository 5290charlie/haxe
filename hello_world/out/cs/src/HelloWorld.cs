
#pragma warning disable 109, 114, 219, 429, 168, 162
public class HelloWorld : global::haxe.lang.HxObject {
	
	public static void Main(){
		global::cs.Boot.init();
		main();
	}
	public HelloWorld(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public HelloWorld() {
		global::HelloWorld.__hx_ctor__HelloWorld(this);
	}
	
	
	public static void __hx_ctor__HelloWorld(global::HelloWorld __temp_me7) {
	}
	
	
	public static void main() {
		unchecked {
			global::haxe.Log.trace.__hx_invoke2_o(default(double), "Hello World", default(double), new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"main", "HelloWorld", "HelloWorld.hx"}, new int[]{1981972957}, new double[]{((double) (3) )}));
		}
	}
	
	
	public static new object __hx_createEmpty() {
		return new global::HelloWorld(global::haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static new object __hx_create(global::Array arr) {
		return new global::HelloWorld();
	}
	
	
}


