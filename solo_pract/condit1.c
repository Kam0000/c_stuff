#include <stdio.h>

int main(void)
{
	int in_stock = 20;
	int x = 19;
	x++;

	if (in_stock)
	{
		puts("Space for stocks is full");
	}
	else
	{
		puts("Stocks' space isn't as expected");
	}
	if ( x == in_stock )
	{
		printf("2. You are right 100%%\n");
	}
	else
	{
		puts("2. You are wrong");
	}

	return (0);
}
