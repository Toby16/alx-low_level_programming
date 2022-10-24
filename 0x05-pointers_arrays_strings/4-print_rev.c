#include "main.h"

/**
 * print_rev - function
 * @s: parameter
 * Return: Value
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}

	int x;

	for (x = i - 1; x >= 0; x++)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
