#include <iostream>

class Base
{
public:
	int m_id;

	Base(int id=0) : m_id{ id }
	{
	}

	int getId() const { return m_id; }
protected:
	void print() 
	{
	}
};

class Derived: public Base // public inheritance
{
public:
	double m_cost;

	// explicitly calling the parent class constructor
	Derived(double cost=0.0, int id=0) : Base{ id }, m_cost{ cost }
	{
	}

	double getCost() const { return m_cost; }
	using Base::print;
	
};

int main()
{
	Derived derived{ 3.0, 5 };
	return 0;
}
