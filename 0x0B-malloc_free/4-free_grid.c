#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees memory alllocated by malloc
 * @grid: array
 * @height: column size
 * Return: pointer to the array
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
