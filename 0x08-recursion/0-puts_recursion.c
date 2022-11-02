#include "main.h"

/**
 * _puts_recursion - Function
 * @s: parameter
 * Return: value
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
