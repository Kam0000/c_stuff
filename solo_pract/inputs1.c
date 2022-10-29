#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	/**
	 * Write a code to take input of a character using getchar().
	 * store input and print out
	 */
	printf("Enter any character here: ");
	char letter = getchar();

	printf("Your desired character is: %c\n", letter);

	return (0);
}
