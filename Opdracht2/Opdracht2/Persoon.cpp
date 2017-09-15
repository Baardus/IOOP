#include "Persoon.h"

Persoon::Persoon(std::string inNaam, int inLeeftijd)
{
	naam = inNaam;
	leeftijd = inLeeftijd;
}

std::string Persoon::getNaam()
{
	return naam;
}

int Persoon::getLeeftijd()
{
	return leeftijd;
}
