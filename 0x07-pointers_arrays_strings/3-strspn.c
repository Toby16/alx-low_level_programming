#include "main.h"

/**
 * _strspn - Function
 * @s: parameter
 * @accept: parameter
 * Return: j
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j;

	j = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (accept[i] == s[i])
		{
			j += 1;
		}
	}
	return (j);
}
