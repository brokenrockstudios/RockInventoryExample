// Copyright Broken Rock Studios LLC. All Rights Reserved.


#include "MyActor.h"

#include "Engine/AssetManager.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	TArray<FPrimaryAssetId> AssetListOut;
	UAssetManager::Get().GetPrimaryAssetIdList(FPrimaryAssetType("RockItemDefinition"), AssetListOut);
	UE_LOG(LogTemp, Warning, TEXT("Foundzz %d RockItem assets."), AssetListOut.Num());
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

