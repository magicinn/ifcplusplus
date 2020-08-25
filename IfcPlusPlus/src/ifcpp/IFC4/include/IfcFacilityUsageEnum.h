/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcFacilityUsageEnum = ENUMERATION OF	(LATERAL	,REGION	,VERTICAL	,LONGITUDINAL	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcFacilityUsageEnum : virtual public BuildingObject
{
public:
	enum IfcFacilityUsageEnumEnum
	{
		ENUM_LATERAL,
		ENUM_REGION,
		ENUM_VERTICAL,
		ENUM_LONGITUDINAL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcFacilityUsageEnum() = default;
	IfcFacilityUsageEnum( IfcFacilityUsageEnumEnum e ) { m_enum = e; }
	~IfcFacilityUsageEnum() = default;
	virtual const char* className() const { return "IfcFacilityUsageEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcFacilityUsageEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcFacilityUsageEnumEnum m_enum;
};

