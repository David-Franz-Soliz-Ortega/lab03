// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paleta.generated.h"



UCLASS()
class BRICK_BREAKERS_API APaleta : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaleta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void Color(float _colorP);
	virtual void Tamaño(float _tamañop);
	virtual void Velocidad(float _velocidadp);
private:
	float tamaño = 5.0f;
	float color;
	int vidas = 4;
	float velocidad = 3.0f; 
};
