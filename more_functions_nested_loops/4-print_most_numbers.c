#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from
 * _putchar - function allows the treading of number and char
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
