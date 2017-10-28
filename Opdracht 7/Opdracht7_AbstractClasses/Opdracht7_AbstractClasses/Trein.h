#pragma once
#include "Voertuig.h"

class Trein : public Voertuig
{
public:
	Trein();
	int toeslag = 0;

	int berkenMaxOmzet(int km) override;
};

