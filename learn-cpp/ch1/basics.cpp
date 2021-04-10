#include <iostream>
// comments at the program level should explain 'what'

// at the function level, explain 'how'
int main()
{
	// at the line level, explain 'why'
	/* 
	 * can also have multi-line comments
	 */
	// before requesting user input, zero initialize x
	int x{ };
	// here we use the std::cout variable with the insertion operator
	std::cout << "Please enter a number" << '\n';
	// here we use the std::cin variable with the extraction operator
	std::cin >> x;
	std::cout << "You entered the number: " << x << '\n';
	// multi-line definitions are not preferred
	int a, b;
	// copy initialization uses '=' at creation. not preferred
	int c = 5;
	// direct initialization uses '()' at creation. not preferred. 
	int d( 5 );
	// direct list initalization is a better version of direct. PREFERRED.
	int e{ 5 };
	// using empty brackets is known as 'zero initialization'
	int f{ };
	return 0;
}

