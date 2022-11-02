#include "main.h"

/**
 * _puts_recursion - Function
 * @s: parameter
 * Return: value
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	if (s[0] <= 126 && s[0] >= 0)
	{
		_putchar(s[0]);
	}
	_puts_recursion(s + 1);
}
