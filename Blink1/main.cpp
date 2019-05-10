#include <wiringPi.h>

// Pin LED - wiringPi pin 0 est BCM_GPIO 17.
// nous devons utiliser la numérotation BCM lors d'une initialisation avec wiringPiSetupSys
// si vous choisissez un numéro de pin différent, utilisez la numérotation BCM, aussi
// mettre à jour les pages de propriétés - Événements de build - Commande d'événement post-build à distance 
// qui utilise l'exportation de gpio pour l'installation de wiringPiSetupSys
#define	LED	17

int main(void)
{
	wiringPiSetupSys();

	pinMode(LED, OUTPUT);

	while (true)
	{
		digitalWrite(LED, HIGH);  // Activé
		delay(500); // ms
		digitalWrite(LED, LOW);	  // Désactivé
		delay(500);
	}
	return 0;
}