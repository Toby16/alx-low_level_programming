#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int num_value = 0;

	for (; num_value <= 9; num_value++)
	{
		putchar((num_value % 10) + '0');
		if (num == 9)
		{
			continue;
		}
		putchar(', ');
	}

	return (0);
}
