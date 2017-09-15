#pragma once
#include "Persoon.h"
#include <string>

class Docent : public Persoon
{
public:
	std::string naKijkWerk;
	
	Docent(std::string inNaam, int inLeeftijd);
};