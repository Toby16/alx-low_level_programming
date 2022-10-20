#include "main.h"
#include <stdio.h>

/**
 * largest_number - Entry
 * @a: int variable a
 * @b: int variable b
 * @c: int variable c
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b) && (a > c))
	{
		largest = a;
	}
	else if ((b > a) && (b > c))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
