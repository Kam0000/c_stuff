#include <stdio.h>

int main(void)
{
	/**
	 * write code to take input of characters.
	 */
	char a[100];

	printf("Please tell us what you think: \n");
		gets(a);

	printf("You said that: %s\n", a);

	return (0);
}
