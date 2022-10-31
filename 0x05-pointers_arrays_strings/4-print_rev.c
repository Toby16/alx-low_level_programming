#include "main.h"

/**
 * print_rev - function
 * @s: parameter
 * Return: Value
 */

void print_rev(char *s)
{
	int i, j;

	j = 0;

	for (i = 0; *(s + i); i++)
	{
		j += 1;
	}
	for (j -= 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
