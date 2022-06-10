#include "main.h"

/**
* print_sign - Writes the sign of the number
* @n: the argument to check
* Return: On success 1, 0 if equal 0, or
* -1 if negative.
*/

int print_sign(int n)
{
	int k;

	if (n > 0)
	{
		k = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		k = 0;
		_putchar('0');
	}
	else
	{
		k = -1;
		_putchar('-');
	}
	return (k);
}
