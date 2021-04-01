// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
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
#ifndef INCLUDED_markdown_TextNode
#include <markdown/TextNode.h>
#endif
#ifndef INCLUDED_markdown_TextSyntax
#include <markdown/TextSyntax.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f652302720950938_224_new,"markdown.TextSyntax","new",0xa2c806a1,"markdown.TextSyntax.new","markdown/InlineParser.hx",224,0xf7baa326)
HX_LOCAL_STACK_FRAME(_hx_pos_f652302720950938_229_onMatch,"markdown.TextSyntax","onMatch",0x9633d267,"markdown.TextSyntax.onMatch","markdown/InlineParser.hx",229,0xf7baa326)
namespace markdown{

void TextSyntax_obj::__construct(::String pattern,::String substitute){
            	HX_STACKFRAME(&_hx_pos_f652302720950938_224_new)
HXLINE( 225)		super::__construct(pattern);
HXLINE( 226)		this->substitute = substitute;
            	}

Dynamic TextSyntax_obj::__CreateEmpty() { return new TextSyntax_obj; }

void *TextSyntax_obj::_hx_vtable = 0;

Dynamic TextSyntax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextSyntax_obj > _hx_result = new TextSyntax_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TextSyntax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c65d26b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c65d26b;
	} else {
		return inClassId==(int)0x3df529ff;
	}
}

bool TextSyntax_obj::onMatch( ::markdown::InlineParser parser){
            	HX_STACKFRAME(&_hx_pos_f652302720950938_229_onMatch)
HXLINE( 230)		if (::hx::IsNull( this->substitute )) {
HXLINE( 232)			parser->advanceBy(this->pattern->matched(0).length);
HXLINE( 233)			return false;
            		}
HXLINE( 237)		parser->addNode(parser->createText(this->substitute));
HXLINE( 238)		return true;
            	}



::hx::ObjectPtr< TextSyntax_obj > TextSyntax_obj::__new(::String pattern,::String substitute) {
	::hx::ObjectPtr< TextSyntax_obj > __this = new TextSyntax_obj();
	__this->__construct(pattern,substitute);
	return __this;
}

::hx::ObjectPtr< TextSyntax_obj > TextSyntax_obj::__alloc(::hx::Ctx *_hx_ctx,::String pattern,::String substitute) {
	TextSyntax_obj *__this = (TextSyntax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextSyntax_obj), true, "markdown.TextSyntax"));
	*(void **)__this = TextSyntax_obj::_hx_vtable;
	__this->__construct(pattern,substitute);
	return __this;
}

TextSyntax_obj::TextSyntax_obj()
{
}

void TextSyntax_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextSyntax);
	HX_MARK_MEMBER_NAME(substitute,"substitute");
	 ::markdown::InlineSyntax_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextSyntax_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(substitute,"substitute");
	 ::markdown::InlineSyntax_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextSyntax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onMatch") ) { return ::hx::Val( onMatch_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"substitute") ) { return ::hx::Val( substitute ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextSyntax_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"substitute") ) { substitute=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextSyntax_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("substitute",5a,90,bb,80));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextSyntax_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TextSyntax_obj,substitute),HX_("substitute",5a,90,bb,80)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextSyntax_obj_sStaticStorageInfo = 0;
#endif

static ::String TextSyntax_obj_sMemberFields[] = {
	HX_("substitute",5a,90,bb,80),
	HX_("onMatch",a6,e7,60,99),
	::String(null()) };

::hx::Class TextSyntax_obj::__mClass;

void TextSyntax_obj::__register()
{
	TextSyntax_obj _hx_dummy;
	TextSyntax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("markdown.TextSyntax",2f,22,7e,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextSyntax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextSyntax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextSyntax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextSyntax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace markdown
