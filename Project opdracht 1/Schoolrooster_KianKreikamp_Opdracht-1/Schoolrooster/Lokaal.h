#pragma once
#include <string>

class Lokaal
{
public:
	Lokaal();
	~Lokaal();

	std::string lesLokaal = "";

	//Net als de klas, staat het leslokaal in text vermeld in het vakje dat gemaakt wordt door het raster.
	//Deze moet het correcte lokaal aangeven. Het lokaal dat past bij de gegeven les, klas, module en docent.
	//Er moet een lijst zijn met alle lokalen die geplaatst kunnen worden in het rooster.
};

