//Check if a string can be converted to an int. DOES NOT check negative numbers.
#include <string>
bool CheckStringToInt(string string)
{
    for (int i = 0; i < string.length(); i++)
    {
        if (!isdigit(string[i])) return false;
        else return true;
    }
}

//Check if a number id odd or even
void CheckOddOrEven()
{
    if (number % 2 == 0)
    {
        result = "even";
    }
    else 
    {
        result = "odd";
    }
}


---------------------------------FOR UNREAL ENGINE----------------------------------

    
// Damage Taken function
#include "CustomGameMode.h"
#include "Kismet/GameplayStatics.h"
    
void ClassHere::DamageTaken(AActor* damagedActor, float damage, const UDamageType* damageType, AController* instigator, AActor* damageCauser)
{
    health -= damage;
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, FString::Printf(TEXT("%s health %f"), *GetOwner()->GetName(), health)); //Display health messsage
    if (health > 0) return;
    
    if (damagedActor) //Call handle actor death for a custom game mode
    {
    	ACustomGameMode* customGameMode = Cast<ACustomGameMode>(UGameplayStatics::GetGameMode(this));
    	if (customGameMode) customGameMode->HandleActorDeath(damagedActor);
    }
}
