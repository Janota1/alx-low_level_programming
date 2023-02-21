#include <unistd.h>

/**
 * _putchar - Writed the character c to stdout
 * @c: The character to print
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putcher(char c)

{
	return (write(1, &c, 1));
}
