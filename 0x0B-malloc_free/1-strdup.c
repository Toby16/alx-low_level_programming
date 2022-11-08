#include "main.h"

/**
 * _strdup - Functions
 * @str:  parameter
 * Return: ptr
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j, k;

	j = 0;
	k = (int)(sizeof(*str));

	for (; j < k; j++)
	{
		j += 1;
	}

	ptr = malloc(sizeof(*str) * (j + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	if (ptr == 0)
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
