#include "main.h"

/**
 * print_diagsums - Function
 * @a: parameter
 * @size: parameter
 */

void print_diagsums(int *a, int size)
{
	int i, j, x;

	i = 0;
	j = 0;

	for (x = 0; x < size; x++)
	{
		i += a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		j += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", i, j);
}
