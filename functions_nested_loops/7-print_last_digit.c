#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: Variable representing the last digit
 * Return: Permit to return the value of n
 */

int print_last_digit(int n)
{
	int i;
	int d;
	int c;

	if (n < 0)
		n *= -1;
	d = 0;
	i = n % 10;

	if (d == 1)
	{
		c = 52;
		d = _putchar('0' + c);
	}

	d = _putchar('0' + i);

	return (d);
}
