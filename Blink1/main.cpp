#include <wiringPi.h>

// Pin LED - wiringPi pin 0 est BCM_GPIO 17.
// nous devons utiliser la num�rotation BCM lors d'une initialisation avec wiringPiSetupSys
// si vous choisissez un num�ro de pin diff�rent, utilisez la num�rotation BCM, aussi
// mettre � jour les pages de propri�t�s - �v�nements de build - Commande d'�v�nement post-build � distance 
// qui utilise l'exportation de gpio pour l'installation de wiringPiSetupSys
#define	LED	17

int main(void)
{
	wiringPiSetupSys();

	pinMode(LED, OUTPUT);

	while (true)
	{
		digitalWrite(LED, HIGH);  // Activ�
		delay(500); // ms
		digitalWrite(LED, LOW);	  // D�sactiv�
		delay(500);
	}
	return 0;
}