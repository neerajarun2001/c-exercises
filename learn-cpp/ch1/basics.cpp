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
	// here's a handy formatting trick to make code more readable
	// when assigning, tab align things. same idea with comments
	int variableName 							= 5; 
	int anotherVariable  					= 5;
	int moreVariablesToInitialize = 5;

	// string literals on different lines concatenate
	std::cout << "Check this " 
		"out" << '\n';
	// readable comments
  int i{ 2 };  					// initialize variable x with value 2
	int j{ 2 + 3}; 				// initialize variable j with value 2 + 3 (5)
	int k{ (2 * 3) + 4};  // initialize variable k with value 10
	int h{ i }; 					// initialize variable k with value of i (2)
	
	return 0;
}

