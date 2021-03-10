#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int lim);
void rev(char orig[], int len);

/* 1-19: Write a function reverse(s) that reverses the character 
 *       string s. Use it to write a program that reverses its
 *       input one line a time */
int main() 
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0) {
		rev(line, len);
		printf("%s", line);
	}
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
		s[i] = c;
		++i;
	  s[i] = '\0';
	}
	return i;
}
void rev(char orig[], int len) {
	int i;
	char revd[len];

	for (i = 0; i < len - 1; i++) {
		revd[len-i-2] = orig[i];
	} 	
	revd[i] = '\n';
	for (i = 0; i < len; i++) {
		orig[i] = revd[i];
	}
}

