#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - name states it all
 * @filename: contains name of the file
 * @text_content: text to append
 * Description: appends text to allocated file
 * Return: status code
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *mn = fopen(filename, "b");
	int result = fputs(text_content, mn);

	if (filename == NULL)
	{
	return (-1);
	}
	if (text_content == NULL)
	{
	return (1);
	}
	if (mn == NULL)
	{
	return (-1);
	}

	fclose(mn);

	return (result == EOF ? -1 : 1);
}

