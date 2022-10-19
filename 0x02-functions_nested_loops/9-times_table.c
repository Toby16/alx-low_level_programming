#include "main.h"

/**
 * times_table - main
 * Return: value
 */

void times_table(void)
{
	int num, mutiply, value;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			value = num * multiply;

			if (value <= 9)
			{
				putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		putchar('\n');
	}
}
