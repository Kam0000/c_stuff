#include <stdio.h>

int main(void)
{
	int i1 = 10;
	int i2 = 3;
	int quotient, remainder;
	float f1 = 4.2;
	float f2 = 2.5;
	float result;

	quotient = i1 / i2;
 	remainder = i1 % i2;
	result = f1 / f2;

	printf("quotient = %d\n", quotient);
	printf("remainder = %d\n", remainder);
	printf("result is = %4.3f\n", result);


	return (0);
}
