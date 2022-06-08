#include <stdio.h>

/**
  * main - Entry point
  * Return: Alwayse O (Success)
  */

int main(void)
{
	int l;
	int r;

	l = 48;
	r = 49;

	while (l < 57)
	{
		while (r < 58)
		{
			if (l == 56 && r == 57)
			{
				putchar(l);
				putchar(r);
			}
			if (l <= 55 && r <= 56)
			{
				putchar(l);
				putchar(r);
				putchar(44);
				putchar(32);
			}

			r = r + 1;
		}

		l = l + 1;
		r = l + 1;
	}
	printf("\n");
	return (0);
}
