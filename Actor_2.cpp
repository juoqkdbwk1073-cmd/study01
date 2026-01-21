// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor_2.h"
#include "Components/StaticMeshComponent.h"

AActor_2::AActor_2()
{
	PrimaryActorTick.bCanEverTick = true;

	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));

	SetRootComponent(PlatformMesh);

	PlatformMesh->SetSimulatePhysics(false);
}

void AActor_2::BeginPlay()
{
	Super::BeginPlay();
}

void AActor_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalRotation(FRotator(0.f, RotationSpeed * DeltaTime, 0.f));
}