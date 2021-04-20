#include <vector>
#include <algorithm>
#include <cstddef>
#include <iterator>
#include <iostream>
#include <string>
#include <array>
#include "selection-sort.h"

#define TEST

void selectionSort(int array[9]);
void reference(const int& ref)
{
	std::cout << ref << '\n';
}
void printLength(const std::array<int, 5>& array)
{
	std::cout << array.size() << '\n';
}
int main()
{

#ifndef TEST

	// vector. dynamically sized array, don't need to give type at init.
	std::vector vec { 1, 2, 3, 5 };
	vec.resize(5);
	std::vector tor(5); // direct initialization to empty size 5
	std::array arr { 1, 2, 3, 4, 5 };
	std::array<int, 5> expTypeAndSize { 1, 2, 3, 4, 5 };
	std::cout << arr.at(3) << '\n';
	printLength(arr);
	// pointers to pointers exist, and can be used. array of linked lists, 
	// or things like that most likely. 
	// foreach loop demo program
	// to remind ourselves, we use constexpr here because the 
	// array can be treated as a compile-time constant
	constexpr int fibonacci[]{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	for (int num : fibonacci)
	{
		std::cout << num << ' ';
	}
	std::cout << '\n';
	// good idea to use const reference for non-fundamental data 
	// types, to avoid having to make copies of every element
	const std::string strings[]{ "this", "is", "for-each", "loop" };
	for (const auto& str : strings)
	{
		std::cout << str << ' ';
	}
	std::cout << '\n';
	// generally want to pass non-fundamental data types by const 
	// reference, like so:
	reference(5);
	reference(3 + 2);
	int value{ 5 };
	reference(value);
	// references are aliases of objects or memories.
	// must be initialized with a non-const l-value.
	// can't be changed once initalized.
	int value{ 5 };
	int& ref{ value };
	std::cout << value << '\n'; // 5
	++ref;
	std::cout << value << '\n'; // 6

	int value{ 5 };
	const int* ptr{ &value }; // pointer to a const value -- can't change val
	int* const ptr{ &value }; // const pointer -- can't change pointer
	const int* const ptr{ &value }; // const ptr to const value
	
	std::cout << "How many names would you like to enter? ";
  int numNames{};
	std::cin >> numNames;

	auto* names { new std::string[numNames]{} };

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::string name{};
	for(int i{ 0 }; i < numNames; ++i)
	{
		std::cout << "Enter name #" << i + 1 << ": ";
		std::getline(std::cin, name);
		names[i] = name;
	}
	std::sort(names, names + numNames);
	for(std::size_t i{ 0 }; i < numNames; ++i)
	{
		std::cout << names[i] << '\n';
	}
	delete[] names;
  
	std::cout << "Enter a positive integer: ";
	std::size_t length{}; // usethe size_t type here
	std::cin >> length;

	int* array{ new int[length]{} }; // dynamically allocate an array

	std::cout << "I just allocated an array of integers of length "
		<< length << '\n';

	array[0] = 5;

	delete[] array; // array delete

	// dynamic memory allocation. the scalar form of the new keyword 
	// returns a pointer to a memory location in heap memory. heap memory 
	// is useful because it typically has far more available storage than 
	// the stack. 
	int* ptr{ new int };
	*ptr = 8;
	delete ptr;
	ptr = nullptr;

	// the identifier of an array is really a pointer to the first element
	int array[]{ 0, 1, 2 };
	// uses subscript operator to access third element in the array
	std::cout << array[2] << '\n';
	// uses pointer arithmetic to to do the same. note that 'array' 
	// decays to a pointer to the first element in the array. by 
	// adding two, we get back the memory location 2 * sizeof(int) 
	// later in the sequence. key: arrays are assigned sequential memory.
	std::cout << *(array + 2) << '\n';
	// will print 0 
	
	// initialize your pointers to a null pointer. otherwise they'll point 
	// to garbage. 
	int* ptr{ nullptr };
	std::cout << ptr << '\n';
	int x{ 5 };
	// a pointer holds a memory location
	int* ptr{ &x };
	std::cout << *ptr << '\n';

	// pointers and addresses
	std::cout << x << '\n';
	std::cout << &x << '\n';
	std::cout << *(&x) << '\n';

	int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	int len { std::size(array) };
	for(int i{ 0 }; i < len; ++i)
		std::cout << array[i] << ' ';
	std::cout << '\n';

	selectionSort(array);

	for(int i{ 0 }; i < len; ++i)
		std::cout << array[i] << ' ';
	std::cout << '\n';

	int temp[365]{};
	std::cout << std::size(temp) << '\n';
	int legs[animal::max_animals]{4, 4, 4, 4, 2, 0};
	std::cout << "Elephants have " << legs[animal::elephant] 
		<< " legs." << '\n';
	// initialize an array
	int arr[3]{ 1, 2, 3 };
	std::cout << arr[0] << '\n';
#endif
	return 0;
}

void selectionSort(int array[9])
{
	// 1. find smallest item in array
	int smallestIndex{ 0 };
	// 2. swap it with the item in index 0
	// 3. increment targetIndex, and repeat
	std::size_t len { 9 };

  for (std::size_t targetIndex{ 0 }; targetIndex < len; ++targetIndex)
	{
		smallestIndex = targetIndex;
		// find the smallest item
		for (std::size_t i{ targetIndex }; i < len; ++i)
		{
      if (array[i] < array[smallestIndex])
				smallestIndex = i;
		}
		std::swap(array[targetIndex], array[smallestIndex]);

		for(int i{ 0 }; i < len; ++i)
			std::cout << array[i] << ' ';
		std::cout << '\n';
	}	
}
