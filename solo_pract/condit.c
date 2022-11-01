#include <stdio.h>

int main(void)
{
	int score;

	printf("Enter your mark: ");
	scanf("%d", &score);

	if (score > 80)
	{
		puts("You had an excellent score\n");
	}
	else
	{
		printf("You did well trying\n");
	}

	return (0);
}
