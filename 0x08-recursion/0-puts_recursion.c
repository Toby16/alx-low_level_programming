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
		return;
	}
	if ((s[0] <= 122 && s[0] >= 97) || (s[0] <= 90 && s[0] >= 65))
	{
		_putchar(s[0]);
	}
	_puts_recursion(s + 1);
	_putchar('\n');
}
