/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcBeamTypeEnum.h"

// TYPE IfcBeamTypeEnum = ENUMERATION OF	(BEAM	,JOIST	,HOLLOWCORE	,LINTEL	,SPANDREL	,T_BEAM	,GIRDER_SEGMENT	,DIAPHRAGM	,PIERCAP	,HATSTONE	,CORNICE	,EDGEBEAM	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcBeamTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBeamTypeEnum> copy_self( new IfcBeamTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcBeamTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCBEAMTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BEAM:	stream << ".BEAM."; break;
		case ENUM_JOIST:	stream << ".JOIST."; break;
		case ENUM_HOLLOWCORE:	stream << ".HOLLOWCORE."; break;
		case ENUM_LINTEL:	stream << ".LINTEL."; break;
		case ENUM_SPANDREL:	stream << ".SPANDREL."; break;
		case ENUM_T_BEAM:	stream << ".T_BEAM."; break;
		case ENUM_GIRDER_SEGMENT:	stream << ".GIRDER_SEGMENT."; break;
		case ENUM_DIAPHRAGM:	stream << ".DIAPHRAGM."; break;
		case ENUM_PIERCAP:	stream << ".PIERCAP."; break;
		case ENUM_HATSTONE:	stream << ".HATSTONE."; break;
		case ENUM_CORNICE:	stream << ".CORNICE."; break;
		case ENUM_EDGEBEAM:	stream << ".EDGEBEAM."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcBeamTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BEAM:	return L"BEAM";
		case ENUM_JOIST:	return L"JOIST";
		case ENUM_HOLLOWCORE:	return L"HOLLOWCORE";
		case ENUM_LINTEL:	return L"LINTEL";
		case ENUM_SPANDREL:	return L"SPANDREL";
		case ENUM_T_BEAM:	return L"T_BEAM";
		case ENUM_GIRDER_SEGMENT:	return L"GIRDER_SEGMENT";
		case ENUM_DIAPHRAGM:	return L"DIAPHRAGM";
		case ENUM_PIERCAP:	return L"PIERCAP";
		case ENUM_HATSTONE:	return L"HATSTONE";
		case ENUM_CORNICE:	return L"CORNICE";
		case ENUM_EDGEBEAM:	return L"EDGEBEAM";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcBeamTypeEnum> IfcBeamTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcBeamTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcBeamTypeEnum>(); }
	shared_ptr<IfcBeamTypeEnum> type_object( new IfcBeamTypeEnum() );
	if( std_iequal( arg, L".BEAM." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_BEAM;
	}
	else if( std_iequal( arg, L".JOIST." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_JOIST;
	}
	else if( std_iequal( arg, L".HOLLOWCORE." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_HOLLOWCORE;
	}
	else if( std_iequal( arg, L".LINTEL." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_LINTEL;
	}
	else if( std_iequal( arg, L".SPANDREL." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_SPANDREL;
	}
	else if( std_iequal( arg, L".T_BEAM." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_T_BEAM;
	}
	else if( std_iequal( arg, L".GIRDER_SEGMENT." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_GIRDER_SEGMENT;
	}
	else if( std_iequal( arg, L".DIAPHRAGM." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_DIAPHRAGM;
	}
	else if( std_iequal( arg, L".PIERCAP." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_PIERCAP;
	}
	else if( std_iequal( arg, L".HATSTONE." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_HATSTONE;
	}
	else if( std_iequal( arg, L".CORNICE." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_CORNICE;
	}
	else if( std_iequal( arg, L".EDGEBEAM." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_EDGEBEAM;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcBeamTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
