#include "selection-sort.h"
#include <iterator>

void selectionSort(int array[9])
{
	// 1. find smallest item in array
	int smallestIndex{0};
	// 2. swap it with the item in index 0
	// 3. increment targetIndex, and repeat
	int len { std::size(array) }

  for (int targetIndex{ 0 }; targetIndex < len; ++targetIndex)
	{
		// find the smallest item
		for (int i{ targetIndex }; i < len; ++i)
		{
      if (array[i] < array[smallestIndex])
				smallestIndex = i;
		}
		std::swap(array[targetIndex], array[smallestIndex]) 
	}	
}
