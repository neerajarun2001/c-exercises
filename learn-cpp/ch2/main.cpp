#include "io.h"
#include <iostream>

int main() 
{
		int userNumOne { readNumber() };
	int userNumTwo { readNumber() };
	int sum { userNumOne + userNumTwo };

	writeAnswer(sum);


	return 0;
}
