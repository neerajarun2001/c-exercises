#include <stdio.h>
/* 1-13: Write a program to print a historgram of the lengths of words in 
 * its input. */
int main() 
{
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == ' ' || c == '\t') {
			putchar('\n');
		}
		else {
			putchar('*');
		}
	}
	return 0;
}
