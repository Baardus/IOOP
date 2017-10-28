#include "Voertuig.h"
Voertuig :: ~Voertuig()
{

}

int Voertuig::berkenMaxOmzet(int km)
{
	return km * passagiers * pkm;
}
