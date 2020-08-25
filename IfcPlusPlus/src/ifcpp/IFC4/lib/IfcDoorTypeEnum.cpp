/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDoorTypeEnum.h"

// TYPE IfcDoorTypeEnum = ENUMERATION OF	(DOOR	,GATE	,TRAPDOOR	,BOOM_BARRIER	,TURNSTILE	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcDoorTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDoorTypeEnum> copy_self( new IfcDoorTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDoorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDOORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_DOOR:	stream << ".DOOR."; break;
		case ENUM_GATE:	stream << ".GATE."; break;
		case ENUM_TRAPDOOR:	stream << ".TRAPDOOR."; break;
		case ENUM_BOOM_BARRIER:	stream << ".BOOM_BARRIER."; break;
		case ENUM_TURNSTILE:	stream << ".TURNSTILE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDoorTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_DOOR:	return L"DOOR";
		case ENUM_GATE:	return L"GATE";
		case ENUM_TRAPDOOR:	return L"TRAPDOOR";
		case ENUM_BOOM_BARRIER:	return L"BOOM_BARRIER";
		case ENUM_TURNSTILE:	return L"TURNSTILE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcDoorTypeEnum> IfcDoorTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDoorTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDoorTypeEnum>(); }
	shared_ptr<IfcDoorTypeEnum> type_object( new IfcDoorTypeEnum() );
	if( std_iequal( arg, L".DOOR." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_DOOR;
	}
	else if( std_iequal( arg, L".GATE." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_GATE;
	}
	else if( std_iequal( arg, L".TRAPDOOR." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_TRAPDOOR;
	}
	else if( std_iequal( arg, L".BOOM_BARRIER." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_BOOM_BARRIER;
	}
	else if( std_iequal( arg, L".TURNSTILE." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_TURNSTILE;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDoorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
