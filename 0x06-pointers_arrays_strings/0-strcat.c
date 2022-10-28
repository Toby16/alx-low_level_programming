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

	for (i = 0; *(dest + i) != '\0'; i++)
	{}
	for (j = 0; *(dest + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
	}

	*(dest + i) = '\0';

	return (*(&dest));
}
