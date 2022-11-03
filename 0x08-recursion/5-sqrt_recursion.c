#include "main.h"

/**
 * _sqrt_recursion - Function
 * @n: parameter1
 * Return: Value
 */

int _sqrt_recursion(int n)
{
	return (sqrt_wrapper(n, 1, n));
}

/**
 * sqrt_wrapper - Function
 * @n: parameter 1
 * @min: parameter 2
 * @max: parameter 3
 * Return: value
 */

int sqrt_wrapper(int n, int min, int max)
{
	int guess, guess_squared;

	if (max < min)
	{
		return (-1);
	}

	guess = (min + max) / 2;
	guess_squared = guess * guess;

	if (guess_squared == n)
	{
		return (guess);
	}
	else if (guess_squared < n)
	{
		return (sqrt_wrapper(n, guess + 1, max));
	}
	else
	{
		return (sqrt_wrapper(n, min, guess - 1));
	}
}
