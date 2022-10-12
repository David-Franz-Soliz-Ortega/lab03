// Fill out your copyright notice in the Description page of Project Settings.


#include "ladrillometalico.h"

Aladrillometalico::Aladrillometalico()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aladrillometalico::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aladrillometalico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Aladrillometalico::Color(float _colorM) {
	color = _colorM;
}

void Aladrillometalico::Tamaño(float _tamañoM) {
	tamaño = _tamañoM;
}

