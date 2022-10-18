#include "main.h"

/**
 * test_islower - entry to main function
 * @c: parameter for _islower
 * Return: 1 if character is lowercase, 0 otherwise
 */

int test_islower(int c)
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
