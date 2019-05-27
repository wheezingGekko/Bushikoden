// Fill out your copyright notice in the Description page of Project Settings.

#include "AffiliatedAIController.h"

void AAffiliatedAIController::SetGenericTeamId(const FGenericTeamId& NewTeamID) 
{
	TeamID = static_cast<EAffiliation>(NewTeamID.GetId());
}

FGenericTeamId AAffiliatedAIController::GetGenericTeamId() const { return (uint8)TeamID; }

ETeamAttitude::Type AAffiliatedAIController::GetAttitudeTowards(const AActor* Other) { return this->GetTeamAttitudeTowards(*Other); }

ETeamAttitude::Type AAffiliatedAIController::GetTeamAttitudeTowards(const AActor& Other) const 
{ 
	APawn* otherPawn = static_cast<APawn*>(const_cast<AActor*>(&Other));
	AAffiliatedAIController* otherController = static_cast<AAffiliatedAIController*>(otherPawn->GetController());
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