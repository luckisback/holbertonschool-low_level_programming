#include "main.h"

/**
*_isalpha - writes the character c to stdout
* @c: the argument to check
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
