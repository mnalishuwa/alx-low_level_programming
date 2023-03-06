#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals in a square matrix
 * Description - takes in a square matrix and prints out the integer sums of
 * the diagonals
 *
 * @a: int array
 * @size: number of items per row of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row, maj_sum, min_sum;

	maj_sum = min_sum = 0;

	for (row = 0; row < size; row++)
	{
		maj_sum += *(a + (row * size) + row);
		min_sum += *(a + ((size - row - 1) * size) + row);
		/* maj_sum += a[row][row]; */
		/* min_sum += a[size - row - 1][row]; */
	}

	printf("%d, %d\n", maj_sum, min_sum);
}
