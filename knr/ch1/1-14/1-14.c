#include <stdio.h>

#define TOTAL_CHAR 128
/* 1-14: Write a program to print a histogram of the frequencies of 
 * different characters in its input. */
int main() 
{
	int c, i, j;
  int _char[TOTAL_CHAR];

	for (i = 0; i < TOTAL_CHAR; i++) {
		_char[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		++_char[c];
	}

	for (i = 0; i < TOTAL_CHAR; i++) {
		putchar(i);
		putchar(' ');
		for (j = 0; j < _char[i]; j++) { 
			putchar('*');
		}
		putchar('\n');
	}
}
