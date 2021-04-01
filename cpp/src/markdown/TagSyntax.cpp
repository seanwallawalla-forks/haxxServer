// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
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
#ifndef INCLUDED_markdown_TagState
#include <markdown/TagState.h>
#endif
#ifndef INCLUDED_markdown_TagSyntax
#include <markdown/TagSyntax.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_544da9545d77e402_294_new,"markdown.TagSyntax","new",0x473cd5f0,"markdown.TagSyntax.new","markdown/InlineParser.hx",294,0xf7baa326)
HX_LOCAL_STACK_FRAME(_hx_pos_544da9545d77e402_300_onMatch,"markdown.TagSyntax","onMatch",0xf363f536,"markdown.TagSyntax.onMatch","markdown/InlineParser.hx",300,0xf7baa326)
HX_LOCAL_STACK_FRAME(_hx_pos_544da9545d77e402_305_onMatchEnd,"markdown.TagSyntax","onMatchEnd",0x21a96c45,"markdown.TagSyntax.onMatchEnd","markdown/InlineParser.hx",305,0xf7baa326)
namespace markdown{

void TagSyntax_obj::__construct(::String pattern,::String tag,::String end){
            	HX_GC_STACKFRAME(&_hx_pos_544da9545d77e402_294_new)
HXLINE( 295)		super::__construct(pattern);
HXLINE( 296)		this->tag = tag;
HXLINE( 297)		::String _hx_tmp;
HXDLIN( 297)		if (::hx::IsNull( end )) {
HXLINE( 297)			_hx_tmp = pattern;
            		}
            		else {
HXLINE( 297)			_hx_tmp = end;
            		}
HXDLIN( 297)		this->endPattern =  ::EReg_obj::__alloc( HX_CTX ,_hx_tmp,HX_("m",6d,00,00,00));
            	}

Dynamic TagSyntax_obj::__CreateEmpty() { return new TagSyntax_obj; }

void *TagSyntax_obj::_hx_vtable = 0;

Dynamic TagSyntax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TagSyntax_obj > _hx_result = new TagSyntax_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TagSyntax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c65d26b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c65d26b;
	} else {
		return inClassId==(int)0x4f005a66;
	}
}

bool TagSyntax_obj::onMatch( ::markdown::InlineParser parser){
            	HX_GC_STACKFRAME(&_hx_pos_544da9545d77e402_300_onMatch)
HXLINE( 301)		::Array< ::Dynamic> parser1 = parser->stack;
HXDLIN( 301)		int parser2 = parser->pos;
HXDLIN( 301)		int parser3 = parser->pos;
HXDLIN( 301)		parser1->push( ::markdown::TagState_obj::__alloc( HX_CTX ,parser2,(parser3 + this->pattern->matched(0).length),::hx::ObjectPtr<OBJ_>(this)));
HXLINE( 302)		return true;
            	}


bool TagSyntax_obj::onMatchEnd( ::markdown::InlineParser parser, ::markdown::TagState state){
            	HX_GC_STACKFRAME(&_hx_pos_544da9545d77e402_305_onMatchEnd)
HXLINE( 306)		parser->addNode( ::markdown::ElementNode_obj::__alloc( HX_CTX ,this->tag,state->children));
HXLINE( 307)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TagSyntax_obj,onMatchEnd,return )


::hx::ObjectPtr< TagSyntax_obj > TagSyntax_obj::__new(::String pattern,::String tag,::String end) {
	::hx::ObjectPtr< TagSyntax_obj > __this = new TagSyntax_obj();
	__this->__construct(pattern,tag,end);
	return __this;
}

::hx::ObjectPtr< TagSyntax_obj > TagSyntax_obj::__alloc(::hx::Ctx *_hx_ctx,::String pattern,::String tag,::String end) {
	TagSyntax_obj *__this = (TagSyntax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TagSyntax_obj), true, "markdown.TagSyntax"));
	*(void **)__this = TagSyntax_obj::_hx_vtable;
	__this->__construct(pattern,tag,end);
	return __this;
}

TagSyntax_obj::TagSyntax_obj()
{
}

void TagSyntax_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TagSyntax);
	HX_MARK_MEMBER_NAME(endPattern,"endPattern");
	HX_MARK_MEMBER_NAME(tag,"tag");
	 ::markdown::InlineSyntax_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TagSyntax_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(endPattern,"endPattern");
	HX_VISIT_MEMBER_NAME(tag,"tag");
	 ::markdown::InlineSyntax_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TagSyntax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tag") ) { return ::hx::Val( tag ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onMatch") ) { return ::hx::Val( onMatch_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endPattern") ) { return ::hx::Val( endPattern ); }
		if (HX_FIELD_EQ(inName,"onMatchEnd") ) { return ::hx::Val( onMatchEnd_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TagSyntax_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tag") ) { tag=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endPattern") ) { endPattern=inValue.Cast<  ::EReg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TagSyntax_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("endPattern",b5,2b,99,b7));
	outFields->push(HX_("tag",5a,5a,58,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TagSyntax_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(TagSyntax_obj,endPattern),HX_("endPattern",b5,2b,99,b7)},
	{::hx::fsString,(int)offsetof(TagSyntax_obj,tag),HX_("tag",5a,5a,58,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TagSyntax_obj_sStaticStorageInfo = 0;
#endif

static ::String TagSyntax_obj_sMemberFields[] = {
	HX_("endPattern",b5,2b,99,b7),
	HX_("tag",5a,5a,58,00),
	HX_("onMatch",a6,e7,60,99),
	HX_("onMatchEnd",d5,9f,d7,a0),
	::String(null()) };

::hx::Class TagSyntax_obj::__mClass;

void TagSyntax_obj::__register()
{
	TagSyntax_obj _hx_dummy;
	TagSyntax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("markdown.TagSyntax",fe,5d,47,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TagSyntax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TagSyntax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TagSyntax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TagSyntax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace markdown
