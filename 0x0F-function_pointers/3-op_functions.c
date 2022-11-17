#include "3-calc.h"

/**
 * op_add - Function
 * @a: parameter
 * @b: parameter
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function
 * @a: parameter
 * @b: parameter
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function
 * @a: parameter
 * @b: parameter
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function
 * @a: parameter
 * @b: parameter
 * Return: a/b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}

/**
 * op_mod - Function
 * @a: parameter
 * @b: parameter
 * Return: Value
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
