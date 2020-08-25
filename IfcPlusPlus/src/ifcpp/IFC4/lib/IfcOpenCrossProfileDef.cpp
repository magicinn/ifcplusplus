/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcOpenCrossProfileDef.h"
#include "ifcpp/IFC4/include/IfcPlaneAngleMeasure.h"
#include "ifcpp/IFC4/include/IfcProfileProperties.h"
#include "ifcpp/IFC4/include/IfcProfileTypeEnum.h"

// ENTITY IfcOpenCrossProfileDef 
IfcOpenCrossProfileDef::IfcOpenCrossProfileDef( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcOpenCrossProfileDef::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcOpenCrossProfileDef> copy_self( new IfcOpenCrossProfileDef() );
	if( m_ProfileType ) { copy_self->m_ProfileType = dynamic_pointer_cast<IfcProfileTypeEnum>( m_ProfileType->getDeepCopy(options) ); }
	if( m_ProfileName ) { copy_self->m_ProfileName = dynamic_pointer_cast<IfcLabel>( m_ProfileName->getDeepCopy(options) ); }
	if( m_HorizontalWidths ) { copy_self->m_HorizontalWidths = dynamic_pointer_cast<IfcBoolean>( m_HorizontalWidths->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Widths.size(); ++ii )
	{
		auto item_ii = m_Widths[ii];
		if( item_ii )
		{
			copy_self->m_Widths.emplace_back( dynamic_pointer_cast<IfcNonNegativeLengthMeasure>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_Slopes.size(); ++ii )
	{
		auto item_ii = m_Slopes[ii];
		if( item_ii )
		{
			copy_self->m_Slopes.emplace_back( dynamic_pointer_cast<IfcPlaneAngleMeasure>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_Tags.size(); ++ii )
	{
		auto item_ii = m_Tags[ii];
		if( item_ii )
		{
			copy_self->m_Tags.emplace_back( dynamic_pointer_cast<IfcLabel>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcOpenCrossProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCOPENCROSSPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_HorizontalWidths ) { m_HorizontalWidths->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_Widths.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcNonNegativeLengthMeasure>& type_object = m_Widths[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, false );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	writeTypeOfRealList( stream, m_Slopes, false );
	stream << ",";
	if( m_Tags.size() > 0 )
	{
		stream << "(";
		for( size_t ii = 0; ii < m_Tags.size(); ++ii )
		{
			if( ii > 0 )
			{
				stream << ",";
			}
			const shared_ptr<IfcLabel>& type_object = m_Tags[ii];
			if( type_object )
			{
				type_object->getStepParameter( stream, false );
			}
			else
			{
				stream << "$";
			}
		}
		stream << ")";
	}
	else { stream << "$"; }
	stream << ");";
}
void IfcOpenCrossProfileDef::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcOpenCrossProfileDef::toString() const { return L"IfcOpenCrossProfileDef"; }
void IfcOpenCrossProfileDef::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcOpenCrossProfileDef, expecting 6, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map );
	m_HorizontalWidths = IfcBoolean::createObjectFromSTEP( args[2], map );
	readTypeOfRealList( args[3], m_Widths );
	readTypeOfRealList( args[4], m_Slopes );
	readTypeOfStringList( args[5], m_Tags );
}
void IfcOpenCrossProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcProfileDef::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "HorizontalWidths", m_HorizontalWidths ) );
	if( !m_Widths.empty() )
	{
		shared_ptr<AttributeObjectVector> Widths_vec_object( new AttributeObjectVector() );
		std::copy( m_Widths.begin(), m_Widths.end(), std::back_inserter( Widths_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "Widths", Widths_vec_object ) );
	}
	if( !m_Slopes.empty() )
	{
		shared_ptr<AttributeObjectVector> Slopes_vec_object( new AttributeObjectVector() );
		std::copy( m_Slopes.begin(), m_Slopes.end(), std::back_inserter( Slopes_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "Slopes", Slopes_vec_object ) );
	}
	if( !m_Tags.empty() )
	{
		shared_ptr<AttributeObjectVector> Tags_vec_object( new AttributeObjectVector() );
		std::copy( m_Tags.begin(), m_Tags.end(), std::back_inserter( Tags_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "Tags", Tags_vec_object ) );
	}
}
void IfcOpenCrossProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IfcOpenCrossProfileDef::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IfcOpenCrossProfileDef::unlinkFromInverseCounterparts()
{
	IfcProfileDef::unlinkFromInverseCounterparts();
}
