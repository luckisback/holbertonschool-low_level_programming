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

	if (i <= 0 && i <= 9)
	{
		return (i);
	}
}
