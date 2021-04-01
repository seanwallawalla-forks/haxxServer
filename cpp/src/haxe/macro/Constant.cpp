// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Constant
#include <haxe/macro/Constant.h>
#endif
#ifndef INCLUDED_haxe_macro_StringLiteralKind
#include <haxe/macro/StringLiteralKind.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::Constant Constant_obj::CFloat(::String f)
{
	return ::hx::CreateEnum< Constant_obj >(HX_("CFloat",59,62,ad,5f),1,1)->_hx_init(0,f);
}

::haxe::macro::Constant Constant_obj::CIdent(::String s)
{
	return ::hx::CreateEnum< Constant_obj >(HX_("CIdent",ad,df,8f,14),3,1)->_hx_init(0,s);
}

::haxe::macro::Constant Constant_obj::CInt(::String v)
{
	return ::hx::CreateEnum< Constant_obj >(HX_("CInt",6c,10,81,2c),0,1)->_hx_init(0,v);
}

::haxe::macro::Constant Constant_obj::CRegexp(::String r,::String opt)
{
	return ::hx::CreateEnum< Constant_obj >(HX_("CRegexp",6c,48,3c,17),4,2)->_hx_init(0,r)->_hx_init(1,opt);
}

::haxe::macro::Constant Constant_obj::CString(::String s, ::haxe::macro::StringLiteralKind kind)
{
	return ::hx::CreateEnum< Constant_obj >(HX_("CString",74,b1,e2,27),2,2)->_hx_init(0,s)->_hx_init(1,kind);
}

bool Constant_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CFloat",59,62,ad,5f)) { outValue = Constant_obj::CFloat_dyn(); return true; }
	if (inName==HX_("CIdent",ad,df,8f,14)) { outValue = Constant_obj::CIdent_dyn(); return true; }
	if (inName==HX_("CInt",6c,10,81,2c)) { outValue = Constant_obj::CInt_dyn(); return true; }
	if (inName==HX_("CRegexp",6c,48,3c,17)) { outValue = Constant_obj::CRegexp_dyn(); return true; }
	if (inName==HX_("CString",74,b1,e2,27)) { outValue = Constant_obj::CString_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Constant_obj)

int Constant_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CFloat",59,62,ad,5f)) return 1;
	if (inName==HX_("CIdent",ad,df,8f,14)) return 3;
	if (inName==HX_("CInt",6c,10,81,2c)) return 0;
	if (inName==HX_("CRegexp",6c,48,3c,17)) return 4;
	if (inName==HX_("CString",74,b1,e2,27)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Constant_obj,CFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Constant_obj,CIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Constant_obj,CInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Constant_obj,CRegexp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Constant_obj,CString,return)

int Constant_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CFloat",59,62,ad,5f)) return 1;
	if (inName==HX_("CIdent",ad,df,8f,14)) return 1;
	if (inName==HX_("CInt",6c,10,81,2c)) return 1;
	if (inName==HX_("CRegexp",6c,48,3c,17)) return 2;
	if (inName==HX_("CString",74,b1,e2,27)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val Constant_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CFloat",59,62,ad,5f)) return CFloat_dyn();
	if (inName==HX_("CIdent",ad,df,8f,14)) return CIdent_dyn();
	if (inName==HX_("CInt",6c,10,81,2c)) return CInt_dyn();
	if (inName==HX_("CRegexp",6c,48,3c,17)) return CRegexp_dyn();
	if (inName==HX_("CString",74,b1,e2,27)) return CString_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Constant_obj_sStaticFields[] = {
	HX_("CInt",6c,10,81,2c),
	HX_("CFloat",59,62,ad,5f),
	HX_("CString",74,b1,e2,27),
	HX_("CIdent",ad,df,8f,14),
	HX_("CRegexp",6c,48,3c,17),
	::String(null())
};

::hx::Class Constant_obj::__mClass;

Dynamic __Create_Constant_obj() { return new Constant_obj; }

void Constant_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.macro.Constant",6e,a5,78,ab), ::hx::TCanCast< Constant_obj >,Constant_obj_sStaticFields,0,
	&__Create_Constant_obj, &__Create,
	&super::__SGetClass(), &CreateConstant_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Constant_obj::__GetStatic;
}

void Constant_obj::__boot()
{
}


} // end namespace haxe
} // end namespace macro
