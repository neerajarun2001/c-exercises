/* Write a program to print the corresponding celsius to fahrenheit table */

#include <stdio.h>

int main() 
{
	float fahr, celsius;
	float lower, upper, step;

	lower = -40;
	upper = 60; 
	step = 10;

  celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
