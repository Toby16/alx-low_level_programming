#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	char val = 'z';

	for (; val >= 'a; val--)
	{
		putchar(val);
	}
	putchar('\n');

	return (0);
}
