#include "main.h"

/**
 * _strdup - Functions
 * @str:  parameter
 * Return: ptr
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	ptr = malloc(sizeof(*str));

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
