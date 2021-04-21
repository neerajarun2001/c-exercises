#include <vector>
#include <iostream>

using out_t = std::ostream;
class Point
{
private:
	int m_x{ 0 };
	int m_y{ 0 };
	int m_z{ 0 };
 
public:
	Point(int x, int y, int z)
		: m_x{x}, m_y{y}, m_z{z}
	{
 
	}
 
	friend out_t& operator<<(out_t &out, const Point &p)
	{
		out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ')';
		return out;
	}
};
class Shape
{
public:
  virtual out_t &print(out_t &out) const = 0;

	friend out_t &operator<<(out_t &out, const Shape &p)
	{
		return p.print(out);
	}

	virtual ~Shape() {}
	virtual const int getRadius() const { return 0; }

};

class Triangle : public Shape
{
private:   
  Point m_p1;
	Point m_p2;
	Point m_p3;

public:
	Triangle(const Point &p1, const Point &p2, const Point &p3)
		         : m_p1{ p1 }, m_p2{ p2 }, m_p3{ p3 }
	{ }

  virtual out_t& print(out_t& out) const
	{
    out << "Triangle(" << m_p1 << ", " << m_p2 << ", " << m_p3 << ')';
		return out;
	}
};
class Circle : public Shape
{
private:
  Point m_center;
	int m_radius;

public:
	Circle(const Point& center, int radius)
		: m_center{ center }, m_radius{ radius } { }

	virtual out_t& print(out_t& out) const
	{
		out << "Circle(" << m_center << ", radius " << m_radius << ')';
		return out;
	}
	virtual const int getRadius() const { return m_radius; }
};

int getLargestRadius(const std::vector<Shape*>& v)
{
	int largestRadius{ 0 };
	int shapeRadius{};
	for (auto* s : v)
	{
		// ensure that the dynamic cast succeeds
		if (auto *c{ dynamic_cast<Circle*>(s) })
		{
			shapeRadius = c->getRadius();
			if (shapeRadius > largestRadius) 
				largestRadius = shapeRadius;
		}
	}
	return largestRadius;
}
int main()
{
	std::vector<Shape*> v{
      new Circle{Point{1, 2, 3}, 7},
      new Triangle{Point{1, 2, 3}, Point{4, 5, 6}, Point{7, 8, 9}},
      new Circle{Point{4, 5, 6}, 3}
    };
 
	// print each shape in vector v on its own line here
	for (const auto* s : v)
		std::cout << *s << '\n';
 
	std::cout << '\n';
	// write this function
  std::cout << "The largest radius is: " << getLargestRadius(v) << '\n'; 
 
	// delete each element in the vector here
	for (const auto* s : v)
	{
		delete s;
		// s = nullptr; not needed?
	}
	return 0;
}




