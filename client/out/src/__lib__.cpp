#include <hxcpp.h>

#include <stdio.h>

extern "C" void __hxcpp_main();

extern "C" void __hxcpp_lib_main();

#ifndef INCLUDED_Client
#include <Client.h>
#endif


void __hxcpp_main() {
::Client_obj::main();
	}

void __hxcpp_lib_main() {
	HX_TOP_OF_STACK
	hx::Boot();
	__boot_all();
	__hxcpp_main();
	}
