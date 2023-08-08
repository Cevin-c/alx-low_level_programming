#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 *@grid: rows of matrix
 *@height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
	int f;
	int *p;

	for (f = 0; f < height; f++)
	{
		p = grid[f];
		free(p);
	}
	free(grid);
}
