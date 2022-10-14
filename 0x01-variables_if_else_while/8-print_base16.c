#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int int_val = 0;
	char char_val = 'a';

	for (; int_val < 10; int_val++)
	{
		putchar((int_val % 10) + '0');
	}
	for (; char_val <= 'f'; char_val++)
	{
		putchar(char_val);
	}

	return (0);
}
