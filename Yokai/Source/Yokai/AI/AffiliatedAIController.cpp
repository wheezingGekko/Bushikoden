// Fill out your copyright notice in the Description page of Project Settings.

#include "AffiliatedAIController.h"

void AAffiliatedAIController::SetGenericTeamId(const FGenericTeamId& NewTeamID) 
{
	TeamID = dynamic_cast<EAffiliation>(NewTeamID.GetId());
}

FGenericTeamId AAffiliatedAIController::GetGenericTeamId() const { return (uint8)TeamID; }

ETeamAttitude::Type AAffiliatedAIController::GetAttitudeTowards(const AActor* Other) { return this->GetTeamAttitudeTowards(*Other); }

ETeamAttitude::Type AAffiliatedAIController::GetTeamAttitudeTowards(const AActor& Other) const 
{ 
	//const APawn* thing = Cast<APawn>(*Other);
	AController* otherController = (dynamic_cast<APawn*>(Other))->GetController();
	AAffiliatedAIController* affiliatedcontroller = dynamic_cast<AAffiliatedAIController*>(otherController);
	EAffiliation otherAffiliation = affiliatedcontroller->TeamID;
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
	
	return ETeamAttitude::Friendly;
}