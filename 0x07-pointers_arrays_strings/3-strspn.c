#include "main.h"

/**
 * _strspn - Function
 * @s: parameter
 * @accept: parameter
 * Return: j
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int x;

	x = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				x++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (x);
			}
		}
	}
	return (x);
}
