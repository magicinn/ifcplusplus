/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcSIUnitName.h"

// TYPE IfcSIUnitName = ENUMERATION OF	(AMPERE	,BECQUEREL	,CANDELA	,COULOMB	,CUBIC_METRE	,DEGREE_CELSIUS	,FARAD	,GRAM	,GRAY	,HENRY	,HERTZ	,JOULE	,KELVIN	,LUMEN	,LUX	,METRE	,MOLE	,NEWTON	,OHM	,PASCAL	,RADIAN	,SECOND	,SIEMENS	,SIEVERT	,SQUARE_METRE	,STERADIAN	,TESLA	,VOLT	,WATT	,WEBER);
IfcSIUnitName::IfcSIUnitName() {}
IfcSIUnitName::~IfcSIUnitName() {}
shared_ptr<IfcPPObject> IfcSIUnitName::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcSIUnitName> copy_self( new IfcSIUnitName() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSIUnitName::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSIUNITNAME("; }
	switch( m_enum )
	{
		case ENUM_AMPERE:	stream << ".AMPERE."; break;
		case ENUM_BECQUEREL:	stream << ".BECQUEREL."; break;
		case ENUM_CANDELA:	stream << ".CANDELA."; break;
		case ENUM_COULOMB:	stream << ".COULOMB."; break;
		case ENUM_CUBIC_METRE:	stream << ".CUBIC_METRE."; break;
		case ENUM_DEGREE_CELSIUS:	stream << ".DEGREE_CELSIUS."; break;
		case ENUM_FARAD:	stream << ".FARAD."; break;
		case ENUM_GRAM:	stream << ".GRAM."; break;
		case ENUM_GRAY:	stream << ".GRAY."; break;
		case ENUM_HENRY:	stream << ".HENRY."; break;
		case ENUM_HERTZ:	stream << ".HERTZ."; break;
		case ENUM_JOULE:	stream << ".JOULE."; break;
		case ENUM_KELVIN:	stream << ".KELVIN."; break;
		case ENUM_LUMEN:	stream << ".LUMEN."; break;
		case ENUM_LUX:	stream << ".LUX."; break;
		case ENUM_METRE:	stream << ".METRE."; break;
		case ENUM_MOLE:	stream << ".MOLE."; break;
		case ENUM_NEWTON:	stream << ".NEWTON."; break;
		case ENUM_OHM:	stream << ".OHM."; break;
		case ENUM_PASCAL:	stream << ".PASCAL."; break;
		case ENUM_RADIAN:	stream << ".RADIAN."; break;
		case ENUM_SECOND:	stream << ".SECOND."; break;
		case ENUM_SIEMENS:	stream << ".SIEMENS."; break;
		case ENUM_SIEVERT:	stream << ".SIEVERT."; break;
		case ENUM_SQUARE_METRE:	stream << ".SQUARE_METRE."; break;
		case ENUM_STERADIAN:	stream << ".STERADIAN."; break;
		case ENUM_TESLA:	stream << ".TESLA."; break;
		case ENUM_VOLT:	stream << ".VOLT."; break;
		case ENUM_WATT:	stream << ".WATT."; break;
		case ENUM_WEBER:	stream << ".WEBER."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSIUnitName::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_AMPERE:	return L"AMPERE";
		case ENUM_BECQUEREL:	return L"BECQUEREL";
		case ENUM_CANDELA:	return L"CANDELA";
		case ENUM_COULOMB:	return L"COULOMB";
		case ENUM_CUBIC_METRE:	return L"CUBIC_METRE";
		case ENUM_DEGREE_CELSIUS:	return L"DEGREE_CELSIUS";
		case ENUM_FARAD:	return L"FARAD";
		case ENUM_GRAM:	return L"GRAM";
		case ENUM_GRAY:	return L"GRAY";
		case ENUM_HENRY:	return L"HENRY";
		case ENUM_HERTZ:	return L"HERTZ";
		case ENUM_JOULE:	return L"JOULE";
		case ENUM_KELVIN:	return L"KELVIN";
		case ENUM_LUMEN:	return L"LUMEN";
		case ENUM_LUX:	return L"LUX";
		case ENUM_METRE:	return L"METRE";
		case ENUM_MOLE:	return L"MOLE";
		case ENUM_NEWTON:	return L"NEWTON";
		case ENUM_OHM:	return L"OHM";
		case ENUM_PASCAL:	return L"PASCAL";
		case ENUM_RADIAN:	return L"RADIAN";
		case ENUM_SECOND:	return L"SECOND";
		case ENUM_SIEMENS:	return L"SIEMENS";
		case ENUM_SIEVERT:	return L"SIEVERT";
		case ENUM_SQUARE_METRE:	return L"SQUARE_METRE";
		case ENUM_STERADIAN:	return L"STERADIAN";
		case ENUM_TESLA:	return L"TESLA";
		case ENUM_VOLT:	return L"VOLT";
		case ENUM_WATT:	return L"WATT";
		case ENUM_WEBER:	return L"WEBER";
	}
	return L"";
}
shared_ptr<IfcSIUnitName> IfcSIUnitName::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSIUnitName>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSIUnitName>(); }
	shared_ptr<IfcSIUnitName> type_object( new IfcSIUnitName() );
	if( boost::iequals( arg, L".AMPERE." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_AMPERE;
	}
	else if( boost::iequals( arg, L".BECQUEREL." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_BECQUEREL;
	}
	else if( boost::iequals( arg, L".CANDELA." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_CANDELA;
	}
	else if( boost::iequals( arg, L".COULOMB." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_COULOMB;
	}
	else if( boost::iequals( arg, L".CUBIC_METRE." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_CUBIC_METRE;
	}
	else if( boost::iequals( arg, L".DEGREE_CELSIUS." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_DEGREE_CELSIUS;
	}
	else if( boost::iequals( arg, L".FARAD." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_FARAD;
	}
	else if( boost::iequals( arg, L".GRAM." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_GRAM;
	}
	else if( boost::iequals( arg, L".GRAY." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_GRAY;
	}
	else if( boost::iequals( arg, L".HENRY." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_HENRY;
	}
	else if( boost::iequals( arg, L".HERTZ." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_HERTZ;
	}
	else if( boost::iequals( arg, L".JOULE." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_JOULE;
	}
	else if( boost::iequals( arg, L".KELVIN." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_KELVIN;
	}
	else if( boost::iequals( arg, L".LUMEN." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_LUMEN;
	}
	else if( boost::iequals( arg, L".LUX." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_LUX;
	}
	else if( boost::iequals( arg, L".METRE." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_METRE;
	}
	else if( boost::iequals( arg, L".MOLE." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_MOLE;
	}
	else if( boost::iequals( arg, L".NEWTON." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_NEWTON;
	}
	else if( boost::iequals( arg, L".OHM." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_OHM;
	}
	else if( boost::iequals( arg, L".PASCAL." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_PASCAL;
	}
	else if( boost::iequals( arg, L".RADIAN." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_RADIAN;
	}
	else if( boost::iequals( arg, L".SECOND." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_SECOND;
	}
	else if( boost::iequals( arg, L".SIEMENS." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_SIEMENS;
	}
	else if( boost::iequals( arg, L".SIEVERT." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_SIEVERT;
	}
	else if( boost::iequals( arg, L".SQUARE_METRE." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_SQUARE_METRE;
	}
	else if( boost::iequals( arg, L".STERADIAN." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_STERADIAN;
	}
	else if( boost::iequals( arg, L".TESLA." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_TESLA;
	}
	else if( boost::iequals( arg, L".VOLT." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_VOLT;
	}
	else if( boost::iequals( arg, L".WATT." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_WATT;
	}
	else if( boost::iequals( arg, L".WEBER." ) )
	{
		type_object->m_enum = IfcSIUnitName::ENUM_WEBER;
	}
	return type_object;
}