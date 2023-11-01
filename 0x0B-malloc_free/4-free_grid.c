#include "main.h"

/**
 * free_grid - function free the 2D array created
 * @grid: function parameter 1
 * @height: function parameter 2
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
