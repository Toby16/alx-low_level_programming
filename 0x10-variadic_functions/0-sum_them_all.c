#include "variadic_functions.h"

/**
 * sum_them_all - Function
 * @n: parameter
 * Return: x (sum of values)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int x;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		x = 0;

		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			x += va_arg(list, int);
		}
	}
	va_end(list);
	return (x);
}
