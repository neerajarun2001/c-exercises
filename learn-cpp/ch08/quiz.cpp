#include <iostream>
#include <string>

enum class MonsterType
{
	OGRE,
	DRAGON,
	ORC, 
	GIANT_SPIDER,
	SLIME
};
struct Monster
{
	MonsterType type;
	std::string name;
	int health;
};
std::string getMonsterType(MonsterType type)
{
	switch (type)
	{
		case MonsterType::OGRE:
			return "Ogre"; 
		case MonsterType::DRAGON:
			return "Dragon";
		case MonsterType::ORC:
			return "Orc";
		case MonsterType::GIANT_SPIDER:
			return "Giant Spider";
		case MonsterType::SLIME:
      return "Slime";
		default:
			return "None";
	}
}
void printMonster(Monster monster)
{
  std::cout << "This " << getMonsterType(monster.type)
		<< " is named " << monster.name << " and has " << monster.health
		<< " health. " << '\n';
}
int main()
{
	Monster torg{ MonsterType::OGRE, "Torg", 145 };
	Monster blurp{ MonsterType::SLIME, "Blurp", 23 }; 
	printMonster(torg);
	printMonster(blurp);
	return 0;
}
