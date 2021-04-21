#include <iostream>

class Average
{
private:
	std::int_least32_t sumNumbers;
	std::int_least8_t totalNumbersSeen;
public:
	Average() : sumNumbers{ 0 }, totalNumbersSeen{ 0 } { }
	friend std::ostream& operator<<(std::ostream& out, Average avg);
	Average& operator+=(int x)
	{
	  sumNumbers += x;
	  totalNumbersSeen += 1;	
		return (*this);
	}
};
std::ostream& operator<<(std::ostream& out, const Average& avg)
{
	out << static_cast<double>(avg.sumNumbers) / avg.totalNumbersSeen;
	return out;
}
int main()
{
	Average avg{};
  
	avg += 4;
	std::cout << avg << '\n';
	
	avg += 8;
	std::cout << avg << '\n'; // (4 + 8) / 2 = 6
 
	avg += 24;
	std::cout << avg << '\n'; // (4 + 8 + 24) / 3 = 12
 
	avg += -10;
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10) / 4 = 6.5
 
	(avg += 6) += 10; // 2 calls chained together
	std::cout << avg << '\n'; // (4 + 8 + 24 - 10 + 6 + 10) / 6 = 7

	Average copy{ avg };
	std::cout << copy << '\n';
}
