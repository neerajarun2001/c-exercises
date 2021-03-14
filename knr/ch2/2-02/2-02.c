#include <stdio.h>
#define MAXLINE 1000
/* 2-02: Write a loop equivalent to the for loop above without using && or || */

/* loop retrieves a single line from input */
int main() {
	char s[MAXLINE];
	int lim=MAXLINE;
	int i, c;

	for (i=0; i < lim-1; i++) {
		if ((c=getchar()) == '\n') 
			break;
	  if (c == EOF) 
			break;
		s[i] = c;
	}
	printf("%s\n", s);
	return 0;
}
