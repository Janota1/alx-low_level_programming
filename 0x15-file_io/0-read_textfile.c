#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- execute text file print to STDOUT.
 * @filename: read text file
 * @letters: read number of letters
 * Return: f actual bytes read and printed
 *       0 filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *abc;
	ssize_t mn;
	ssize_t f;

	ssize_t t;

	mn = open(filename, O_RDONLY);
	if (mn == -1)
		return (0);
	abc = malloc(sizeof(char) * letters);
	t = read(mn, abc, letters);

	f = write(STDOUT_FILENO, abc, t);
	free(abc);
	close(mn);
	return (f);
}
