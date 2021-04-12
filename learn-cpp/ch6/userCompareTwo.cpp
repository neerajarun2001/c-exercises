#include <iostream>

int getInt(bool larger) 
{
	if (larger)
		std::cout << "Enter a larger integer: ";
	else
		std::cout << "Enter an integer: ";

	int userInt{ };
	std::cin >> userInt;

	return userInt;
}
int main()
{

	int smaller{ getInt(false) };
	int larger{ getInt(true) };

	if (smaller > larger) 
	{ 
		std::cout << "Swapping the values..." << '\n';
		int temp{ smaller };
		smaller = larger;
		larger = temp;
	}

	std::cout << "The smaller value is " << smaller << '\n';
	std::cout << "The larger value is " << larger << '\n';
	
	return 0;
}
