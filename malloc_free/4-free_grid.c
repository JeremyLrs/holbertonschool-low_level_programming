#include "main.h"

/**
 * free_grid - function that frees
 * a 2 dimensional grid previously created
 * by your alloc_grid function.
 *
 * @grid: aaa
 * @height: qqq
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
