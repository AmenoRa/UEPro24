// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "CharacterBase.generated.h"

UCLASS(config=Game)
class UEPRO24_API ACharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	ACharacterBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Component")
	class USkeletalMeshComponent* Weapon;

	UPROPERTY(BlueprintReadOnly, Category="AI")
	bool Dead = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI")
	float Health = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI")
	float BaseDamage = 0.01f;



protected:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void MoveForward(float Val);

	UFUNCTION(BlueprintCallable)
	void MoveRight(float Val);

	UFUNCTION(BlueprintCallable)
	void LookUp(float Val);

	UFUNCTION(BlueprintCallable)
	void Turn(float Val);



};
