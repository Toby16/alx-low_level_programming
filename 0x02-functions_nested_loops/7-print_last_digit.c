#include "main.h"

/**
 * print_last_digit - main
 * @n: parameter
 * Return: last value of n
 */

int print_last_digit(int n)
{
	int read;

	if (n < 0)
	{
		n *= (-1);
		read = n % 10;
	}
	else
	{
		read = n % 10;
	}
	putchar (read + '0');

	return (read);
}
