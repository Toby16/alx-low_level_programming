#include "main.h"

/**
 * _abs - Entry
 * @n: parameter for _abs
 * Return: True_val or N
 */

int _abs(int n)
{
	int true_val;

	if (n < 0)
	{
		true_val = (n) * (-1);
		return (true_val);
	}
	else
	{
		return (n);
	}
}
