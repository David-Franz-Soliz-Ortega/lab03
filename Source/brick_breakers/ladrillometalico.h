// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ladrillometalico.generated.h"

UCLASS()
class BRICK_BREAKERS_API Aladrillometalico : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aladrillometalico();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int resistencia = 3;
	float color;
	float tamaño = 4.3f;
	float material ;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Color(float _colorM);
	virtual void Tamaño(float _tamañoM);


};
