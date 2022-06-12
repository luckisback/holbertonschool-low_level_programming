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

	if (n < 0)
		n *= -1;

	i = n % 10;
	d = ('0' + i);
	_putchar(d);

	return (i);
}
