#include "Bibliotheek.h"
#include <iostream>
int main()
{
	Bibliotheek bibliotheek;
	bibliotheek.voegToe("De dev met geen ogen en handen");

	Boek* boek = bibliotheek.uitlenen();

	std::cout << boek->titel << std::endl;

	delete boek;

	std::cin.get();
	return 0;
}