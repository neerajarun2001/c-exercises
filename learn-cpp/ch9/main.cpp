#include <algorithm>
#include <cstddef>
#include <iterator>
#include <iostream>
#include <string>
#include "selection-sort.h"

#define TEST

void selectionSort(int array[9]);

int main()
{
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
  
#ifndef TEST
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
