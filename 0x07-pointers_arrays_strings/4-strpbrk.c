#include <stdio.h>

/**
 * _strpbrk - Function
 * @s: parameter
 * @accept: parameter
 * Return: (s + j) & '\0'
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (j = 0; s[j]; j++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
			{
				return (s + j);
			}
		}
	}
	return ('\0');
}
