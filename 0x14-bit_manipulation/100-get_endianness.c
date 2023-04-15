#include "main.h"

/**
 * get_endianness - checks for a little and  big endian
 * Return: 0 for big while 1 for little
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *mn = (char *) &t;

	return (*mn);
}
