#include "main.h"

/**
 * print_alphabet_x10 - function to be used in main
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int num = 1;

	while (num <= 10)
	{
		char letter = 'a';
		for (; letter <= 'z'; letter ++)
		{
			_putchar(letter);
		}
		num++;
		_putchar('\n');
	}
}
