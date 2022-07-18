#include "main.h"

/**
 * free_grid - frees memory allocated by alloc_grid
 * @grid: input grid
 * @height: number of rows in grid
 * Result: void
 */

void free_grid(int **grid, int height)
{
	int index = 0;

	while (index < height)
	{
		free(grid[index]);
		index = index + 1;
	}
	free(grid);
}
