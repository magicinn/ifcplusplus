/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement.h"
#include "ifcpp/IFC4/include/IfcLocalPlacement.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4/include/IfcProduct.h"

// ENTITY IfcLocalPlacement 
IfcLocalPlacement::IfcLocalPlacement( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcLocalPlacement::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLocalPlacement> copy_self( new IfcLocalPlacement() );
	if( m_PlacementRelTo ) { copy_self->m_PlacementRelTo = dynamic_pointer_cast<IfcObjectPlacement>( m_PlacementRelTo->getDeepCopy(options) ); }
	if( m_RelativePlacement ) { copy_self->m_RelativePlacement = dynamic_pointer_cast<IfcAxis2Placement>( m_RelativePlacement->getDeepCopy(options) ); }
	return copy_self;
}
void IfcLocalPlacement::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCLOCALPLACEMENT" << "(";
	if( m_PlacementRelTo ) { stream << "#" << m_PlacementRelTo->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_RelativePlacement ) { m_RelativePlacement->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcLocalPlacement::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcLocalPlacement::toString() const { return L"IfcLocalPlacement"; }
void IfcLocalPlacement::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcLocalPlacement, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_PlacementRelTo, map );
	m_RelativePlacement = IfcAxis2Placement::createObjectFromSTEP( args[1], map );
}
void IfcLocalPlacement::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcObjectPlacement::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelativePlacement", m_RelativePlacement ) );
}
void IfcLocalPlacement::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcObjectPlacement::getAttributesInverse( vec_attributes_inverse );
}
void IfcLocalPlacement::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcObjectPlacement::setInverseCounterparts( ptr_self_entity );
}
void IfcLocalPlacement::unlinkFromInverseCounterparts()
{
	IfcObjectPlacement::unlinkFromInverseCounterparts();
}
