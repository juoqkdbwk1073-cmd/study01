// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor_1.h"
#include "Components/StaticMeshComponent.h"

AActor_1::AActor_1()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);
}

void AActor_1::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
}

void AActor_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float Distance = FVector::Dist(StartLocation, GetActorLocation());

	if (Distance >= MaxRange)
	{
		Direction *= -1;
	}

	AddActorLocalOffset(FVector(MoveSpeed * DeltaTime * Direction, 0.f, 0.f));
}