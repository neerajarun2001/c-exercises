#include "characters.h"
#include <iostream>

void printCharacters() 
{
	char letter{'a'};
	while (letter <= 'z')
	{
		std::cout << letter << ' ' << static_cast<int>(letter) << '\n';
		++letter;
	}
}
