#include "main.h"

/**
 * flip_bits - flips bits to a given digit
 * @n: will be 1
 * @m: will be 2
 * Return: number of bit to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int counter = 0;

	while (difference)
	{
		counter += difference & 1;
		difference >>= 1;
	}

	return (counter);
}
