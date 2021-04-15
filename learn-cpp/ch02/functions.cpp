#include <iostream>
#define PRINT
/* general structure of a function
 * type identifier( args ) {
 *   function body
 * }`
 */
// forward declaration using function prototype to make compiler aware 
// of function's existence, avoiding 'undefined identifier' type errors
#include "doubleNum.h"


int add(int x, int y) 
{
	return x + y;
}
void doPrint() 
{
	// note that '::' is the scope resolution operator. think of 
	// namespaces as cities, grouping together neighborhoods of similar 
	// functions to avoid naming collisions in large programs.
	std::cout << "Here's how functions work." << '\n';
}
int getNum() 
{
	std::cout << "Please enter an integer: ";
	int num{ };
	std::cin >> num;

	return num;
}
int main()
{
#ifndef PRINT
	doPrint();
#endif
  int userNum { getNum() };
	std::cout << "Your number doubled is: " << doubleNum(userNum) << '\n';
	return 0;
}

