#include <iostream>

int main()
{
	// stronger enum
	enum class Color
	{
		red,
		blue,
		green,
		yellow, 
		white,
		black
	};
	// enumerated types
	enum Monster
	{
		orc,
		goblin,
		troll,
		ogre,
		skeleton
	};

	Color col { Color::red };

	std::cout << static_cast<int>(col);

	auto mon { Monster::orc };

	switch (mon)
	{
		case orc:
			std::cout << "You are an orc." << '\n';
			break;
		case goblin:
			break;
		case troll:
			break;
		case ogre:
			break;
		case skeleton:
			break;
			
	}
	return 0; 
}
