#include "calculate.h"
#include "characters.h"
#include <iostream>

#define TEST


int main()
{
	printCharacters();
#ifndef TEST
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
