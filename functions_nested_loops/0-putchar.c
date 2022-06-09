#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	putchar(95);
	putchar(112);
	putchar(117);
	putchar(116);
	putchar(99);
	putchar(104);
	putchar(97);
	putchar(114);

	return (write(1, &c, 1));
}
