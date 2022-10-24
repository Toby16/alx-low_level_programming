#include "main.h"
/**
 * _puts - function
 * @str: parameter
 * Return: value
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
