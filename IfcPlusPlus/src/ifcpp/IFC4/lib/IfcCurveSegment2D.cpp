/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4/include/IfcCurveSegment2D.h"
#include "ifcpp/IFC4/include/IfcLinearPositioningElement.h"
#include "ifcpp/IFC4/include/IfcPlaneAngleMeasure.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcCurveSegment2D 
IfcCurveSegment2D::IfcCurveSegment2D( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcCurveSegment2D::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCurveSegment2D> copy_self( new IfcCurveSegment2D() );
	if( m_StartPoint ) { copy_self->m_StartPoint = dynamic_pointer_cast<IfcCartesianPoint>( m_StartPoint->getDeepCopy(options) ); }
	if( m_StartDirection ) { copy_self->m_StartDirection = dynamic_pointer_cast<IfcPlaneAngleMeasure>( m_StartDirection->getDeepCopy(options) ); }
	if( m_SegmentLength ) { copy_self->m_SegmentLength = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_SegmentLength->getDeepCopy(options) ); }
	return copy_self;
}
void IfcCurveSegment2D::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCURVESEGMENT2D" << "(";
	if( m_StartPoint ) { stream << "#" << m_StartPoint->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_StartDirection ) { m_StartDirection->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SegmentLength ) { m_SegmentLength->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcCurveSegment2D::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcCurveSegment2D::toString() const { return L"IfcCurveSegment2D"; }
void IfcCurveSegment2D::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCurveSegment2D, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_StartPoint, map );
	m_StartDirection = IfcPlaneAngleMeasure::createObjectFromSTEP( args[1], map );
	m_SegmentLength = IfcPositiveLengthMeasure::createObjectFromSTEP( args[2], map );
}
void IfcCurveSegment2D::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcBoundedCurve::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "StartPoint", m_StartPoint ) );
	vec_attributes.emplace_back( std::make_pair( "StartDirection", m_StartDirection ) );
	vec_attributes.emplace_back( std::make_pair( "SegmentLength", m_SegmentLength ) );
}
void IfcCurveSegment2D::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcBoundedCurve::getAttributesInverse( vec_attributes_inverse );
}
void IfcCurveSegment2D::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBoundedCurve::setInverseCounterparts( ptr_self_entity );
}
void IfcCurveSegment2D::unlinkFromInverseCounterparts()
{
	IfcBoundedCurve::unlinkFromInverseCounterparts();
}
