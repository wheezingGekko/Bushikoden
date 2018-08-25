// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPC.h"
#include "NPC_Combat.generated.h"

/**
 *	in the future, will have weapon mesh 
 *
 *
 */
//UCLASS(Abstract) // will eventually be unable to create characters that are purely NPC_Combat
UCLASS()
class YOKAI_API ANPC_Combat : public ANPC
{
	GENERATED_BODY()
	

public:
	UFUNCTION(BlueprintCallable)
	void engageCombat();

		// still debating between protected and private methods
protected:


	/* empty methods of fight */

	// returns if a combat-oriented action was a success or failure
	// each method will check if NPC's mesh collided with an entity
	//	if true, then success; otherwise, failure
	virtual bool attack_1();	// low attack
	virtual bool attack_2();	// high attack
	virtual bool block_1();		// low block
	virtual bool block_2();		// high block

	// similar to above four methods,
	// except it checks if NPC's mesh did not collide with the entity
	virtual bool dodge();		// ?
	virtual bool counter();		// ?

private:

};
