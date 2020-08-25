/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcTrackElementTypeEnum.h"

// TYPE IfcTrackElementTypeEnum = ENUMERATION OF	(TRACKENDOFALIGNMENT	,BLOCKINGDEVICE	,VEHICLESTOP	,SLEEPER	,HALF_SET_OF_BLADES	,SPEEDREGULATOR	,DERAILER	,FROG	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcTrackElementTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTrackElementTypeEnum> copy_self( new IfcTrackElementTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcTrackElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTRACKELEMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_TRACKENDOFALIGNMENT:	stream << ".TRACKENDOFALIGNMENT."; break;
		case ENUM_BLOCKINGDEVICE:	stream << ".BLOCKINGDEVICE."; break;
		case ENUM_VEHICLESTOP:	stream << ".VEHICLESTOP."; break;
		case ENUM_SLEEPER:	stream << ".SLEEPER."; break;
		case ENUM_HALF_SET_OF_BLADES:	stream << ".HALF_SET_OF_BLADES."; break;
		case ENUM_SPEEDREGULATOR:	stream << ".SPEEDREGULATOR."; break;
		case ENUM_DERAILER:	stream << ".DERAILER."; break;
		case ENUM_FROG:	stream << ".FROG."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTrackElementTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_TRACKENDOFALIGNMENT:	return L"TRACKENDOFALIGNMENT";
		case ENUM_BLOCKINGDEVICE:	return L"BLOCKINGDEVICE";
		case ENUM_VEHICLESTOP:	return L"VEHICLESTOP";
		case ENUM_SLEEPER:	return L"SLEEPER";
		case ENUM_HALF_SET_OF_BLADES:	return L"HALF_SET_OF_BLADES";
		case ENUM_SPEEDREGULATOR:	return L"SPEEDREGULATOR";
		case ENUM_DERAILER:	return L"DERAILER";
		case ENUM_FROG:	return L"FROG";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcTrackElementTypeEnum> IfcTrackElementTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTrackElementTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTrackElementTypeEnum>(); }
	shared_ptr<IfcTrackElementTypeEnum> type_object( new IfcTrackElementTypeEnum() );
	if( std_iequal( arg, L".TRACKENDOFALIGNMENT." ) )
	{
		type_object->m_enum = IfcTrackElementTypeEnum::ENUM_TRACKENDOFALIGNMENT;
	}
	else if( std_iequal( arg, L".BLOCKINGDEVICE." ) )
	{
		type_object->m_enum = IfcTrackElementTypeEnum::ENUM_BLOCKINGDEVICE;
	}
	else if( std_iequal( arg, L".VEHICLESTOP." ) )
	{
		type_object->m_enum = IfcTrackElementTypeEnum::ENUM_VEHICLESTOP;
	}
	else if( std_iequal( arg, L".SLEEPER." ) )
	{
		type_object->m_enum = IfcTrackElementTypeEnum::ENUM_SLEEPER;
	}
	else if( std_iequal( arg, L".HALF_SET_OF_BLADES." ) )
	{
		type_object->m_enum = IfcTrackElementTypeEnum::ENUM_HALF_SET_OF_BLADES;
	}
	else if( std_iequal( arg, L".SPEEDREGULATOR." ) )
	{
		type_object->m_enum = IfcTrackElementTypeEnum::ENUM_SPEEDREGULATOR;
	}
	else if( std_iequal( arg, L".DERAILER." ) )
	{
		type_object->m_enum = IfcTrackElementTypeEnum::ENUM_DERAILER;
	}
	else if( std_iequal( arg, L".FROG." ) )
	{
		type_object->m_enum = IfcTrackElementTypeEnum::ENUM_FROG;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcTrackElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcTrackElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
