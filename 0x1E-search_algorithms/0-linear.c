#include "search_algos.h"

/**
 * linear_search - search for an item in an array buy checking each element
 * Description: searches for a value in an array of integers using the
 * Linear search algorithm
 *
 * @array: pointer to integer array
 * @size: +ve int, maximum number of items that can be stored in array
 * @value: integer value to search for within array
 *
 * Return: index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	/* check if array is null */
	if (!array)
		return (-1);
	/* loop and compare value to array[idx] */
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
