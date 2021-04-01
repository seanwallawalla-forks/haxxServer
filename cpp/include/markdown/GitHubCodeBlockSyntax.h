// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_GitHubCodeBlockSyntax
#define INCLUDED_markdown_GitHubCodeBlockSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_markdown_BlockSyntax
#include <markdown/BlockSyntax.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(markdown,BlockParser)
HX_DECLARE_CLASS1(markdown,BlockSyntax)
HX_DECLARE_CLASS1(markdown,GitHubCodeBlockSyntax)
HX_DECLARE_CLASS1(markdown,Node)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES GitHubCodeBlockSyntax_obj : public  ::markdown::BlockSyntax_obj
{
	public:
		typedef  ::markdown::BlockSyntax_obj super;
		typedef GitHubCodeBlockSyntax_obj OBJ_;
		GitHubCodeBlockSyntax_obj();

	public:
		enum { _hx_ClassId = 0x1aefc269 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="markdown.GitHubCodeBlockSyntax")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"markdown.GitHubCodeBlockSyntax"); }
		static ::hx::ObjectPtr< GitHubCodeBlockSyntax_obj > __new();
		static ::hx::ObjectPtr< GitHubCodeBlockSyntax_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GitHubCodeBlockSyntax_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GitHubCodeBlockSyntax",c0,be,03,60); }

		 ::EReg get_pattern();

		::Array< ::String > parseChildLines( ::markdown::BlockParser parser);

		::Dynamic parse( ::markdown::BlockParser parser);

};

} // end namespace markdown

#endif /* INCLUDED_markdown_GitHubCodeBlockSyntax */ 
