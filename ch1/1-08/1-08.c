#include <stdio.h>
/* 1.8: write a program to cunt blanks, tabs, and newlines.*/
int main() 
{
	char c; 
	int bc, tc, nc;

	bc = 0;
	tc = 0; 
	nc = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++bc;
		}
		if (c == '\t') {
			++tc;
		}
		if (c == '\n') {
			++nc;
		}
	}
	printf("%d blanks, %d tabs, %d newlines", bc, tc, nc);
}

