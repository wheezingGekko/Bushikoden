// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GenericTeamAgentInterface.h"
#include "AffiliatedAIController.generated.h"

// basic affiliations, to be expanded upon in the future
UENUM(BlueprintType)
enum class EAffiliation : uint8
{
	Neutral,
	Yokai,
	Ally
};

// Attide of each team towards each team
USTRUCT(BlueprintType)
struct FTeamAttitude
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TEnumAsByte<ETeamAttitude::Type>> Attitude;

	FTeamAttitude() {};

	FTeamAttitude(std::initializer_list<TEnumAsByte<ETeamAttitude::Type>> attitudes) : Attitude(std::move(attitudes)) {};
};

/**
 * 
 */
UCLASS()
class YOKAI_API AAffiliatedAIController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;

public:
	// Used within an array of team attitudes
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Affiliation")
		TEnumAsByte<ETeamAttitude::Type> Attitude;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		EAffiliation TeamID;

/**  IGenericTeamAgentInterface **/

	UFUNCTION(BlueprintCallable, Category = "AI")
		ETeamAttitude::Type GetAttitudeTowards(const AActor* Other);
	
	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamId) override;
	virtual FGenericTeamId GetGenericTeamId() const override;

};
