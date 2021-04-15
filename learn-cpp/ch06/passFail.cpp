#include <iostream>

bool passOrFail()
{
	// initialize static local variable to track number of calls
  static int numCalls { 0 };
	return numCalls++ < 3;
	}

int main()
{
  std::cout << "User #1: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #2: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #3: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #4: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #5: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	
	return 0;
}
