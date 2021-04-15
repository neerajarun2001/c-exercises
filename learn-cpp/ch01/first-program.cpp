#include <iostream>

// asks user for input, prints 2 times their number
int main() 
{
	int x{ };

	std::cout << "Please enter a number: " << '\n';

	std::cin >> x;

	std::cout << "Here's twice your number: \n" << 2 * x << '\n';

	return 0;
}
