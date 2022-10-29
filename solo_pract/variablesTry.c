#include <stdio.h>
#define PI 3.14

/**
 *main - Main function
 *Return: 0 always after success
 */
int main(void)
{
	int a = 5;
	int b = 7;
	char letter = 'Z';
	float length = 12.08;
	double salary = 100.50;
	int sum = a + b;
	const char * kg = "kilogram";

	printf("The sum is: %d\n", sum);
	printf("Always represent kg with: %s\n", kg);
	printf("The value for π id: %f\n", PI);
	printf("The letter is: %c\n", letter);
	printf("The length is: %f\n", length);
	printf("The salary is: %f\n", salary);

	return (0);
}
