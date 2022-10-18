#include "main.h"

/**
 * _islower - entry to main function
 * @c: parameter for _islower
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
