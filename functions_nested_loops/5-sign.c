#include "main.h"

/**
* print_sign - Writes the sign of the number
* @n: the argument to check
* Return: On success 1, 0 if equal 0, or
* -1 if negative.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		if (n < 0)
		{
			_putchar('-');
			return (1);
		}
	return (n);
}
