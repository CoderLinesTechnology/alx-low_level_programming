#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created
 * @grid: Pointer to the 2D grid
 * @height: Height of the grid
 *
 * Description: Frees the memory allocated for the 2D grid.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;

	for (int row = 0; row < height; row++)
		free(grid[row]);

	free(grid);
}

