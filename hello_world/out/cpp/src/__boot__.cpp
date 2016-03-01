#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_remoting_HttpAsyncConnection
#include <haxe/remoting/HttpAsyncConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_HelloWorld
#include <HelloWorld.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::haxe::Log_obj::__register();
::haxe::remoting::HttpAsyncConnection_obj::__register();
::haxe::remoting::AsyncConnection_obj::__register();
::haxe::io::Eof_obj::__register();
::Std_obj::__register();
::HelloWorld_obj::__register();
::haxe::Log_obj::__boot();
}

