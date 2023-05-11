#include "search_algos.h"

/**
 * binary_search - Function to perform binary search
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

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle, i;

	left = 0;
	right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d", array[i]);
		printf("\n");
		middle = (left + right) / 2;

		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
