// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Character_CMC.generated.h"

UCLASS()
class SOFTCOVERSYSTEM_API ACharacter_CMC : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacter_CMC();

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
