#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char *argv[])
{
	int ammo{ 10 };
	auto shoot 
	{
		// capture by reference
		[&ammo]() mutable {
			--ammo;

			std::cout << "Pew! " << ammo << " shot(s) left.\n";
		}
	};

  shoot();
	shoot();
	// trivial lambda statement
	[]() {}; // [capture clause](parameters) -> return type { statements }
  //ways to store lambda for post definition use:
  // 1. as a function pointer
	double (*addNumbers1)(double a, double b) 
	{
		[](double a, double b) 
		{
			return (a + b);
		}
	};
	// 2. as std::function
  std::function addNumbers2 
	{
		[](double a, double b)
		{
      return (a + b);
		}
	};	
	// 3. as its actual type
	auto addNumbers3 
	{
		[](double a, double b) 
		{
			return (a + b);
		}
	};
	/*
	if (argc <= 1) {
		if (argv[0])
			std::cout << "Usage: " << argv[0] << " <number> " << '\n';
		else
			std::cout <<  "Usage: <program name> <number>" << '\n';

		return 1;
	}
  std::stringstream convert{ argv[1] };

	int myint{};
	if (!(convert >> myint))
		myint = 0;

	std::cout << "Got integer: " << myint << '\n';
	*/
	return 0;
}
