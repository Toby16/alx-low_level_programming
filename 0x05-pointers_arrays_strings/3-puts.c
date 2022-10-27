#include "main.h"
/**
 * _puts - function
 * @str: parameter
 * Return: value
 */

void _puts(char *str)
{
	int i;

	for (; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
