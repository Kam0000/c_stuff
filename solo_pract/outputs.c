#include <stdio.h>

/**
 * USE gcc -Wall -Werror -Wextra -pedantic -std=gnu89 condit.c FOR COMPILING TO OUTPUT
*/
int main(void)
{
	/**
	 * create a program that outputs using putchar(), and puts()
	 * It should also take and store inputs to be retrieved for the output
	 */
	printf("What's your month of birth?\nA. Nigeria	\nB. Togo \nC. Ghana\n Answer: ");
	char alphabe = getchar();
	printf("You selected: ");
	putchar(alphabe);
	printf("\n");

	//char a[100];
	//printf("\nTell us some of the problems facing your country: \n");
	//gets(a);
	//printf("You said that: \n");
	//puts(a);
	
	int a, b; float c;
	char text[20];
	printf("Enter a five-number integer followed by 1 floating number and a text at last: \n");
	scanf("%2d %d %f %s", &a, &b, &c, text);
	printf("%d %d %f %s \n", a, b ,c , text);

	return (0);
}
