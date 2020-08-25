/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcAlarmTypeEnum = ENUMERATION OF	(BELL	,BREAKGLASSBUTTON	,LIGHT	,MANUALPULLBOX	,SIREN	,WHISTLE	,RAILWAYCROCODILE	,RAILWAYDETONATOR	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcAlarmTypeEnum : virtual public BuildingObject
{
public:
	enum IfcAlarmTypeEnumEnum
	{
		ENUM_BELL,
		ENUM_BREAKGLASSBUTTON,
		ENUM_LIGHT,
		ENUM_MANUALPULLBOX,
		ENUM_SIREN,
		ENUM_WHISTLE,
		ENUM_RAILWAYCROCODILE,
		ENUM_RAILWAYDETONATOR,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcAlarmTypeEnum() = default;
	IfcAlarmTypeEnum( IfcAlarmTypeEnumEnum e ) { m_enum = e; }
	~IfcAlarmTypeEnum() = default;
	virtual const char* className() const { return "IfcAlarmTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcAlarmTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcAlarmTypeEnumEnum m_enum;
};

