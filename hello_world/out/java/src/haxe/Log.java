package haxe;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Log extends haxe.lang.HxObject
{
	static
	{
		//line 45 "/usr/local/lib/haxe/std/haxe/Log.hx"
		haxe.Log.trace = ( (( haxe.Log_Anon_45__Fun.__hx_current != null )) ? (haxe.Log_Anon_45__Fun.__hx_current) : (haxe.Log_Anon_45__Fun.__hx_current = ((haxe.Log_Anon_45__Fun) (new haxe.Log_Anon_45__Fun()) )) );
	}
	
	public Log(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Log()
	{
		//line 28 "/usr/local/lib/haxe/std/haxe/Log.hx"
		haxe.Log.__hx_ctor_haxe_Log(this);
	}
	
	
	public static void __hx_ctor_haxe_Log(haxe.Log __temp_me7)
	{
	}
	
	
	public static haxe.lang.Function trace;
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 28 "/usr/local/lib/haxe/std/haxe/Log.hx"
		return new haxe.Log(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 28 "/usr/local/lib/haxe/std/haxe/Log.hx"
		return new haxe.Log();
	}
	
	
}


