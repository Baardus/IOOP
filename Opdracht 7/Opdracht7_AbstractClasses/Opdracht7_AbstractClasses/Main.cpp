#include <iostream>
#include "Vliegtuig.h"
#include "Stoptrein.h"
#include "HogeSnelheidsTrein.h"

//De abstract baseclass is voertuig. En daarna trein.

int main()
{
	int km = 30;


	Stoptrein stoptrein;
	HogeSnelheidsTrein hogeSnelheidsTrein;
	Vliegtuig vliegtuig;
	std::cout << "De stoptrein brengt op: " << stoptrein.berkenMaxOmzet(km) << " Cent" <<std::endl;
	std::cout << "De hoge snelheids trein brengt op: " << hogeSnelheidsTrein.berkenMaxOmzet(km) << " Cent" << std::endl;
	std::cout << "Het vliegtuig brengt op: " << vliegtuig.berkenMaxOmzet(km) << " Cent" << std::endl;

	std::cin.get();
}