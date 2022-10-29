#include <stdio.h>

int main(void)
{
	/**
	 * create a program that outputs using     puts()
	 * It should also take and store input    s to be retrieved for the output
	 */
	char a[100];
	printf("\nTell us some of the problems facing your country: \n");
	gets(a);
	printf("You said that: \n");
	puts(a);

	return (0);
}
