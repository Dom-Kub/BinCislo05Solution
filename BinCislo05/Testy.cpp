#include "Testy.h"
#include "BinCislo.h"
#include "Vystup.h"

bool Testy::run()
{
	BinCislo a("1101"), b("111101"), c("-1x31c0"), d(8), 
			 e, f, g;
	e = d + c;
	f = d + 7;
	g = 6 + b;
	Vystup v;
	e.vypis(v);
	d.vypis(v); 
	f.vypis(v);
	g.vypis(v);

	return true;
}

