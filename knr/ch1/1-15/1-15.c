#include <stdio.h>
/* Rewrite the temperature conversion program of 1.2 to use function */
float fahr_to_c(float fahr);

/* test F to C conversion function */
int main() 
{
	float i, c, UPPER, STEP; 

	UPPER = 200;
	STEP = 20;

	for (i = 0; i < UPPER; i += STEP) {
		printf("%3.0f %6.1f\n", i, fahr_to_c(i));
	}

}
float fahr_to_c(float fahr)
{
	return (fahr - 32) * (5.0/9.0);
}
