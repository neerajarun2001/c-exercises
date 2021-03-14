/* Write a program to determine the ranges of char, short, int, and long	
 * variables, both unsigned and signed, by printing appropriate values 
 * from standard headers and by direct computation. Harder -- determine 
 * ranges of floating-point types 
 *
 * @source 
 * http://www.learntosolveit.com/cprogramming/Ex_2.1_cal_limits.html
 * */

/* key idea:
 * (unsigned <type>) 0 gives bits
 * (unsigned <type>)~0 gives complement (max value + sign bit)
 * for unsigned we remove sign bit 
 * --> use >> 1 to shift bits right 1 and replace sign bit with 0
 */  

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) 
{
	/* signed min and max values */
	printf("Min signed char: %d\n", -(char)((unsigned char) ~0 >> 1) - 1);
  printf("Max signed char: %d\n", (char)((unsigned char) ~0 >> 1));

	printf("Min signed int: %d\n", -(int)((unsigned int) ~0 >> 1) - 1);
  printf("Max signed int: %d\n", (int)((unsigned int) ~0 >> 1));

	printf("Min signed short: %d\n", -(short)((unsigned short) ~0 >> 1) - 1);
  printf("Max signed short: %d\n", (short)((unsigned short) ~0 >> 1));

	printf("Min signed long: %ld\n", -(long)((unsigned long) ~0 >> 1) - 1);
  printf("Max signed long: %ld\n\n", (long)((unsigned long) ~0 >> 1));

  /* unsigned max and min values */

  printf("Max unsigned char: %d\n", (unsigned char) ~0);
  printf("Max unsigned int: %u\n", (unsigned int) ~0);
  printf("Max unsigned short: %d\n", (unsigned short) ~0);
  printf("Max unsigned long: %lu\n\n", (unsigned long) ~0);

	/* using the standard headers */
	printf("Min signed char: %d\n", SCHAR_MIN);
  printf("Max signed char: %d\n", SCHAR_MAX);

	printf("Min signed int: %d\n", INT_MIN);
  printf("Max signed int: %d\n", INT_MAX);

	printf("Min signed short: %d\n", SHRT_MIN);
  printf("Max signed short: %d\n", SHRT_MAX);

	printf("Min signed long: %ld\n", LONG_MIN);
  printf("Max signed long: %ld\n\n", LONG_MAX);

  printf("Max unsigned char: %d\n", UCHAR_MAX);
  printf("Max unsigned int: %u\n", UINT_MAX);
  printf("Max unsigned short: %d\n", USHRT_MAX);
  printf("Max unsigned long: %lu\n", ULONG_MAX);

}
