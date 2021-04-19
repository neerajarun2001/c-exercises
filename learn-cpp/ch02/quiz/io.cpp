#include "io.h"
#include <iostream>

int readNumber()
{
	// get integer from user
	int x{};
  std::cout << "Enter an integer: ";
  std::cin >> x;	

	return x;
}
void writeAnswer(int ans)
{
  std::cout << "The answer is: " << ans << '\n'; 
}
