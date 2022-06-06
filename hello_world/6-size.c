#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
/*declaration of variables*/
char c;
int i;
long l;
double d;
float f;
/*printing of sizes*/
printf("Size of a char: %lu. \n", (unsigned long)sizeof(c));
printf("Size of an int: %lu. \n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu. \n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu. \n", (unsigned long)sizeof(d));
printf("Size of a float: %lu. \n", (unsigned long)sizeof(f));
}
