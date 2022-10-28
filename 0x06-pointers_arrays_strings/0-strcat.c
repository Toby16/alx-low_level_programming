#include "main.h"

/**
 * *_strcat - function
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i += 1;
	}

	while (*(src + j) != '\0')
	{
		dest[i] = src[j];
		j++;
		i++
	}
	*(dest + i) = '\0';

	return (dest);
}
