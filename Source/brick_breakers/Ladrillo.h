// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ladrillo.generated.h"

UCLASS()
class BRICK_BREAKERS_API ALadrillo : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ALadrillo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int resistencia=1;// resistencia al golpe
	float tamaño = 4.0f;// tamaño dl ladrillo
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Color(float _color);
	virtual void Tamaño(float _tamaño);

private:
	
	float color ;
};
