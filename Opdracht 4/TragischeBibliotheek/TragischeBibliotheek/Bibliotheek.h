#pragma once
#include "Boek.h"

class Bibliotheek
{
public:
	Bibliotheek();

	Boek* uitlenen();

	void voegToe(std::string titel);

private:
	Boek* boek = 0;
};

