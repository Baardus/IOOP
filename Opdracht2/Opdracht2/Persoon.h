#pragma once
#include <string>

class Persoon
{
private:
	std::string naam;
	int leeftijd;

public:
	std::string getNaam();
	int getLeeftijd();
	
	Persoon(std::string inNaam, int inLeeftijd);
};

