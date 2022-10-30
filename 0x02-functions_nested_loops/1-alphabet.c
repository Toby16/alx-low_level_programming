#include "main.h"

/**
 * print_alphabet - function to be included in the main()
 * Return: Always 0
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	_putchar('\n');
}
