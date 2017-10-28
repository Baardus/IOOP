#pragma once
#include "Boek.h"
#include <vector>

class Bibliotheek
{
public:
	Bibliotheek();
	Bibliotheek(const Bibliotheek& bieb);
	Bibliotheek& operator=(const Bibliotheek& bieb);
	~Bibliotheek();

	void tonen();

	void voegToe(std::string titel);

private:
	std::vector <Boek*> boeken;
};

