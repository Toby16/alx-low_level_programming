#include "search_algos.h"

/**
 * linear_search - Function to perform linear search algorithm
 *                 on a array of integers
 * @array: argument of type 'int *'
 *       : pointer to the first element of the array to search in
 * @size: argument of type 'size_t'
 *	: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 *      if value is not present in array or if array is NULL
 *      the function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
