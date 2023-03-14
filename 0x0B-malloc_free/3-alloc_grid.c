#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D integer array
 * Description: creates a 2D integer array and returns a pointer to the
 * array.
 *
 * @width: int, number of columns in the array
 * @height: int, number of rows in the array
 *
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **grid_2d;
	int row, col;

	/* Allocate memory to hold the desired array */
	grid_2d = malloc(height * sizeof(int *));

	/* check if w, h negative or equal to zero or if malloc failed */
	if (width <= 0 || height <= 0 || grid_2d == NULL)
	{
		free(grid_2d);
		return (NULL);
	}

	/* initialize array */
	for (row = 0; row < height; row++)
	{
		grid_2d[row] = malloc(width * sizeof(int));
		if (grid_2d[row] == NULL)
			return (NULL);
		for (col = 0; col < width; col++)
		{
			grid_2d[row][col] = 0;
		}
	}

	return (grid_2d);
}
