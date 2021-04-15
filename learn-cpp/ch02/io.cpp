#include "io.h"
#include <iostream>
// reads and returns a single number from the user
int readNumber() 
{
	int userNum{ };
	std::cout << "Please input a number: ";
	std::cin >> userNum;

	return userNum;
}
// writes a single number to the console 
void writeAnswer(int num)
{
	std::cout << "The sum of your two numbers is: " << num << '\n';
}
	
