#include <stdio.h>
/* Write a program to determine the ranges of char, short, int, and long	
 * variables, both unsigned and signed, by printing appropriate values 
 * from standard headers and by direct computation. Harder -- determine 
 * ranges of floating-point types */
int main() 
{
	int c;

	c = 1;
	while (c > 0) {
		printf("%d", c);
		c++;
	}
	
	return 0;
}
