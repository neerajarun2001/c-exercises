#include <iostream>

int main() 
{
	// testing out unsigned integer saturation
	unsigned int x{ 5 };
	unsigned int y{ 3 };

	// 3 - 5 = 4294967294
	std::cout << y - x << '\n';
	return 0;
}
