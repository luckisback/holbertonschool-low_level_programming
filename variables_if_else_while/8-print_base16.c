#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i = i + 1;
	}

	i = 97;
	while (i < 103)
	{
		putchar(i);
		i = i + 1;
	}
	putchar('\n');

	return (0);
}

