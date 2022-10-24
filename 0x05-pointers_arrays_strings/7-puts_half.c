#include "main.h"

/**
 * puts_half - function
 * @str: parameter
 * Return: Value
 */

void puts_half(char *str)
{
	int x, y;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	y = (x + 1) / 2;

	for (x = y; str[x]; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
