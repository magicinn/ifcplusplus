/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcAlignment2DCantSegment.h"
//ENTITY
class IFCQUERY_EXPORT IfcAlignment2DCantSegLine : public IfcAlignment2DCantSegment
{ 
public:
	IfcAlignment2DCantSegLine() = default;
	IfcAlignment2DCantSegLine( int id );
	~IfcAlignment2DCantSegLine() = default;
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 9; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcAlignment2DCantSegLine"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcAlignment2DSegment -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcBoolean>									m_TangentialContinuity;		//optional
	//  shared_ptr<IfcLabel>									m_StartTag;					//optional
	//  shared_ptr<IfcLabel>									m_EndTag;					//optional

	// IfcAlignment2DCantSegment -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcPositiveLengthMeasure>					m_StartDistAlong;
	//  shared_ptr<IfcPositiveLengthMeasure>					m_HorizontalLength;
	//  shared_ptr<IfcLengthMeasure>							m_StartCantLeft;
	//  shared_ptr<IfcLengthMeasure>							m_EndCantLeft;				//optional
	//  shared_ptr<IfcLengthMeasure>							m_StartCantRight;
	//  shared_ptr<IfcLengthMeasure>							m_EndCantRight;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcAlignment2DCant> >				m_ToCant_inverse;

	// IfcAlignment2DCantSegLine -----------------------------------------------------------
};

