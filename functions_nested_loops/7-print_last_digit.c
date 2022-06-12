#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: Variable representing the given number taht will be tested
 * Return: Permit to return the value of the last digit i
 */

int print_last_digit(int n)
{
	int i;


	if (n < 0)
		n *= -1;

	i = n % 10;
	_putchar('0' + i);

	return (i);
}
