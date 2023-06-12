#include <stdlib.h>
#include "main.h"

/**
 * free_grid - used to free memory allocated by alloc_grid
 * @grid: memory space to de freed
 * @height: rows of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
