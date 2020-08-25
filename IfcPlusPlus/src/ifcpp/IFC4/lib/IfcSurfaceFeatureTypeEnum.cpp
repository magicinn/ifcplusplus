/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSurfaceFeatureTypeEnum.h"

// TYPE IfcSurfaceFeatureTypeEnum = ENUMERATION OF	(MARK	,TAG	,TREATMENT	,DEFECT	,HATCHMARKING	,LINEMARKING	,PAVEMENTSURFACEMARKING	,SYMBOLMARKING	,NONSKIDSURFACING	,RUMBLESTRIP	,TRANSVERSERUMBLESTRIP	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcSurfaceFeatureTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSurfaceFeatureTypeEnum> copy_self( new IfcSurfaceFeatureTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSurfaceFeatureTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSURFACEFEATURETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_MARK:	stream << ".MARK."; break;
		case ENUM_TAG:	stream << ".TAG."; break;
		case ENUM_TREATMENT:	stream << ".TREATMENT."; break;
		case ENUM_DEFECT:	stream << ".DEFECT."; break;
		case ENUM_HATCHMARKING:	stream << ".HATCHMARKING."; break;
		case ENUM_LINEMARKING:	stream << ".LINEMARKING."; break;
		case ENUM_PAVEMENTSURFACEMARKING:	stream << ".PAVEMENTSURFACEMARKING."; break;
		case ENUM_SYMBOLMARKING:	stream << ".SYMBOLMARKING."; break;
		case ENUM_NONSKIDSURFACING:	stream << ".NONSKIDSURFACING."; break;
		case ENUM_RUMBLESTRIP:	stream << ".RUMBLESTRIP."; break;
		case ENUM_TRANSVERSERUMBLESTRIP:	stream << ".TRANSVERSERUMBLESTRIP."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSurfaceFeatureTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_MARK:	return L"MARK";
		case ENUM_TAG:	return L"TAG";
		case ENUM_TREATMENT:	return L"TREATMENT";
		case ENUM_DEFECT:	return L"DEFECT";
		case ENUM_HATCHMARKING:	return L"HATCHMARKING";
		case ENUM_LINEMARKING:	return L"LINEMARKING";
		case ENUM_PAVEMENTSURFACEMARKING:	return L"PAVEMENTSURFACEMARKING";
		case ENUM_SYMBOLMARKING:	return L"SYMBOLMARKING";
		case ENUM_NONSKIDSURFACING:	return L"NONSKIDSURFACING";
		case ENUM_RUMBLESTRIP:	return L"RUMBLESTRIP";
		case ENUM_TRANSVERSERUMBLESTRIP:	return L"TRANSVERSERUMBLESTRIP";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcSurfaceFeatureTypeEnum> IfcSurfaceFeatureTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSurfaceFeatureTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSurfaceFeatureTypeEnum>(); }
	shared_ptr<IfcSurfaceFeatureTypeEnum> type_object( new IfcSurfaceFeatureTypeEnum() );
	if( std_iequal( arg, L".MARK." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_MARK;
	}
	else if( std_iequal( arg, L".TAG." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_TAG;
	}
	else if( std_iequal( arg, L".TREATMENT." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_TREATMENT;
	}
	else if( std_iequal( arg, L".DEFECT." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_DEFECT;
	}
	else if( std_iequal( arg, L".HATCHMARKING." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_HATCHMARKING;
	}
	else if( std_iequal( arg, L".LINEMARKING." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_LINEMARKING;
	}
	else if( std_iequal( arg, L".PAVEMENTSURFACEMARKING." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_PAVEMENTSURFACEMARKING;
	}
	else if( std_iequal( arg, L".SYMBOLMARKING." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_SYMBOLMARKING;
	}
	else if( std_iequal( arg, L".NONSKIDSURFACING." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_NONSKIDSURFACING;
	}
	else if( std_iequal( arg, L".RUMBLESTRIP." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_RUMBLESTRIP;
	}
	else if( std_iequal( arg, L".TRANSVERSERUMBLESTRIP." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_TRANSVERSERUMBLESTRIP;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcSurfaceFeatureTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
