#ifndef INCLUDED_Type
#define INCLUDED_Type

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Type)
HX_DECLARE_CLASS0(ValueType)


class HXCPP_CLASS_ATTRIBUTES  Type_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Type_obj OBJ_;
		Type_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Type")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Type_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Type_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Type","\xda","\x1e","\xe2","\x37"); }

		static ::String getClassName( ::hx::Class c);
		static Dynamic getClassName_dyn();

		static ::String getEnumName( ::Enum e);
		static Dynamic getEnumName_dyn();

		static ::hx::Class resolveClass( ::String name);
		static Dynamic resolveClass_dyn();

		static ::Enum resolveEnum( ::String name);
		static Dynamic resolveEnum_dyn();

		static Dynamic createEmptyInstance( ::hx::Class cl);
		static Dynamic createEmptyInstance_dyn();

		static Dynamic createEnum( ::Enum e,::String constr,cpp::ArrayBase params);
		static Dynamic createEnum_dyn();

		static Array< ::String > getEnumConstructs( ::Enum e);
		static Dynamic getEnumConstructs_dyn();

		static ::ValueType _typeof( Dynamic v);
		static Dynamic _typeof_dyn();

};


#endif /* INCLUDED_Type */ 
