#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D grid of integers
 * initialized with zero
 * @width: Width of grid
 * @height: Height of grid
 *
 * Return: A pointer to the 2D grid of integers, NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row, i;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = (int *)malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			for (i = 0; i < row; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		memset(grid[row], 0, width * sizeof(int));
	}

	return (grid);
}

