#include "calculate.h"
#include "characters.h"
#include "prime.h"
#include <iostream>
#include <cassert>

#define TEST


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
 
    std::cout << "Success!\n";

#ifndef TEST
	// for(;;) is equivalent to while(true). just use while(true)
	// for loop and equivalent while loop
	for(int x{ 0 }; x < 10; ++x)
		std::cout << x << ' ';

	std::cout << '\n';

	{
		int y{ 0 };
		while(y < 10)
		{
			std::cout << y << ' ';
			++y;
		}
	}

	std::cout << '\n';
		
	printCharacters();

	int x{ };
	int y{ };
	char op{ };

	std::cout << "Enter a math statement: ";
	std::cin >> x >> op >> y;
	std::cout << "Answer: " << calculate(x, y, op) << '\n';

	// best practice: enclose even single line if/else statements in blocks
	if (true)
	{
		std::cout << "Block" << '\n';
	}
	else
	{
		std::cout << "No block" << '\n';
	}
#endif

	return 0;
}
