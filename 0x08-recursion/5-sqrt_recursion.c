#include "main.h"

/**
 * _sqrt_recursion - Function
 * @n: parameter1
 * Return: Value
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, x));
}

/**
 * find_sqrt - function
 * @num: parameter
 * @x: parameter
 * Return: Value
 */

int find_sqrt(int num, int x)
{
	if ((x * x) == num)
	{
		return (x);
	}

	if (x == num / 2)
	{
		return (-1);
	}

	return (find_sqrt(num, x + 1));
}
