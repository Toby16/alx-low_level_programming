#include "main.h"

/**
 * array_range - Function
 * @min: prameter
 * @max: parameter
 * Return: value
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max; i++)
	{
		ptr[i] = min;
		min += 1;
	}
	return (ptr);
}
