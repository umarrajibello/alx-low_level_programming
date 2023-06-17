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
	{
		return (NULL);
	}
	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);

}
