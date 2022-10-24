#include "main.h"

/**
 * reset_to_98 - function
 * @n: parameter
 * Return: void
 */

void reset_to_98(int *n)
{
	int **p = &n;

	**p = 98;
}
