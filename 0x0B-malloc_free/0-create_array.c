#include "main.h"

/**
 * create_array - Function
 * @size: Parameter
 * @c: Parameter
 * Return: ptr
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(*ptr) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		}
	}
	return (ptr);
}
