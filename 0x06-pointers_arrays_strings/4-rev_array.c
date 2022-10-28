#include "main.h"

/**
 * reverse_array - Function
 * @a: Parameter
 * @n: Parameter
 * Return: Value
 */

void reverse_array(int *a, int n)
{
	int i, j, val;

	for (i = 0; i < n - 1; i += 1)
	{
		for (j = i + 1; j > 0; j -= 1)
		{
			val = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = val;
		}
	}
}
