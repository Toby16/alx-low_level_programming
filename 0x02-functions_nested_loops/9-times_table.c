#include "main.h"

/**
 * times_table - main
 * Return: value
 */

void times_table(void)
{
	int num, multiply, value;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (multiply = 1; multiply <= 9; multiply++)
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
				_putchar((value / 10) + '0');
			}
			_putchar((value % 10) + '0');
		}
		putchar('\n');
	}
}
