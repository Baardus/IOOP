#include "Bibliotheek.h"
#include <iostream>
int main()
{
	std::cout << "Edwins_Tragische_BoekenClub" << std::endl;

	Bibliotheek Edwins_Tragische_BoekenClub;
	Edwins_Tragische_BoekenClub.voegToe("De dev met geen ogen en handen");
	Edwins_Tragische_BoekenClub.voegToe("De Artist met geen pen");
	Edwins_Tragische_BoekenClub.voegToe("De Interaction designer genaamd Jelle");

	Edwins_Tragische_BoekenClub.tonen();


	std::cout << "Brents_BoekenGrot" << std::endl;

	Bibliotheek Brents_BoekenGrot (Edwins_Tragische_BoekenClub);
	Brents_BoekenGrot.voegToe("De gesloten VR space");
	Brents_BoekenGrot.voegToe("Het kleine boek");

	Brents_BoekenGrot.tonen();


	std::cout << "Edwins_Tragische_BoekenClub" << std::endl;
	Edwins_Tragische_BoekenClub = Brents_BoekenGrot;
	Edwins_Tragische_BoekenClub.tonen();


	std::cin.get();
	return 0;
}