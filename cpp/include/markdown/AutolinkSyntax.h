// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_AutolinkSyntax
#define INCLUDED_markdown_AutolinkSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_markdown_InlineSyntax
#include <markdown/InlineSyntax.h>
#endif
HX_DECLARE_CLASS1(markdown,AutolinkSyntax)
HX_DECLARE_CLASS1(markdown,InlineParser)
HX_DECLARE_CLASS1(markdown,InlineSyntax)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES AutolinkSyntax_obj : public  ::markdown::InlineSyntax_obj
{
	public:
		typedef  ::markdown::InlineSyntax_obj super;
		typedef AutolinkSyntax_obj OBJ_;
		AutolinkSyntax_obj();

	public:
		enum { _hx_ClassId = 0x0b9dae1f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="markdown.AutolinkSyntax")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"markdown.AutolinkSyntax"); }
		static ::hx::ObjectPtr< AutolinkSyntax_obj > __new();
		static ::hx::ObjectPtr< AutolinkSyntax_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AutolinkSyntax_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AutolinkSyntax",4c,fa,e6,b7); }

		bool onMatch( ::markdown::InlineParser parser);

};

} // end namespace markdown

#endif /* INCLUDED_markdown_AutolinkSyntax */ 
