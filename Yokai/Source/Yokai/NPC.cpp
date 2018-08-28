// Fill out your copyright notice in the Description page of Project Settings.

#include "NPC.h"

/* 
	Sets default values
	will eventually take:
		mesh/model		-> will be set in blueprint instead
		AIController
		Dialogue
*/
ANPC::ANPC()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	
	//AIControllerClass = GetClass(NewAIController)

	ANPC::ANPC(FString(TEXT("No Name")));
}

ANPC::ANPC(FString newName)
{
	PrimaryActorTick.bCanEverTick = true;
	NPCName = newName;
}

void ANPC::Init()
{
	// choose mesh / model?
	// choose AIcontroller
	// choose 
}

// Called when the game starts or when spawned
void ANPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FGenericTeamId ANPC::GetGenericTeamId() const
{
	return TeamId;
}