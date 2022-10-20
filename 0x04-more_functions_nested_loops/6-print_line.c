#include "main.h"
#include <stdio.h>

/**
 * print_line - function
 * @n: integer parameter
 * Return: value
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		for (; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
