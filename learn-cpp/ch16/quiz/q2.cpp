#include <iostream>
#include <string>

class Fruit 
{
protected:
  std::string m_name;
	std::string m_color;

public:
	Fruit(const std::string& color, const std::string& name) 
		: m_name{ name }, m_color{ color } { } 

	const std::string& getName() const { return m_name; }
	const std::string& getColor() const { return m_color; }
	
};

class Apple : public Fruit
{
public:
	Apple(const std::string color="red", const std::string& name="apple")
		: Fruit{ color, name } { }

};

class Banana : public Fruit
{
public:
  Banana(const std::string& color="yellow", 
         const std::string& name="banana")
	  : Fruit{ color, name } { } 	
};
class GrannySmith : public Fruit
{
public:
	GrannySmith(const std::string& color="green",
			        const std::string& name="granny smith apple")
		: Fruit{ color, name } { }
	
};


int main()
{
	Apple a{ "red" };
	Banana b{};
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

}

