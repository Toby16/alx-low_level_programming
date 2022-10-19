#include "main.h"

/**
 * print_to_98 - Entry
 * @n: parameter
 * Return: 0
 */

void print_to_98(int n)
{
	int val = 98;

	if (n <= val)
	{
		while (n <= val)
		{
			printf("%d", n);


			if (n == val)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			n++;
		}
	}
	else if (n >= val)
	{
		while (n >= val)
		{
			printf("%d", n);

			if (n == val)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			n--;
		}
	}
	putchar('\n');
}
