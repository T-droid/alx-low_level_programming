#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates memory for a 2D array
 * @width: size of rows
 * @height: size of columns
 * Return: the pointer allocated memory
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr == NULL)
			return (NULL);
	}

	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
