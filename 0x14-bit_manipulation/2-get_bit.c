#include "main.h"

/**
 * get_bit - get a  given index value of a bit
 * @index: index
 * @n: range
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m <<= index;

	return ((n & m) ? 1 : 0);
}
