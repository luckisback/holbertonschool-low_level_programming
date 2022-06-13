#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number of times the character _
 * _putchar - the function permit to print
 *
 */

void print_line(int n)
{
	int i;

	i = 0;

	if (n > 0)
	{
		if (i == 2)
			for (i = 1; i <= 2; i++)
				_putchar(95);
		if (i == 10)
			for (i = 1; i <= 10; i++)
				_putchar(95);

		for (i = 1; i <= n; i++)
		_putchar(95);
	}
	else
	{
		_putchar('\n');
	}
}

