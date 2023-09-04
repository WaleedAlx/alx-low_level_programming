#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Function to frees array
 * @grid: The grid
 * @height: The height of grif
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
