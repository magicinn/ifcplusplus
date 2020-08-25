/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcImpactProtectionDeviceTypeSelect.h"
#include "ifcpp/IFC4/include/IfcImpactProtectionDeviceTypeEnum.h"

// TYPE IfcImpactProtectionDeviceTypeEnum = ENUMERATION OF	(CRASHCUSHION	,DAMPINGSYSTEM	,FENDER	,BUMPER	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcImpactProtectionDeviceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcImpactProtectionDeviceTypeEnum> copy_self( new IfcImpactProtectionDeviceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcImpactProtectionDeviceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCIMPACTPROTECTIONDEVICETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CRASHCUSHION:	stream << ".CRASHCUSHION."; break;
		case ENUM_DAMPINGSYSTEM:	stream << ".DAMPINGSYSTEM."; break;
		case ENUM_FENDER:	stream << ".FENDER."; break;
		case ENUM_BUMPER:	stream << ".BUMPER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcImpactProtectionDeviceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CRASHCUSHION:	return L"CRASHCUSHION";
		case ENUM_DAMPINGSYSTEM:	return L"DAMPINGSYSTEM";
		case ENUM_FENDER:	return L"FENDER";
		case ENUM_BUMPER:	return L"BUMPER";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcImpactProtectionDeviceTypeEnum> IfcImpactProtectionDeviceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcImpactProtectionDeviceTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcImpactProtectionDeviceTypeEnum>(); }
	shared_ptr<IfcImpactProtectionDeviceTypeEnum> type_object( new IfcImpactProtectionDeviceTypeEnum() );
	if( std_iequal( arg, L".CRASHCUSHION." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_CRASHCUSHION;
	}
	else if( std_iequal( arg, L".DAMPINGSYSTEM." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_DAMPINGSYSTEM;
	}
	else if( std_iequal( arg, L".FENDER." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_FENDER;
	}
	else if( std_iequal( arg, L".BUMPER." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_BUMPER;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcImpactProtectionDeviceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
