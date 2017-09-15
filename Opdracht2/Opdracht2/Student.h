#pragma once
#include "Persoon.h"
#include <string>

class Student : public Persoon
{
public:
	std::string huiswerk;

	Student(std::string inNaam, int inLeeftijd);
};