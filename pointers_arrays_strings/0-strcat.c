#include "main.h"
#include <stdio.h>

/**
* _strcat - function that concatenates two strings.
* @dest: first argument
* @src: second argument
* Return: the pointer value
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	char *res;
	int j = 0;
	char fin = '\0';

	while (dest[i])
		i = i + 1;

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[j] = fin;
	res = dest;

	return (res);
}
