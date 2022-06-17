#include "main.h"

/**
* puts_half - unction that prints half of a string
* @str: argumentt
*
*/

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[j++])
		i++;
	for (j = (j / 2); j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
