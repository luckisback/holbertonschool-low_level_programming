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
		putchar(i);
		if (i == 57)
			putchar(36);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i = i + 1;
	}

	return (0);
}
