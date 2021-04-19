#include <iostream>

int main()
{
	/* 1. what is the difference between initialization and assignment?
	 * 
	 * Initialization gives the variable a location in memory, and stores
	 * its value in that memory address at the point of creation. 
	 * Assignment overwrites a variable's value in memory. 
	 * Assignment does not assign memory addresses.  
	 * 
	 * 2. When does undefined behaviour occur? What are the consequences 
	 *    of undefined behaviour?
	 *
	 * Undefined behaviour occurs when actions not specified by the 
	 * constraints of the language are attempted. The consequences 
	 * of undefined behaviour are unpredictable -- anything from crashing
	 * to working regardless.
	 */ 

	// 3. Write a program that asks user to enter two numbers, and 
	//    prints the result of adding and subtracting the two numbers. 
  std::cout << "Enter an integer: ";

	int userOne{};
	std::cin >> userOne;

	std::cout << "Enter another integer: ";
	
	int userTwo{};
	std::cin >> userTwo;

	std::cout << userOne << " + " << userTwo << " is " << userOne + userTwo
		<< '\n';
	std::cout << userOne << " - " << userTwo << " is " << userOne - userTwo
		<< '\n';
	return 0;
}
