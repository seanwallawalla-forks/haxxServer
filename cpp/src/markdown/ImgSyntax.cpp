// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_Document
#include <Document.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Link
#include <Link.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_markdown_ElementNode
#include <markdown/ElementNode.h>
#endif
#ifndef INCLUDED_markdown_ImgSyntax
#include <markdown/ImgSyntax.h>
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
#ifndef INCLUDED_markdown_TextNode
#include <markdown/TextNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8886aa27fbaedefd_424_new,"markdown.ImgSyntax","new",0x5cf094d9,"markdown.ImgSyntax.new","markdown/InlineParser.hx",424,0xf7baa326)
HX_LOCAL_STACK_FRAME(_hx_pos_8886aa27fbaedefd_429_onMatchEnd,"markdown.ImgSyntax","onMatchEnd",0xf7f34c7c,"markdown.ImgSyntax.onMatchEnd","markdown/InlineParser.hx",429,0xf7baa326)
HX_LOCAL_STACK_FRAME(_hx_pos_8886aa27fbaedefd_416_boot,"markdown.ImgSyntax","boot",0xedaaa999,"markdown.ImgSyntax.boot","markdown/InlineParser.hx",416,0xf7baa326)
namespace markdown{

void ImgSyntax_obj::__construct( ::Dynamic linkResolver){
            	HX_STACKFRAME(&_hx_pos_8886aa27fbaedefd_424_new)
HXLINE( 425)		super::__construct(HX_("!\\[",e0,5a,19,00),null(),::markdown::ImgSyntax_obj::linkPattern);
HXLINE( 426)		this->linkResolver = linkResolver;
            	}

Dynamic ImgSyntax_obj::__CreateEmpty() { return new ImgSyntax_obj; }

void *ImgSyntax_obj::_hx_vtable = 0;

Dynamic ImgSyntax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImgSyntax_obj > _hx_result = new ImgSyntax_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ImgSyntax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3e6923b3) {
		if (inClassId<=(int)0x0c65d26b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c65d26b;
		} else {
			return inClassId==(int)0x3e6923b3;
		}
	} else {
		return inClassId==(int)0x4f005a66;
	}
}

bool ImgSyntax_obj::onMatchEnd( ::markdown::InlineParser parser, ::markdown::TagState state){
            	HX_GC_STACKFRAME(&_hx_pos_8886aa27fbaedefd_429_onMatchEnd)
HXLINE( 430)		::String url;
HXLINE( 431)		::String title;
HXLINE( 438)		bool _hx_tmp;
HXDLIN( 438)		if (::hx::IsNotNull( this->endPattern->matched(1) )) {
HXLINE( 438)			_hx_tmp = (this->endPattern->matched(1) == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 438)			_hx_tmp = true;
            		}
HXDLIN( 438)		if (_hx_tmp) {
HXLINE( 439)			if (::hx::IsNull( this->linkResolver )) {
HXLINE( 440)				return false;
            			}
HXLINE( 444)			if ((state->children->length != 1)) {
HXLINE( 445)				return false;
            			}
HXLINE( 446)			if (!(::Std_obj::isOfType(state->children->__get(0),( ( ::Dynamic)(::hx::ClassOf< ::markdown::TextNode >()) )))) {
HXLINE( 447)				return false;
            			}
HXLINE( 449)			 ::markdown::TextNode link = ( ( ::markdown::TextNode)(state->children->__get(0)) );
HXLINE( 452)			::Dynamic node = this->linkResolver(link->text);
HXLINE( 453)			if (::hx::IsNull( node )) {
HXLINE( 454)				return false;
            			}
HXLINE( 456)			parser->addNode(node);
HXLINE( 457)			return true;
            		}
HXLINE( 460)		bool _hx_tmp1;
HXDLIN( 460)		if (::hx::IsNotNull( this->endPattern->matched(3) )) {
HXLINE( 460)			_hx_tmp1 = (this->endPattern->matched(3) != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 460)			_hx_tmp1 = false;
            		}
HXDLIN( 460)		if (_hx_tmp1) {
HXLINE( 462)			url = this->endPattern->matched(3);
HXLINE( 463)			title = this->endPattern->matched(4);
HXLINE( 466)			bool _hx_tmp;
HXDLIN( 466)			if (::StringTools_obj::startsWith(url,HX_("<",3c,00,00,00))) {
HXLINE( 466)				_hx_tmp = ::StringTools_obj::endsWith(url,HX_(">",3e,00,00,00));
            			}
            			else {
HXLINE( 466)				_hx_tmp = false;
            			}
HXDLIN( 466)			if (_hx_tmp) {
HXLINE( 467)				url = url.substring(1,(url.length - 1));
            			}
            		}
            		else {
HXLINE( 471)			::String id = this->endPattern->matched(2);
HXLINE( 472)			if ((id == HX_("",00,00,00,00))) {
HXLINE( 474)				id = parser->source.substring((state->startPos + 1),parser->pos);
            			}
HXLINE( 478)			id = id.toLowerCase();
HXLINE( 481)			 ::Link link = ( ( ::Link)(parser->document->refLinks->get(id)) );
HXLINE( 484)			if (::hx::IsNull( link )) {
HXLINE( 485)				return false;
            			}
HXLINE( 487)			url = link->url;
HXLINE( 488)			title = link->title;
            		}
HXLINE( 491)		 ::markdown::ElementNode img =  ::markdown::ElementNode_obj::__alloc( HX_CTX ,HX_("img",03,0c,50,00),null());
HXLINE( 492)		{
HXLINE( 492)			::Dynamic this1 = img->attributes;
HXDLIN( 492)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("src",e4,a6,57,00),::StringTools_obj::htmlEscape(url,null()));
            		}
HXLINE( 493)		bool _hx_tmp2;
HXDLIN( 493)		if ((state->children->length == 1)) {
HXLINE( 493)			_hx_tmp2 = ::Std_obj::isOfType(state->children->__get(0),( ( ::Dynamic)(::hx::ClassOf< ::markdown::TextNode >()) ));
            		}
            		else {
HXLINE( 493)			_hx_tmp2 = false;
            		}
HXDLIN( 493)		if (_hx_tmp2) {
HXLINE( 494)			 ::markdown::TextNode alt = ( ( ::markdown::TextNode)(state->children->__get(0)) );
HXLINE( 495)			img->attributes->set(HX_("alt",29,f9,49,00),alt->text);
            		}
HXLINE( 498)		bool _hx_tmp3;
HXDLIN( 498)		if (::hx::IsNotNull( title )) {
HXLINE( 498)			_hx_tmp3 = (title != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 498)			_hx_tmp3 = false;
            		}
HXDLIN( 498)		if (_hx_tmp3) {
HXLINE( 499)			::Dynamic this1 = img->attributes;
HXDLIN( 499)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("title",98,15,3b,10),::StringTools_obj::htmlEscape(title,null()));
            		}
HXLINE( 502)		parser->addNode(img);
HXLINE( 503)		return true;
            	}


::String ImgSyntax_obj::linkPattern;


::hx::ObjectPtr< ImgSyntax_obj > ImgSyntax_obj::__new( ::Dynamic linkResolver) {
	::hx::ObjectPtr< ImgSyntax_obj > __this = new ImgSyntax_obj();
	__this->__construct(linkResolver);
	return __this;
}

::hx::ObjectPtr< ImgSyntax_obj > ImgSyntax_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic linkResolver) {
	ImgSyntax_obj *__this = (ImgSyntax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImgSyntax_obj), true, "markdown.ImgSyntax"));
	*(void **)__this = ImgSyntax_obj::_hx_vtable;
	__this->__construct(linkResolver);
	return __this;
}

ImgSyntax_obj::ImgSyntax_obj()
{
}

void ImgSyntax_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImgSyntax);
	HX_MARK_MEMBER_NAME(linkResolver,"linkResolver");
	 ::markdown::TagSyntax_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImgSyntax_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(linkResolver,"linkResolver");
	 ::markdown::TagSyntax_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ImgSyntax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"onMatchEnd") ) { return ::hx::Val( onMatchEnd_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linkResolver") ) { return ::hx::Val( linkResolver ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ImgSyntax_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"linkPattern") ) { outValue = ( linkPattern ); return true; }
	}
	return false;
}

::hx::Val ImgSyntax_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"linkResolver") ) { linkResolver=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ImgSyntax_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"linkPattern") ) { linkPattern=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImgSyntax_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ImgSyntax_obj,linkResolver),HX_("linkResolver",20,da,44,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ImgSyntax_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ImgSyntax_obj::linkPattern,HX_("linkPattern",76,69,f9,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ImgSyntax_obj_sMemberFields[] = {
	HX_("linkResolver",20,da,44,49),
	HX_("onMatchEnd",d5,9f,d7,a0),
	::String(null()) };

static void ImgSyntax_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImgSyntax_obj::linkPattern,"linkPattern");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImgSyntax_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImgSyntax_obj::linkPattern,"linkPattern");
};

#endif

::hx::Class ImgSyntax_obj::__mClass;

static ::String ImgSyntax_obj_sStaticFields[] = {
	HX_("linkPattern",76,69,f9,a6),
	::String(null())
};

void ImgSyntax_obj::__register()
{
	ImgSyntax_obj _hx_dummy;
	ImgSyntax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("markdown.ImgSyntax",67,34,45,93);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImgSyntax_obj::__GetStatic;
	__mClass->mSetStaticField = &ImgSyntax_obj::__SetStatic;
	__mClass->mMarkFunc = ImgSyntax_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ImgSyntax_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImgSyntax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImgSyntax_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImgSyntax_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImgSyntax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImgSyntax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ImgSyntax_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8886aa27fbaedefd_416_boot)
HXDLIN( 416)		linkPattern = ((((HX_("\\](?:(",86,ae,b9,6f) + HX_("\\s?\\[([^\\]]*)\\]",58,cc,8a,69)) + HX_("|",7c,00,00,00)) + HX_("\\s?\\(([^ )]+)(?:[ ]*\"([^\"]+)\"|)\\)",e0,5a,02,be)) + HX_(")|)",96,88,1f,00));
            	}
}

} // end namespace markdown