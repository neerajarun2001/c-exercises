#include <iostream>
 
int main()
{
	std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;
 
 
	// issue was that the concise if statement only allows one line 
	// after the condition. if you want to support more, use blocks.
	if (num < 0)
	{
		std::cout << "Negative number entered.  Making positive.\n";
		num = -num;
	}
 
	std::cout << "You entered: " << num << '\n';
 
	return 0;
}
