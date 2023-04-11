#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the previously allocated memory
 *
 * @grid: parameter
 * @height: parameter
 * Return: returns void
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
