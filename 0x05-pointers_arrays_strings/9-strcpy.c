#include "main.h"

/**
 * _strcpy - function
 * @dest: parameter
 * @src: parameter
 * Return: Value
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x])
	{
		dest[x] = src[x];

		x++;
	}

	return (dest);
}
