#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function
 * Return: value
 */

void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
