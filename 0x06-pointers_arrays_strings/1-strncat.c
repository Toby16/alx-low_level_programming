#include <stdio.h>

/**
 * *_strncat - Function
 * @dest: Parameter
 * @src: Parameter
 * @n: Prameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, int j;

	while (*(dest + i) != '\0')
	{
		count++;
	}
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}

