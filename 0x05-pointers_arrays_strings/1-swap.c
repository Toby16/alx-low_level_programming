#include "main.h"

/**
 * swap_int - function
 * @a: parameter
 * @b: parameter
 * Return: Value
 */

void swap_int(int *a, int *b)
{
	int **x = &a;
	int **y = &b;
	int contain1 = **x;
	int contain2 = **y;

	**x = contain2;
	**y = contain1;
}
