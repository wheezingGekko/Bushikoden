// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPC.h"
#include "NPC_Noncombat.generated.h"

/**
 * 
 */
UCLASS()
class YOKAI_API ANPC_Noncombat : public ANPC
{
	GENERATED_BODY()
	
	protected:
		// sets noncombat NPCs as neutral
		FGenericTeamId TeamId = 255;

	
};
