/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcFacilityPartTypeSelect.h"
#include "ifcpp/IFC4/include/IfcFacilityPartCommonTypeEnum.h"

// TYPE IfcFacilityPartCommonTypeEnum = ENUMERATION OF	(SEGMENT	,ABOVEGROUND	,JUNCTION	,LEVELCROSSING	,BELOWGROUND	,SUBSTRUCTURE	,TERMINAL	,SUPERSTRUCTURE	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcFacilityPartCommonTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFacilityPartCommonTypeEnum> copy_self( new IfcFacilityPartCommonTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcFacilityPartCommonTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFACILITYPARTCOMMONTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_SEGMENT:	stream << ".SEGMENT."; break;
		case ENUM_ABOVEGROUND:	stream << ".ABOVEGROUND."; break;
		case ENUM_JUNCTION:	stream << ".JUNCTION."; break;
		case ENUM_LEVELCROSSING:	stream << ".LEVELCROSSING."; break;
		case ENUM_BELOWGROUND:	stream << ".BELOWGROUND."; break;
		case ENUM_SUBSTRUCTURE:	stream << ".SUBSTRUCTURE."; break;
		case ENUM_TERMINAL:	stream << ".TERMINAL."; break;
		case ENUM_SUPERSTRUCTURE:	stream << ".SUPERSTRUCTURE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcFacilityPartCommonTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_SEGMENT:	return L"SEGMENT";
		case ENUM_ABOVEGROUND:	return L"ABOVEGROUND";
		case ENUM_JUNCTION:	return L"JUNCTION";
		case ENUM_LEVELCROSSING:	return L"LEVELCROSSING";
		case ENUM_BELOWGROUND:	return L"BELOWGROUND";
		case ENUM_SUBSTRUCTURE:	return L"SUBSTRUCTURE";
		case ENUM_TERMINAL:	return L"TERMINAL";
		case ENUM_SUPERSTRUCTURE:	return L"SUPERSTRUCTURE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcFacilityPartCommonTypeEnum> IfcFacilityPartCommonTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFacilityPartCommonTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFacilityPartCommonTypeEnum>(); }
	shared_ptr<IfcFacilityPartCommonTypeEnum> type_object( new IfcFacilityPartCommonTypeEnum() );
	if( std_iequal( arg, L".SEGMENT." ) )
	{
		type_object->m_enum = IfcFacilityPartCommonTypeEnum::ENUM_SEGMENT;
	}
	else if( std_iequal( arg, L".ABOVEGROUND." ) )
	{
		type_object->m_enum = IfcFacilityPartCommonTypeEnum::ENUM_ABOVEGROUND;
	}
	else if( std_iequal( arg, L".JUNCTION." ) )
	{
		type_object->m_enum = IfcFacilityPartCommonTypeEnum::ENUM_JUNCTION;
	}
	else if( std_iequal( arg, L".LEVELCROSSING." ) )
	{
		type_object->m_enum = IfcFacilityPartCommonTypeEnum::ENUM_LEVELCROSSING;
	}
	else if( std_iequal( arg, L".BELOWGROUND." ) )
	{
		type_object->m_enum = IfcFacilityPartCommonTypeEnum::ENUM_BELOWGROUND;
	}
	else if( std_iequal( arg, L".SUBSTRUCTURE." ) )
	{
		type_object->m_enum = IfcFacilityPartCommonTypeEnum::ENUM_SUBSTRUCTURE;
	}
	else if( std_iequal( arg, L".TERMINAL." ) )
	{
		type_object->m_enum = IfcFacilityPartCommonTypeEnum::ENUM_TERMINAL;
	}
	else if( std_iequal( arg, L".SUPERSTRUCTURE." ) )
	{
		type_object->m_enum = IfcFacilityPartCommonTypeEnum::ENUM_SUPERSTRUCTURE;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcFacilityPartCommonTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcFacilityPartCommonTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
