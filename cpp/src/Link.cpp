// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_Link
#include <Link.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_705409fd3919656c_161_new,"Link","new",0xbf24fa0c,"Link.new","Markdown.hx",161,0xe43b570f)

void Link_obj::__construct(::String id,::String url,::String title){
            	HX_STACKFRAME(&_hx_pos_705409fd3919656c_161_new)
HXLINE( 162)		this->id = id;
HXLINE( 163)		this->url = url;
HXLINE( 164)		this->title = title;
            	}

Dynamic Link_obj::__CreateEmpty() { return new Link_obj; }

void *Link_obj::_hx_vtable = 0;

Dynamic Link_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Link_obj > _hx_result = new Link_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Link_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x06df3a3e;
}


Link_obj::Link_obj()
{
}

void Link_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Link);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_END_CLASS();
}

void Link_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(title,"title");
}

::hx::Val Link_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return ::hx::Val( url ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( title ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Link_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Link_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("url",6f,2b,59,00));
	outFields->push(HX_("title",98,15,3b,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Link_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Link_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsString,(int)offsetof(Link_obj,url),HX_("url",6f,2b,59,00)},
	{::hx::fsString,(int)offsetof(Link_obj,title),HX_("title",98,15,3b,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Link_obj_sStaticStorageInfo = 0;
#endif

static ::String Link_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("url",6f,2b,59,00),
	HX_("title",98,15,3b,10),
	::String(null()) };

::hx::Class Link_obj::__mClass;

void Link_obj::__register()
{
	Link_obj _hx_dummy;
	Link_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Link",1a,44,8c,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Link_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Link_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Link_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Link_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

