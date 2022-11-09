#include "main.h"

/**
 * free_grid - Function
 * @grid: parameter
 * @height: parameter
 * Return: value
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
