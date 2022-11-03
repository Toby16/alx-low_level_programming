#include "main.h"

/**
 * _print_rev_recursion - Function
 * @s: parameter
 * Return: value
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(s[0]);
	}
}
