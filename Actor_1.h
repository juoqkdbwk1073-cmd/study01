	// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor_1.generated.h"

UCLASS()
class SP_01_API AActor_1 : public AActor
{
	GENERATED_BODY()

public:
	AActor_1();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

public:

	UPROPERTY(EditAnywhere, Category = "Platform Settings")
	float MoveSpeed = 200.f;

	UPROPERTY(EditAnywhere, Category = "Platform Settings")
	float MaxRange = 300.f;

private:
	FVector StartLocation;
	int32 Direction = 1;
};