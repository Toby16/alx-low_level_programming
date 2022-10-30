#include "main.h"

/**
 * _abs - Entry
 * @n: parameter for _abs
 * Return: True_val or N
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (0);
	}
}
