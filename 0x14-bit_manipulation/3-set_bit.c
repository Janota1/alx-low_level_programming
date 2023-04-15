#include "main.h"

/**
 * set_bit - sets a bit at the given index
 * @n:  range
 * @index: the index
 * Description:  set bit  at the given index
 * Return: status code 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= m;

	return (1);
}
