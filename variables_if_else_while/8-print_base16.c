#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int nbre;

	for (nbre = 0; nbre > 10; nbre++)
		putchar("%x", nbre);
	putchar('\n');
	return (0);
}

