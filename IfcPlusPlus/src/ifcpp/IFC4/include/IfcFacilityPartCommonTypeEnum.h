/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcFacilityPartTypeSelect.h"

// TYPE IfcFacilityPartCommonTypeEnum = ENUMERATION OF	(SEGMENT	,ABOVEGROUND	,JUNCTION	,LEVELCROSSING	,BELOWGROUND	,SUBSTRUCTURE	,TERMINAL	,SUPERSTRUCTURE	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcFacilityPartCommonTypeEnum : public IfcFacilityPartTypeSelect
{
public:
	enum IfcFacilityPartCommonTypeEnumEnum
	{
		ENUM_SEGMENT,
		ENUM_ABOVEGROUND,
		ENUM_JUNCTION,
		ENUM_LEVELCROSSING,
		ENUM_BELOWGROUND,
		ENUM_SUBSTRUCTURE,
		ENUM_TERMINAL,
		ENUM_SUPERSTRUCTURE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcFacilityPartCommonTypeEnum() = default;
	IfcFacilityPartCommonTypeEnum( IfcFacilityPartCommonTypeEnumEnum e ) { m_enum = e; }
	~IfcFacilityPartCommonTypeEnum() = default;
	virtual const char* className() const { return "IfcFacilityPartCommonTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcFacilityPartCommonTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcFacilityPartCommonTypeEnumEnum m_enum;
};

