#include <hxcpp.h>

#ifndef INCLUDED_Client
#include <Client.h>
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

Void Client_obj::__construct()
{
	return null();
}

//Client_obj::~Client_obj() { }

Dynamic Client_obj::__CreateEmpty() { return  new Client_obj; }
hx::ObjectPtr< Client_obj > Client_obj::__new()
{  hx::ObjectPtr< Client_obj > _result_ = new Client_obj();
	_result_->__construct();
	return _result_;}

Dynamic Client_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Client_obj > _result_ = new Client_obj();
	_result_->__construct();
	return _result_;}

Void Client_obj::main( ){
{
		HX_STACK_FRAME("Client","main",0xf3ef851c,"Client.main","Client.hx",2,0x69b39933)
		HX_STACK_LINE(3)
		::haxe::remoting::HttpAsyncConnection tmp = ::haxe::remoting::HttpAsyncConnection_obj::urlConnect(HX_HCSTRING("http://cmr1.com/haxe/","\x88","\xfa","\x22","\xfd"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3)
		::haxe::remoting::HttpAsyncConnection cnx = tmp;		HX_STACK_VAR(cnx,"cnx");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 1; }
		Void run(::String err){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Client.hx",4,0x69b39933)
			HX_STACK_ARG(err,"err")
			{
				HX_STACK_LINE(4)
				::String tmp1 = (HX_HCSTRING("Error: ","\x4e","\xa8","\x5b","\xb7") + err);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(4)
				Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("Client.hx","\x33","\x99","\xb3","\x69"),4,HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4)
				::haxe::Log_obj::trace(tmp1,tmp2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(4)
		cnx->setErrorHandler( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(5)
		::haxe::remoting::AsyncConnection tmp1 = cnx->resolve(HX_HCSTRING("Server","\xe3","\xbe","\xcb","\xa2"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(5)
		::haxe::remoting::AsyncConnection tmp2 = tmp1->resolve(HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"));		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		int __ArgCount() const { return 1; }
		Void run(::String data){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","Client.hx",5,0x69b39933)
			HX_STACK_ARG(data,"data")
			{
				HX_STACK_LINE(5)
				::String tmp3 = (HX_HCSTRING("Result: ","\xe3","\x08","\xc8","\x5a") + data);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(5)
				Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Client.hx","\x33","\x99","\xb3","\x69"),5,HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(5)
				::haxe::Log_obj::trace(tmp3,tmp4);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(5)
		tmp2->call(cpp::ArrayBase_obj::__new().Add((int)1), Dynamic(new _Function_1_2()));
		HX_STACK_LINE(6)
		::haxe::remoting::AsyncConnection tmp3 = cnx->resolve(HX_HCSTRING("Server","\xe3","\xbe","\xcb","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6)
		::haxe::remoting::AsyncConnection tmp4 = tmp3->resolve(HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"));		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
		int __ArgCount() const { return 1; }
		Void run(::String data){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","Client.hx",6,0x69b39933)
			HX_STACK_ARG(data,"data")
			{
				HX_STACK_LINE(6)
				::String tmp5 = (HX_HCSTRING("Result: ","\xe3","\x08","\xc8","\x5a") + data);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(6)
				Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Client.hx","\x33","\x99","\xb3","\x69"),6,HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(6)
				::haxe::Log_obj::trace(tmp5,tmp6);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(6)
		tmp4->call(cpp::ArrayBase_obj::__new().Add((int)3), Dynamic(new _Function_1_3()));
		HX_STACK_LINE(7)
		::haxe::remoting::AsyncConnection tmp5 = cnx->resolve(HX_HCSTRING("Server","\xe3","\xbe","\xcb","\xa2"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(7)
		::haxe::remoting::AsyncConnection tmp6 = tmp5->resolve(HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"));		HX_STACK_VAR(tmp6,"tmp6");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
		int __ArgCount() const { return 1; }
		Void run(::String data){
			HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","Client.hx",7,0x69b39933)
			HX_STACK_ARG(data,"data")
			{
				HX_STACK_LINE(7)
				::String tmp7 = (HX_HCSTRING("Result: ","\xe3","\x08","\xc8","\x5a") + data);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(7)
				Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Client.hx","\x33","\x99","\xb3","\x69"),7,HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(7)
				::haxe::Log_obj::trace(tmp7,tmp8);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(7)
		tmp6->call(cpp::ArrayBase_obj::__new().Add((int)2), Dynamic(new _Function_1_4()));
		HX_STACK_LINE(8)
		::haxe::remoting::AsyncConnection tmp7 = cnx->resolve(HX_HCSTRING("Server","\xe3","\xbe","\xcb","\xa2"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(8)
		::haxe::remoting::AsyncConnection tmp8 = tmp7->resolve(HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"));		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_5)
		int __ArgCount() const { return 1; }
		Void run(::String data){
			HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","Client.hx",8,0x69b39933)
			HX_STACK_ARG(data,"data")
			{
				HX_STACK_LINE(8)
				::String tmp9 = (HX_HCSTRING("Result: ","\xe3","\x08","\xc8","\x5a") + data);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(8)
				Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Client.hx","\x33","\x99","\xb3","\x69"),8,HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(8)
				::haxe::Log_obj::trace(tmp9,tmp10);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(8)
		tmp8->call(cpp::ArrayBase_obj::__new().Add((int)5), Dynamic(new _Function_1_5()));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Client_obj,main,(void))


Client_obj::Client_obj()
{
}

bool Client_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Client_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Client_obj::__mClass,"__mClass");
};

#endif

hx::Class Client_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Client_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Client_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Client_obj >;
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

