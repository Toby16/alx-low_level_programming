#include "main.h"

/**
 * _strchr - Function
 * @s: parameter
 * @c: parameter
 * Return: (s + i)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (0);
}
