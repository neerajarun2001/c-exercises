// chapter 18: virtual functions
#include <iostream>
#include <string_view>
#include <string>

// interface class: no member variables and every function is virtual
class IBase
{
public:
	virtual bool exampleBool() = 0;
	virtual int exampleInt() = 0;

	virtual ~IBase() {}
};
class Animal // "abstract base class"
{
protected:
	std::string m_name;

	Animal(std::string_view name) : m_name{ name } 
  { 
	}

	// to prevent 'slicing' (don't know it yet)
	Animal(const Animal&) = delete;
	Animal& operator=(const Animal&) = delete;

public:
	const std::string& getName() const { return m_name; }
	virtual std::string_view speak() const = 0; // "pure virtual function"

	virtual ~Animal() = default;
};
class Cat : public Animal
{
public: 
	Cat(std::string_view name) : Animal{ name }
	{
	}

	// no more overriding speak (from any classes that inherit from Cat
	virtual std::string_view speak() const override final { return "Meow"; }
};
class Dog final : public Animal // no more inheriting from Dog
{
public:
	Dog(std::string_view name) : Animal{ name }
	{
	}

	virtual std::string_view speak() const override { return "Woof"; }
};

int main()
{
  const Cat cat{ "Fred" };
  std::cout << "cat is named " << cat.getName() << ", and it says " 
		<< cat.speak() << '\n';
 
  const Dog dog{ "Garbo" };
  std::cout << "dog is named " << dog.getName() << ", and it says " 
		<< dog.speak() << '\n';
 
	const Animal* pAnimal{ &dog };
	std::cout << "pAnimal is named " << pAnimal->getName() 
		<< ", and it says " << pAnimal->speak() << '\n';
 
  pAnimal = &cat;
  std::cout << "pAnimal is named " << pAnimal->getName() 
		<< ", and it says " << pAnimal->speak() << '\n';

	return 0;
}
