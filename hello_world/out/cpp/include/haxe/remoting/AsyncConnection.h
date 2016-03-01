#ifndef INCLUDED_haxe_remoting_AsyncConnection
#define INCLUDED_haxe_remoting_AsyncConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,remoting,AsyncConnection)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  AsyncConnection_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AsyncConnection_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
};



template<typename IMPL>
class AsyncConnection_delegate_ : public AsyncConnection_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AsyncConnection_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_AsyncConnection */ 
