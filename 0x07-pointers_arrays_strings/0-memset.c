#include "main.h"

/**
 * _memset - Function
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: (s + i)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s + i);
}
