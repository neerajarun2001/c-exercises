#include "calculate.h"
#include <iostream>

int calculate(int x, int y, char op)
{
	int result{ };
	switch (op)
	{
		case '+':
			result = x + y;
			break;
	  case '-':
			result = x - y;
			break;
	  case '*':
			result = x * y;
			break;
	  case '/':
			result = x / y;
			break;
	  case '%':
			result = x % y;
			break;
		default:
			std::cout << "Print an error?" << '\n';
			result = 0;
			break;
	}

	return result;
}
