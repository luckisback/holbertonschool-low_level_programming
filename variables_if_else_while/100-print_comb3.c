#include <stdio.h>

/**
  * main - Entry point
  * Return: Alwayse O (Success)
  */

int main(void)
{
	int l;
	int r;

	l = '0';
	r = '1';

	while (l < '9')
	{
		while (r <= '9')
		{
			if (l <= 56 && r <= 57)
			{
				putchar(l);
				putchar(r);
				if (l < 56)
				{
					putchar(44);
					putchar(32);
				}
			}
			r = r + 1;
		}

		l = l + 1;
		r = l + 1;
	}
	printf("\n");
	return (0);
}
