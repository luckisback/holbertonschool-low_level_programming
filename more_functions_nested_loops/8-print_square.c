#include "main.h"

/**
 * print_square - function that prints a square
 * @size: argument
 * _putchar - function that prints characters
 *
 */

void print_square(int size)
{
	int x;
	int y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
