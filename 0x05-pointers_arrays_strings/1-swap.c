#include "main.h"

/**
 * swap_int - function
 * @a: parameter
 * @b: parameter
 * Return: Value
 */

void swap_int(int *a, int *b)
{
	int cont;

	cont = *a;
	*a = *b;
	*b =  cont;
}
