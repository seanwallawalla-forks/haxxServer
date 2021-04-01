// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_markdown_AutolinkSyntax
#include <markdown/AutolinkSyntax.h>
#endif
#ifndef INCLUDED_markdown_ElementNode
#include <markdown/ElementNode.h>
#endif
#ifndef INCLUDED_markdown_InlineParser
#include <markdown/InlineParser.h>
#endif
#ifndef INCLUDED_markdown_InlineSyntax
#include <markdown/InlineSyntax.h>
#endif
#ifndef INCLUDED_markdown_Node
#include <markdown/Node.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45d3b7362b17a2dd_248_new,"markdown.AutolinkSyntax","new",0x5ab2835d,"markdown.AutolinkSyntax.new","markdown/InlineParser.hx",248,0xf7baa326)
HX_LOCAL_STACK_FRAME(_hx_pos_45d3b7362b17a2dd_251_onMatch,"markdown.AutolinkSyntax","onMatch",0x7a615d23,"markdown.AutolinkSyntax.onMatch","markdown/InlineParser.hx",251,0xf7baa326)
namespace markdown{

void AutolinkSyntax_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_45d3b7362b17a2dd_248_new)
HXDLIN( 248)		super::__construct(HX_("<((http|https|ftp)://[^>]*)>",f3,39,11,15));
            	}

Dynamic AutolinkSyntax_obj::__CreateEmpty() { return new AutolinkSyntax_obj; }

void *AutolinkSyntax_obj::_hx_vtable = 0;

Dynamic AutolinkSyntax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AutolinkSyntax_obj > _hx_result = new AutolinkSyntax_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AutolinkSyntax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b9dae1f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b9dae1f;
	} else {
		return inClassId==(int)0x0c65d26b;
	}
}

bool AutolinkSyntax_obj::onMatch( ::markdown::InlineParser parser){
            	HX_STACKFRAME(&_hx_pos_45d3b7362b17a2dd_251_onMatch)
HXLINE( 252)		::String url = this->pattern->matched(1);
HXLINE( 254)		 ::markdown::ElementNode anchor = ::markdown::ElementNode_obj::text(HX_("a",61,00,00,00),::StringTools_obj::htmlEscape(url,null()));
HXLINE( 255)		anchor->attributes->set(HX_("href",eb,09,15,45),url);
HXLINE( 256)		parser->addNode(anchor);
HXLINE( 258)		return true;
            	}



::hx::ObjectPtr< AutolinkSyntax_obj > AutolinkSyntax_obj::__new() {
	::hx::ObjectPtr< AutolinkSyntax_obj > __this = new AutolinkSyntax_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AutolinkSyntax_obj > AutolinkSyntax_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AutolinkSyntax_obj *__this = (AutolinkSyntax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AutolinkSyntax_obj), true, "markdown.AutolinkSyntax"));
	*(void **)__this = AutolinkSyntax_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AutolinkSyntax_obj::AutolinkSyntax_obj()
{
}

::hx::Val AutolinkSyntax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onMatch") ) { return ::hx::Val( onMatch_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AutolinkSyntax_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AutolinkSyntax_obj_sStaticStorageInfo = 0;
#endif

static ::String AutolinkSyntax_obj_sMemberFields[] = {
	HX_("onMatch",a6,e7,60,99),
	::String(null()) };

::hx::Class AutolinkSyntax_obj::__mClass;

void AutolinkSyntax_obj::__register()
{
	AutolinkSyntax_obj _hx_dummy;
	AutolinkSyntax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("markdown.AutolinkSyntax",eb,90,44,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AutolinkSyntax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AutolinkSyntax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AutolinkSyntax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AutolinkSyntax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace markdown