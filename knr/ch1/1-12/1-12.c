#include <stdio.h>

#define IN   1
#define OUT  0

/* 1-12: Write a program that prints its input onw word per line. */
int main() 
{
	int c, state;

	state = IN;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') 
			state = OUT;
		else if (state == OUT) {
			state = IN;
			printf("\n");
		}
		putchar(c);
	}
}
