/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcAudioVisualApplianceTypeEnum = ENUMERATION OF	(AMPLIFIER	,CAMERA	,DISPLAY	,MICROPHONE	,PLAYER	,PROJECTOR	,RECEIVER	,SPEAKER	,SWITCHER	,TELEPHONE	,TUNER	,RAILWAY_COMMUNICATION_TERMINAL	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcAudioVisualApplianceTypeEnum : virtual public BuildingObject
{
public:
	enum IfcAudioVisualApplianceTypeEnumEnum
	{
		ENUM_AMPLIFIER,
		ENUM_CAMERA,
		ENUM_DISPLAY,
		ENUM_MICROPHONE,
		ENUM_PLAYER,
		ENUM_PROJECTOR,
		ENUM_RECEIVER,
		ENUM_SPEAKER,
		ENUM_SWITCHER,
		ENUM_TELEPHONE,
		ENUM_TUNER,
		ENUM_RAILWAY_COMMUNICATION_TERMINAL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcAudioVisualApplianceTypeEnum() = default;
	IfcAudioVisualApplianceTypeEnum( IfcAudioVisualApplianceTypeEnumEnum e ) { m_enum = e; }
	~IfcAudioVisualApplianceTypeEnum() = default;
	virtual const char* className() const { return "IfcAudioVisualApplianceTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcAudioVisualApplianceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcAudioVisualApplianceTypeEnumEnum m_enum;
};

