// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor_2.generated.h"

class UStaticMeshComponent;

UCLASS()
class SP_01_API AActor_2 : public AActor
{
	GENERATED_BODY()

public:
	AActor_2();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* PlatformMesh;

public:
	UPROPERTY(EditAnywhere, Category = "Platform Settings")
	float RotationSpeed = 90.0f;
};