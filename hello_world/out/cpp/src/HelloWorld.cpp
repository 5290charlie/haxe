#include <hxcpp.h>

#ifndef INCLUDED_HelloWorld
#include <HelloWorld.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_HttpAsyncConnection
#include <haxe/remoting/HttpAsyncConnection.h>
#endif

Void HelloWorld_obj::__construct()
{
	return null();
}

//HelloWorld_obj::~HelloWorld_obj() { }

Dynamic HelloWorld_obj::__CreateEmpty() { return  new HelloWorld_obj; }
hx::ObjectPtr< HelloWorld_obj > HelloWorld_obj::__new()
{  hx::ObjectPtr< HelloWorld_obj > _result_ = new HelloWorld_obj();
	_result_->__construct();
	return _result_;}

Dynamic HelloWorld_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HelloWorld_obj > _result_ = new HelloWorld_obj();
	_result_->__construct();
	return _result_;}

Void HelloWorld_obj::main( ){
{
		HX_STACK_FRAME("HelloWorld","main",0x5383b167,"HelloWorld.main","HelloWorld.hx",2,0x00bb8cbe)
		HX_STACK_LINE(3)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("HelloWorld.hx","\xbe","\x8c","\xbb","\x00"),3,HX_HCSTRING("HelloWorld","\x00","\x76","\xb5","\xbd"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3)
		::haxe::Log_obj::trace(HX_HCSTRING("Hello World","\x84","\xf6","\xdb","\x6f"),tmp);
		HX_STACK_LINE(4)
		::haxe::remoting::HttpAsyncConnection tmp1 = ::haxe::remoting::HttpAsyncConnection_obj::urlConnect(HX_HCSTRING("http://localhost:3000/api/pipeline_deals/test","\xc9","\xa0","\xc5","\xe6"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("HelloWorld.hx","\xbe","\x8c","\xbb","\x00"),4,HX_HCSTRING("HelloWorld","\x00","\x76","\xb5","\xbd"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(4)
		::haxe::Log_obj::trace(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HelloWorld_obj,main,(void))


HelloWorld_obj::HelloWorld_obj()
{
}

bool HelloWorld_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HelloWorld_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HelloWorld_obj::__mClass,"__mClass");
};

#endif

hx::Class HelloWorld_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void HelloWorld_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("HelloWorld","\x00","\x76","\xb5","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HelloWorld_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HelloWorld_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

