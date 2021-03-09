#include <stdio.h>

/* print Fahrenheit-Celcius table */

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 200; 
	step = 20;

	printf("A Fahrenheit-Celcius Table\n");
	printf("==========================\n");
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%8.0f %12.1f\n", fahr, celsius);
		fahr = fahr + step;
	} 
}
