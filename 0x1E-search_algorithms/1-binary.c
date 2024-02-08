#include "search_algos.h"

/**
 * binary_search - search for an item in an array buy halving search space
 * Description: searches for a value in an array of integers using the
 * Binary search algorithm
 *
 * @array: pointer to integer array
 * @size: +ve int, maximum number of items that can be stored in array
 * @value: integer value to search for within array
 *
 * Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high, idx, low, mid;

	/* check if array is not null */
	if (!array)
		return (-1);

	/* iterative binary search */
	for (low = 0, high = size - 1, mid = (high + low) / 2;
	     low <= high; mid = (high + low) / 2)
	{
		printf("Searching in array: ");
		for (idx = low; idx <= high; idx++)
			(idx == high) ? printf("%d\n", array[idx]) : printf("%d, ", array[idx]);
		/* Start with the mid, reduce space by half each iteration */
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
