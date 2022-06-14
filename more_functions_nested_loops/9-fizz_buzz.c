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
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	
		i++;
	}
	printf("\n");
	return (0);
}
