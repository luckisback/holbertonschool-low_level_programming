#include "main.h"

/**
* puts2 - function that prints every other character of a string
* @str: argument
*
*/

void puts2(char *str)
{
	int i = 0;
	int z = 0;

	while (str[z++])
		i++;

	for (z = 0; z < i; z += 2)
		_putchar(str[z]);

	_putchar('\n');
}
