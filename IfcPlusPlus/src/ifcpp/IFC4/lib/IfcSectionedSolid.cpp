/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcProfileDef.h"
#include "ifcpp/IFC4/include/IfcSectionedSolid.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcSectionedSolid 
IfcSectionedSolid::IfcSectionedSolid( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcSectionedSolid::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSectionedSolid> copy_self( new IfcSectionedSolid() );
	if( m_Directrix ) { copy_self->m_Directrix = dynamic_pointer_cast<IfcCurve>( m_Directrix->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_CrossSections.size(); ++ii )
	{
		auto item_ii = m_CrossSections[ii];
		if( item_ii )
		{
			copy_self->m_CrossSections.emplace_back( dynamic_pointer_cast<IfcProfileDef>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcSectionedSolid::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSECTIONEDSOLID" << "(";
	if( m_Directrix ) { stream << "#" << m_Directrix->m_entity_id; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_CrossSections );
	stream << ");";
}
void IfcSectionedSolid::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcSectionedSolid::toString() const { return L"IfcSectionedSolid"; }
void IfcSectionedSolid::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSectionedSolid, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Directrix, map );
	readEntityReferenceList( args[1], m_CrossSections, map );
}
void IfcSectionedSolid::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcSolidModel::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Directrix", m_Directrix ) );
	if( !m_CrossSections.empty() )
	{
		shared_ptr<AttributeObjectVector> CrossSections_vec_object( new AttributeObjectVector() );
		std::copy( m_CrossSections.begin(), m_CrossSections.end(), std::back_inserter( CrossSections_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "CrossSections", CrossSections_vec_object ) );
	}
}
void IfcSectionedSolid::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcSolidModel::getAttributesInverse( vec_attributes_inverse );
}
void IfcSectionedSolid::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSolidModel::setInverseCounterparts( ptr_self_entity );
}
void IfcSectionedSolid::unlinkFromInverseCounterparts()
{
	IfcSolidModel::unlinkFromInverseCounterparts();
}
