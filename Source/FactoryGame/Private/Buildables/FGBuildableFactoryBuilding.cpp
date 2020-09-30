// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableFactoryBuilding.h"
#include "FGColoredInstanceMeshProxy.h"

FFoundationSideSelectionFlags::FFoundationSideSelectionFlags(){ }
FFoundationSideSelectionFlags::FFoundationSideSelectionFlags(bool defaults){ }
FFoundationSideSelectionFlags FFoundationSideSelectionFlags::RotateEdges(int32 steps) const{ return FFoundationSideSelectionFlags(); }
const FFoundationSideSelectionFlags FFoundationSideSelectionFlags::NoEdges = FFoundationSideSelectionFlags();
const FFoundationSideSelectionFlags FFoundationSideSelectionFlags::AllEdges = FFoundationSideSelectionFlags();
AFGBuildableFactoryBuilding::AFGBuildableFactoryBuilding() : Super() {
	this->mMeshComponentProxy = CreateDefaultSubobject<UFGColoredInstanceMeshProxy>(TEXT("BuildingMeshProxy")); this->mMeshComponentProxy->SetupAttachment(this->RootComponent);
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = false; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->bReplicates = true;
	this->NetCullDistanceSquared = 5624999936;
}
