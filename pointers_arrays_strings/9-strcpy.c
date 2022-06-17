#include "main.h"
#include <stdio.h>

/**
* _strcpy - copy a string into another string
* @dest: first argument
* @src: second argument
* Return: return the expected result
*/

char *_strcpy(char *dest, char *src)
{
	char *i = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (i);
}
