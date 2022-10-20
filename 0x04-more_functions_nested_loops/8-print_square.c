#include "main.h"
#include <stdio.h>

/**
 * print_square - function
 * @size: int parameter
 * return: value
 */

void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
