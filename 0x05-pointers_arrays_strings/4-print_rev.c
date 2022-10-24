#include "main.h"

/**
 * print_rev - function
 * @s: parameter
 * Return: Value
 */

void print_rev(char *s)
{
	int i, x;

	i = 0;

	while (s[x++])
	{
		i++;
	}

	for (x = i - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
