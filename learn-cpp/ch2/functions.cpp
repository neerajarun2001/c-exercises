#include <iostream>
/* general structure of a function
 * type identifier( args ) {
 *   function body
 * }`
 */

void doPrint() 
{
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
	doPrint();
  int userNum { getNum() };
	std::cout << "Your number doubled is: " << userNum * 2 << '\n';
	return 0;
}
