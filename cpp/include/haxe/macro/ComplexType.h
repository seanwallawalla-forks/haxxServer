// Generated by Haxe 4.2.1
#ifndef INCLUDED_haxe_macro_ComplexType
#define INCLUDED_haxe_macro_ComplexType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ComplexType)
namespace haxe{
namespace macro{


class ComplexType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ComplexType_obj OBJ_;

	public:
		ComplexType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.macro.ComplexType",40,1b,e2,a3); }
		::String __ToString() const { return HX_("ComplexType.",04,58,e9,70) + _hx_tag; }

		static ::haxe::macro::ComplexType TAnonymous(::Array< ::Dynamic> fields);
		static ::Dynamic TAnonymous_dyn();
		static ::haxe::macro::ComplexType TExtend(::Array< ::Dynamic> p,::Array< ::Dynamic> fields);
		static ::Dynamic TExtend_dyn();
		static ::haxe::macro::ComplexType TFunction(::Array< ::Dynamic> args, ::haxe::macro::ComplexType ret);
		static ::Dynamic TFunction_dyn();
		static ::haxe::macro::ComplexType TIntersection(::Array< ::Dynamic> tl);
		static ::Dynamic TIntersection_dyn();
		static ::haxe::macro::ComplexType TNamed(::String n, ::haxe::macro::ComplexType t);
		static ::Dynamic TNamed_dyn();
		static ::haxe::macro::ComplexType TOptional( ::haxe::macro::ComplexType t);
		static ::Dynamic TOptional_dyn();
		static ::haxe::macro::ComplexType TParent( ::haxe::macro::ComplexType t);
		static ::Dynamic TParent_dyn();
		static ::haxe::macro::ComplexType TPath( ::Dynamic p);
		static ::Dynamic TPath_dyn();
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_ComplexType */ 
