// includes q3
#include <iostream>
template<class T1, class T2>
class Pair
{
private:
	T1 m_one;
	T2 m_two;

public:
	Pair(const T1& one, const T2& two) : m_one{ one }, m_two{ two }
	{ }

	const T1& first() const { return m_one; }
	const T2& second() const { return m_two; }
};
template<class T2>
class StringValuePair : public Pair<std::string, T2>
{
public:
	StringValuePair(const std::string& key, const T2& val) 
		: Pair<std::string, T2>( key, val )
	{ }
};
int main()
{
	Pair<int, double> p1(5, 6.7);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
 
	const Pair<double, int> p2(2.3, 4);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	StringValuePair<int> svp("Hello", 5);
	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

	return 0;
}
