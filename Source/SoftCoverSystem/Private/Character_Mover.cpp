// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_Mover.h"

// Sets default values
ACharacter_Mover::ACharacter_Mover()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacter_Mover::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacter_Mover::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter_Mover::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

