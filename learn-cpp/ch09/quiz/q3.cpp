#include <iostream>

void swap(int& a, int& b) 
{
	int tmp{ a };
	a = b;
	b = tmp;
}
int readInteger()
{
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;
	return x;
}
int main()
{
	int a{ readInteger() };
	int b{ readInteger() };
	std::cout << "a = " << a << '\n';
	std::cout << "b = " << b << '\n';
	swap(a, b);
	std::cout << "a = " << a << '\n';
	std::cout << "b = " << b << '\n';
	return 0;
}
