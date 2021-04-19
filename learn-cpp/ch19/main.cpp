// function templates
#include <iostream>

template <class T>
class Storage
{
private:
	T m_value;
public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{
	}
	
	void print()
	{
		std::cout << m_value << '\n';
	}
};
template<>
void Storage<double>::print()
{
	std::cout << std::scientific << m_value << '\n';
}
template <typename T> // template description ('class' also works)
const T& max(const T& x, const T& y) // use const reference in case class
{
  return (x > y) ? x : y;
}
int main()
{
	Storage<int> intStor(5);
	Storage<double> dStor(1983.12);
	intStor.print();
	dStor.print();
  return 0;
}
