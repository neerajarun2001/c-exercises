#include "constants.h"
#include "foo.h"
#include <iostream>

int main()
{
	std::cout << constants::pi << '\n';
	std::cout << foo::doSomething() << '\n';
	return 0;
}
