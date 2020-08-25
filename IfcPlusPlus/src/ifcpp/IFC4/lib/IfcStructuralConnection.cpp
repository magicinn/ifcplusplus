/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoundaryCondition.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelConnectsStructuralActivity.h"
#include "ifcpp/IFC4/include/IfcRelConnectsStructuralMember.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcRelPositions.h"
#include "ifcpp/IFC4/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcStructuralConnection.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcStructuralConnection 
IfcStructuralConnection::IfcStructuralConnection( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcStructuralConnection::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStructuralConnection> copy_self( new IfcStructuralConnection() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = make_shared<IfcGloballyUniqueId>( createBase64Uuid_wstr().data() ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_ObjectPlacement ) { copy_self->m_ObjectPlacement = dynamic_pointer_cast<IfcObjectPlacement>( m_ObjectPlacement->getDeepCopy(options) ); }
	if( m_Representation ) { copy_self->m_Representation = dynamic_pointer_cast<IfcProductRepresentation>( m_Representation->getDeepCopy(options) ); }
	if( m_AppliedCondition ) { copy_self->m_AppliedCondition = dynamic_pointer_cast<IfcBoundaryCondition>( m_AppliedCondition->getDeepCopy(options) ); }
	return copy_self;
}
void IfcStructuralConnection::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSTRUCTURALCONNECTION" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_AppliedCondition ) { stream << "#" << m_AppliedCondition->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcStructuralConnection::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcStructuralConnection::toString() const { return L"IfcStructuralConnection"; }
void IfcStructuralConnection::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 8 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralConnection, expecting 8, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_ObjectPlacement, map );
	readEntityReference( args[6], m_Representation, map );
	readEntityReference( args[7], m_AppliedCondition, map );
}
void IfcStructuralConnection::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcStructuralItem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "AppliedCondition", m_AppliedCondition ) );
}
void IfcStructuralConnection::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcStructuralItem::getAttributesInverse( vec_attributes_inverse );
	if( !m_ConnectsStructuralMembers_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ConnectsStructuralMembers_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ConnectsStructuralMembers_inverse.size(); ++i )
		{
			if( !m_ConnectsStructuralMembers_inverse[i].expired() )
			{
				ConnectsStructuralMembers_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelConnectsStructuralMember>( m_ConnectsStructuralMembers_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ConnectsStructuralMembers_inverse", ConnectsStructuralMembers_inverse_vec_obj ) );
	}
}
void IfcStructuralConnection::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcStructuralItem::setInverseCounterparts( ptr_self_entity );
}
void IfcStructuralConnection::unlinkFromInverseCounterparts()
{
	IfcStructuralItem::unlinkFromInverseCounterparts();
}
