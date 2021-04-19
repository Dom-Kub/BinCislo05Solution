#define TESTY
#include <cstdio>

#ifdef TESTY
#include "Testy.h"
#endif
int main()
{
	bool ok{ true };
#ifdef TESTY
	Testy test;
	ok = test.run();
#endif

	if (ok)
	{
		; // Cinnost
	}
	else
		printf("CYHBA - NEPRESLI TESTY!!!\n");
}