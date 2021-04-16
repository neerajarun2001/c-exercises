#include <iostream>
#include <string>
#include <cstdint>
#include <cassert>
#include <cstddef>

// friend functions can access private members of a class
// can have friend classes, or friend 
class Calc
{
private: 
	int m_value{};

public:
	static int m_calcs;
	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this; }
	Calc& mult(int value) { m_value *= value; return *this; }

	int getValue() const { return m_value; }
};
int Calc::m_calcs{ 5 };
class IntArray
{
private: 
	int* m_array{};
	int m_length{};

public:
	IntArray(int length) // constructor
	{
		assert(length > 0);

		m_array = new int[static_cast<std::size_t>(length)]{};
		m_length = length;
	}
	~IntArray() // destructor
	{
		// dynamic delete
		delete[] m_array;
	}

	void setValue(int index, int value) { m_array[index] = value; }
	int getValue(int index) { return m_array[index]; }

	int getLength() { return m_length; };
};
class RGBA
{
	using int_t = std::uint_fast8_t;
  int_t m_red{ 0 };
  int_t m_green{ 0 };
  int_t m_blue{ 0 };
	int_t m_alpha{ 255 };

public:
	RGBA(int_t red, int_t green, int_t blue, int_t alpha)  
		: m_red{ red }, m_green{ green }, m_blue{ blue }, m_alpha{ alpha }  
	{
	}
 
	void print()
	{
		std::cout << "red: " << static_cast<int>(m_red) << '\n'
			<< "blue: " << static_cast<int>(m_blue) << '\n'
			<< "green: " << static_cast<int>(m_green) << '\n'
			<< "alpha: " << static_cast<int>(m_alpha) << '\n';
	}

};
class Something
{
private:
	const int m_array[5];

public:
	// member initialization list
	Something() : m_array { 1, 2, 3, 4, 5 } 
	{
		// nothing to do here
	}
};
class Ball
{
	std::string m_color;
	double m_radius;

public:
	Ball(double radius)
	{
		m_color = "black";
		m_radius = radius;
	}
	Ball(const std::string& color="black", double radius=10.0)
	{
		m_color = color;
		m_radius = radius;
	}

	void print()
	{
		std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
	}
};
class IntPair
{
	using pair_t = int;
	// private by default
	pair_t a{};
	pair_t b{};

	// public access specifier
public:
	IntPair() = default;
	IntPair(pair_t aIn, pair_t bIn)
	{
    a = aIn;
		b = bIn;
	}
	void set(pair_t aIn, pair_t bIn)
	{
		a = aIn;
		b = bIn;
	}
	void print()
	{
		std::cout << "Pair(" << a << ", " << b << ")" << '\n';
	}
};

class DateClass
{
	public:
		int m_year{};
		int m_month{};
		int m_day{};

	void print()
	{
		std::cout << m_year << '/' << m_month << '/' << m_day << '\n';
	}
};
class Fruit
{ 
public:
	enum FruitType
	{
		APPLE,
		BANANA,
		CHERRY
	};

private:
	FruitType m_type;
	int m_percentageEaten = 0;

public:

	Fruit(FruitType type) : m_type{type}
	{
	}

	FruitType getType() { return m_type; }
	int getPercentageEaten() { return m_percentageEaten; }
};
int main()
{
	Calc::m_calcs = 0;
	Calc calc{};
	calc.add(5).sub(3).mult(4);

	std::cout << calc.getValue() << '\n';
  return 0;
}
