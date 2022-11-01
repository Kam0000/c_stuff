#include <stdio.h>

int main(void)
{
	/* Write some codes to practice type conversion in C */
	int ECG = 20;
	float water = 0.50;
	float total;

	total = (float) ECG + water;
	printf("Your bill is: %4.2f\n", total);

	return (0);
}
