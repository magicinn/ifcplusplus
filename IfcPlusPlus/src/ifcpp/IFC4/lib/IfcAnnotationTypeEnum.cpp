/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcAnnotationTypeEnum.h"

// TYPE IfcAnnotationTypeEnum = ENUMERATION OF	(ASSUMEDPOINT	,ASBUILTAREA	,ASBUILTLINE	,NON_PHYSICAL_SIGNAL	,ASSUMEDLINE	,WIDTHEVENT	,ASSUMEDAREA	,SUPERELEVATIONEVENT	,ASBUILTPOINT	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcAnnotationTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAnnotationTypeEnum> copy_self( new IfcAnnotationTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcAnnotationTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCANNOTATIONTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ASSUMEDPOINT:	stream << ".ASSUMEDPOINT."; break;
		case ENUM_ASBUILTAREA:	stream << ".ASBUILTAREA."; break;
		case ENUM_ASBUILTLINE:	stream << ".ASBUILTLINE."; break;
		case ENUM_NON_PHYSICAL_SIGNAL:	stream << ".NON_PHYSICAL_SIGNAL."; break;
		case ENUM_ASSUMEDLINE:	stream << ".ASSUMEDLINE."; break;
		case ENUM_WIDTHEVENT:	stream << ".WIDTHEVENT."; break;
		case ENUM_ASSUMEDAREA:	stream << ".ASSUMEDAREA."; break;
		case ENUM_SUPERELEVATIONEVENT:	stream << ".SUPERELEVATIONEVENT."; break;
		case ENUM_ASBUILTPOINT:	stream << ".ASBUILTPOINT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcAnnotationTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ASSUMEDPOINT:	return L"ASSUMEDPOINT";
		case ENUM_ASBUILTAREA:	return L"ASBUILTAREA";
		case ENUM_ASBUILTLINE:	return L"ASBUILTLINE";
		case ENUM_NON_PHYSICAL_SIGNAL:	return L"NON_PHYSICAL_SIGNAL";
		case ENUM_ASSUMEDLINE:	return L"ASSUMEDLINE";
		case ENUM_WIDTHEVENT:	return L"WIDTHEVENT";
		case ENUM_ASSUMEDAREA:	return L"ASSUMEDAREA";
		case ENUM_SUPERELEVATIONEVENT:	return L"SUPERELEVATIONEVENT";
		case ENUM_ASBUILTPOINT:	return L"ASBUILTPOINT";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcAnnotationTypeEnum> IfcAnnotationTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcAnnotationTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcAnnotationTypeEnum>(); }
	shared_ptr<IfcAnnotationTypeEnum> type_object( new IfcAnnotationTypeEnum() );
	if( std_iequal( arg, L".ASSUMEDPOINT." ) )
	{
		type_object->m_enum = IfcAnnotationTypeEnum::ENUM_ASSUMEDPOINT;
	}
	else if( std_iequal( arg, L".ASBUILTAREA." ) )
	{
		type_object->m_enum = IfcAnnotationTypeEnum::ENUM_ASBUILTAREA;
	}
	else if( std_iequal( arg, L".ASBUILTLINE." ) )
	{
		type_object->m_enum = IfcAnnotationTypeEnum::ENUM_ASBUILTLINE;
	}
	else if( std_iequal( arg, L".NON_PHYSICAL_SIGNAL." ) )
	{
		type_object->m_enum = IfcAnnotationTypeEnum::ENUM_NON_PHYSICAL_SIGNAL;
	}
	else if( std_iequal( arg, L".ASSUMEDLINE." ) )
	{
		type_object->m_enum = IfcAnnotationTypeEnum::ENUM_ASSUMEDLINE;
	}
	else if( std_iequal( arg, L".WIDTHEVENT." ) )
	{
		type_object->m_enum = IfcAnnotationTypeEnum::ENUM_WIDTHEVENT;
	}
	else if( std_iequal( arg, L".ASSUMEDAREA." ) )
	{
		type_object->m_enum = IfcAnnotationTypeEnum::ENUM_ASSUMEDAREA;
	}
	else if( std_iequal( arg, L".SUPERELEVATIONEVENT." ) )
	{
		type_object->m_enum = IfcAnnotationTypeEnum::ENUM_SUPERELEVATIONEVENT;
	}
	else if( std_iequal( arg, L".ASBUILTPOINT." ) )
	{
		type_object->m_enum = IfcAnnotationTypeEnum::ENUM_ASBUILTPOINT;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcAnnotationTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcAnnotationTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
