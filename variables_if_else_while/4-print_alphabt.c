#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	i = 97;
while (i < 123)
{
	if ((i == 101) || (i == 113))
		i = i + 1;
	putchar(i);
	i = i + 1;
}
	printf("\n");
return (0);
}
