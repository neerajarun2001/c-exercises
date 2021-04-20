#include <iostream>
#include <cassert>

/*
 * logic:
 * - start prime checking from 2
 * - every number has at least two divisors (1 and itself).
 * - 0 will count as a divisor trivially
 * - prime if the number of divisors is 3 at the end of the program
 */
bool isPrime(int x)
{
  int divisors{ 2 };
	for (int i{ 2 }; i <= x; ++i)
	{
		if (!(x % i))
			++divisors;
	}
	return (divisors == 3);
}

int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(!isPrime(99));
    assert(isPrime(13417));
 
    std::cout << "Success!" << '\n';
 
    return 0;
}
