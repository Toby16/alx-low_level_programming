#include "main.h"

/**
 * alloc_grid - Function
 * @width: parameter
 * @height: parameter
 * Return: value
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int *) * width);
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
