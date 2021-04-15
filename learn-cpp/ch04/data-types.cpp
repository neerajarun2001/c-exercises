// fixed-width integers
#include <iomanip>
#include <cstdint>
#include <iostream>
#include <string>

#define TEST

bool primeInput();

int main() 
{

	// use const to denote variables whose value should not change
	const double g{ 9.81 };
	// a better way to do this definition is with 'constexpr'. this 
	// signals to the compiler that g is a compile-time constant, 
	// allowing it to perform certain optimizations in your code. 
	// use this instead of #define substitution. symbolic constant!
	constexpr double betterG{ 9.81 };
#ifndef TEST

	// don't use magic numbers. use symbolic constants instead.
	std::string name{};
	std::cout << "Enter your name: ";
	std::getline(std::cin >> std::ws, name);
	std::cout << "Your name is " << name << '\n';
	std::cout << "Your name is " << name.length() << " characters long." 
		        << '\n';

	std::cout << "Will this beep? \a" << '\n';
	char ch{ 'a' };
	std::cout << ch << '\n';
	std::cout << static_cast<int>(ch) << '\n';
	std::cout << ch << '\n';

	if (primeInput()) 
		std::cout << "You entered a prime number." << '\n';
	else 
		std::cout << "You did not enter a prime number." << '\n';

	// conditionals
	if (false) 
		std::cout << "Example of single line if statement" << '\n';
	else if (false)
		std::cout << "Else ifs too!" << '\n';
	else 
		std::cout << "Look at me! No curly braces!" << '\n';

	// only 1s and 0s
	bool t{};
	std::cout << "Enter a boolean value: ";
	std::cin >> t;
	std::cout << "You entered: " << t << '\n';

	// boolean types
	bool b{true};
	
	// stored as integers
	std::cout << b << '\n';
	std::cout << !b << '\n';

	// bool prints as true or false instead of 1 or 0
	std::cout << std::boolalpha;

	// this time will be 'true' and 'false'
	std::cout << b << '\n';
	std::cout << !b << '\n';

	std::cout << std::noboolalpha;

	// inf and NaN
	double zero{0.0};
	double posinf{5.0 / zero};
	double neginf{-5.0 / zero};
	double nan{zero / zero};

	std::cout << posinf << '\n';
	std::cout << neginf << '\n';
	std::cout << nan << '\n';

	// rounding errors with floating point numbers
	double d{0.1};
	std::cout << d << '\n';
	std::cout << std::setprecision(17);
	std::cout << d << '\n';
	// should be avoided, not helpful in many cases
	std::int16_t i{5};

	// better: use the fast versions (gives fastest with minimum given)
	std::int_fast16_t j{5};
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";

	// std::size_t is an unsigned integral type representing size of objects
	std::cout << sizeof(std::size_t) << '\n';
	// testing out unsigned integer saturation
	unsigned int x{5};
	unsigned int y{3};

	// 3 - 5 = 4294967294
	std::cout << y - x << '\n';
#endif
	return 0;
}
bool primeInput() 
{
	// single digit prime check
	int userPrime{};
	std::cout << "Please enter a single digit integer: ";
	std::cin >> userPrime;
	bool isPrime{};
	if (userPrime == 2) 
		isPrime = true;
	else if (userPrime == 3)
		isPrime = true;
	else if (userPrime == 5)
		isPrime = true;
	else if (userPrime == 7)
		isPrime = true;
	else 
		isPrime = false;
	
	return isPrime;
}
