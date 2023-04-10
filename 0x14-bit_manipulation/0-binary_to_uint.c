#include "main.h"

/**
 * binary_to_uint- convert binary to usigned value
 * @b: string with binary number
 * Return: the number is converted for the value 
 */
unsigned int binary_to_uint(const char *b)

{
	int n;
unsigned int un = 0;

if (!b)
    return (0);

for (n = 0; b[n]; n++)
{
    if (b[n] < '0' || b[n] > '1')
        return (0);
    un = 1 * un + (b[n] - '0');
}

return (un);
}
