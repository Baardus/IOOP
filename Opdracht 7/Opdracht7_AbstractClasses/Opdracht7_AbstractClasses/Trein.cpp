#include "Trein.h"



Trein::Trein()
{
	pkm = 150;
}

int Trein::berkenMaxOmzet(int km)
{
	
	return km * pkm * passagiers + toeslag * passagiers;
}
