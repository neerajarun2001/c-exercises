#include <iostream>

int sumTo(const int value);
void printEmployeeName(const Employee& worker);
std::pair<int, int> minmax(const int a, const int b);
int getIndexOfLargestValue(const std::vector<int>& array);
const std::string& getElement(
		const std::vector<std::string>& array, 
		const int index);
// everything is pass by value??
int foo(int i); // pass by value (copies)
int foo(int* i); // pass by address (dereference the (copy) pointer)
int foo(int& i); // pass by reference (behind the scenes is pointer)
// passing by reference
void addOne(int& ref)
{
	++ref;
}
// inline gives you the speed of in-place code with the 
// benefits of functions
inline void printArray(int* array, int length)
{
	for (int i{ 0 }; i < length; ++i) 
	{
		std::cout << *(array + i) << ' ';
	}
	std::cout << '\n';
}
int main()
{
	int one{ 1 };
	addOne(one);
	std::cout << one << '\n';
  int array[]{ 1, 2, 3, 4 };	
	printArray(array, 4);
	return 0;
}
