#include <stdio.h>
/* 1-9: write a program to copy its input to its output, replacing each 
 * string of one or more blanks by a single blank
 */
int main() 
{
	char c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(c);
			while ((c = getchar()) == ' ') 
				;
		}
		putchar(c);
	}
	return 0;
}
