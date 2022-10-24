#include "main.h"

/**
 * _strlen - function
 * @s: parameter
 * Return: value
 */

int _strlen(char *s)
{
	int i, length;

	length = 0;

	for (i = 0; (s)[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
