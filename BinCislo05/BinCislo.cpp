#include <cstring>
#include <cmath>

#include "Vystup.h"

#include "BinCislo.h"

long long BinCislo::Bin2Dec(const char *bcislo)
{
	long long cislo{ 0 };
	if (bcislo && *bcislo)
	{
		int dlzka = strlen(bcislo);

		char *pomcislo = new char[dlzka + 1];
		strcpy(pomcislo, bcislo);
		strrev(pomcislo);

		for (int i = 0; i < dlzka; i++)
		{
			if (pomcislo[i] == '1')
				cislo += (1 << i);
		}
		if (bcislo[0] == '-')
			cislo = -cislo;

		delete[] pomcislo;
	}
	return cislo;
}

char *BinCislo::Dec2Bin(const long long cislo)
{
	long long pomcislo = llabs(cislo);
	char *bcislo = new char[66];

	int i{ 0 };
	do
	{
		bcislo[i++] = pomcislo % 2 + '0'; // + 0x31
		pomcislo >>= 1; // /= 2;
	} while (pomcislo > 0);
	if (cislo < 0)
		bcislo[i++] = '-';
	bcislo[i] = '\0';
	strrev(bcislo);

	return bcislo;
}

void BinCislo::vypis(Vystup &v)
{
	char *bcislo = Dec2Bin(aCislo);
	v.vypis(bcislo);
	delete[] bcislo;
}
