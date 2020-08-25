/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAnalysisModelTypeEnum.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
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
#include "ifcpp/IFC4/include/IfcStructuralAnalysisModel.h"
#include "ifcpp/IFC4/include/IfcStructuralLoadGroup.h"
#include "ifcpp/IFC4/include/IfcStructuralResultGroup.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcStructuralAnalysisModel 
IfcStructuralAnalysisModel::IfcStructuralAnalysisModel( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcStructuralAnalysisModel::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStructuralAnalysisModel> copy_self( new IfcStructuralAnalysisModel() );
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
	if( m_PredefinedType ) { copy_self->m_PredefinedType = dynamic_pointer_cast<IfcAnalysisModelTypeEnum>( m_PredefinedType->getDeepCopy(options) ); }
	if( m_OrientationOf2DPlane ) { copy_self->m_OrientationOf2DPlane = dynamic_pointer_cast<IfcAxis2Placement3D>( m_OrientationOf2DPlane->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_LoadedBy.size(); ++ii )
	{
		auto item_ii = m_LoadedBy[ii];
		if( item_ii )
		{
			copy_self->m_LoadedBy.emplace_back( dynamic_pointer_cast<IfcStructuralLoadGroup>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_HasResults.size(); ++ii )
	{
		auto item_ii = m_HasResults[ii];
		if( item_ii )
		{
			copy_self->m_HasResults.emplace_back( dynamic_pointer_cast<IfcStructuralResultGroup>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_SharedPlacement ) { copy_self->m_SharedPlacement = dynamic_pointer_cast<IfcObjectPlacement>( m_SharedPlacement->getDeepCopy(options) ); }
	return copy_self;
}
void IfcStructuralAnalysisModel::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSTRUCTURALANALYSISMODEL" << "(";
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
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OrientationOf2DPlane ) { stream << "#" << m_OrientationOf2DPlane->m_entity_id; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_LoadedBy );
	stream << ",";
	writeEntityList( stream, m_HasResults );
	stream << ",";
	if( m_SharedPlacement ) { stream << "#" << m_SharedPlacement->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcStructuralAnalysisModel::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcStructuralAnalysisModel::toString() const { return L"IfcStructuralAnalysisModel"; }
void IfcStructuralAnalysisModel::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 10 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStructuralAnalysisModel, expecting 10, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	m_PredefinedType = IfcAnalysisModelTypeEnum::createObjectFromSTEP( args[5], map );
	readEntityReference( args[6], m_OrientationOf2DPlane, map );
	readEntityReferenceList( args[7], m_LoadedBy, map );
	readEntityReferenceList( args[8], m_HasResults, map );
	readEntityReference( args[9], m_SharedPlacement, map );
}
void IfcStructuralAnalysisModel::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcSystem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
	vec_attributes.emplace_back( std::make_pair( "OrientationOf2DPlane", m_OrientationOf2DPlane ) );
	if( !m_LoadedBy.empty() )
	{
		shared_ptr<AttributeObjectVector> LoadedBy_vec_object( new AttributeObjectVector() );
		std::copy( m_LoadedBy.begin(), m_LoadedBy.end(), std::back_inserter( LoadedBy_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "LoadedBy", LoadedBy_vec_object ) );
	}
	if( !m_HasResults.empty() )
	{
		shared_ptr<AttributeObjectVector> HasResults_vec_object( new AttributeObjectVector() );
		std::copy( m_HasResults.begin(), m_HasResults.end(), std::back_inserter( HasResults_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "HasResults", HasResults_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "SharedPlacement", m_SharedPlacement ) );
}
void IfcStructuralAnalysisModel::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcSystem::getAttributesInverse( vec_attributes_inverse );
}
void IfcStructuralAnalysisModel::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSystem::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcStructuralAnalysisModel> ptr_self = dynamic_pointer_cast<IfcStructuralAnalysisModel>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcStructuralAnalysisModel::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_HasResults.size(); ++i )
	{
		if( m_HasResults[i] )
		{
			m_HasResults[i]->m_ResultGroupFor_inverse.emplace_back( ptr_self );
		}
	}
	for( size_t i=0; i<m_LoadedBy.size(); ++i )
	{
		if( m_LoadedBy[i] )
		{
			m_LoadedBy[i]->m_LoadGroupFor_inverse.emplace_back( ptr_self );
		}
	}
}
void IfcStructuralAnalysisModel::unlinkFromInverseCounterparts()
{
	IfcSystem::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_HasResults.size(); ++i )
	{
		if( m_HasResults[i] )
		{
			std::vector<weak_ptr<IfcStructuralAnalysisModel> >& ResultGroupFor_inverse = m_HasResults[i]->m_ResultGroupFor_inverse;
			for( auto it_ResultGroupFor_inverse = ResultGroupFor_inverse.begin(); it_ResultGroupFor_inverse != ResultGroupFor_inverse.end(); )
			{
				weak_ptr<IfcStructuralAnalysisModel> self_candidate_weak = *it_ResultGroupFor_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_ResultGroupFor_inverse;
					continue;
				}
				shared_ptr<IfcStructuralAnalysisModel> self_candidate( *it_ResultGroupFor_inverse );
				if( self_candidate.get() == this )
				{
					it_ResultGroupFor_inverse= ResultGroupFor_inverse.erase( it_ResultGroupFor_inverse );
				}
				else
				{
					++it_ResultGroupFor_inverse;
				}
			}
		}
	}
	for( size_t i=0; i<m_LoadedBy.size(); ++i )
	{
		if( m_LoadedBy[i] )
		{
			std::vector<weak_ptr<IfcStructuralAnalysisModel> >& LoadGroupFor_inverse = m_LoadedBy[i]->m_LoadGroupFor_inverse;
			for( auto it_LoadGroupFor_inverse = LoadGroupFor_inverse.begin(); it_LoadGroupFor_inverse != LoadGroupFor_inverse.end(); )
			{
				weak_ptr<IfcStructuralAnalysisModel> self_candidate_weak = *it_LoadGroupFor_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_LoadGroupFor_inverse;
					continue;
				}
				shared_ptr<IfcStructuralAnalysisModel> self_candidate( *it_LoadGroupFor_inverse );
				if( self_candidate.get() == this )
				{
					it_LoadGroupFor_inverse= LoadGroupFor_inverse.erase( it_LoadGroupFor_inverse );
				}
				else
				{
					++it_LoadGroupFor_inverse;
				}
			}
		}
	}
}
