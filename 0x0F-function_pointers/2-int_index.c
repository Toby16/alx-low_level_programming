#include "function_pointers.h"

/**
 * int_index - Function
 * @array: parameter
 * @size: parameter
 * @cmp: parameter
 * Return: Value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
