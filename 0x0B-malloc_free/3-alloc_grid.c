#include "main.h"
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a two dimensional array
 * @width: the width of the array
 * @height:the height of the array
 *
 * Return: returns a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
