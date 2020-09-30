// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDestructiveProjectile.h"
#include "Components/SphereComponent.h"

AFGDestructiveProjectile::AFGDestructiveProjectile() : Super() {
	this->mDestructionCollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("DestructionSphere")); this->mDestructionCollisionComp->SetupAttachment(this->GetCollisionSphere());
	this->mDestroysRelevantActors = true;
	this->mDestroysFoliage = true;
	this->mMaxParticleSpawnsPerDetonation = 30;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bReplicateMovement = true;
	this->bReplicates = true;
	this->InitialLifeSpan = 3;
}
void AFGDestructiveProjectile::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGDestructiveProjectile::BeginPlay(){ }
void AFGDestructiveProjectile::OnImpact(const FHitResult& hitResult){ }
void AFGDestructiveProjectile::PopulateDestructionContainers(){ }
void AFGDestructiveProjectile::DealExplosionDamage(const FHitResult& impact){ }
void AFGDestructiveProjectile::HandleFoliageDestruction(){ }
void AFGDestructiveProjectile::HandleActorDestruction(){ }
void AFGDestructiveProjectile::OnNotifiedExploded(){ }