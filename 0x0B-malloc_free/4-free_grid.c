#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously created 
 * by your previous alloc_grid function
 * @grid: 2 dimensional  grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int u;

	for (u = 0;  < height; u++)
	{
		free(grid[u]);
	}
	free(grid);
}
