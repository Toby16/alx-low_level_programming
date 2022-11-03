#include "main.h"
int is_prime_number(int n);
int is_prime(unsigned int n, unsigned int c);
/**
 * is_prime_number - Function
 * @n: parameter
 * Return: value
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, 2));
	}
}

/**
 * is_prime - Function
 * @n: parameter
 * @c: parameter
 * Return: value
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0 + is_prime(n, c + 1));
	}
}
