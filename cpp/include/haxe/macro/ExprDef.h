// Generated by Haxe 4.2.1
#ifndef INCLUDED_haxe_macro_ExprDef
#define INCLUDED_haxe_macro_ExprDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Binop)
HX_DECLARE_CLASS2(haxe,macro,ComplexType)
HX_DECLARE_CLASS2(haxe,macro,Constant)
HX_DECLARE_CLASS2(haxe,macro,DisplayKind)
HX_DECLARE_CLASS2(haxe,macro,ExprDef)
HX_DECLARE_CLASS2(haxe,macro,FunctionKind)
HX_DECLARE_CLASS2(haxe,macro,Unop)
namespace haxe{
namespace macro{


class ExprDef_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ExprDef_obj OBJ_;

	public:
		ExprDef_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.macro.ExprDef",c6,4e,ed,01); }
		::String __ToString() const { return HX_("ExprDef.",be,76,8e,81) + _hx_tag; }

		static ::haxe::macro::ExprDef EArray( ::Dynamic e1, ::Dynamic e2);
		static ::Dynamic EArray_dyn();
		static ::haxe::macro::ExprDef EArrayDecl(::Array< ::Dynamic> values);
		static ::Dynamic EArrayDecl_dyn();
		static ::haxe::macro::ExprDef EBinop( ::haxe::macro::Binop op, ::Dynamic e1, ::Dynamic e2);
		static ::Dynamic EBinop_dyn();
		static ::haxe::macro::ExprDef EBlock(::Array< ::Dynamic> exprs);
		static ::Dynamic EBlock_dyn();
		static ::haxe::macro::ExprDef EBreak;
		static inline ::haxe::macro::ExprDef EBreak_dyn() { return EBreak; }
		static ::haxe::macro::ExprDef ECall( ::Dynamic e,::Array< ::Dynamic> params);
		static ::Dynamic ECall_dyn();
		static ::haxe::macro::ExprDef ECast( ::Dynamic e, ::haxe::macro::ComplexType t);
		static ::Dynamic ECast_dyn();
		static ::haxe::macro::ExprDef ECheckType( ::Dynamic e, ::haxe::macro::ComplexType t);
		static ::Dynamic ECheckType_dyn();
		static ::haxe::macro::ExprDef EConst( ::haxe::macro::Constant c);
		static ::Dynamic EConst_dyn();
		static ::haxe::macro::ExprDef EContinue;
		static inline ::haxe::macro::ExprDef EContinue_dyn() { return EContinue; }
		static ::haxe::macro::ExprDef EDisplay( ::Dynamic e, ::haxe::macro::DisplayKind displayKind);
		static ::Dynamic EDisplay_dyn();
		static ::haxe::macro::ExprDef EDisplayNew( ::Dynamic t);
		static ::Dynamic EDisplayNew_dyn();
		static ::haxe::macro::ExprDef EField( ::Dynamic e,::String field);
		static ::Dynamic EField_dyn();
		static ::haxe::macro::ExprDef EFor( ::Dynamic it, ::Dynamic expr);
		static ::Dynamic EFor_dyn();
		static ::haxe::macro::ExprDef EFunction( ::haxe::macro::FunctionKind kind, ::Dynamic f);
		static ::Dynamic EFunction_dyn();
		static ::haxe::macro::ExprDef EIf( ::Dynamic econd, ::Dynamic eif, ::Dynamic eelse);
		static ::Dynamic EIf_dyn();
		static ::haxe::macro::ExprDef EIs( ::Dynamic e, ::haxe::macro::ComplexType t);
		static ::Dynamic EIs_dyn();
		static ::haxe::macro::ExprDef EMeta( ::Dynamic s, ::Dynamic e);
		static ::Dynamic EMeta_dyn();
		static ::haxe::macro::ExprDef ENew( ::Dynamic t,::Array< ::Dynamic> params);
		static ::Dynamic ENew_dyn();
		static ::haxe::macro::ExprDef EObjectDecl(::Array< ::Dynamic> fields);
		static ::Dynamic EObjectDecl_dyn();
		static ::haxe::macro::ExprDef EParenthesis( ::Dynamic e);
		static ::Dynamic EParenthesis_dyn();
		static ::haxe::macro::ExprDef EReturn( ::Dynamic e);
		static ::Dynamic EReturn_dyn();
		static ::haxe::macro::ExprDef ESwitch( ::Dynamic e,::Array< ::Dynamic> cases, ::Dynamic edef);
		static ::Dynamic ESwitch_dyn();
		static ::haxe::macro::ExprDef ETernary( ::Dynamic econd, ::Dynamic eif, ::Dynamic eelse);
		static ::Dynamic ETernary_dyn();
		static ::haxe::macro::ExprDef EThrow( ::Dynamic e);
		static ::Dynamic EThrow_dyn();
		static ::haxe::macro::ExprDef ETry( ::Dynamic e,::Array< ::Dynamic> catches);
		static ::Dynamic ETry_dyn();
		static ::haxe::macro::ExprDef EUnop( ::haxe::macro::Unop op,bool postFix, ::Dynamic e);
		static ::Dynamic EUnop_dyn();
		static ::haxe::macro::ExprDef EUntyped( ::Dynamic e);
		static ::Dynamic EUntyped_dyn();
		static ::haxe::macro::ExprDef EVars(::Array< ::Dynamic> vars);
		static ::Dynamic EVars_dyn();
		static ::haxe::macro::ExprDef EWhile( ::Dynamic econd, ::Dynamic e,bool normalWhile);
		static ::Dynamic EWhile_dyn();
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_ExprDef */ 