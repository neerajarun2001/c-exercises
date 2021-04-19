// buggy code, fix it
// 1. find root cause
// 2. understand problem
// 3. propose fix
// 4. implement fix
// 5. retest
#include <iostream>
 
int readNumber(int x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}
 
void writeAnswer(int x)
{
	std::cout << "The sum is:" << x << '\n';
}
 
// general comment: use better variable names
int main()
{
	int x{ 0 };
  // pass by value, so main x is still 0 here (scoping)
	// fix by adding x = 
	x = readNumber(x); 
	x = x + readNumber(x);
	writeAnswer(x);
 
	return 0;
}
