#include <iostream>
#include <vector>

// example of passing in function as argument (callbqck function)
// note that this can actually be written without the ugly pointer 
// syntax, since c++ will automatically convert it to a pointer
int evaluate(int x, int y, bool (*compare)(int, int));
// default arguments: used unless user provides a value
// make sure not to redeclare the default args in the function definition
// generally better to leave default args in the forward declaration
int divide(int x, int y=1);
// function overloading -- not based on return type, just args
int add(int x, int y);
int add(double x, double y);
int add(float x, unsigned int y);
int sumTo(const int value);
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
#include <iostream>
 
int main()
{
  // vector fun
	std::vector<int> list{};
	list.reserve(5);
	list.push_back(1);
	list.push_back(2);
	std::cout << list.back() << '\n';
	std::cout << list.back() << '\n';
	list.pop_back();


	// this causes stack overflow
  // int stack[10000000];
	// std::cout << reinterpret_cast<void*>(printArray) << '\n';
  /*
	int one{ 1 };
	addOne(one);
	std::cout << one << '\n';
  int array[]{ 1, 2, 3, 4 };	
	printArray(array, 4);
	return 0;
	*/
}
