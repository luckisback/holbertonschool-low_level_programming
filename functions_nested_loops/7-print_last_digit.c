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
		i = -1 * (n % 10);
	else
		i = n % 10;

	_putchar((i % 10) + '0');

	return (i % 10);
}
