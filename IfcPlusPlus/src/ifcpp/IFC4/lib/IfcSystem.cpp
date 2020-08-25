/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToGroup.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelServicesBuildings.h"
#include "ifcpp/IFC4/include/IfcSystem.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcSystem 
IfcSystem::IfcSystem( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcSystem::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSystem> copy_self( new IfcSystem() );
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
	return copy_self;
}
void IfcSystem::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSYSTEM" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcSystem::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcSystem::toString() const { return L"IfcSystem"; }
void IfcSystem::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSystem, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
}
void IfcSystem::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcGroup::getAttributes( vec_attributes );
}
void IfcSystem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcGroup::getAttributesInverse( vec_attributes_inverse );
	if( !m_ServicesBuildings_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ServicesBuildings_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ServicesBuildings_inverse.size(); ++i )
		{
			if( !m_ServicesBuildings_inverse[i].expired() )
			{
				ServicesBuildings_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelServicesBuildings>( m_ServicesBuildings_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ServicesBuildings_inverse", ServicesBuildings_inverse_vec_obj ) );
	}
	if( !m_ServicesFacilities_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ServicesFacilities_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ServicesFacilities_inverse.size(); ++i )
		{
			if( !m_ServicesFacilities_inverse[i].expired() )
			{
				ServicesFacilities_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelReferencedInSpatialStructure>( m_ServicesFacilities_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ServicesFacilities_inverse", ServicesFacilities_inverse_vec_obj ) );
	}
}
void IfcSystem::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGroup::setInverseCounterparts( ptr_self_entity );
}
void IfcSystem::unlinkFromInverseCounterparts()
{
	IfcGroup::unlinkFromInverseCounterparts();
}
