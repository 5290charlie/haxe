#include <hxcpp.h>

#ifndef INCLUDED_haxe_remoting_AsyncConnection
#include <haxe/remoting/AsyncConnection.h>
#endif
#ifndef INCLUDED_haxe_remoting_HttpAsyncConnection
#include <haxe/remoting/HttpAsyncConnection.h>
#endif
namespace haxe{
namespace remoting{

Void HttpAsyncConnection_obj::__construct(Dynamic data,Array< ::String > path)
{
HX_STACK_FRAME("haxe.remoting.HttpAsyncConnection","new",0x4f0e7ac1,"haxe.remoting.HttpAsyncConnection.new","/usr/local/lib/haxe/std/haxe/remoting/HttpAsyncConnection.hx",29,0xd00a5dec)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(30)
	this->__data = data;
	HX_STACK_LINE(31)
	this->__path = path;
}
;
	return null();
}

//HttpAsyncConnection_obj::~HttpAsyncConnection_obj() { }

Dynamic HttpAsyncConnection_obj::__CreateEmpty() { return  new HttpAsyncConnection_obj; }
hx::ObjectPtr< HttpAsyncConnection_obj > HttpAsyncConnection_obj::__new(Dynamic data,Array< ::String > path)
{  hx::ObjectPtr< HttpAsyncConnection_obj > _result_ = new HttpAsyncConnection_obj();
	_result_->__construct(data,path);
	return _result_;}

Dynamic HttpAsyncConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HttpAsyncConnection_obj > _result_ = new HttpAsyncConnection_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *HttpAsyncConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::AsyncConnection_obj)) return operator ::haxe::remoting::AsyncConnection_obj *();
	return super::__ToInterface(inType);
}

HttpAsyncConnection_obj::operator ::haxe::remoting::AsyncConnection_obj *()
	{ return new ::haxe::remoting::AsyncConnection_delegate_< HttpAsyncConnection_obj >(this); }
::haxe::remoting::HttpAsyncConnection HttpAsyncConnection_obj::urlConnect( ::String url){
	HX_STACK_FRAME("haxe.remoting.HttpAsyncConnection","urlConnect",0x5e0ee7fa,"haxe.remoting.HttpAsyncConnection.urlConnect","/usr/local/lib/haxe/std/haxe/remoting/HttpAsyncConnection.hx",73,0xd00a5dec)
	HX_STACK_ARG(url,"url")
	struct _Function_1_1{
		inline static Dynamic Block( ::String &url){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/local/lib/haxe/std/haxe/remoting/HttpAsyncConnection.hx",74,0xd00a5dec)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00") , url,false);

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
				int __ArgCount() const { return 1; }
				Void run(Dynamic e){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","/usr/local/lib/haxe/std/haxe/remoting/HttpAsyncConnection.hx",74,0xd00a5dec)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(74)
						Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(74)
						HX_STACK_DO_THROW(tmp);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") ,  Dynamic(new _Function_2_1()),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(74)
	Dynamic tmp = _Function_1_1::Block(url);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::haxe::remoting::HttpAsyncConnection tmp1 = ::haxe::remoting::HttpAsyncConnection_obj::__new(tmp,Array_obj< ::String >::__new());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HttpAsyncConnection_obj,urlConnect,return )


HttpAsyncConnection_obj::HttpAsyncConnection_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void HttpAsyncConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HttpAsyncConnection);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_MEMBER_NAME(__path,"__path");
	HX_MARK_END_CLASS();
}

void HttpAsyncConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__data,"__data");
	HX_VISIT_MEMBER_NAME(__path,"__path");
}

Dynamic HttpAsyncConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		if (HX_FIELD_EQ(inName,"__path") ) { return __path; }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool HttpAsyncConnection_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"urlConnect") ) { outValue = urlConnect_dyn(); return true;  }
	}
	return false;
}

Dynamic HttpAsyncConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__path") ) { __path=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void HttpAsyncConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(HttpAsyncConnection_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(HttpAsyncConnection_obj,__path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HttpAsyncConnection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HttpAsyncConnection_obj::__mClass,"__mClass");
};

#endif

hx::Class HttpAsyncConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("urlConnect","\x3b","\x14","\xa3","\xd5"),
	::String(null()) };

void HttpAsyncConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.remoting.HttpAsyncConnection","\x4f","\x06","\x30","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HttpAsyncConnection_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HttpAsyncConnection_obj >;
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

} // end namespace haxe
} // end namespace remoting
