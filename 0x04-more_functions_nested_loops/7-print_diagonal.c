#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function
 * @n: integer parameter
 * Return: Value
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num_1, num_2;

		for (num_1 = 0; num_1 < n; num_1++)
		{
			for (num_2 = 0; num_2 < n; num_2++)
			{
				if (num_2 == num_1)
				{
					_putchar('\\');
				}
				else if (num_1 > num_2)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
