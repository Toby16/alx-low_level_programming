#include "main.h"
/**
 * _puts - function
 * @str: parameter
 * Return: value
 */

void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
