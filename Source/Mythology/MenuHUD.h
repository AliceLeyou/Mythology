#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MenuHUD.generated.h"


UCLASS()
class MYTHOLOGY_API AMenuHUD : public AHUD
{
	GENERATED_BODY()
	
public:

protected:
	UPROPERTY(EditAnywhere, Category = "Widget Classes")
		TSubclassOf<class UMainMenu> MainMenuClass;

	virtual void BeginPlay() override;

private:

};
