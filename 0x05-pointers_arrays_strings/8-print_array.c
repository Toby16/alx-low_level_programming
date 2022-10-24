#include "main.h"

/**
 * print_array - function
 * @a: parameter
 * @n: parameter
 * Return: Value
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
