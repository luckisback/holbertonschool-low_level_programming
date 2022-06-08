#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int x;

	x = 48;
	while (x < 58)
	{
		for (i = 48; i < 58; i++)
		{
			putchar(i);
			putchar(44);
			putchar(32);
			putchar(x);
		}
		x = x + 1;
	}
	return (0);
}
