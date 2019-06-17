// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GenericTeamAgentInterface.h"
#include "TeamedCharacter.generated.h"

// TODO: Make a new class which holds these affiliation thingies, or keep them in the game state rather 
// than in the character


UCLASS()
class YOKAI_API ATeamedCharacter : public ACharacter, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATeamedCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	/**  IGenericTeamAgentInterface **/

	UFUNCTION(BlueprintCallable, Category = "AI")
		ETeamAttitude::Type GetAttitudeTowards(const AActor* Other) { return ETeamAttitude::Hostile; };

	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamId) override {};
	virtual FGenericTeamId GetGenericTeamId() const override { return 0; };
	
};
