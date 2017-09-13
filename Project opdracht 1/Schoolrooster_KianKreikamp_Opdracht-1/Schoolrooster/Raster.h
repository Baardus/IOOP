#pragma once

class Raster
{
public:
	Raster();
	~Raster();
	Rectangle (int w, int h);
	int blocks;

	//In het raster staat het rooster opgedeeld in blokken. Namelijk weken, dagen en uren.
	//In die blokken zijn vakken en daarin wordt de info over de les ingezet.
};

