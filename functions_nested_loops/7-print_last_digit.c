#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: Variable representing the last digit
 * Return: Permit to return the value of n
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (n < 0)
		n *= -1;

	_putchar('0' + i);

	return (i);
}
