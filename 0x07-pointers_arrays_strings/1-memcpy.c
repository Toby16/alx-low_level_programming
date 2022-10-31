#include "main.h"

/**
 * _memcpy - Function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	unsigned int j;

	j = 0;

	for (i = 0; src[i]; i++)
	{
		j += 1;
	}

	j -= 1;

	for (; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
