#include <stdio.h>

/**
  * main - Entry point
  * Return: Alwayse 0 (Success)
  */

int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i == 57)
			putchar(i);

		if (i != 57)
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
		i = i + 1;
	}
	putchar('\n');

	return (0);
}
