#include <stdio.h>
#define MAXLEN 1000
/* 2-4: Write an alternative version of any(s1,s2) that deletes each 
 *      character in s1 that matches any character in the string s2. */

/* logic:
 * - for each character in s1
 * - for each character in s2
 * - if they match
 * - delete
 */
void mgetline(char line[], int maxlen);
int any(char s1[], char s2[]);
int main(void) 
{
	char s1[MAXLEN], s2[MAXLEN];
	int loc;

	printf("Enter first string: \n");
	mgetline(s1, MAXLEN);
	printf("Enter second string: \n");
	mgetline(s2, MAXLEN);

	loc = any(s1, s2);
	printf("%d\n", loc);

}
void mgetline(char line[], int maxlen) 
{
  int c, i;
	i = 0;
	while (i < maxlen - 1 && (c=getchar()) != '\n' && c != EOF) {
		line[i++] = c;
	}
	line[i++] = '\n';
	line[i] = '\0';
}
int any(char s1[], char s2[])
{
	int i, j;
  for (i=0; s1[i] != '\0'; ++i) {
		for (j=0; (s1[i] != s2[j]) && s2[j] != '\0' && s2[j] != '\n'; ++j) 
			;
		if (s2[j] != '\0' && s2[j] != '\n')
			return i;
	}	
	return -1;
}

