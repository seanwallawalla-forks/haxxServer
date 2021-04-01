// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_BlockHtmlSyntax
#define INCLUDED_markdown_BlockHtmlSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_markdown_BlockSyntax
#include <markdown/BlockSyntax.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(markdown,BlockHtmlSyntax)
HX_DECLARE_CLASS1(markdown,BlockParser)
HX_DECLARE_CLASS1(markdown,BlockSyntax)
HX_DECLARE_CLASS1(markdown,Node)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES BlockHtmlSyntax_obj : public  ::markdown::BlockSyntax_obj
{
	public:
		typedef  ::markdown::BlockSyntax_obj super;
		typedef BlockHtmlSyntax_obj OBJ_;
		BlockHtmlSyntax_obj();

	public:
		enum { _hx_ClassId = 0x42eacc6c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="markdown.BlockHtmlSyntax")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"markdown.BlockHtmlSyntax"); }
		static ::hx::ObjectPtr< BlockHtmlSyntax_obj > __new();
		static ::hx::ObjectPtr< BlockHtmlSyntax_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BlockHtmlSyntax_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlockHtmlSyntax",bb,f1,79,c6); }

		 ::EReg get_pattern();

		bool get_canEndBlock();

		::Dynamic parse( ::markdown::BlockParser parser);

};

} // end namespace markdown

#endif /* INCLUDED_markdown_BlockHtmlSyntax */ 
