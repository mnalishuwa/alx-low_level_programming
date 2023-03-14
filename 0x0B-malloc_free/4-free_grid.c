#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory of a pointer to a 2D array
 * Description: receives a pointerto a 2D array of integers and the number of
 * rows, it frees the memory allocated for the pointer to the 2D array.
 *
 * @grid: pointer to a 2D integer array
 * @height: int, number of rows of the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	height--;
	for (; height >= 0; height--) /* start from last row and free all rows */
		free(grid[height]);
	free(grid);
}
