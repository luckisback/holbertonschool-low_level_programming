#include "main.h"

/**
* _islower - writes the character c to stdout
sloweir* @c: the argument to check
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	else
		return (0);
}
