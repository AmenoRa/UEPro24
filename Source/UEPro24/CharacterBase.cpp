#include "CharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"



ACharacterBase::ACharacterBase()
{
 	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));
}

void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACharacterBase::MoveForward(float Val)
{
	if (Controller == nullptr || Val == 0.f)
	{
		return;

	}

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);
	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Val);

}

void ACharacterBase::MoveRight(float Val)
{
	if (Controller == nullptr || Val == 0.f)
	{
		return;

	}

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);
	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Val);

}

void ACharacterBase::LookUp(float Val)
{
	if (Val == 0.f)
	{
		return;

	}

	AddControllerPitchInput(Val);

}

void ACharacterBase::Turn(float Val)
{
	if (Val == 0.f)
	{
		return;

	}

	AddControllerYawInput(Val);
}




