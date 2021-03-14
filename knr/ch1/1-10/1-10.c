#include <stdio.h>
/* 1-10: Write a progrma to copy its input to its output, replacing each 
 * tab by \t, each backspace by \b, and each backslash by \\ */
int main() 
{
	char c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			c = 't';
		}
		if (c == '\b') {
			putchar('\\');
			c = 'b';
		}
		if (c == '\\') {
			putchar('\\');
			c = '\\';
		}
		putchar(c);
	}
	return 0;
}

