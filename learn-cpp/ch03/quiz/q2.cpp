#include <iostream>
 
int readNumber()
{
	std::cout << "Please enter a number: ";
	int x {};
	std::cin >> x;
	return x;
}
 
void writeAnswer(double x)
{
	std::cout << "The quotient is: " << x << '\n';
}
 
int main()
{
	double x{ 0.0 };
	double y{ 0.0 };
	x = readNumber();
	y = readNumber();
	// floating point division error. fix with static cast to int.
	// can also fix by changing input parameter type of writeAnswer
	// to double.
	std::cout << static_cast<int>(x / y) << '\n';
	writeAnswer(x / y);
 
	return 0;
}
