#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
