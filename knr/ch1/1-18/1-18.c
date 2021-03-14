#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int lim);
void copy(char to[], char from[]);

/* 1-18: Write a program to remove trailing blanks and tabs from each 
 *       line of input, and to delete entirely blank lines. */
int main() 
{
	int len;
	char line[MAXLINE];
	char longest[MAXLINE];

	while ((len = get_line(line, MAXLINE)) >= 0) 
		// print line with trailing blanks/tabs removed
		if (len > 0) 
		  printf("%s", line);
	  else
			break;
	return 0;
}

int get_line(char s[], int lim)
{
  int c, i;

	for (i=0; (c=getchar())!=EOF && c!='\n'; ++i) 
		if (i < lim-1) {
		  s[i] = c;
		}
	if (c == '\n' && i < lim-1) {
		// remove trailing tabs and blanks
    while (s[--i] == '\t' || s[--i] == ' ') 
			;
		s[++i] = '\n';
	  s[++i] = '\0';
	}
	return i;
}
