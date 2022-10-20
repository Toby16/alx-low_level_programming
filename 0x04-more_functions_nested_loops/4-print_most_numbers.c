#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function
 * Return: value
 */

void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; ++i)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		putchar(i + '0');
	}
	putchar('\n');
}
