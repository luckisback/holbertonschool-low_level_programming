#include "main.h"

/**
 * _puts -  function that prints a string
 * @str: argument provided
 *
 */

void _puts(char *str)
{
	int Nbr_lt = 0;

	while (str[Nbr_lt] != '\0')
	{
		_putchar(str[Nbr_lt]);
		Nbr_lt++;
	}
	_putchar('\n');
}
