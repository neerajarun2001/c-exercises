#include <iostream>

// overloading operators is useful because it lets us work with our 
// classes and objects in more intuitive ways
class Cents
{
private:
	int m_cents{ 0 };
public:
	Cents(int cents) : m_cents{ cents } 
	{
	}
	// copy constructor
	Cents(const Cents& cent) : m_cents { cent.m_cents }
	{
		std::cout << "Copy constructor worked!" << '\n';
	}
	// friend Cents operator+(const Cents& c1, const Cents& c2);
  Cents operator+(int value);
	friend bool operator==(const Cents& c1, const Cents& c2);
	int getCents() const { return m_cents; }
	// return negative of coin value
	Cents operator- () const;
	Cents& operator++();
	Cents operator++(int); // postfix
};
/*
// as friend function
Cents operator+(const Cents& c1, const Cents& c2) 
{
	return Cents(c1.m_cents + c2.m_cents);
}
*/
// normal function version. just make sure to include the forward 
// declaration in the header file.
bool operator==(const Cents& c1, const Cents& c2) 
{
	return c1.m_cents == c2.m_cents;
}
Cents operator+(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}
std::ostream& operator<<(std::ostream& cout, const Cents& c1)
{
	return std::cout << "Cents(" << c1.getCents() << ")";
}
Cents Cents::operator+(int value)
{
	// *this is the implicit left hand operator
	return Cents(m_cents + value);
}
Cents Cents::operator- () const 
{
	return Cents( -m_cents );
}
Cents& Cents::operator++() 
{
	++m_cents;
	return *this;
}
Cents Cents::operator++(int)
{
	Cents temp{ *this };

	++(*this);

	return temp;
}
int main() 
{
	Cents c1{ 2 };
	Cents c2{ 4 };
	Cents sum(c2);
  return 0;
}
