#include "main.h"

/**
 * clear_bit - set 0 as the bit value
 * @n: digits to be changed
 * @index: set to be cleared
 * Return: status code 1 for sucess or -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 90)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
