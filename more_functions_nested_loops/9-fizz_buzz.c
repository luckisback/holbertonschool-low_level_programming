#include <stdio.h>

/**
 * main - Fuction that permit to overcome the challenge
 *
 * Return: 0 for (Success
 */

int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			if (i < 100)
				printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i < 100)
				printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i < 100)
				printf(" ");
		}
		else
		{
			printf("%d", i);
			if (i < 100)
				if (i < 100)
					printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
