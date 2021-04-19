#pragma once

class Vystup;

class BinCislo
{
private:
	long long aCislo;

	long long Bin2Dec(const char *bcislo);
	char *Dec2Bin(const long long cislo);

public:
	BinCislo(long long cislo = 0)
		: aCislo(cislo)
	{
	}

	BinCislo(const char *bcislo)
		: aCislo(Bin2Dec(bcislo))
	{
	}

	void vypis(Vystup &v);

	friend BinCislo operator +(BinCislo op1, BinCislo op2);
	friend BinCislo operator -(BinCislo op1, BinCislo op2);
	friend BinCislo operator *(BinCislo op1, BinCislo op2);
	friend BinCislo operator /(BinCislo op1, BinCislo op2);
	friend bool operator <(BinCislo op1, BinCislo op2);
	friend bool operator >(BinCislo op1, BinCislo op2);
	friend bool operator <=(BinCislo op1, BinCislo op2);
	friend bool operator >=(BinCislo op1, BinCislo op2);
	friend bool operator ==(BinCislo op1, BinCislo op2);
	friend bool operator !=(BinCislo op1, BinCislo op2);
};

inline BinCislo operator +(BinCislo op1, BinCislo op2)
{
	return op1.aCislo + op2.aCislo;
}

inline BinCislo operator -(BinCislo op1, BinCislo op2)
{
	return op1.aCislo - op2.aCislo;
}

inline BinCislo operator *(BinCislo op1, BinCislo op2)
{
	return op1.aCislo * op2.aCislo;
}

inline BinCislo operator /(BinCislo op1, BinCislo op2)
{
	return op1.aCislo / op2.aCislo;
}

inline bool operator <(BinCislo op1, BinCislo op2)
{
	return op1.aCislo < op2.aCislo;
}

inline bool operator >(BinCislo op1, BinCislo op2)
{
	return op1.aCislo > op2.aCislo;
}

inline bool operator <=(BinCislo op1, BinCislo op2)
{
	//return !operator >(op1, op2);
	return !(op1 > op2);
}

inline bool operator >=(BinCislo op1, BinCislo op2)
{
	return !(op1 < op2);
}

inline bool operator ==(BinCislo op1, BinCislo op2)
{
	return op1.aCislo == op2.aCislo;
}

inline bool operator !=(BinCislo op1, BinCislo op2)
{
	return !(op1 == op2);
}


