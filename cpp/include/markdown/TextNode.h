// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_TextNode
#define INCLUDED_markdown_TextNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_markdown_Node
#include <markdown/Node.h>
#endif
HX_DECLARE_CLASS1(markdown,Node)
HX_DECLARE_CLASS1(markdown,NodeVisitor)
HX_DECLARE_CLASS1(markdown,TextNode)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES TextNode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextNode_obj OBJ_;
		TextNode_obj();

	public:
		enum { _hx_ClassId = 0x7e52529e };

		void __construct(::String text);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="markdown.TextNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"markdown.TextNode"); }
		static ::hx::ObjectPtr< TextNode_obj > __new(::String text);
		static ::hx::ObjectPtr< TextNode_obj > __alloc(::hx::Ctx *_hx_ctx,::String text);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TextNode",6f,19,b7,25); }

		::String text;
		void accept(::Dynamic visitor);
		::Dynamic accept_dyn();

};

} // end namespace markdown

#endif /* INCLUDED_markdown_TextNode */ 
