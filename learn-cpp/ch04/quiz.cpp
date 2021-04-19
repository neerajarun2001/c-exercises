/* 1. Why are symbolic constants usually a better choice than literal 
 * constants? Why are const/constexpr symbolic constants usually 
 * a better choice than #defined symbolic constants?
 *
 * Symbolic constants are a better choice because they make the code 
 * more interpretable both for future developers and future you. #define
 * constants will not show up in a debugger (since they are substituted 
 * by the preprocessor).
 *
 * 2. Identify which type to use for the given situation:
 */

// 3. Write program asking for two numbers and mathematical operator, and
//    display the results of the operation.

#include <iostream>

double readDouble()
{
  double x{};
	std::cout << "Enter a double value: ";
	std::cin >> x;
  return x;
}
char readOp()
{
	char op{};
	std::cout << "Enter one of the following: +, -, *, or /: ";
	std::cin >> op;
  return op;
}
void printResults(double x, double y, char op) 
{
	double ans{};
	if (op == '+')
		ans = x + y;
	else if (op == '-')
		ans = x - y;
	else if (op == '*')
		ans = x * y;
	else if (op == '/')
		ans = x / y;

	std::cout << x << " " << op << " " << y << " is " << ans << '\n';
}
int main()
{
	double x{ readDouble() };
	double y{ readDouble() };

	char op{ readOp() };
 
	printResults(x, y, op);
  return 0;	
}
