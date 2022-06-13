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
		for (i = 1; i <= 14; i++)
			_putchar('0' + i);

		if (i == 10 && i <= 14)
		{
			i = '1';
			_putchar(i);
		}
	}
}

