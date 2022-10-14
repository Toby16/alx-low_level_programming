#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int int_val = 0;
	char char_val = 'a';

	for (; int_val < 10; int_var++)
	{
		putchar((int_var % 10) + '0');
	}
	for (; char_val <= 'f'; char_var++)
	{
		putchar(char_var);
	}
	putchar('\n');

	return (0);
}
