#include "Bibliotheek.h"
#include <iostream>


Bibliotheek::Bibliotheek()
{
}

Boek * Bibliotheek::uitlenen()
{
	std::cout << "Het volgende boek wordt uitgeleend:" << std::endl;
	return boek;
}

void Bibliotheek::voegToe(std::string titel)
{
	boek = new Boek(titel);
}
