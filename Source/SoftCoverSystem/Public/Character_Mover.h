// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Character_Mover.generated.h"

UCLASS()
class SOFTCOVERSYSTEM_API ACharacter_Mover : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACharacter_Mover();

	UPROPERTY(BlueprintReadWrite, Category = "Cover")
	bool IsCoverValid;
	UPROPERTY(BlueprintReadWrite, Category = "Cover")
	FVector CoverNormal;
	UPROPERTY(BlueprintReadWrite, Category = "Cover")
	bool CharacterIsInCover = true;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
