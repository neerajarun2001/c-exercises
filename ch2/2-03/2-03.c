#include <stdio.h>
#include <ctype.h>
/* 2-03: Write a function htoi(s), which converts a string of hexadecimal digits
 *       (including an optional 0x or 0X) into its equivalent integer value. The 
 *       allowable digits are 0 through 9, a through f, and A through F. */


/* logic:
 * hexidecimal is in base 16: 0-9, and A-F. this program ignores case.
 * '0'-'9' are 0-9
 * 'a'-'f' are 10-15
 * 'A'-'F' are 10-15
 */
int htoi(char s[]);
int main() 
{
 	char hexnum[] = "0X1A";
	printf("%d\n", htoi(hexnum));

}
int htoi(char s[]) 
{
	int i, dec, hex;
  dec = 0;	
	i = 0;
	while (s[i] == '0' || s[i] == 'X' || s[i] == 'x') {
		++i;
	}
	while (s[i] != '\0') {
		if ('0' <= s[i] && s[i] <= '9') {
			// do the one conversion
			hex = s[i] - '0';
		}
		else if ('A' <= s[i] && s[i] <= 'F') {
			// do the one conversion
			hex = s[i] - 'A' + 10;
		}
		else if ('a' <= s[i] && s[i] <= 'f') {
			// do the other conversion
			hex = s[i] - 'a' + 10;
		}
		dec = 16 * dec + hex;
		++i;
	}
	return dec;
}
