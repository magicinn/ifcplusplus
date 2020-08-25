/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAlignment2DCant.h"
#include "ifcpp/IFC4/include/IfcAlignment2DCantSegment.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcAlignment2DCantSegment 
IfcAlignment2DCantSegment::IfcAlignment2DCantSegment( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcAlignment2DCantSegment::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAlignment2DCantSegment> copy_self( new IfcAlignment2DCantSegment() );
	if( m_TangentialContinuity ) { copy_self->m_TangentialContinuity = dynamic_pointer_cast<IfcBoolean>( m_TangentialContinuity->getDeepCopy(options) ); }
	if( m_StartTag ) { copy_self->m_StartTag = dynamic_pointer_cast<IfcLabel>( m_StartTag->getDeepCopy(options) ); }
	if( m_EndTag ) { copy_self->m_EndTag = dynamic_pointer_cast<IfcLabel>( m_EndTag->getDeepCopy(options) ); }
	if( m_StartDistAlong ) { copy_self->m_StartDistAlong = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_StartDistAlong->getDeepCopy(options) ); }
	if( m_HorizontalLength ) { copy_self->m_HorizontalLength = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_HorizontalLength->getDeepCopy(options) ); }
	if( m_StartCantLeft ) { copy_self->m_StartCantLeft = dynamic_pointer_cast<IfcLengthMeasure>( m_StartCantLeft->getDeepCopy(options) ); }
	if( m_EndCantLeft ) { copy_self->m_EndCantLeft = dynamic_pointer_cast<IfcLengthMeasure>( m_EndCantLeft->getDeepCopy(options) ); }
	if( m_StartCantRight ) { copy_self->m_StartCantRight = dynamic_pointer_cast<IfcLengthMeasure>( m_StartCantRight->getDeepCopy(options) ); }
	if( m_EndCantRight ) { copy_self->m_EndCantRight = dynamic_pointer_cast<IfcLengthMeasure>( m_EndCantRight->getDeepCopy(options) ); }
	return copy_self;
}
void IfcAlignment2DCantSegment::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCALIGNMENT2DCANTSEGMENT" << "(";
	if( m_TangentialContinuity ) { m_TangentialContinuity->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartTag ) { m_StartTag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EndTag ) { m_EndTag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartDistAlong ) { m_StartDistAlong->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_HorizontalLength ) { m_HorizontalLength->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartCantLeft ) { m_StartCantLeft->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EndCantLeft ) { m_EndCantLeft->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartCantRight ) { m_StartCantRight->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EndCantRight ) { m_EndCantRight->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcAlignment2DCantSegment::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcAlignment2DCantSegment::toString() const { return L"IfcAlignment2DCantSegment"; }
void IfcAlignment2DCantSegment::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcAlignment2DCantSegment, expecting 9, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_TangentialContinuity = IfcBoolean::createObjectFromSTEP( args[0], map );
	m_StartTag = IfcLabel::createObjectFromSTEP( args[1], map );
	m_EndTag = IfcLabel::createObjectFromSTEP( args[2], map );
	m_StartDistAlong = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map );
	m_HorizontalLength = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map );
	m_StartCantLeft = IfcLengthMeasure::createObjectFromSTEP( args[5], map );
	m_EndCantLeft = IfcLengthMeasure::createObjectFromSTEP( args[6], map );
	m_StartCantRight = IfcLengthMeasure::createObjectFromSTEP( args[7], map );
	m_EndCantRight = IfcLengthMeasure::createObjectFromSTEP( args[8], map );
}
void IfcAlignment2DCantSegment::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcAlignment2DSegment::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "StartDistAlong", m_StartDistAlong ) );
	vec_attributes.emplace_back( std::make_pair( "HorizontalLength", m_HorizontalLength ) );
	vec_attributes.emplace_back( std::make_pair( "StartCantLeft", m_StartCantLeft ) );
	vec_attributes.emplace_back( std::make_pair( "EndCantLeft", m_EndCantLeft ) );
	vec_attributes.emplace_back( std::make_pair( "StartCantRight", m_StartCantRight ) );
	vec_attributes.emplace_back( std::make_pair( "EndCantRight", m_EndCantRight ) );
}
void IfcAlignment2DCantSegment::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcAlignment2DSegment::getAttributesInverse( vec_attributes_inverse );
	if( !m_ToCant_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ToCant_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ToCant_inverse.size(); ++i )
		{
			if( !m_ToCant_inverse[i].expired() )
			{
				ToCant_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcAlignment2DCant>( m_ToCant_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ToCant_inverse", ToCant_inverse_vec_obj ) );
	}
}
void IfcAlignment2DCantSegment::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcAlignment2DSegment::setInverseCounterparts( ptr_self_entity );
}
void IfcAlignment2DCantSegment::unlinkFromInverseCounterparts()
{
	IfcAlignment2DSegment::unlinkFromInverseCounterparts();
}
