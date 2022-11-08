#include "main.h"

/**
 * _strdup - Functions
 * @str:  parameter
 * Return: ptr
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		j += 1;
	}

	ptr = malloc(sizeof(*ptr) * j);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			ptr[i] = str[i];
		}
	}

	return (ptr);
}
