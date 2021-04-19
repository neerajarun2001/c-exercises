#include "constants.h"
#include <iostream>

double readTowerHeight()
{
	int height{};
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> height;
	return height;
}	
double heightAtTime(int seconds, int towerHeight)
{
	return towerHeight - gravity * ((seconds * seconds) / 2.0);
}
void printHeight(int seconds, double height)
{
  std::cout << "At " << seconds << " seconds, the ball is at "
		"height: " << height << " meters" << '\n';
}
bool checkAboveGround(int height)
{
	return height > 0;
}
void printGround(int seconds)
{
	std::cout << "At "<< seconds << " seconds, the ball is on the ground."
		<< '\n';
}
void calculateAndPrintHeight(double towerHeight, int seconds) 
{
	double height {heightAtTime(seconds, towerHeight)};
	if (checkAboveGround(height))
		printHeight(seconds, height);
	else
    printGround(seconds);
}
int main()
{
	double towerHeight{ readTowerHeight() };
	double height{ towerHeight };
	
	calculateAndPrintHeight(towerHeight, 0);
	calculateAndPrintHeight(towerHeight, 1);
	calculateAndPrintHeight(towerHeight, 2);
	calculateAndPrintHeight(towerHeight, 3);
	calculateAndPrintHeight(towerHeight, 4);
	calculateAndPrintHeight(towerHeight, 5);

	return 0;
}
