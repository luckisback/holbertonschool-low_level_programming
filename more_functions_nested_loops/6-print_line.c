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
		for (i = 0; i <= n; i++)
		_putchar(95);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

