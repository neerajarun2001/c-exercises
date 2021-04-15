#include "prime.h"
#include <iostream>

bool isPrime(int x)
{
	int divisors{ 1 };

  for(int i{ 2 }; i <= x; ++i)
	{
		if (x % i == 0)
			++divisors;
	}	
	return (divisors==2); // only two divisors: itself and 1
}
