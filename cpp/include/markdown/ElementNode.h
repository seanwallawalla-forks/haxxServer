// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_ElementNode
#define INCLUDED_markdown_ElementNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_markdown_Node
#include <markdown/Node.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(markdown,ElementNode)
HX_DECLARE_CLASS1(markdown,Node)
HX_DECLARE_CLASS1(markdown,NodeVisitor)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES ElementNode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ElementNode_obj OBJ_;
		ElementNode_obj();

	public:
		enum { _hx_ClassId = 0x572df8ef };

		void __construct(::String tag,::Array< ::Dynamic> children);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="markdown.ElementNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"markdown.ElementNode"); }
		static ::hx::ObjectPtr< ElementNode_obj > __new(::String tag,::Array< ::Dynamic> children);
		static ::hx::ObjectPtr< ElementNode_obj > __alloc(::hx::Ctx *_hx_ctx,::String tag,::Array< ::Dynamic> children);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ElementNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ElementNode",be,8a,ae,d0); }

		static  ::markdown::ElementNode empty(::String tag);
		static ::Dynamic empty_dyn();

		static  ::markdown::ElementNode withTag(::String tag);
		static ::Dynamic withTag_dyn();

		static  ::markdown::ElementNode text(::String tag,::String text);
		static ::Dynamic text_dyn();

		::String tag;
		::Array< ::Dynamic> children;
		 ::haxe::ds::StringMap attributes;
		bool isEmpty();
		::Dynamic isEmpty_dyn();

		void accept(::Dynamic visitor);
		::Dynamic accept_dyn();

};

} // end namespace markdown

#endif /* INCLUDED_markdown_ElementNode */ 
