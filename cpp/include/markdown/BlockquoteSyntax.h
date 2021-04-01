// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_BlockquoteSyntax
#define INCLUDED_markdown_BlockquoteSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_markdown_BlockSyntax
#include <markdown/BlockSyntax.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(markdown,BlockParser)
HX_DECLARE_CLASS1(markdown,BlockSyntax)
HX_DECLARE_CLASS1(markdown,BlockquoteSyntax)
HX_DECLARE_CLASS1(markdown,Node)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES BlockquoteSyntax_obj : public  ::markdown::BlockSyntax_obj
{
	public:
		typedef  ::markdown::BlockSyntax_obj super;
		typedef BlockquoteSyntax_obj OBJ_;
		BlockquoteSyntax_obj();

	public:
		enum { _hx_ClassId = 0x2a5a2ee1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="markdown.BlockquoteSyntax")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"markdown.BlockquoteSyntax"); }
		static ::hx::ObjectPtr< BlockquoteSyntax_obj > __new();
		static ::hx::ObjectPtr< BlockquoteSyntax_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BlockquoteSyntax_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlockquoteSyntax",b2,ae,0b,c4); }

		 ::EReg get_pattern();

		::Array< ::String > parseChildLines( ::markdown::BlockParser parser);

		::Dynamic parse( ::markdown::BlockParser parser);

};

} // end namespace markdown

#endif /* INCLUDED_markdown_BlockquoteSyntax */ 
