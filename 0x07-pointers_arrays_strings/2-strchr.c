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

	for (i = 0; s[i]; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
}
