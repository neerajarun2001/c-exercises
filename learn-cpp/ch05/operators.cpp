#include <iostream>
#include <cmath>

#define TEST

int main()
{
	// conditional operator, aka the ternary operator. compact.
	(1 > 2) ? std::cout << "yes" : std::cout << "no" << '\n';
	
#ifndef TEST
	// comma operator: thing, thing2. evaluates both, returns result of 
	// right operand. watch out, has weird precedence. 
	int a{ (1 + 1, 2 + 2) };
	std::cout << a << '\n';

	
	// here's how to exponentiate. integer exponentiation not recommended, 
	// could overflow the integer type.
	std::cout << std::pow(5, 2) << '\n';
	
	// practice with static casting to force float division. only one of the
	// two operands needs to be a double. 
	int x{ 5 };
	int y{ 4 };

	std::cout << "5 divided by 4 is " << static_cast<double>(x) / y << '\n';
	return 0;

#endif
}
