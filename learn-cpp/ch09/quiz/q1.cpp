#include <iostream>
#include <numeric>
#include <array>

enum Items
{
  potion,
	torches,
	arrows,
	max_items
};

using inventory_type = std::array<int, Items::max_items>;

int getTorches(inventory_type& inventory)
{
	return inventory[Items::torches];
}
// returns how much items the user has in total
int countTotalItems(const inventory_type& inventory)
{
	/*
	int total{ 0 };
  for (int item : inventory)
	{
		total += item;
	}
	return total;
  */	
	return std::reduce(inventory.begin(), inventory.end());
}
int main()
{
  std::array<int, 3> inventory{ 2, 5, 10 };

	int total{ countTotalItems(inventory) };
  int numTorch{ getTorches(inventory) };

	std::cout << "Total number of items: " << total << '\n';
	std::cout << "Torches: " << numTorch << '\n';
	
	return 0;
}
