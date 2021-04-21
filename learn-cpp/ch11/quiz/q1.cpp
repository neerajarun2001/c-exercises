#include <iostream>
#include <cmath>

class Point2d
{
private:
	double m_x{ 0.0 };
	double m_y{ 0.0 };
public:
	Point2d(double x=0.0, double y=0.0) : m_x{ x }, m_y{ y } { }
	void print() const
	{
		std::cout << "Point2d(" << m_x << ", " << m_y << ")" << '\n';
	}
	friend double distanceFrom(const Point2d& p1, const Point2d& p2);
};
double distanceFrom(const Point2d& p1, const Point2d& p2)
{
	double x1{ p1.m_x };
	double y1{ p1.m_y };
	double x2{ p2.m_x };
	double y2{ p2.m_y };

	return std::sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
int main()
{
	Point2d first{};
	Point2d second{ 3.0, 4.0 };
	first.print();
	second.print();
  std::cout << "Distance between two points: " 
		<< distanceFrom(first, second) << '\n';
	return 0;
}
