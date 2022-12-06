#include "main.h"

/**
 * read_textfile - Function
 * @filename: parameter
 * @letters: parameters
 * Return: value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t no_to_read;
	ssize_t no_to_write;


	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		fd = open(filename, O_RDONLY);
	}

	if (fd == -1)
	{
		return (0);
	}
	else
	{
		buf = malloc(sizeof(buf) * letters);

		if (buf == NULL)
		{
			return (0);
		}
		else
		{
			no_to_read = read(fd, buf, letters);
			no_to_write = write(STDOUT_FILENO, buf, no_to_read);
		}

	}

	free(buf);
	close(fd);
	return (no_to_write);
}
