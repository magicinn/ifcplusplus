/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcDoorTypeEnum = ENUMERATION OF	(DOOR	,GATE	,TRAPDOOR	,BOOM_BARRIER	,TURNSTILE	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcDoorTypeEnum : virtual public BuildingObject
{
public:
	enum IfcDoorTypeEnumEnum
	{
		ENUM_DOOR,
		ENUM_GATE,
		ENUM_TRAPDOOR,
		ENUM_BOOM_BARRIER,
		ENUM_TURNSTILE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcDoorTypeEnum() = default;
	IfcDoorTypeEnum( IfcDoorTypeEnumEnum e ) { m_enum = e; }
	~IfcDoorTypeEnum() = default;
	virtual const char* className() const { return "IfcDoorTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcDoorTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcDoorTypeEnumEnum m_enum;
};

