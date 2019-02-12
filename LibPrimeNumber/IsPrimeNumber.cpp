#include "stdafx.h"
#include "IsPrimeNumber.h"


IsPrimeNumber::IsPrimeNumber()
{
}

bool IsPrimeNumber::IsPrime(const int num)
{
	bool isPrime = true;
	if (num <= 1)
		return false;
	if (num == 2)
		return true;
	if (num % 2 == 0 && num > 2)
		return false;

	int sqrtNum = round(sqrt(num));
	for (int v = 3; v <= sqrtNum; v += 2)
	{
		if (num%v == 0)
		{
			isPrime = false;
			break;
		}
	}
	return isPrime;
}
IsPrimeNumber::~IsPrimeNumber()
{
}
