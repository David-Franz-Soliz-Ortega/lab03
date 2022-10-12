// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bala.generated.h"

UCLASS()
class BRICK_BREAKERS_API ABala : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABala();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Tamaño(float _tamañob);
	virtual void Velocidad(float _velocidadb);
private:
	float tamaño=0.5f;
	float velocidad=2;
	float daño = 1;

};
