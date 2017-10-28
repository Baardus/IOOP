#include "Bibliotheek.h"
#include <iostream>


Bibliotheek::Bibliotheek()
{
}

Bibliotheek::Bibliotheek(const Bibliotheek & bieb)
{
	for (int i = 0; i < bieb.boeken.size(); i++)
	{
		Boek* boek = new Boek();
		boek->titel = bieb.boeken[i]->titel;
		boeken.push_back(boek);
	}
}

Bibliotheek & Bibliotheek::operator=(const Bibliotheek & bieb)
{
	if (this != &bieb)
	{
		for (int i = 0; i < boeken.size(); i++)
		{
			delete boeken[i];
		}

		boeken.clear();

		for (int i = 0; i < bieb.boeken.size(); i++)
		{
			Boek* boek = new Boek();
			boek->titel = bieb.boeken[i]->titel;
			boeken.push_back(boek);
		}
	}
	return *this;
}

Bibliotheek::~Bibliotheek()
{
	for (int i = 0; i < boeken.size(); i++)
	{
		delete boeken[i];
	}
	boeken.clear();
}

void Bibliotheek::tonen()
{
	for (int i = 0; i < boeken.size(); i++)
	{
		std::cout << "Boek: " << boeken[i]->titel << std::endl;
	}
}

void Bibliotheek::voegToe(std::string titel)
{
	boeken.push_back(new Boek(titel));
}
