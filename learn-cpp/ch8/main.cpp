#include <iostream>

#define TEST
struct Advertising 
{
	int numAds{};
	double percentAdsClicked{};
	double earnedPerClick{};
};


void printAdvertisingInfo(Advertising ad) 
{
	std::cout << "Ads shown: " << ad.numAds << '\n';
	std::cout << "Percent clicked: " << ad.percentAdsClicked << '\n';
	std::cout << "Earned per click: " << ad.earnedPerClick << '\n';
	
  double total { ad.numAds * ad.percentAdsClicked * ad.earnedPerClick };
	std::cout << "Total earned: " << total << '\n';

}
int main()
{
	Advertising advertData{};
	
	std::cout << "How many ads have you shown? ";
	std::cin >> advertData.numAds;

	std::cout << "What percentage of the shown ads have been clicked? ";
	std::cin >> advertData.percentAdsClicked;

	std::cout << "How much did you make per click? ";
	std::cin >> advertData.earnedPerClick;
	
	printAdvertisingInfo(advertData);

#ifndef TEST
	// stronger enum
	enum class Color
	{
		red,
		blue,
		green,
		yellow, 
		white,
		black
	};
	// enumerated types
	enum Monster
	{
		orc,
		goblin,
		troll,
		ogre,
		skeleton
	};

	Color col { Color::red };

	std::cout << static_cast<int>(col);

	auto mon { Monster::orc };

	switch (mon)
	{
		case orc:
			std::cout << "You are an orc." << '\n';
			break;
		case goblin:
			break;
		case troll:
			break;
		case ogre:
			break;
		case skeleton:
			break;
			
	}
#endif
	
	return 0; 
}
