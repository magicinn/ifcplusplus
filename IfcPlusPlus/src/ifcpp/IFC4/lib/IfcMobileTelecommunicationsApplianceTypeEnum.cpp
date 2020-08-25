/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcMobileTelecommunicationsApplianceTypeEnum.h"

// TYPE IfcMobileTelecommunicationsApplianceTypeEnum = ENUMERATION OF	(E_UTRAN_NODE_B	,REMOTE_RADIO_UNIT	,ACCESSPOINT	,BASETRANSCEIVERSTATION	,REMOTEUNIT	,BASEBANDUNIT	,MASTERUNIT	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcMobileTelecommunicationsApplianceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMobileTelecommunicationsApplianceTypeEnum> copy_self( new IfcMobileTelecommunicationsApplianceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcMobileTelecommunicationsApplianceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMOBILETELECOMMUNICATIONSAPPLIANCETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_E_UTRAN_NODE_B:	stream << ".E_UTRAN_NODE_B."; break;
		case ENUM_REMOTE_RADIO_UNIT:	stream << ".REMOTE_RADIO_UNIT."; break;
		case ENUM_ACCESSPOINT:	stream << ".ACCESSPOINT."; break;
		case ENUM_BASETRANSCEIVERSTATION:	stream << ".BASETRANSCEIVERSTATION."; break;
		case ENUM_REMOTEUNIT:	stream << ".REMOTEUNIT."; break;
		case ENUM_BASEBANDUNIT:	stream << ".BASEBANDUNIT."; break;
		case ENUM_MASTERUNIT:	stream << ".MASTERUNIT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcMobileTelecommunicationsApplianceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_E_UTRAN_NODE_B:	return L"E_UTRAN_NODE_B";
		case ENUM_REMOTE_RADIO_UNIT:	return L"REMOTE_RADIO_UNIT";
		case ENUM_ACCESSPOINT:	return L"ACCESSPOINT";
		case ENUM_BASETRANSCEIVERSTATION:	return L"BASETRANSCEIVERSTATION";
		case ENUM_REMOTEUNIT:	return L"REMOTEUNIT";
		case ENUM_BASEBANDUNIT:	return L"BASEBANDUNIT";
		case ENUM_MASTERUNIT:	return L"MASTERUNIT";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcMobileTelecommunicationsApplianceTypeEnum> IfcMobileTelecommunicationsApplianceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcMobileTelecommunicationsApplianceTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcMobileTelecommunicationsApplianceTypeEnum>(); }
	shared_ptr<IfcMobileTelecommunicationsApplianceTypeEnum> type_object( new IfcMobileTelecommunicationsApplianceTypeEnum() );
	if( std_iequal( arg, L".E_UTRAN_NODE_B." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_E_UTRAN_NODE_B;
	}
	else if( std_iequal( arg, L".REMOTE_RADIO_UNIT." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_REMOTE_RADIO_UNIT;
	}
	else if( std_iequal( arg, L".ACCESSPOINT." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_ACCESSPOINT;
	}
	else if( std_iequal( arg, L".BASETRANSCEIVERSTATION." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_BASETRANSCEIVERSTATION;
	}
	else if( std_iequal( arg, L".REMOTEUNIT." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_REMOTEUNIT;
	}
	else if( std_iequal( arg, L".BASEBANDUNIT." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_BASEBANDUNIT;
	}
	else if( std_iequal( arg, L".MASTERUNIT." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_MASTERUNIT;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcMobileTelecommunicationsApplianceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
