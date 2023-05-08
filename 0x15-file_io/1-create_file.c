#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - create a file and write inside it
 * @filename:contain name of the file
 * @text_content: type to write
 * Description: generates a file and writes text
 * Return: updated codes
 */

int create_file(const char *filename, char *text_content)
{
	int mn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	int len = 0;
	ssize_t bytes_written = write(mn, text_content, len);

	if (filename == NULL)
	{
	return (-1);
	}
	if (mn == -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
	while (text_content[len] != '\0')
	{
	len++;
	}

	if (bytes_written != len)
	{
	close(mn);
	return (-1);
	}
	}
	close(mn);
	return (1);
}
