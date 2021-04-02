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
#ifndef INCLUDED_markdown_TagState
#include <markdown/TagState.h>
#endif
#ifndef INCLUDED_markdown_TagSyntax
#include <markdown/TagSyntax.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a8128156a0a841a9_534_new,"markdown.TagState","new",0x54460ac8,"markdown.TagState.new","markdown/InlineParser.hx",534,0xf7baa326)
HX_LOCAL_STACK_FRAME(_hx_pos_a8128156a0a841a9_543_tryMatch,"markdown.TagState","tryMatch",0xcdc306a2,"markdown.TagState.tryMatch","markdown/InlineParser.hx",543,0xf7baa326)
HX_LOCAL_STACK_FRAME(_hx_pos_a8128156a0a841a9_556_close,"markdown.TagState","close",0x2926bc20,"markdown.TagState.close","markdown/InlineParser.hx",556,0xf7baa326)
namespace markdown{

void TagState_obj::__construct(int startPos,int endPos, ::markdown::TagSyntax syntax){
            	HX_STACKFRAME(&_hx_pos_a8128156a0a841a9_534_new)
HXLINE( 535)		this->startPos = startPos;
HXLINE( 536)		this->endPos = endPos;
HXLINE( 537)		this->syntax = syntax;
HXLINE( 538)		this->children = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic TagState_obj::__CreateEmpty() { return new TagState_obj; }

void *TagState_obj::_hx_vtable = 0;

Dynamic TagState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TagState_obj > _hx_result = new TagState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TagState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24c5baa6;
}

bool TagState_obj::tryMatch( ::markdown::InlineParser parser){
            	HX_STACKFRAME(&_hx_pos_a8128156a0a841a9_543_tryMatch)
HXLINE( 544)		bool _hx_tmp;
HXDLIN( 544)		 ::EReg _hx_tmp1 = this->syntax->endPattern;
HXDLIN( 544)		if (_hx_tmp1->match(parser->get_currentSource())) {
HXLINE( 544)			_hx_tmp = ::hx::IsEq( this->syntax->endPattern->matchedPos()->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic),0 );
            		}
            		else {
HXLINE( 544)			_hx_tmp = false;
            		}
HXDLIN( 544)		if (_hx_tmp) {
HXLINE( 546)			this->close(parser);
HXLINE( 547)			return true;
            		}
HXLINE( 550)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TagState_obj,tryMatch,return )

::Array< ::Dynamic> TagState_obj::close( ::markdown::InlineParser parser){
            	HX_STACKFRAME(&_hx_pos_a8128156a0a841a9_556_close)
HXLINE( 561)		int index = parser->stack->indexOf(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE( 564)		::Array< ::Dynamic> unmatchedTags = parser->stack->splice((index + 1),(parser->stack->length - index));
HXLINE( 568)		{
HXLINE( 568)			int _g = 0;
HXDLIN( 568)			while((_g < unmatchedTags->length)){
HXLINE( 568)				 ::markdown::TagState unmatched = unmatchedTags->__get(_g).StaticCast<  ::markdown::TagState >();
HXDLIN( 568)				_g = (_g + 1);
HXLINE( 570)				parser->writeTextRange(unmatched->startPos,unmatched->endPos);
HXLINE( 573)				{
HXLINE( 573)					int _g1 = 0;
HXDLIN( 573)					::Array< ::Dynamic> _g2 = unmatched->children;
HXDLIN( 573)					while((_g1 < _g2->length)){
HXLINE( 573)						::Dynamic child = _g2->__get(_g1);
HXDLIN( 573)						_g1 = (_g1 + 1);
HXLINE( 574)						this->children->push(child);
            					}
            				}
            			}
            		}
HXLINE( 578)		parser->writeText();
HXLINE( 579)		parser->stack->pop().StaticCast<  ::markdown::TagState >();
HXLINE( 582)		if ((parser->stack->length == 0)) {
HXLINE( 583)			return this->children;
            		}
HXLINE( 586)		if (this->syntax->onMatchEnd(parser,::hx::ObjectPtr<OBJ_>(this))) {
HXLINE( 587)			parser->consume(this->syntax->endPattern->matched(0).length);
            		}
            		else {
HXLINE( 590)			parser->start = this->startPos;
HXLINE( 591)			parser->advanceBy(this->syntax->endPattern->matched(0).length);
            		}
HXLINE( 594)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TagState_obj,close,return )


::hx::ObjectPtr< TagState_obj > TagState_obj::__new(int startPos,int endPos, ::markdown::TagSyntax syntax) {
	::hx::ObjectPtr< TagState_obj > __this = new TagState_obj();
	__this->__construct(startPos,endPos,syntax);
	return __this;
}

::hx::ObjectPtr< TagState_obj > TagState_obj::__alloc(::hx::Ctx *_hx_ctx,int startPos,int endPos, ::markdown::TagSyntax syntax) {
	TagState_obj *__this = (TagState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TagState_obj), true, "markdown.TagState"));
	*(void **)__this = TagState_obj::_hx_vtable;
	__this->__construct(startPos,endPos,syntax);
	return __this;
}

TagState_obj::TagState_obj()
{
}

void TagState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TagState);
	HX_MARK_MEMBER_NAME(startPos,"startPos");
	HX_MARK_MEMBER_NAME(endPos,"endPos");
	HX_MARK_MEMBER_NAME(syntax,"syntax");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_END_CLASS();
}

void TagState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(startPos,"startPos");
	HX_VISIT_MEMBER_NAME(endPos,"endPos");
	HX_VISIT_MEMBER_NAME(syntax,"syntax");
	HX_VISIT_MEMBER_NAME(children,"children");
}

::hx::Val TagState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endPos") ) { return ::hx::Val( endPos ); }
		if (HX_FIELD_EQ(inName,"syntax") ) { return ::hx::Val( syntax ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"startPos") ) { return ::hx::Val( startPos ); }
		if (HX_FIELD_EQ(inName,"children") ) { return ::hx::Val( children ); }
		if (HX_FIELD_EQ(inName,"tryMatch") ) { return ::hx::Val( tryMatch_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TagState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endPos") ) { endPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"syntax") ) { syntax=inValue.Cast<  ::markdown::TagSyntax >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"startPos") ) { startPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TagState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("startPos",52,0a,99,42));
	outFields->push(HX_("endPos",79,ac,75,fa));
	outFields->push(HX_("syntax",63,82,94,ef));
	outFields->push(HX_("children",3f,19,6a,70));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TagState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TagState_obj,startPos),HX_("startPos",52,0a,99,42)},
	{::hx::fsInt,(int)offsetof(TagState_obj,endPos),HX_("endPos",79,ac,75,fa)},
	{::hx::fsObject /*  ::markdown::TagSyntax */ ,(int)offsetof(TagState_obj,syntax),HX_("syntax",63,82,94,ef)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TagState_obj,children),HX_("children",3f,19,6a,70)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TagState_obj_sStaticStorageInfo = 0;
#endif

static ::String TagState_obj_sMemberFields[] = {
	HX_("startPos",52,0a,99,42),
	HX_("endPos",79,ac,75,fa),
	HX_("syntax",63,82,94,ef),
	HX_("children",3f,19,6a,70),
	HX_("tryMatch",0a,fa,e9,66),
	HX_("close",b8,17,63,48),
	::String(null()) };

::hx::Class TagState_obj::__mClass;

void TagState_obj::__register()
{
	TagState_obj _hx_dummy;
	TagState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("markdown.TagState",d6,46,af,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TagState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TagState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TagState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TagState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace markdown