#include "main.h"

/**
* print_alphabet_x10 - writes the character c to stdout
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 97; x < 123 ; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
