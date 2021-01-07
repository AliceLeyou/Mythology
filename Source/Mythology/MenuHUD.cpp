#include "MenuHUD.h"
#include "AndroidAPITemplateFunctions.h"


void AMenuHUD::BeginPlay()
{
	UAndroidAPITemplateFunctions::AndroidAPITemplate_ShowToast(TEXT("Meow?"));
}