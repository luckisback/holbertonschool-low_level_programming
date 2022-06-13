#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 * _putchar - function permiting to deal with char and num
 *
 */

void more_numbers(void)
{
	int v;
	int i;

	for (v = 1; v <= 10; v++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

