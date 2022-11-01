#include <stdio.h>

int main (void)
{
	int x = 8;
	int y = 7;

	x++;
	y--;
	x += y;

	printf("The value of x is: %d\n", x);

	return (0);
}
