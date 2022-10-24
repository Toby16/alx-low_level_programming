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

	while (x >= 0)
	{
		*(dest + x) = *(src + x);
		if (*(src + x) == '\0')
		{
			break;
		}
	}

	return (dest);
}
