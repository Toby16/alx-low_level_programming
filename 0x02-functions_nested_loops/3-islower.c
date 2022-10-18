#include "main.h"

/**
 * _islower - entry to main function
 * @c: parameter for _islower
 * test_islower - function1
 * Return: 1 if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * test_islower - function1
 * @n: parameter1
 * Return: Always 0
 */
void test_islower(int n)
{
	int r;

	r = _islower(n);

	putchar(r + '0');
	putchar('\n');
}
