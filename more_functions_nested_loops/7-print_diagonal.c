#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * _putchar - function that threat the dysplay of characters
 * @n: argument
 *
 */

void print_diagonal(int n)
{
	int i;
	int x;

	i = 0;
	x = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x < n)
		{
			_putchar(92);
			_putchar(32);


