#pragma once
class Voertuig
{
public:
	virtual ~Voertuig() = 0;

	int pkm;
	int passagiers;

	virtual int berkenMaxOmzet(int km);

};

