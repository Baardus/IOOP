#pragma once
#include <string>

class Tijd
{
public:
	Tijd();
	~Tijd();
	int week;
	int hours;
	int days;
	int minutes;
	int month;
	std::string welkeTijd = "";

	//De tijd geeft de week, dag en tijd dat de les begint aan. Bijv 16:30 op 6 November.
	//Deze verschijnt in de blokken van het raster.
	//Deze moet de correcte tijd aangeven. Het tijdstip dat past bij de gegeven les, klas, module en docent.
};

