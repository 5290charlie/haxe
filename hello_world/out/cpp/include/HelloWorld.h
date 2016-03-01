#ifndef INCLUDED_HelloWorld
#define INCLUDED_HelloWorld

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(HelloWorld)


class HXCPP_CLASS_ATTRIBUTES  HelloWorld_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HelloWorld_obj OBJ_;
		HelloWorld_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="HelloWorld")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HelloWorld_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HelloWorld_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HelloWorld","\x00","\x76","\xb5","\xbd"); }

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_HelloWorld */ 
