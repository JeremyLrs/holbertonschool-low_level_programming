#include "main.h"

/**
 * **alloc_grid - function that returns
 * a pointer to a 2 dimensional array of integers
 *
 * @width: aaa
 * @height: bbb
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
