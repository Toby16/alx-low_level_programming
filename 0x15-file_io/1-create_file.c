#include "main.h"

/**
 * create_file - function
 * @filename: parameter
 * @text_content: parameter
 * Return: value
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_file;
	size_t i;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	}

	if (fd == -1)
	{
		return (-1);
	}


	if (text_content != NULL)
	{
		i = 0;

		while (text_content[i])
		{
			i += 1;
		}
	}

	write_file = write(fd, text_content, i);

	if (write_file == -1)
	{
		return (-1);
	}


	close(fd);

	return (1);
}
