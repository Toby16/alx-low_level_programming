#include "main.h"

/**
 * _islower - entry to main function
 * @c: parameter for _islower
 * test_islower - function1
 * Return: 1 if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
