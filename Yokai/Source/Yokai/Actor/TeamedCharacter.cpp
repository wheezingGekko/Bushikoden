// Fill out your copyright notice in the Description page of Project Settings.

#include "TeamedCharacter.h"

// Sets default values
ATeamedCharacter::ATeamedCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeamedCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATeamedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATeamedCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
/*
void ATeamedCharacter::SetGenericTeamId(const FGenericTeamId& NewTeamID)
{
	TeamID = static_cast<EAffiliation>(NewTeamID.GetId());
}

FGenericTeamId ATeamedCharacter::GetGenericTeamId() const { return (uint8)TeamID; }

ETeamAttitude::Type ATeamedCharacter::GetAttitudeTowards(const AActor* Other) { return this->GetTeamAttitudeTowards(*Other); }

ETeamAttitude::Type ATeamedCharacter::GetTeamAttitudeTowards(const AActor& Other) const
{
	APawn* otherPawn = static_cast<APawn*>(const_cast<AActor*>(&Other));
	ATeamedCharacter* otherController = static_cast<ATeamedCharacter*>(otherPawn->GetController());
	EAffiliation otherAffiliation = otherController->TeamID;
	switch (otherAffiliation)
	{
	case EAffiliation::Yokai:
		return ETeamAttitude::Friendly;
		break;

	case EAffiliation::Ally:
		return ETeamAttitude::Hostile;
		break;

	default:
		return ETeamAttitude::Neutral;
		break;
	}
}
*/
